/*
 * XREFs of atoi @ 0x140143B80
 * Callers:
 *     KiInitializeBootStructures @ 0x1403A770C (KiInitializeBootStructures.c)
 * Callees:
 *     strtolX @ 0x140146434 (strtolX.c)
 */

int __cdecl atoi(const char *Str)
{
  int result; // eax

  result = 0;
  if ( Str )
    return strtolX((char *)Str, 0LL, 10, 1);
  return result;
}
