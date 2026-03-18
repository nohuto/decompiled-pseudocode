/*
 * XREFs of ?GetExecutionState@DXGDEVICE@@QEBA?BW4DXGDEVICEEXECUTION_STATE@@XZ @ 0x1C0012514
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00EA248 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGDEVICE::GetExecutionState(__int64 a1)
{
  return *(unsigned int *)(a1 + 352);
}
