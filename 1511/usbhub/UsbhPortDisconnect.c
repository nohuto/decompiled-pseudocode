/*
 * XREFs of UsbhPortDisconnect @ 0x1C0050830
 * Callers:
 *     UsbhHandleSuspend @ 0x1C00257E8 (UsbhHandleSuspend.c)
 *     UsbhPortCycle @ 0x1C00506A0 (UsbhPortCycle.c)
 *     UsbhReset1Debounce @ 0x1C0050D10 (UsbhReset1Debounce.c)
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0003A04 (UsbhUnlinkPdoDeviceHandle.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     UsbhBusUnlatchPdo @ 0x1C0010990 (UsbhBusUnlatchPdo.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhSignalResumeEvent @ 0x1C001F7BC (UsbhSignalResumeEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhSignalSuspendEvent @ 0x1C00419C0 (UsbhSignalSuspendEvent.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C0044EB4 (Usbh_Disconnect_PdoEvent.c)
 *     UsbhDeleteUxdSettings @ 0x1C00568D4 (UsbhDeleteUxdSettings.c)
 */

__int64 __fastcall UsbhPortDisconnect(__int64 a1, __int64 a2, __int64 a3)
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
  Log(a1, 1024, 1883523411, a2, *(unsigned __int16 *)(a2 + 4));
  v9 = PdoExt(a3, v6, v7, v8);
  UsbhUnlinkPdoDeviceHandle(a1, a3, 2017740853, 1);
  Log(a1, 1024, 1682457651, a3, 0LL);
  UsbhSignalResumeEvent(a1, a2);
  UsbhSignalSuspendEvent(a1, a2, v10, v11);
  if ( (v9[353] & 0x20000) == 0 )
    UsbhDeleteUxdSettings(a1, a3, 2LL);
  UsbhBusUnlatchPdo(a1, a3, a2, v12, 0LL);
  Usbh_Disconnect_PdoEvent(a1, a3, 3u, *(_QWORD *)(a2 + 376));
  return 0LL;
}
