/*
 * XREFs of imp_WdfDeviceInitSetPnpPowerEventCallbacks @ 0x1C002D7C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetPnpPowerEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_PNPPOWER_EVENT_CALLBACKS *PnpPowerEventCallbacks)
{
  _FX_DRIVER_GLOBALS *v3; // rbx
  unsigned int _a1; // ecx
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v6; // [rsp+58h] [rbp+10h] BYREF

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  v3 = DeviceInit->DriverGlobals;
  if ( !PnpPowerEventCallbacks )
    FxVerifierNullBugCheck(v3, retaddr);
  _a1 = PnpPowerEventCallbacks->Size;
  if ( ((PnpPowerEventCallbacks->Size - 136) & 0xFFFFFFF7) != 0 )
  {
    WPP_IFR_SF_dd(v3, 2u, 0x12u, 0x11u, WPP_FxDeviceInitApi_cpp_Traceguids, _a1, 144);
  }
  else
  {
    if ( _a1 <= 0x88
      || !PnpPowerEventCallbacks->EvtDeviceUsageNotification
      || !PnpPowerEventCallbacks->EvtDeviceUsageNotificationEx )
    {
      memmove(&DeviceInit->PnpPower, PnpPowerEventCallbacks, PnpPowerEventCallbacks->Size);
      return;
    }
    WPP_IFR_SF_(v3, 2u, 0x12u, 0x12u, WPP_FxDeviceInitApi_cpp_Traceguids);
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
