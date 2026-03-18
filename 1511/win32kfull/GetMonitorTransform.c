/*
 * XREFs of GetMonitorTransform @ 0x1C01E57AC
 * Callers:
 *     GetNewMonitor @ 0x1C006DEC0 (GetNewMonitor.c)
 *     DetermineInputTargetPrecedenceTransform @ 0x1C010205C (DetermineInputTargetPrecedenceTransform.c)
 *     DetectNewMonitor @ 0x1C01E5118 (DetectNewMonitor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMonitorTransform(__int64 a1, __int64 a2)
{
  int v2; // eax

  if ( !a1 )
    return 0LL;
  v2 = *(_DWORD *)(a2 + 344);
  if ( v2 == 2 )
    return 0LL;
  if ( v2 == 1 )
    return *(_QWORD *)(a1 + 568);
  return *(_QWORD *)(a1 + 560);
}
