/*
 * XREFs of imp_WdfIoResourceRequirementsListRemoveByIoResList @ 0x1C007ED50
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x1C000FE10 (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall imp_WdfIoResourceRequirementsListRemoveByIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 RequirementsList,
        unsigned __int64 IoResList)
{
  WDFIORESREQLIST__ *_a1; // rbx
  FxIoResReqList *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxIoResList *v7; // r10
  __int64 Offset; // rdx
  unsigned __int8 v9; // r8
  FxIoResReqList *v10; // rcx
  char v11; // bl
  FxCollectionEntry *p_Blink; // rdx
  FxIoResList *pResList; // [rsp+30h] [rbp-10h] BYREF
  int irql; // [rsp+68h] [rbp+28h] BYREF
  FxIoResReqList *pList; // [rsp+78h] [rbp+38h] BYREF

  _a1 = (WDFIORESREQLIST__ *)RequirementsList;
  if ( !RequirementsList )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1037uLL);
  v5 = (FxIoResReqList *)(~RequirementsList & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(RequirementsList) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    RequirementsList = LOWORD(v5->__vftable);
    v5 = (FxIoResReqList *)((char *)v5 - RequirementsList);
  }
  if ( v5->m_Type == 4151 )
  {
    pList = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pList, _a1, 0x1037u, RequirementsList);
    v5 = pList;
  }
  m_Globals = v5->m_Globals;
  if ( (v5->m_AccessFlags & 2) != 0 )
  {
    if ( !IoResList )
      FxVerifierBugCheckWorker(v5->m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1035uLL);
    v7 = (FxIoResList *)(~IoResList & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(Offset) = 0;
    if ( (IoResList & 1) != 0 )
    {
      Offset = LOWORD(v7->__vftable);
      v7 = (FxIoResList *)((char *)v7 - Offset);
    }
    if ( v7->m_Type == 4149 )
    {
      pResList = v7;
    }
    else
    {
      FxObjectHandleGetPtrQI(v7, (void **)&pResList, (void *)IoResList, 0x1035u, Offset);
      v5 = pList;
    }
    FxNonPagedObject::Lock(v5, (unsigned __int8 *)&irql, IoResList);
    v10 = pList;
    v11 = 0;
    p_Blink = (FxCollectionEntry *)&pList->m_ListHead.Flink[-1].Blink;
    if ( p_Blink != (FxCollectionEntry *)&pList->FxCollectionInternal )
    {
      v9 = (unsigned __int8)pResList;
      while ( p_Blink->m_Object != pResList )
      {
        p_Blink = (FxCollectionEntry *)&p_Blink->m_ListEntry.Flink[-1].Blink;
        if ( p_Blink == (FxCollectionEntry *)&pList->FxCollectionInternal )
          goto LABEL_24;
      }
      pList->m_Changed = 1;
      FxCollectionInternal::RemoveEntry(&pList->FxCollectionInternal, p_Blink);
      v10 = pList;
      v11 = 1;
    }
LABEL_24:
    if ( SLOBYTE(v10->m_ObjectFlags) < 0 && v10[-1].m_ListHead.Blink )
      FxVerifierLock::Unlock((FxVerifierLock *)v10[-1].m_ListHead.Blink, irql, v9);
    else
      KeReleaseSpinLock(&v10->m_NPLock.m_Lock, irql);
    if ( v11 )
      pResList->DeleteObject(pResList);
  }
  else
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0xBu, WPP_FxResourceAPI_cpp_Traceguids, _a1);
    irql = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
}
