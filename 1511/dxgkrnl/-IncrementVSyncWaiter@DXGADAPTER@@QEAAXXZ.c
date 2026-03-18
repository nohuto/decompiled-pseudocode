/*
 * XREFs of ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0012558
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00EA248 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::IncrementVSyncWaiter(DXGADAPTER *this)
{
  _InterlockedIncrement((volatile signed __int32 *)this + 504);
}
