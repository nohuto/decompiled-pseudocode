/*
 * XREFs of ?IsRenderAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000316C
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00EA248 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsRenderAdapter(DXGADAPTER *this)
{
  return *((_QWORD *)this + 249) != 0LL;
}
