/*
 * XREFs of UsbhPortDisconnect @ 0x1C00508D0
 * Callers:
 *     UsbhHandleSuspend @ 0x1C0026828 (UsbhHandleSuspend.c)
 *     UsbhPortCycle @ 0x1C0050740 (UsbhPortCycle.c)
 *     UsbhReset1Debounce @ 0x1C0050DB0 (UsbhReset1Debounce.c)
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0003A04 (UsbhUnlinkPdoDeviceHandle.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhBusUnlatchPdo @ 0x1C0017830 (UsbhBusUnlatchPdo.c)
 *     UsbhSignalResumeEvent @ 0x1C00250BC (UsbhSignalResumeEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhSignalSuspendEvent @ 0x1C00417A4 (UsbhSignalSuspendEvent.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C0044D84 (Usbh_Disconnect_PdoEvent.c)
 *     UsbhDeleteUxdSettings @ 0x1C005675C (UsbhDeleteUxdSettings.c)
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
      (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids,
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
