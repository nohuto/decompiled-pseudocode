/*
 * XREFs of ?GetRenderCore@DXGADAPTER@@QEBAPEAVADAPTER_RENDER@@XZ @ 0x1C0010DB0
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00DF6E8 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

struct ADAPTER_RENDER *__fastcall DXGADAPTER::GetRenderCore(DXGADAPTER *this)
{
  return (struct ADAPTER_RENDER *)*((_QWORD *)this + 248);
}
