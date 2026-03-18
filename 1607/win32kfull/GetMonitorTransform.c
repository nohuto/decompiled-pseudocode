/*
 * XREFs of GetMonitorTransform @ 0x1C01DC094
 * Callers:
 *     GetNewMonitor @ 0x1C0070AA8 (GetNewMonitor.c)
 *     DetermineInputTargetPrecedenceTransform @ 0x1C00DC684 (DetermineInputTargetPrecedenceTransform.c)
 *     DetectNewMonitor @ 0x1C01DB9AC (DetectNewMonitor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMonitorTransform(__int64 a1, __int64 a2)
{
  int v2; // eax

  if ( !a1 )
    return 0LL;
  v2 = *(_DWORD *)(a2 + 352) & 0xF;
  if ( v2 == 2 )
    return 0LL;
  if ( v2 == 1 )
    return *(_QWORD *)(a1 + 568);
  return *(_QWORD *)(a1 + 560);
}
