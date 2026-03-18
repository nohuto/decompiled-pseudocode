/*
 * XREFs of ?IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00031E8
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00EA248 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsDisplayOnlyAdapter(DXGADAPTER *this)
{
  return *((_QWORD *)this + 249) == 0LL;
}
