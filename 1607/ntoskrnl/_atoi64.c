/*
 * XREFs of _atoi64 @ 0x14014D504
 * Callers:
 *     KiMatchLoadOption @ 0x1403D688C (KiMatchLoadOption.c)
 *     RamdiskStart @ 0x1407D3390 (RamdiskStart.c)
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
