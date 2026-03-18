/*
 * XREFs of ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C00CEC9C
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0085380 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00CB920 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 * Callees:
 *     ?EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ @ 0x1C00CEC04 (-EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ.c)
 *     ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x1C00CF204 (-EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ.c)
 */

NTSTATUS __fastcall REMOTE_VSYNC::WaitForVSync(struct _KTHREAD **this)
{
  NTSTATUS result; // eax
  union _LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  result = REMOTE_VSYNC::EnsureEmulationRunning(this);
  if ( result >= 0 )
  {
    BLTQUEUE::EnableVSyncEventSignaling(*this);
    Timeout.QuadPart = -5000000LL;
    return KeWaitForSingleObject(this + 1, UserRequest, 0, 0, &Timeout);
  }
  return result;
}
