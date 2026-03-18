/*
 * XREFs of _atoi64 @ 0x140171BEC
 * Callers:
 *     KiMatchLoadOption @ 0x1403FAEBC (KiMatchLoadOption.c)
 *     RamdiskStart @ 0x1407FD3A8 (RamdiskStart.c)
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
