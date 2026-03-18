/*
 * XREFs of imp_WdfCxDeviceInitSetPnpPowerEventCallbacks @ 0x1C0076310
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C00649A8 (WPP_IFR_SF_dd.c)
 *     FxValiateCx @ 0x1C0075DD0 (FxValiateCx.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfCxDeviceInitSetPnpPowerEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        _WDFCX_PNPPOWER_EVENT_CALLBACKS *CxPnpPowerCallbacks)
{
  _FX_DRIVER_GLOBALS *v3; // rcx
  _FX_DRIVER_GLOBALS *ClientDriverGlobals; // rdi
  unsigned __int16 v7; // r9
  __int128 v8; // xmm0
  int (__fastcall **p_EvtCxDevicePreSelfManagedIoRestart)(WDFDEVICE__ *); // rbx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  if ( !CxDeviceInit )
    FxVerifierNullBugCheck(v3, retaddr);
  ClientDriverGlobals = CxDeviceInit->ClientDriverGlobals;
  if ( (int)FxValiateCx(ClientDriverGlobals, v3) >= 0 )
  {
    if ( !CxPnpPowerCallbacks )
      FxVerifierNullBugCheck(ClientDriverGlobals, retaddr);
    if ( CxPnpPowerCallbacks->Size != 200 )
    {
      WPP_IFR_SF_dd(
        ClientDriverGlobals,
        2u,
        0x12u,
        0x13u,
        WPP_FxCxDeviceInitApi_cpp_Traceguids,
        CxPnpPowerCallbacks->Size,
        200);
LABEL_8:
      FxVerifierDbgBreakPoint(ClientDriverGlobals);
      return;
    }
    if ( !CxPnpPowerCallbacks->EvtCxDevicePrePrepareHardware
      && CxPnpPowerCallbacks->EvtCxDevicePrePrepareHardwareFailedCleanup )
    {
      v7 = 20;
LABEL_12:
      WPP_IFR_SF_(ClientDriverGlobals, 2u, 0x12u, v7, WPP_FxCxDeviceInitApi_cpp_Traceguids);
      goto LABEL_8;
    }
    if ( !CxPnpPowerCallbacks->EvtCxDevicePreD0Entry && CxPnpPowerCallbacks->EvtCxDevicePreD0EntryFailedCleanup )
    {
      v7 = 21;
      goto LABEL_12;
    }
    if ( !CxPnpPowerCallbacks->EvtCxDevicePreSelfManagedIoInit
      && CxPnpPowerCallbacks->EvtCxDevicePreSelfManagedIoInitFailedCleanup )
    {
      v7 = 22;
      goto LABEL_12;
    }
    if ( !CxPnpPowerCallbacks->EvtCxDevicePreSelfManagedIoRestart
      && CxPnpPowerCallbacks->EvtCxDevicePreSelfManagedIoRestartFailedCleanup )
    {
      v7 = 23;
      goto LABEL_12;
    }
    CxDeviceInit->PnpPowerCallbacks.Set = 1;
    *(_OWORD *)&CxDeviceInit->PnpPowerCallbacks.Callbacks.Size = *(_OWORD *)&CxPnpPowerCallbacks->Size;
    *(_OWORD *)&CxDeviceInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePrePrepareHardwareFailedCleanup = *(_OWORD *)&CxPnpPowerCallbacks->EvtCxDevicePrePrepareHardwareFailedCleanup;
    *(_OWORD *)&CxDeviceInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreReleaseHardware = *(_OWORD *)&CxPnpPowerCallbacks->EvtCxDevicePreReleaseHardware;
    *(_OWORD *)&CxDeviceInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreD0Entry = *(_OWORD *)&CxPnpPowerCallbacks->EvtCxDevicePreD0Entry;
    *(_OWORD *)&CxDeviceInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostD0Entry = *(_OWORD *)&CxPnpPowerCallbacks->EvtCxDevicePostD0Entry;
    *(_OWORD *)&CxDeviceInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostD0Exit = *(_OWORD *)&CxPnpPowerCallbacks->EvtCxDevicePostD0Exit;
    *(_OWORD *)&CxDeviceInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostSurpriseRemoval = *(_OWORD *)&CxPnpPowerCallbacks->EvtCxDevicePostSurpriseRemoval;
    v8 = *(_OWORD *)&CxPnpPowerCallbacks->EvtCxDevicePreSelfManagedIoInitFailedCleanup;
    p_EvtCxDevicePreSelfManagedIoRestart = &CxPnpPowerCallbacks->EvtCxDevicePreSelfManagedIoRestart;
    *(_OWORD *)&CxDeviceInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreSelfManagedIoInitFailedCleanup = v8;
    *(_OWORD *)&CxDeviceInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreSelfManagedIoRestart = *(_OWORD *)p_EvtCxDevicePreSelfManagedIoRestart;
    *(_OWORD *)&CxDeviceInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostSelfManagedIoRestart = *((_OWORD *)p_EvtCxDevicePreSelfManagedIoRestart
                                                                                                + 1);
    *(_OWORD *)&CxDeviceInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostSelfManagedIoSuspend = *((_OWORD *)p_EvtCxDevicePreSelfManagedIoRestart
                                                                                                + 2);
    *(_OWORD *)&CxDeviceInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostSelfManagedIoFlush = *((_OWORD *)p_EvtCxDevicePreSelfManagedIoRestart
                                                                                              + 3);
    CxDeviceInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostSelfManagedIoCleanup = (void (__fastcall *)(WDFDEVICE__ *))p_EvtCxDevicePreSelfManagedIoRestart[8];
  }
}
