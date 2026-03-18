/*
 * XREFs of atoi @ 0x140171C00
 * Callers:
 *     KiInitializeBootStructures @ 0x1403F77B0 (KiInitializeBootStructures.c)
 * Callees:
 *     strtolX @ 0x140174464 (strtolX.c)
 */

int __cdecl atoi(const char *Str)
{
  int result; // eax

  result = 0;
  if ( Str )
    return strtolX((char *)Str, 0LL, 10, 1);
  return result;
}
