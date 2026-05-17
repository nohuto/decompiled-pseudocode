/*
 * XREFs of atoi @ 0x180097350
 * Callers:
 *     <none>
 * Callees:
 *     strtolX @ 0x18009BE70 (strtolX.c)
 */

int __cdecl atoi(const char *String)
{
  int result; // eax

  result = 0;
  if ( String )
    return strtolX(String, 0LL, 10LL, 1LL);
  return result;
}
