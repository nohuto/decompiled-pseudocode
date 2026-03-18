/*
 * XREFs of imp_WdfCmResourceListRemoveByDescriptor @ 0x1C007E700
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
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfCmResourceListRemoveByDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 List,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *Descriptor)
{
  WDFCMRESLIST__ *_a1; // rbx
  FxCmResList *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v7; // r8
  FxCmResList *v8; // rcx
  FxObject *m_Object; // rdi
  FxCollectionInternal *v10; // rsi
  FxCollectionEntry *p_Blink; // rbx
  ULONG_PTR retaddr; // [rsp+58h] [rbp+28h]
  int irql; // [rsp+68h] [rbp+38h] BYREF
  FxCmResList *pList; // [rsp+78h] [rbp+48h] BYREF

  _a1 = (WDFCMRESLIST__ *)List;
  if ( !List )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1036uLL);
  v5 = (FxCmResList *)(~List & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(List) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    List = LOWORD(v5->__vftable);
    v5 = (FxCmResList *)((char *)v5 - List);
  }
  if ( v5->m_Type == 4150 )
  {
    pList = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pList, _a1, 0x1036u, List);
    v5 = pList;
  }
  m_Globals = v5->m_Globals;
  if ( !Descriptor )
    FxVerifierNullBugCheck(v5->m_Globals, retaddr);
  if ( (v5->m_AccessFlags & 2) != 0 )
  {
    FxNonPagedObject::Lock(v5, (unsigned __int8 *)&irql, (unsigned __int8)Descriptor);
    v8 = pList;
    m_Object = 0LL;
    v10 = &pList->FxCollectionInternal;
    p_Blink = (FxCollectionEntry *)&pList->m_ListHead.Flink[-1].Blink;
    if ( p_Blink != (FxCollectionEntry *)&pList->FxCollectionInternal )
    {
      while ( 1 )
      {
        m_Object = p_Blink->m_Object;
        if ( RtlCompareMemory(&p_Blink->m_Object[1], Descriptor, 0x14uLL) == 20 )
          break;
        m_Object = 0LL;
        p_Blink = (FxCollectionEntry *)&p_Blink->m_ListEntry.Flink[-1].Blink;
        if ( p_Blink == (FxCollectionEntry *)v10 )
          goto LABEL_18;
      }
      pList->m_Changed = 1;
      FxCollectionInternal::RemoveEntry(&pList->FxCollectionInternal, p_Blink);
LABEL_18:
      v8 = pList;
    }
    if ( SLOBYTE(v8->m_ObjectFlags) < 0 && v8[-1].m_ListHead.Flink )
      FxVerifierLock::Unlock((FxVerifierLock *)v8[-1].m_ListHead.Flink, irql, v7);
    else
      KeReleaseSpinLock(&v8->m_NPLock.m_Lock, irql);
    if ( m_Object )
      m_Object->DeleteObject(m_Object);
  }
  else
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0x11u, WPP_FxResourceAPI_cpp_Traceguids, _a1);
    irql = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
}
