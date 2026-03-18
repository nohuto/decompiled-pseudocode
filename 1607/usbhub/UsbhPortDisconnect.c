/*
 * XREFs of UsbhPortDisconnect @ 0x1C0050ED0
 * Callers:
 *     UsbhHandleSuspend @ 0x1C002697C (UsbhHandleSuspend.c)
 *     UsbhPortCycle @ 0x1C0050D40 (UsbhPortCycle.c)
 *     UsbhReset1Debounce @ 0x1C00513B0 (UsbhReset1Debounce.c)
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0003C04 (UsbhUnlinkPdoDeviceHandle.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     UsbhBusUnlatchPdo @ 0x1C0018C00 (UsbhBusUnlatchPdo.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhSignalResumeEvent @ 0x1C00256AC (UsbhSignalResumeEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     UsbhSignalSuspendEvent @ 0x1C0041CF8 (UsbhSignalSuspendEvent.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C00451F4 (Usbh_Disconnect_PdoEvent.c)
 *     UsbhDeleteUxdSettings @ 0x1C0056F04 (UsbhDeleteUxdSettings.c)
 */

__int64 __fastcall UsbhPortDisconnect(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r9
  int v14; // [rsp+28h] [rbp-10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v14 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xDu,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      v14);
  }
  Log((__int64)a1, 1024, 1883523411, a2, *(unsigned __int16 *)(a2 + 4));
  v9 = PdoExt(a3, v6, v7, v8);
  UsbhUnlinkPdoDeviceHandle((__int64)a1, a3, 2017740853, 1);
  Log((__int64)a1, 1024, 1682457651, a3, 0LL);
  UsbhSignalResumeEvent((__int64)a1, a2);
  UsbhSignalSuspendEvent((__int64)a1, a2, v10, v11);
  if ( (v9[353] & 0x20000) == 0 )
    UsbhDeleteUxdSettings(a1, a3, 2LL);
  UsbhBusUnlatchPdo((__int64)a1, a3, a2, v12, 0LL);
  Usbh_Disconnect_PdoEvent(a1, a3, 3u, *(_QWORD *)(a2 + 376));
  return 0LL;
}
