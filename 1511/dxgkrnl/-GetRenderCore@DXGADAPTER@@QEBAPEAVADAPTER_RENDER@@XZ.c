/*
 * XREFs of ?GetRenderCore@DXGADAPTER@@QEBAPEAVADAPTER_RENDER@@XZ @ 0x1C0012530
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00EA248 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

struct ADAPTER_RENDER *__fastcall DXGADAPTER::GetRenderCore(DXGADAPTER *this)
{
  return (struct ADAPTER_RENDER *)*((_QWORD *)this + 249);
}
