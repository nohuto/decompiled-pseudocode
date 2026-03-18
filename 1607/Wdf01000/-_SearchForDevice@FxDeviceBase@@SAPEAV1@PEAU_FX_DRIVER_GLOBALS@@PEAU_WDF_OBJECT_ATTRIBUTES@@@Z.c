/*
 * XREFs of ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0015FB4
 * Callers:
 *     ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C00146A0 (-_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C0015CB0 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfLookasideListCreate @ 0x1C0076A70 (imp_WdfLookasideListCreate.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C001AE18 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 */

FxDeviceBase *__fastcall FxDeviceBase::_SearchForDevice(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes)
{
  void *ParentObject; // rdx
  FxObject *pParentObject; // [rsp+38h] [rbp+10h] BYREF

  if ( !Attributes )
    return 0LL;
  ParentObject = Attributes->ParentObject;
  if ( !ParentObject )
    return 0LL;
  FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParentObject);
  return FxDeviceBase::_SearchForDevice(pParentObject, 0LL);
}
