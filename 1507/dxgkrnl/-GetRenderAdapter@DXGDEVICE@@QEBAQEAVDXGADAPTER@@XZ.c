/*
 * XREFs of ?GetRenderAdapter@DXGDEVICE@@QEBAQEAVDXGADAPTER@@XZ @ 0x1C0010DA4
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00DF6E8 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

struct DXGADAPTER *__fastcall DXGDEVICE::GetRenderAdapter(DXGDEVICE *this)
{
  return *(struct DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
}
