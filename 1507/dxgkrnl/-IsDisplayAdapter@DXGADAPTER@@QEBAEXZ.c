/*
 * XREFs of ?IsDisplayAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00024B4
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00DF6E8 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsDisplayAdapter(DXGADAPTER *this)
{
  return *((_QWORD *)this + 247) != 0LL;
}
