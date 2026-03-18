/*
 * XREFs of imp_WdfFdoInitSetEventCallbacks @ 0x1C0030410
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfFdoInitSetEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_FDO_EVENT_CALLBACKS *FdoEventCallbacks)
{
  _FX_DRIVER_GLOBALS *v3; // rbx
  unsigned __int8 CurrentIrql; // al
  void *retaddr; // [rsp+48h] [rbp+8h]
  int v6; // [rsp+58h] [rbp+18h] BYREF

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  v3 = DeviceInit->DriverGlobals;
  if ( !FdoEventCallbacks )
    FxVerifierNullBugCheck(v3, retaddr);
  if ( v3->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(v3, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
  }
  else if ( DeviceInit->InitType )
  {
    WPP_IFR_SF_(v3, 2u, 0x12u, 0x2Bu, WPP_FxDeviceInitApi_cpp_Traceguids);
  }
  else if ( FdoEventCallbacks->Size == 32 )
  {
    if ( !FdoEventCallbacks->EvtDeviceFilterAddResourceRequirements || FdoEventCallbacks->EvtDeviceRemoveAddedResources )
    {
      DeviceInit->Fdo.EventCallbacks = *FdoEventCallbacks;
      return;
    }
    v3 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
    WPP_IFR_SF_q(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      2u,
      0xCu,
      0x2Du,
      WPP_FxDeviceInitApi_cpp_Traceguids,
      FdoEventCallbacks->EvtDeviceFilterAddResourceRequirements);
  }
  else
  {
    WPP_IFR_SF_dd(v3, 2u, 0x12u, 0x2Cu, WPP_FxDeviceInitApi_cpp_Traceguids, FdoEventCallbacks->Size, 32);
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
