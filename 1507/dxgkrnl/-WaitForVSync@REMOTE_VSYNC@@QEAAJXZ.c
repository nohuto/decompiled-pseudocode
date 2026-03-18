/*
 * XREFs of ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C0129708
 * Callers:
 *     ?RemoteSessionWaitForVerticalBlankEvent@DXGGLOBAL@@QEAAJXZ @ 0x1C001A584 (-RemoteSessionWaitForVerticalBlankEvent@DXGGLOBAL@@QEAAJXZ.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00A4450 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 * Callees:
 *     ?EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ @ 0x1C01262A0 (-EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ.c)
 *     ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x1C0159ABC (-EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ.c)
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
