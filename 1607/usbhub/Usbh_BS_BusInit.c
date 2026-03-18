/*
 * XREFs of Usbh_BS_BusInit @ 0x1C000C040
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x1C000CF00 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Usbh_BS_BusInit(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx

  v4 = a3;
  FdoExt(*(_QWORD *)(a2 + 8));
  Log(a1, 2048, 1651722574, a2, v4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_99dd9bfc408b3f1dff14dd9b257ad869_Traceguids,
      v4);
  return UsbhReleaseBusStateLock(a1, a2);
}
