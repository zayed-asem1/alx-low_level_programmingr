#include "main.h"
/**
  * print_alphabet_x10 - Prints the alphabet in lowercase 10 times, by new line
 */
void print_alphabet_x10(void)
{
char letter;
int i;
i = 0;
while (i < 10)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n'); /* Print newline after each line of alphabet */
i++;
}
}
