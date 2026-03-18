/*
 * XREFs of ?GetDisplayCore@DXGADAPTER@@QEBAPEAVADAPTER_DISPLAY@@XZ @ 0x1C001250C
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00EA248 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

struct ADAPTER_DISPLAY *__fastcall DXGADAPTER::GetDisplayCore(DXGADAPTER *this)
{
  return (struct ADAPTER_DISPLAY *)*((_QWORD *)this + 248);
}
