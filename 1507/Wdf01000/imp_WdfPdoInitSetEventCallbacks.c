/*
 * XREFs of imp_WdfPdoInitSetEventCallbacks @ 0x1C002E750
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfPdoInitSetEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_PDO_EVENT_CALLBACKS *DispatchTable)
{
  _FX_DRIVER_GLOBALS *v3; // rbx
  unsigned __int8 CurrentIrql; // al
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v6; // [rsp+58h] [rbp+10h] BYREF

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  v3 = DeviceInit->DriverGlobals;
  if ( !DispatchTable )
    FxVerifierNullBugCheck(v3, retaddr);
  if ( v3->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(v3, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
  }
  else if ( DeviceInit->InitType == FxDeviceInitTypePdo )
  {
    if ( ((DispatchTable->Size - 56) & 0xFFFFFFF7) == 0 )
    {
      DeviceInit->Pdo.EventCallbacks = *DispatchTable;
      return;
    }
    WPP_IFR_SF_dd(v3, 2u, 0x12u, 0x36u, WPP_FxDeviceInitApi_cpp_Traceguids, DispatchTable->Size, 64);
  }
  else
  {
    WPP_IFR_SF_(v3, 2u, 0x12u, 0x35u, WPP_FxDeviceInitApi_cpp_Traceguids);
  }
  v6 = 7567731;
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
    v3->Public.DriverName,
    (const char *)&v6,
    v3->Public.DriverName,
    (const char *)&v6);
  if ( v3->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
}
