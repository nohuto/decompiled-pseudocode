/*
 * XREFs of imp_WdfIoResourceRequirementsListGetIoResList @ 0x1C0031B60
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C003090C (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 */

WDFIORESLIST__ *__fastcall imp_WdfIoResourceRequirementsListGetIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        unsigned int Index)
{
  unsigned __int8 v4; // r8
  _LIST_ENTRY **Entry; // rax
  unsigned __int8 v6; // r8
  FxNonPagedObject *v7; // r9
  _LIST_ENTRY *v8; // rbx
  __int16 v9; // cx
  unsigned __int64 v10; // rbx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF
  FxIoResReqList *pIoResReqList; // [rsp+48h] [rbp+20h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)RequirementsList,
    0x1037u,
    (void **)&pIoResReqList);
  FxNonPagedObject::Lock(pIoResReqList, &irql, v4);
  Entry = FxCollectionInternal::FindEntry(&pIoResReqList->FxCollectionInternal, Index);
  if ( Entry )
    v8 = *Entry;
  else
    v8 = 0LL;
  FxNonPagedObject::Unlock(v7, irql, v6);
  if ( !v8 )
    return 0LL;
  v9 = WORD1(v8->Blink);
  v10 = (unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v9 )
    return 0LL;
  return (WDFIORESLIST__ *)v10;
}
