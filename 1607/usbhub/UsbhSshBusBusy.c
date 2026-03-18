/*
 * XREFs of UsbhSshBusBusy @ 0x1C001E580
 * Callers:
 *     Usbh_BS_BusRun @ 0x1C000CDE4 (Usbh_BS_BusRun.c)
 *     UsbhDispatch_BusEvent @ 0x1C000CF00 (UsbhDispatch_BusEvent.c)
 *     UsbhHubSSH_PnpStart @ 0x1C001E450 (UsbhHubSSH_PnpStart.c)
 *     UsbhHubSSH_PnpStop @ 0x1C00568C0 (UsbhHubSSH_PnpStop.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000D2D0 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000E3A0 (UsbhIncHubBusy.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

void __fastcall UsbhSshBusBusy(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v6; // rdi
  signed __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // r10
  int v10; // r11d
  __int64 v11; // rdx
  __int64 v12; // r9
  _QWORD *v13; // r10

  v6 = (volatile signed __int64 *)FdoExt((__int64)a1, a2, a3, a4);
  v7 = UsbhIncHubBusy(a1, a2, (__int64)a1, 1430418291LL, 1);
  Log((__int64)a1, 2048, 1114863915, _InterlockedCompareExchange64(v6 + 411, v7, 0LL), v7);
  if ( v8 )
  {
    Log((__int64)a1, v10, 1114845741, v8, v9);
    UsbhDecHubBusy((__int64)a1, v11, v13, v12);
  }
}
