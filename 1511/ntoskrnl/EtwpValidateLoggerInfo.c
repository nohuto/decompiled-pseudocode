/*
 * XREFs of EtwpValidateLoggerInfo @ 0x1404CC16C
 * Callers:
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 *     EtwpFlushTrace @ 0x1404B5FCC (EtwpFlushTrace.c)
 *     EtwpStopTrace @ 0x1404CA4D8 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1404CBFCC (EtwpQueryTrace.c)
 *     EtwpUpdateTrace @ 0x140545148 (EtwpUpdateTrace.c)
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
