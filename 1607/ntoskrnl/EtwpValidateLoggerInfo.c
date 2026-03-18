/*
 * XREFs of EtwpValidateLoggerInfo @ 0x14048DF08
 * Callers:
 *     NtTraceControl @ 0x14040DD40 (NtTraceControl.c)
 *     EtwpQueryTrace @ 0x14048DD54 (EtwpQueryTrace.c)
 *     EtwpStopTrace @ 0x140493C50 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x140494D88 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x14053F1B8 (EtwpUpdateTrace.c)
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
