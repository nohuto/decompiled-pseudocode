/*
 * XREFs of ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKXZ @ 0x1C0012560
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00EA248 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::NumberOfVSyncWaiter(DXGADAPTER *this)
{
  return *((unsigned int *)this + 504);
}
