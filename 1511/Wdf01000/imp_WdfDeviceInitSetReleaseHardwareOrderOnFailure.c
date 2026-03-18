/*
 * XREFs of imp_WdfDeviceInitSetReleaseHardwareOrderOnFailure @ 0x1C0034060
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetReleaseHardwareOrderOnFailure(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        int ReleaseHardwareOrderOnFailure)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  if ( ReleaseHardwareOrderOnFailure && ReleaseHardwareOrderOnFailure <= 2 )
  {
    DeviceInit->ReleaseHardwareOrderOnFailure = ReleaseHardwareOrderOnFailure;
  }
  else
  {
    WPP_IFR_SF_d(
      DeviceInit->DriverGlobals,
      2u,
      0x12u,
      0x25u,
      WPP_FxDeviceInitApi_cpp_Traceguids,
      ReleaseHardwareOrderOnFailure);
    FxVerifierDbgBreakPoint(DeviceInit->DriverGlobals);
  }
}
