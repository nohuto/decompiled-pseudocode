/*
 * XREFs of UsbhDropDevice @ 0x1C0050188
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x1C0011DC0 (UsbhHubDispatchPortEvent.c)
 *     UsbhReset1DropDevice @ 0x1C0050FD0 (UsbhReset1DropDevice.c)
 *     UsbhReset1DropDeviceTimeout @ 0x1C00510A0 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset2DropDevice @ 0x1C0051510 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x1C00515E0 (UsbhReset2DropDeviceTimeout.c)
 * Callees:
 *     UsbhSignalDriverResetEvent @ 0x1C0004760 (UsbhSignalDriverResetEvent.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000B82C (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhBusUnlatchPdo @ 0x1C0017830 (UsbhBusUnlatchPdo.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C0042914 (UsbhAssertBusLock.c)
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
      (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids,
      v10);
  }
  Log((__int64)a1, 1024, 1883525712, a2, *(unsigned __int16 *)(a2 + 4));
  UsbhAssertBusLock((__int64)a1, v6, v7, v8);
  UsbhSignalDriverResetEvent((__int64)a1, a2);
  UsbhReleaseEnumBusLockEx((__int64)a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  UsbhBusUnlatchPdo((__int64)a1, a3, a2, v9, 0LL);
  Usbh_Disconnect_PdoEvent(a1, a3, 3u, *(_QWORD *)(a2 + 376));
}
