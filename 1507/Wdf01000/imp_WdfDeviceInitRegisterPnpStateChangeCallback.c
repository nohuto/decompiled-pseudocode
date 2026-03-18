/*
 * XREFs of imp_WdfDeviceInitRegisterPnpStateChangeCallback @ 0x1C006B340
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceInitRegisterPnpStateChangeCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_DEVICE_PNP_STATE PnpState,
        void (__fastcall *EvtDevicePnpStateChange)(WDFDEVICE__ *, const _WDF_DEVICE_PNP_NOTIFICATION_DATA *),
        unsigned int CallbackTypes)
{
  _FX_DRIVER_GLOBALS *v7; // rbx
  unsigned __int32 v8; // ebp
  unsigned __int8 CurrentIrql; // al
  __int64 result; // rax
  FxPnpStateCallback *v11; // rax
  FxPnpStateCallback *v12; // rsi
  unsigned __int16 v13; // r9
  char *v14; // rcx
  _LIST_ENTRY *retaddr; // [rsp+58h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  v7 = DeviceInit->DriverGlobals;
  if ( !EvtDevicePnpStateChange )
    FxVerifierNullBugCheck(v7, retaddr);
  v8 = PnpState & 0xFFFF7FFF;
  if ( v7->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(v7, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( v7->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return 3221225488LL;
  }
  else
  {
    if ( v8 - 256 > 0x3A )
    {
      v13 = 21;
    }
    else if ( (CallbackTypes & 0xFFFFFFF8) != 0 || !CallbackTypes )
    {
      v13 = 22;
    }
    else
    {
      if ( DeviceInit->PnpPower.PnpStateCallbacks )
        goto LABEL_19;
      v11 = (FxPnpStateCallback *)FxPoolAllocator(
                                    v7,
                                    (_LIST_ENTRY *)&v7->FxPoolFrameworks,
                                    ExDefaultNonPagedPoolType,
                                    0x3A0uLL,
                                    v7->Tag,
                                    retaddr);
      v12 = v11;
      if ( v11 )
        memset(v11, 0, sizeof(FxPnpStateCallback));
      else
        v12 = 0LL;
      DeviceInit->PnpPower.PnpStateCallbacks = v12;
      if ( v12 )
      {
LABEL_19:
        v14 = (char *)&DeviceInit->PnpPower.PnpStateCallbacks[-4] + 16 * v8 - 384;
        result = 0LL;
        *((_QWORD *)v14 + 1) = EvtDevicePnpStateChange;
        *(_DWORD *)v14 = CallbackTypes;
        return result;
      }
      v13 = 23;
    }
    WPP_IFR_SF_d(v7, 2u, 0x12u, v13, WPP_FxDeviceInitApi_cpp_Traceguids, -1073741811);
    return 3221225485LL;
  }
}
