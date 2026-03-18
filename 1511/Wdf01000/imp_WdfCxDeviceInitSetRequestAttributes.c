/*
 * XREFs of imp_WdfCxDeviceInitSetRequestAttributes @ 0x1C0066410
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00097B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxValiateCx @ 0x1C0065EE0 (FxValiateCx.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfCxDeviceInitSetRequestAttributes(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes)
{
  _FX_DRIVER_GLOBALS *v3; // rcx
  _FX_DRIVER_GLOBALS *ClientDriverGlobals; // rdi
  unsigned __int16 v7; // r9
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  if ( !CxDeviceInit )
    FxVerifierNullBugCheck(v3, retaddr);
  ClientDriverGlobals = CxDeviceInit->ClientDriverGlobals;
  if ( (int)FxValiateCx(ClientDriverGlobals, v3) >= 0 )
  {
    if ( !RequestAttributes )
      FxVerifierNullBugCheck(ClientDriverGlobals, retaddr);
    if ( (int)FxValidateObjectAttributes(ClientDriverGlobals, RequestAttributes, 1, v7) >= 0 )
    {
      *(_OWORD *)&CxDeviceInit->RequestAttributes.Size = *(_OWORD *)&RequestAttributes->Size;
      *(_OWORD *)&CxDeviceInit->RequestAttributes.EvtDestroyCallback = *(_OWORD *)&RequestAttributes->EvtDestroyCallback;
      *(_OWORD *)&CxDeviceInit->RequestAttributes.ParentObject = *(_OWORD *)&RequestAttributes->ParentObject;
      CxDeviceInit->RequestAttributes.ContextTypeInfo = RequestAttributes->ContextTypeInfo;
    }
    else
    {
      FxVerifierDbgBreakPoint(ClientDriverGlobals);
    }
  }
}
