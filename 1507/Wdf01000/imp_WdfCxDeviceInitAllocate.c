/*
 * XREFs of imp_WdfCxDeviceInitAllocate @ 0x1C006FD30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z @ 0x1C007720C (-_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

WDFCXDEVICE_INIT *__fastcall imp_WdfCxDeviceInitAllocate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *v2; // rsi
  _FX_DRIVER_GLOBALS *v3; // rdi
  WDFCXDEVICE_INIT *v4; // rbx
  unsigned __int8 CurrentIrql; // al
  WDFCXDEVICE_INIT *CxDeviceInit; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  v3 = DeviceInit->DriverGlobals;
  v4 = 0LL;
  if ( DeviceInit->DriverGlobals == v2 )
  {
    WPP_IFR_SF_qd(v3, 2u, 0x12u, 0xAu, WPP_FxCxDeviceInitApi_cpp_Traceguids, DriverGlobals->Driver, -1073741808);
    goto LABEL_5;
  }
  if ( v3->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(v3, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
LABEL_5:
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( v3->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return v4;
    }
  }
  CxDeviceInit = WDFCXDEVICE_INIT::_AllocateCxDeviceInit(DeviceInit);
  v4 = CxDeviceInit;
  if ( CxDeviceInit )
  {
    CxDeviceInit->ClientDriverGlobals = v3;
    CxDeviceInit->CxDriverGlobals = v2;
  }
  return v4;
}
