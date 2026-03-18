/*
 * XREFs of FxValiateCx @ 0x1C0079D24
 * Callers:
 *     imp_WdfCxDeviceInitAllocate @ 0x1C0079D90 (imp_WdfCxDeviceInitAllocate.c)
 *     imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C0079E20 (imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback.c)
 *     imp_WdfCxDeviceInitSetFileObjectConfig @ 0x1C007A040 (imp_WdfCxDeviceInitSetFileObjectConfig.c)
 *     imp_WdfCxDeviceInitSetIoInCallerContextCallback @ 0x1C007A200 (imp_WdfCxDeviceInitSetIoInCallerContextCallback.c)
 *     imp_WdfCxDeviceInitSetPnpPowerEventCallbacks @ 0x1C007A270 (imp_WdfCxDeviceInitSetPnpPowerEventCallbacks.c)
 *     imp_WdfCxDeviceInitSetRequestAttributes @ 0x1C007A420 (imp_WdfCxDeviceInitSetRequestAttributes.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxValiateCx(_FX_DRIVER_GLOBALS *FxDriverGlobals, _FX_DRIVER_GLOBALS *CxDriverGlobals)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( FxDriverGlobals == CxDriverGlobals )
  {
    v2 = -1073741808;
    WPP_IFR_SF_qd(
      FxDriverGlobals,
      2u,
      0x12u,
      0xAu,
      WPP_FxCxDeviceInitApi_cpp_Traceguids,
      CxDriverGlobals->Public.Driver,
      -1073741808);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  return v2;
}
