/*
 * XREFs of imp_WdfCxDeviceInitSetIoInCallerContextCallback @ 0x1C00702E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfCxDeviceInitSetIoInCallerContextCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        void (__fastcall *EvtIoInCallerContext)(WDFDEVICE__ *, WDFREQUEST__ *))
{
  _FX_DRIVER_GLOBALS *ClientDriverGlobals; // rbx
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !CxDeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  ClientDriverGlobals = CxDeviceInit->ClientDriverGlobals;
  if ( ClientDriverGlobals == (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16] )
  {
    WPP_IFR_SF_qd(
      ClientDriverGlobals,
      2u,
      0x12u,
      0xAu,
      WPP_FxCxDeviceInitApi_cpp_Traceguids,
      DriverGlobals->Driver,
      -1073741808);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( ClientDriverGlobals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
  else
  {
    if ( !EvtIoInCallerContext )
      FxVerifierNullBugCheck(ClientDriverGlobals, retaddr);
    CxDeviceInit->IoInCallerContextCallback = EvtIoInCallerContext;
  }
}
