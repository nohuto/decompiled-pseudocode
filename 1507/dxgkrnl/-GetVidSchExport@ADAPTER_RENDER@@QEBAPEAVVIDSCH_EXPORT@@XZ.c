/*
 * XREFs of ?GetVidSchExport@ADAPTER_RENDER@@QEBAPEAVVIDSCH_EXPORT@@XZ @ 0x1C0010DC0
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00DF6E8 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

struct VIDSCH_EXPORT *__fastcall ADAPTER_RENDER::GetVidSchExport(ADAPTER_RENDER *this)
{
  return (struct VIDSCH_EXPORT *)*((_QWORD *)this + 47);
}
