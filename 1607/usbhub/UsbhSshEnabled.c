/*
 * XREFs of UsbhSshEnabled @ 0x1C001EB00
 * Callers:
 *     UsbhSshEnableDisable @ 0x1C001E600 (UsbhSshEnableDisable.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C004C110 (Usbh_FDO_WaitPnpRestart.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000D2D0 (UsbhDecHubBusy.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhEnableTimerObject @ 0x1C001C9F0 (UsbhEnableTimerObject.c)
 */

LONG __fastcall UsbhSshEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r9

  v6 = FdoExt(a1, a2, a3, a4);
  KeWaitForSingleObject(v6 + 790, Executive, 0, 0, 0LL);
  v7 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v6 + 412, 0LL);
  Log(a1, 0x10000, 1397244973, 0LL, (__int64)v7);
  UsbhDecHubBusy(a1, v8, v7, v9);
  UsbhEnableTimerObject(*(_QWORD *)(a2 + 8), (__int64)(v6 + 800), 2000LL, 0LL, a2, 0x77485353u);
  return KeReleaseSemaphore((PRKSEMAPHORE)(v6 + 790), 16, 1, 0);
}
