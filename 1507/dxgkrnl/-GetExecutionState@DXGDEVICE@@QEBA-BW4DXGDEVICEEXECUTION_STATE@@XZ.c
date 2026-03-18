/*
 * XREFs of ?GetExecutionState@DXGDEVICE@@QEBA?BW4DXGDEVICEEXECUTION_STATE@@XZ @ 0x1C0010D94
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00DF6E8 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGDEVICE::GetExecutionState(__int64 a1)
{
  return *(unsigned int *)(a1 + 352);
}
