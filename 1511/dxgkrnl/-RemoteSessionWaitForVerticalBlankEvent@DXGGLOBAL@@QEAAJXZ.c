/*
 * XREFs of ?RemoteSessionWaitForVerticalBlankEvent@DXGGLOBAL@@QEAAJXZ @ 0x1C001B588
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00EA248 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGGLOBAL::RemoteSessionWaitForVerticalBlankEvent(DXGGLOBAL *this)
{
  return REMOTE_VSYNC::WaitForVSync((DXGGLOBAL *)((char *)this + 728));
}
