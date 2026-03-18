/*
 * XREFs of ?GetVidSchGlobal@ADAPTER_RENDER@@QEBAPEAU_VIDSCH_GLOBAL@@XZ @ 0x1C0012548
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00EA248 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

struct _VIDSCH_GLOBAL *__fastcall ADAPTER_RENDER::GetVidSchGlobal(ADAPTER_RENDER *this)
{
  return (struct _VIDSCH_GLOBAL *)*((_QWORD *)this + 51);
}
