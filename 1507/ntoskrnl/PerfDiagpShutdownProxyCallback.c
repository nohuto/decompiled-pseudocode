/*
 * XREFs of PerfDiagpShutdownProxyCallback @ 0x140569CF4
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x14055CC7C (PerfDiagpRequestState.c)
 */

void __fastcall PerfDiagpShutdownProxyCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode )
  {
    if ( Level == 85 )
      PerfDiagpRequestState(7);
  }
}
