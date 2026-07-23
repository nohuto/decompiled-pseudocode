/*
 * XREFs of PerfDiagpShutdownProxyCallback @ 0x140534EE0
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x1404D305C (PerfDiagpRequestState.c)
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
