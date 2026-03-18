/*
 * XREFs of imp_WdfDeviceInitSetRequestAttributes @ 0x1C0033560
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00097B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetRequestAttributes(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        unsigned __int16 a4)
{
  _FX_DRIVER_GLOBALS *v6; // rsi
  _FX_DRIVER_GLOBALS *v7; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  v6 = DeviceInit->DriverGlobals;
  v7 = DeviceInit->DriverGlobals;
  if ( !RequestAttributes )
    FxVerifierNullBugCheck(v7, retaddr);
  if ( (int)FxValidateObjectAttributes(v7, RequestAttributes, 1, a4) < 0 )
  {
    FxVerifierDbgBreakPoint(v6);
  }
  else
  {
    *(_OWORD *)&DeviceInit->RequestAttributes.Size = *(_OWORD *)&RequestAttributes->Size;
    *(_OWORD *)&DeviceInit->RequestAttributes.EvtDestroyCallback = *(_OWORD *)&RequestAttributes->EvtDestroyCallback;
    *(_OWORD *)&DeviceInit->RequestAttributes.ParentObject = *(_OWORD *)&RequestAttributes->ParentObject;
    DeviceInit->RequestAttributes.ContextTypeInfo = RequestAttributes->ContextTypeInfo;
  }
}
