/*
 * XREFs of EtwpValidateLoggerInfo @ 0x14040EE8C
 * Callers:
 *     EtwpStopTrace @ 0x14040EAB0 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x14040ECC0 (EtwpQueryTrace.c)
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 *     EtwpFlushTrace @ 0x14054D090 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x1405C48A0 (EtwpUpdateTrace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpValidateLoggerInfo(_DWORD *a1)
{
  if ( !a1 )
    return 3221225485LL;
  if ( *a1 < 0xB0u )
    return 3221225990LL;
  return (a1[11] & 0x20000) == 0 ? 0xC000000D : 0;
}
