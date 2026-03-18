/*
 * XREFs of UsbhFdoSetPowerD0_Action @ 0x1C0001E98
 * Callers:
 *     UsbhFdoDevicePowerState @ 0x1C000232C (UsbhFdoDevicePowerState.c)
 * Callees:
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0001F30 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 */

NTSTATUS __fastcall UsbhFdoSetPowerD0_Action(__int64 a1, int a2, IRP *a3)
{
  __int64 v6; // rbx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      30,
      (__int64)&WPP_f5dcad1b2f1f36217147d899caa6f39e_Traceguids);
  v6 = FdoExt(a1);
  Log(a1, 16, 1885291568, a2, (__int64)a3);
  UsbhPoStartNextPowerIrp_Fdo(a1, a3, 4547LL);
  ++a3->CurrentLocation;
  ++a3->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(*(PDEVICE_OBJECT *)(v6 + 1208), a3);
}
