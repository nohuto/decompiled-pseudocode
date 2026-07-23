/*
 * XREFs of PerfDiagpBootSystemProxyCallback @ 0x1405818C0
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x1404D305C (PerfDiagpRequestState.c)
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
