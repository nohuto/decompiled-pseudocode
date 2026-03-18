/*
 * XREFs of imp_WdfIoResourceRequirementsListGetIoResList @ 0x1C00386A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?GetItem@FxCollectionInternal@@QEAAPEAVFxObject@@K@Z @ 0x1C0019BBC (-GetItem@FxCollectionInternal@@QEAAPEAVFxObject@@K@Z.c)
 */

WDFIORESLIST__ *__fastcall imp_WdfIoResourceRequirementsListGetIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        unsigned int Index)
{
  unsigned __int8 v4; // r8
  FxObject_vtbl *Item; // rbx
  unsigned __int8 v6; // r8
  FxNonPagedObject *v7; // r9
  WDFIORESLIST__ *result; // rax
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF
  FxIoResReqList *pIoResReqList; // [rsp+48h] [rbp+20h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)RequirementsList,
    0x1037u,
    (void **)&pIoResReqList);
  FxNonPagedObject::Lock(pIoResReqList, &irql, v4);
  Item = FxCollectionInternal::GetItem(&pIoResReqList->FxCollectionInternal, Index);
  FxNonPagedObject::Unlock(v7, irql, v6);
  result = 0LL;
  if ( Item )
  {
    if ( WORD1(Item->~FxObject) )
      return (WDFIORESLIST__ *)((unsigned __int64)Item ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      return 0LL;
  }
  return result;
}
