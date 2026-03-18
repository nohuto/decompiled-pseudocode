/*
 * XREFs of _anonymous_namespace_::IsFullscreenRect @ 0x14025EB14
 * Callers:
 *     ?xxxTransformRectToMonitor@AdvancedWindowPos@@YA?AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CMonitorTopology@@2_N@Z @ 0x1402EC9BC (-xxxTransformRectToMonitor@AdvancedWindowPos@@YA-AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CM.c)
 * Callees:
 *     <none>
 */

bool __fastcall anonymous_namespace_::IsFullscreenRect(_DWORD *a1, _DWORD *a2)
{
  return *a1 <= *a2 && a1[1] <= a2[1] && a1[2] >= a2[2] && a1[3] >= a2[3];
}
