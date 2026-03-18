/*
 * XREFs of UsbhReset2DropDeviceTimeout @ 0x1C0051540
 * Callers:
 *     <none>
 * Callees:
 *     UsbhEtwLogHubIrpEvent @ 0x1C000F030 (UsbhEtwLogHubIrpEvent.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C0042B30 (UsbhAssertBusLock.c)
 *     UsbhDropDevice @ 0x1C00500E8 (UsbhDropDevice.c)
 */

__int64 __fastcall UsbhReset2DropDeviceTimeout(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // [rsp+28h] [rbp-10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v10 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x1Au,
      (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids,
      v10);
  }
  Log(a1, 1024, 1884447794, a2, 0LL);
  UsbhAssertBusLock(a1, v6, v7, v8);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET_TIMEOUT);
  UsbhDropDevice(a1, a2, a3);
  return 0LL;
}
