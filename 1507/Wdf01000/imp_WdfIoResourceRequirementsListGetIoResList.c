/*
 * XREFs of imp_WdfIoResourceRequirementsListGetIoResList @ 0x1C002F560
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?GetItem@FxCollectionInternal@@QEAAPEAVFxObject@@K@Z @ 0x1C000FCA8 (-GetItem@FxCollectionInternal@@QEAAPEAVFxObject@@K@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

WDFIORESLIST__ *__fastcall imp_WdfIoResourceRequirementsListGetIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 RequirementsList,
        unsigned int Index)
{
  FxIoResReqList *v4; // rcx
  __int64 Offset; // r8
  FxObject_vtbl *Item; // rbx
  unsigned __int8 v7; // r8
  __int64 v8; // r9
  FxVerifierLock *v11; // rcx
  unsigned __int8 irql; // [rsp+48h] [rbp+10h] BYREF
  FxIoResReqList *pIoResReqList; // [rsp+58h] [rbp+20h] BYREF

  if ( !RequirementsList )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1037uLL);
  v4 = (FxIoResReqList *)(~RequirementsList & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (RequirementsList & 1) != 0 )
  {
    Offset = LOWORD(v4->__vftable);
    v4 = (FxIoResReqList *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4151 )
  {
    pIoResReqList = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pIoResReqList, (void *)RequirementsList, 0x1037u, Offset);
    v4 = pIoResReqList;
  }
  FxNonPagedObject::Lock(v4, &irql, Offset);
  Item = FxCollectionInternal::GetItem(&pIoResReqList->FxCollectionInternal, Index);
  if ( *(char *)(v8 + 24) < 0 && (v11 = *(FxVerifierLock **)(v8 - 24)) != 0LL )
    FxVerifierLock::Unlock(v11, irql, v7);
  else
    KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 112), irql);
  if ( !Item )
    return 0LL;
  if ( WORD1(Item->~FxObject) )
    return (WDFIORESLIST__ *)((unsigned __int64)Item ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    return 0LL;
}
