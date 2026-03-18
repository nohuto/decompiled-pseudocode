/*
 * XREFs of imp_WdfIoResourceRequirementsListRemoveByIoResList @ 0x1C00720A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x1C001F968 (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfIoResourceRequirementsListRemoveByIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        WDFIORESLIST__ *IoResList)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 v6; // r8
  FxIoResReqList *v7; // rcx
  char v8; // bl
  FxCollectionInternal *v9; // r8
  FxCollectionEntry *p_Blink; // rdx
  FxIoResList *pResList; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF
  FxIoResReqList *pList; // [rsp+68h] [rbp+20h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)RequirementsList,
    0x1037u,
    (void **)&pList);
  m_Globals = pList->m_Globals;
  if ( (pList->m_AccessFlags & 2) != 0 )
  {
    FxObjectHandleGetPtr(pList->m_Globals, (unsigned __int64)IoResList, 0x1035u, (void **)&pResList);
    FxNonPagedObject::Lock(pList, &irql, v6);
    v7 = pList;
    v8 = 0;
    v9 = &pList->FxCollectionInternal;
    p_Blink = (FxCollectionEntry *)&pList->m_ListHead.Flink[-1].Blink;
    if ( p_Blink != (FxCollectionEntry *)&pList->FxCollectionInternal )
    {
      while ( p_Blink->m_Object != pResList )
      {
        p_Blink = (FxCollectionEntry *)&p_Blink->m_ListEntry.Flink[-1].Blink;
        if ( p_Blink == (FxCollectionEntry *)v9 )
          goto LABEL_8;
      }
      v8 = 1;
      pList->m_Changed = 1;
      FxCollectionInternal::RemoveEntry(&pList->FxCollectionInternal, p_Blink);
      v7 = pList;
    }
LABEL_8:
    FxNonPagedObject::Unlock(v7, irql, (unsigned __int8)v9);
    if ( v8 )
      pResList->DeleteObject(pResList);
  }
  else
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0xBu, WPP_FxResourceAPI_cpp_Traceguids, RequirementsList);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
