/*
 * XREFs of imp_WdfDeviceInitSetRequestAttributes @ 0x1C002FFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetRequestAttributes(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        unsigned __int16 a4)
{
  _FX_DRIVER_GLOBALS *v6; // rsi
  _FX_DRIVER_GLOBALS *v7; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+48h] [rbp+10h] BYREF

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  v6 = DeviceInit->DriverGlobals;
  v7 = DeviceInit->DriverGlobals;
  if ( !RequestAttributes )
    FxVerifierNullBugCheck(v7, retaddr);
  if ( (int)FxValidateObjectAttributes(v7, RequestAttributes, 1, a4) < 0 )
  {
    v9 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      v6->Public.DriverName,
      (const char *)&v9,
      v6->Public.DriverName,
      (const char *)&v9);
    if ( v6->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
  else
  {
    *(_OWORD *)&DeviceInit->RequestAttributes.Size = *(_OWORD *)&RequestAttributes->Size;
    *(_OWORD *)&DeviceInit->RequestAttributes.EvtDestroyCallback = *(_OWORD *)&RequestAttributes->EvtDestroyCallback;
    *(_OWORD *)&DeviceInit->RequestAttributes.ParentObject = *(_OWORD *)&RequestAttributes->ParentObject;
    DeviceInit->RequestAttributes.ContextTypeInfo = RequestAttributes->ContextTypeInfo;
  }
}
