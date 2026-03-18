/*
 * XREFs of ?IsRenderAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00024A8
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00DF6E8 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsRenderAdapter(DXGADAPTER *this)
{
  return *((_QWORD *)this + 248) != 0LL;
}
