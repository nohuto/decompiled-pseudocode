/*
 * XREFs of PerfDiagpBootSystemProxyCallback @ 0x1405C7220
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x14055CC7C (PerfDiagpRequestState.c)
 */

void __fastcall PerfDiagpBootSystemProxyCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  int v4; // ecx

  if ( ControlCode )
  {
    if ( Level != 85 )
      return;
    v4 = 1;
  }
  else
  {
    v4 = 2;
  }
  PerfDiagpRequestState(v4);
}
