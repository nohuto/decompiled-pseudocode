/*
 * XREFs of imp_WdfCxDeviceInitSetRequestAttributes @ 0x1C00703A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfCxDeviceInitSetRequestAttributes(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        unsigned __int16 a4)
{
  _FX_DRIVER_GLOBALS *ClientDriverGlobals; // rbx
  _FX_DRIVER_GLOBALS *v7; // rcx
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
  }
  else
  {
    v7 = CxDeviceInit->ClientDriverGlobals;
    if ( !RequestAttributes )
      FxVerifierNullBugCheck(v7, retaddr);
    if ( (int)FxValidateObjectAttributes(v7, RequestAttributes, 1, a4) >= 0 )
    {
      *(_OWORD *)&CxDeviceInit->RequestAttributes.Size = *(_OWORD *)&RequestAttributes->Size;
      *(_OWORD *)&CxDeviceInit->RequestAttributes.EvtDestroyCallback = *(_OWORD *)&RequestAttributes->EvtDestroyCallback;
      *(_OWORD *)&CxDeviceInit->RequestAttributes.ParentObject = *(_OWORD *)&RequestAttributes->ParentObject;
      CxDeviceInit->RequestAttributes.ContextTypeInfo = RequestAttributes->ContextTypeInfo;
      return;
    }
  }
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( ClientDriverGlobals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
}
