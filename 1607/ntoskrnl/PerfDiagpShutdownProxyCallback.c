/*
 * XREFs of PerfDiagpShutdownProxyCallback @ 0x1405349A0
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x1404F0F68 (PerfDiagpRequestState.c)
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
