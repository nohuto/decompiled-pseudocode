/*
 * XREFs of ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C012FDA0
 * Callers:
 *     ?RemoteSessionWaitForVerticalBlankEvent@DXGGLOBAL@@QEAAJXZ @ 0x1C001B588 (-RemoteSessionWaitForVerticalBlankEvent@DXGGLOBAL@@QEAAJXZ.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00B6230 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 * Callees:
 *     ?EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ @ 0x1C012C480 (-EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ.c)
 *     ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x1C015DDDC (-EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ.c)
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
