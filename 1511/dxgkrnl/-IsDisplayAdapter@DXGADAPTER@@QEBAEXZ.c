/*
 * XREFs of ?IsDisplayAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0003178
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00EA248 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsDisplayAdapter(DXGADAPTER *this)
{
  return *((_QWORD *)this + 248) != 0LL;
}
