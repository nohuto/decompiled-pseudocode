/*
 * XREFs of ?GetNumVidPnSources@ADAPTER_DISPLAY@@QEBAIXZ @ 0x1C001251C
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00EA248 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_DISPLAY::GetNumVidPnSources(ADAPTER_DISPLAY *this)
{
  return *((unsigned int *)this + 26);
}
