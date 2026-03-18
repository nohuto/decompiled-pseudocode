/*
 * XREFs of ?GetPowerTransitionState@DXGADAPTER@@QEBA?AW4_DXGADAPTERPOWERSTATE@@XZ @ 0x1C0012520
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00EA248 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::GetPowerTransitionState(__int64 a1)
{
  return *(unsigned int *)(a1 + 120);
}
