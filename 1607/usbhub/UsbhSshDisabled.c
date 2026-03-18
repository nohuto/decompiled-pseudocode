/*
 * XREFs of UsbhSshDisabled @ 0x1C0056964
 * Callers:
 *     UsbhSshEnableDisable @ 0x1C001E600 (UsbhSshEnableDisable.c)
 *     UsbhAsyncStop @ 0x1C004B25C (UsbhAsyncStop.c)
 *     UsbhFdoPnp_RemoveDevice @ 0x1C004B9C0 (UsbhFdoPnp_RemoveDevice.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004C2A0 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000D2D0 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000E3A0 (UsbhIncHubBusy.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhDisableTimerObject @ 0x1C001C6C0 (UsbhDisableTimerObject.c)
 */

LONG __fastcall UsbhSshDisabled(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rsi
  _QWORD *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r10d
  __int64 v11; // rdx
  __int64 v12; // r9

  v6 = FdoExt((__int64)a1, a2, a3, a4);
  v7 = (_QWORD *)UsbhIncHubBusy(a1, a2, (__int64)a1, 1766093683LL, 1);
  KeWaitForSingleObject(v6 + 790, Executive, 0, 0, 0LL);
  Log(
    (__int64)a1,
    0x10000,
    1397244971,
    _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 412, (signed __int64)v7, 0LL),
    (__int64)v7);
  if ( v9 )
  {
    Log((__int64)a1, v10, 1396978221, v9, (__int64)v7);
    UsbhDecHubBusy((__int64)a1, v11, v7, v12);
  }
  UsbhDisableTimerObject((__int64)a1, (__int64)(v6 + 800), v8, v9);
  return KeReleaseSemaphore((PRKSEMAPHORE)(v6 + 790), 16, 1, 0);
}
