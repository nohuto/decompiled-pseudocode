/*
 * XREFs of imp_WdfFdoInitQueryProperty @ 0x1C006BCE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?_QueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@KPEAXPEAK@Z @ 0x1C0025D44 (-_QueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJEC.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

NTSTATUS __fastcall imp_WdfFdoInitQueryProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        ULONG BufferLength,
        void *PropertyBuffer,
        unsigned int *ResultLength)
{
  _FX_DRIVER_GLOBALS *v7; // rbx
  unsigned __int8 CurrentIrql; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  v7 = DeviceInit->DriverGlobals;
  if ( !ResultLength )
    FxVerifierNullBugCheck(v7, retaddr);
  if ( BufferLength && !PropertyBuffer )
    FxVerifierNullBugCheck(v7, retaddr);
  if ( v7->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(v7, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( v7->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return -1073741808;
    }
  }
  if ( DeviceInit->InitType )
  {
    WPP_IFR_SF_d(v7, 2u, 0x12u, 0x29u, WPP_FxDeviceInitApi_cpp_Traceguids, -1073741808);
    return -1073741808;
  }
  return FxDevice::_QueryProperty(v7, DeviceInit, 0LL, 0LL, DeviceProperty, BufferLength, PropertyBuffer, ResultLength);
}
