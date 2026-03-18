/*
 * XREFs of UsbhSshDisabled @ 0x1C0056334
 * Callers:
 *     UsbhSshEnableDisable @ 0x1C0009F68 (UsbhSshEnableDisable.c)
 *     UsbhAsyncStop @ 0x1C004ABBC (UsbhAsyncStop.c)
 *     UsbhFdoPnp_RemoveDevice @ 0x1C004B320 (UsbhFdoPnp_RemoveDevice.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004BC00 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000C010 (UsbhDecHubBusy.c)
 *     UsbhDisableTimerObject @ 0x1C000E0A0 (UsbhDisableTimerObject.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhIncHubBusy @ 0x1C0014020 (UsbhIncHubBusy.c)
 */

LONG __fastcall UsbhSshDisabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rsi
  _QWORD *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r10d
  __int64 v11; // rdx
  __int64 v12; // r9

  v6 = FdoExt(a1, a2, a3, a4);
  v7 = (_QWORD *)UsbhIncHubBusy(a1, a2, a1, 1766093683LL, 1);
  KeWaitForSingleObject(v6 + 790, Executive, 0, 0, 0LL);
  Log(
    a1,
    0x10000,
    1397244971,
    _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 412, (signed __int64)v7, 0LL),
    (__int64)v7);
  if ( v9 )
  {
    Log(a1, v10, 1396978221, v9, (__int64)v7);
    UsbhDecHubBusy(a1, v11, v7, v12);
  }
  UsbhDisableTimerObject(a1, (__int64)(v6 + 800), v8, v9);
  return KeReleaseSemaphore((PRKSEMAPHORE)(v6 + 790), 16, 1, 0);
}
