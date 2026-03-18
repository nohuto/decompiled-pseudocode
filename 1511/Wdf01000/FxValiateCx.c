/*
 * XREFs of FxValiateCx @ 0x1C0065EE0
 * Callers:
 *     imp_WdfCxDeviceInitAllocate @ 0x1C0065F40 (imp_WdfCxDeviceInitAllocate.c)
 *     imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C0065FD0 (imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback.c)
 *     imp_WdfCxDeviceInitSetFileObjectConfig @ 0x1C00661E0 (imp_WdfCxDeviceInitSetFileObjectConfig.c)
 *     imp_WdfCxDeviceInitSetIoInCallerContextCallback @ 0x1C00663A0 (imp_WdfCxDeviceInitSetIoInCallerContextCallback.c)
 *     imp_WdfCxDeviceInitSetRequestAttributes @ 0x1C0066410 (imp_WdfCxDeviceInitSetRequestAttributes.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
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
