/*
 * XREFs of _atoi64 @ 0x180095F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __cdecl atoi64(const char *String)
{
  if ( String )
    return strtoi64(String, 0LL, 10);
  else
    return 0LL;
}
