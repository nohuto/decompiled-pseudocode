/*
 * XREFs of _atoi64 @ 0x140143B6C
 * Callers:
 *     KiMatchLoadOption @ 0x1403AA824 (KiMatchLoadOption.c)
 *     RamdiskStart @ 0x1407871F0 (RamdiskStart.c)
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
