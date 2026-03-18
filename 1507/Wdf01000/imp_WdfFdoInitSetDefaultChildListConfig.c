/*
 * XREFs of imp_WdfFdoInitSetDefaultChildListConfig @ 0x1C002D120
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?_ValidateConfig@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x1C002D1E4 (-_ValidateConfig@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfFdoInitSetDefaultChildListConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_CHILD_LIST_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *DefaultDeviceListAttributes)
{
  _FX_DRIVER_GLOBALS *v7; // rdi
  unsigned __int16 v8; // r9
  unsigned __int8 CurrentIrql; // al
  void *retaddr; // [rsp+58h] [rbp+18h]
  unsigned __int64 totalDescriptionSize; // [rsp+68h] [rbp+28h] BYREF

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  totalDescriptionSize = 0LL;
  v7 = DeviceInit->DriverGlobals;
  if ( !Config )
    FxVerifierNullBugCheck(v7, retaddr);
  if ( v7->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(v7, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      goto LABEL_14;
    }
  }
  if ( DeviceInit->InitType )
  {
    WPP_IFR_SF_(v7, 2u, 0x12u, 0x2Eu, WPP_FxDeviceInitApi_cpp_Traceguids);
  }
  else
  {
    if ( FxChildList::_ValidateConfig(v7, Config, &totalDescriptionSize) < 0 )
      goto LABEL_14;
    if ( !DefaultDeviceListAttributes )
    {
LABEL_7:
      *(_OWORD *)&DeviceInit->Fdo.ListConfig.Size = *(_OWORD *)&Config->Size;
      *(_OWORD *)&DeviceInit->Fdo.ListConfig.EvtChildListCreateDevice = *(_OWORD *)&Config->EvtChildListCreateDevice;
      *(_OWORD *)&DeviceInit->Fdo.ListConfig.EvtChildListIdentificationDescriptionCopy = *(_OWORD *)&Config->EvtChildListIdentificationDescriptionCopy;
      *(_OWORD *)&DeviceInit->Fdo.ListConfig.EvtChildListIdentificationDescriptionCleanup = *(_OWORD *)&Config->EvtChildListIdentificationDescriptionCleanup;
      *(_OWORD *)&DeviceInit->Fdo.ListConfig.EvtChildListAddressDescriptionCopy = *(_OWORD *)&Config->EvtChildListAddressDescriptionCopy;
      *(_OWORD *)&DeviceInit->Fdo.ListConfig.EvtChildListAddressDescriptionCleanup = *(_OWORD *)&Config->EvtChildListAddressDescriptionCleanup;
      return;
    }
    if ( (int)FxValidateObjectAttributes(v7, DefaultDeviceListAttributes, 1, v8) >= 0 )
    {
      *(_OWORD *)&DeviceInit->Fdo.ListConfigAttributes.Size = *(_OWORD *)&DefaultDeviceListAttributes->Size;
      *(_OWORD *)&DeviceInit->Fdo.ListConfigAttributes.EvtDestroyCallback = *(_OWORD *)&DefaultDeviceListAttributes->EvtDestroyCallback;
      *(_OWORD *)&DeviceInit->Fdo.ListConfigAttributes.ParentObject = *(_OWORD *)&DefaultDeviceListAttributes->ParentObject;
      DeviceInit->Fdo.ListConfigAttributes.ContextTypeInfo = DefaultDeviceListAttributes->ContextTypeInfo;
      goto LABEL_7;
    }
  }
LABEL_14:
  LODWORD(totalDescriptionSize) = 7567731;
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
    v7->Public.DriverName,
    (const char *)&totalDescriptionSize,
    v7->Public.DriverName,
    (const char *)&totalDescriptionSize);
  if ( v7->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
}
