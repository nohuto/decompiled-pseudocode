/*
 * XREFs of UsbhReset2DropDevice @ 0x1C0051510
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhCancelResetTimeout @ 0x1C00185C8 (UsbhCancelResetTimeout.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B540 (UsbhEtwLogHubIrpEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C0042914 (UsbhAssertBusLock.c)
 *     UsbhDropDevice @ 0x1C0050188 (UsbhDropDevice.c)
 */

__int64 __fastcall UsbhReset2DropDevice(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
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
      0x1Eu,
      (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids,
      v10);
  }
  Log((__int64)a1, 1024, 1697793106, a2, 0LL);
  UsbhCancelResetTimeout((__int64)a1, a2, 0);
  UsbhAssertBusLock((__int64)a1, v6, v7, v8);
  UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET_FAILURE);
  UsbhDropDevice(a1, a2, a3);
  return 0LL;
}
