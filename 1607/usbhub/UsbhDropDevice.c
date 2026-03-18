/*
 * XREFs of UsbhDropDevice @ 0x1C005077C
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x1C0013130 (UsbhHubDispatchPortEvent.c)
 *     UsbhReset1DropDevice @ 0x1C00515D0 (UsbhReset1DropDevice.c)
 *     UsbhReset1DropDeviceTimeout @ 0x1C00516A0 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset2DropDevice @ 0x1C0051B10 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x1C0051BE0 (UsbhReset2DropDeviceTimeout.c)
 * Callees:
 *     UsbhSignalDriverResetEvent @ 0x1C0004880 (UsbhSignalDriverResetEvent.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000C21C (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     UsbhBusUnlatchPdo @ 0x1C0018C00 (UsbhBusUnlatchPdo.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C0042E68 (UsbhAssertBusLock.c)
 */

void __fastcall UsbhDropDevice(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r9
  int v10; // [rsp+28h] [rbp-10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v10 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xAu,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      v10);
  }
  Log((__int64)a1, 1024, 1883525712, a2, *(unsigned __int16 *)(a2 + 4));
  UsbhAssertBusLock((__int64)a1, v6, v7, v8);
  UsbhSignalDriverResetEvent((__int64)a1, a2);
  UsbhReleaseEnumBusLockEx((__int64)a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  UsbhBusUnlatchPdo((__int64)a1, a3, a2, v9, 0LL);
  Usbh_Disconnect_PdoEvent(a1, a3, 3u, *(_QWORD *)(a2 + 376));
}
