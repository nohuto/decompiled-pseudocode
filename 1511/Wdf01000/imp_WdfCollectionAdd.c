/*
 * XREFs of imp_WdfCollectionAdd @ 0x1C0032DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C001F830 (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 */

__int64 __fastcall imp_WdfCollectionAdd(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOLLECTION__ *Collection,
        unsigned __int64 Object)
{
  unsigned __int8 v4; // r8
  unsigned __int8 v5; // r8
  FxObject *pObject; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF
  FxCollection *pCollection; // [rsp+58h] [rbp+20h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Collection,
    0x100Eu,
    (void **)&pCollection);
  FxObjectHandleGetPtr(pCollection->m_Globals, Object, 0x1000u, (void **)&pObject);
  FxNonPagedObject::Lock(pCollection, &irql, v4);
  LODWORD(Object) = FxCollectionInternal::Add(&pCollection->FxCollectionInternal, pCollection->m_Globals, pObject) == 0
                  ? 0xC0000001
                  : 0;
  FxNonPagedObject::Unlock(pCollection, irql, v5);
  return (unsigned int)Object;
}
