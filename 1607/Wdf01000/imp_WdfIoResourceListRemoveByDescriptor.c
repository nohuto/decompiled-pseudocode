/*
 * XREFs of imp_WdfIoResourceListRemoveByDescriptor @ 0x1C007ED50
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x1C0019DA0 (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfIoResourceListRemoveByDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        _IO_RESOURCE_DESCRIPTOR *Descriptor)
{
  unsigned __int8 v5; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 v7; // r8
  FxIoResList *v8; // rcx
  FxObject *m_Object; // rdi
  FxCollectionInternal *v10; // rsi
  FxCollectionEntry *p_Blink; // rbx
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF
  FxIoResList *pList; // [rsp+60h] [rbp+18h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)ResourceList,
    0x1035u,
    (void **)&pList);
  m_Globals = pList->m_Globals;
  if ( !Descriptor )
    FxVerifierNullBugCheck(pList->m_Globals, retaddr);
  if ( (pList->m_AccessFlags & 2) != 0 )
  {
    FxNonPagedObject::Lock(pList, &irql, v5);
    v8 = pList;
    m_Object = 0LL;
    v10 = &pList->FxCollectionInternal;
    p_Blink = (FxCollectionEntry *)&pList->m_ListHead.Flink[-1].Blink;
    if ( p_Blink != (FxCollectionEntry *)&pList->FxCollectionInternal )
    {
      while ( 1 )
      {
        m_Object = p_Blink->m_Object;
        if ( RtlCompareMemory(&p_Blink->m_Object[1], Descriptor, 0x20uLL) == 32 )
          break;
        m_Object = 0LL;
        p_Blink = (FxCollectionEntry *)&p_Blink->m_ListEntry.Flink[-1].Blink;
        if ( p_Blink == (FxCollectionEntry *)v10 )
          goto LABEL_10;
      }
      pList->m_Changed = 1;
      pList->m_OwningList->m_Changed = 1;
      FxCollectionInternal::RemoveEntry(&pList->FxCollectionInternal, p_Blink);
LABEL_10:
      v8 = pList;
    }
    FxNonPagedObject::Unlock(v8, irql, v7);
    if ( m_Object )
      m_Object->DeleteObject(m_Object);
  }
  else
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0xFu, WPP_FxResourceAPI_cpp_Traceguids, ResourceList);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
