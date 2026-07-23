/*
 * XREFs of atoi @ 0x14014D518
 * Callers:
 *     KiInitializeBootStructures @ 0x1403D4E7C (KiInitializeBootStructures.c)
 * Callees:
 *     strtolX @ 0x14014FDD0 (strtolX.c)
 */

int __cdecl atoi(const char *Str)
{
  int result; // eax

  result = 0;
  if ( Str )
    return strtolX(Str, 0LL, 10LL, 1LL);
  return result;
}
