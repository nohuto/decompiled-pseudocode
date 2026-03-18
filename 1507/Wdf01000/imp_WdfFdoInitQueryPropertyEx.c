/*
 * XREFs of imp_WdfFdoInitQueryPropertyEx @ 0x1C006BE20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@K3PEAK5@Z @ 0x1C007600C (-_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropert.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfFdoInitQueryPropertyEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_DEVICE_PROPERTY_DATA *DeviceProperty,
        unsigned int BufferLength,
        void *PropertyBuffer,
        unsigned int *ResultLength,
        unsigned int *Type)
{
  _FX_DRIVER_GLOBALS *v7; // rbx
  unsigned __int8 CurrentIrql; // al
  FxPropertyType _a1; // [rsp+20h] [rbp-38h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  v7 = DeviceInit->DriverGlobals;
  if ( !DeviceProperty )
    FxVerifierNullBugCheck(v7, retaddr);
  if ( DeviceProperty->Size != 24 )
  {
    WPP_IFR_SF_DDd(
      v7,
      (unsigned __int8)DeviceInit,
      0xCu,
      0x2Fu,
      WPP_FxDeviceInitApi_cpp_Traceguids,
      DeviceProperty->Size,
      24,
      -1073741820);
    return -1073741820;
  }
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
    WPP_IFR_SF_d(v7, 2u, 0x12u, 0x30u, WPP_FxDeviceInitApi_cpp_Traceguids, -1073741808);
    return -1073741808;
  }
  return FxDevice::_QueryPropertyEx(
           v7,
           DeviceInit,
           0LL,
           DeviceProperty,
           _a1,
           BufferLength,
           PropertyBuffer,
           ResultLength,
           Type);
}
