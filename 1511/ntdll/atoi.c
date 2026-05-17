/*
 * XREFs of atoi @ 0x180095F40
 * Callers:
 *     <none>
 * Callees:
 *     strtolX @ 0x18009AAD0 (strtolX.c)
 */

int __cdecl atoi(const char *String)
{
  int result; // eax

  result = 0;
  if ( String )
    return strtolX(String, 0LL, 10LL, 1LL);
  return result;
}
