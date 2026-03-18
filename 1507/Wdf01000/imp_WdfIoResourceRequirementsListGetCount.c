/*
 * XREFs of imp_WdfIoResourceRequirementsListGetCount @ 0x1C002FC10
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall imp_WdfIoResourceRequirementsListGetCount(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 RequirementsList)
{
  FxIoResReqList *v2; // rcx
  __int64 Offset; // r8
  unsigned __int8 v4; // r8
  unsigned int m_Count; // ebx
  unsigned __int8 irql; // [rsp+48h] [rbp+10h] BYREF
  FxIoResReqList *pList; // [rsp+50h] [rbp+18h] BYREF

  if ( !RequirementsList )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1037uLL);
  v2 = (FxIoResReqList *)(~RequirementsList & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (RequirementsList & 1) != 0 )
  {
    Offset = LOWORD(v2->__vftable);
    v2 = (FxIoResReqList *)((char *)v2 - Offset);
  }
  if ( v2->m_Type == 4151 )
  {
    pList = v2;
  }
  else
  {
    FxObjectHandleGetPtrQI(v2, (void **)&pList, (void *)RequirementsList, 0x1037u, Offset);
    v2 = pList;
  }
  FxNonPagedObject::Lock(v2, &irql, Offset);
  m_Count = pList->m_Count;
  if ( SLOBYTE(pList->m_ObjectFlags) < 0 && pList[-1].m_ListHead.Blink )
    FxVerifierLock::Unlock((FxVerifierLock *)pList[-1].m_ListHead.Blink, irql, v4);
  else
    KeReleaseSpinLock(&pList->m_NPLock.m_Lock, irql);
  return m_Count;
}
