/*
 * XREFs of UsbhBusIoInvalidateDeviceRelations @ 0x1C0008EFC
 * Callers:
 *     UsbhBusConnectPdo @ 0x1C0008C4C (UsbhBusConnectPdo.c)
 *     UsbhDeregisterPdo @ 0x1C0043100 (UsbhDeregisterPdo.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C0045C58 (UsbhFdoPower_PowerFailureEntry.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhBusIoInvalidateDeviceRelations(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rsi

  v3 = a1;
  v4 = FdoExt(a1);
  Log(v3, 16, 4812662, v3, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_023598a80677ca4034006684006c4b8e_Traceguids);
  IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v4 + 1192), BusRelations);
}
