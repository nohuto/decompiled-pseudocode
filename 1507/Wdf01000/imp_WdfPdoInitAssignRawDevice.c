/*
 * XREFs of imp_WdfPdoInitAssignRawDevice @ 0x1C006C220
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfPdoInitAssignRawDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _GUID *DeviceClassGuid)
{
  _FX_DRIVER_GLOBALS *v3; // rbx
  unsigned __int8 CurrentIrql; // al
  __int64 result; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  v3 = DeviceInit->DriverGlobals;
  if ( !DeviceClassGuid )
    FxVerifierNullBugCheck(v3, retaddr);
  if ( v3->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(v3, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( v3->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return 3221225488LL;
  }
  else if ( DeviceInit->InitType == FxDeviceInitTypePdo )
  {
    DeviceInit->Pdo.Raw = 1;
    result = 0LL;
    DeviceInit->Security.DeviceClassSet = 1;
    DeviceInit->Security.DeviceClass = *DeviceClassGuid;
  }
  else
  {
    WPP_IFR_SF_d(v3, 2u, 0x12u, 0x46u, WPP_FxDeviceInitApi_cpp_Traceguids, -1073741811);
    return 3221225485LL;
  }
  return result;
}
