/*
 * XREFs of imp_WdfFdoInitWdmGetPhysicalDevice @ 0x1C0038E80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

_DEVICE_OBJECT *__fastcall imp_WdfFdoInitWdmGetPhysicalDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  if ( DeviceInit->InitType == FxDeviceInitTypeFdo )
    return DeviceInit->Fdo.PhysicalDevice;
  WPP_IFR_SF_(DeviceInit->DriverGlobals, 2u, 0x12u, 0x26u, WPP_FxDeviceInitApi_cpp_Traceguids);
  return 0LL;
}
