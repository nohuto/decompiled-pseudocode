/*
 * XREFs of PerfDiagpBootSystemProxyCallback @ 0x140581414
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x1404F0F68 (PerfDiagpRequestState.c)
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
