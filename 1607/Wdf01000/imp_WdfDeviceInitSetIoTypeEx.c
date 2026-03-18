/*
 * XREFs of imp_WdfDeviceInitSetIoTypeEx @ 0x1C0072570
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_DDd @ 0x1C0064788 (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetIoTypeEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_IO_TYPE_CONFIG *IoTypeConfig)
{
  _FX_DRIVER_GLOBALS *v3; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  if ( !DeviceInit )
    FxVerifierNullBugCheck(v3, retaddr);
  if ( IoTypeConfig->Size == 16 )
    WDFDEVICE_INIT::AssignIoType(DeviceInit, IoTypeConfig);
  else
    WPP_IFR_SF_DDd(
      v3,
      (unsigned __int8)DeviceInit,
      0xCu,
      0xAu,
      WPP_FxDeviceInitApi_cpp_Traceguids,
      IoTypeConfig->Size,
      16,
      -1073741820);
}
