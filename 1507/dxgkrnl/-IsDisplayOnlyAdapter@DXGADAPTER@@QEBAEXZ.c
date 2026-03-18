/*
 * XREFs of ?IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0001FA4
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00DF6E8 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsDisplayOnlyAdapter(DXGADAPTER *this)
{
  return *((_QWORD *)this + 248) == 0LL;
}
