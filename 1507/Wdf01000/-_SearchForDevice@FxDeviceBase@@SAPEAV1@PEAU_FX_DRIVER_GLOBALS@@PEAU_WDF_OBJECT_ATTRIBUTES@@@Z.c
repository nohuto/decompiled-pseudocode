/*
 * XREFs of ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0023368
 * Callers:
 *     imp_WdfRegistryQueryMultiString @ 0x1C0023480 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfLookasideListCreate @ 0x1C0073370 (imp_WdfLookasideListCreate.c)
 *     ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C0078D0C (-_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_.c)
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C001F9E0 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 */

FxDeviceBase *__fastcall FxDeviceBase::_SearchForDevice(FxObject *Attributes, _WDF_OBJECT_ATTRIBUTES *FxDriverGlobals)
{
  __int64 Offset; // r8
  unsigned __int64 ParentObject; // rdx
  FxObject *v4; // rcx
  FxObject *pParentObject; // [rsp+40h] [rbp+8h] BYREF

  pParentObject = Attributes;
  LOWORD(Offset) = 0;
  if ( !FxDriverGlobals )
    return 0LL;
  ParentObject = (unsigned __int64)FxDriverGlobals->ParentObject;
  if ( !ParentObject )
    return 0LL;
  v4 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (ParentObject & 1) != 0 )
  {
    Offset = LOWORD(v4->__vftable);
    v4 = (FxObject *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4096 )
  {
    pParentObject = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pParentObject, (void *)ParentObject, 0x1000u, Offset);
    v4 = pParentObject;
  }
  return FxDeviceBase::_SearchForDevice((unsigned __int64)v4, 0LL);
}
