/*
 * XREFs of imp_WdfCmResourceListGetDescriptor @ 0x1C0009E70
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C000FD9C (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

_CM_PARTIAL_RESOURCE_DESCRIPTOR *__fastcall imp_WdfCmResourceListGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 List,
        unsigned int Index)
{
  char *v3; // rdi
  FxCmResList *v5; // rbx
  __int64 Offset; // rcx
  FxCollectionEntry *Entry; // rax
  unsigned __int8 v8; // r8
  FxObject *m_Object; // rsi
  int m_Globals; // ecx
  FxVerifierLock *Flink; // rcx
  unsigned __int8 PreviousIrql; // [rsp+48h] [rbp+10h] BYREF
  FxCmResList *pList; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  if ( !List )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1036uLL);
  v5 = (FxCmResList *)(~List & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (List & 1) != 0 )
  {
    Offset = LOWORD(v5->__vftable);
    v5 = (FxCmResList *)((char *)v5 - Offset);
  }
  if ( v5->m_Type == 4150 )
  {
    pList = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pList, (void *)List, 0x1036u, Offset);
    v5 = pList;
  }
  FxNonPagedObject::Lock(v5, &PreviousIrql, Index);
  Entry = FxCollectionInternal::FindEntry(&v5->FxCollectionInternal, Index);
  if ( Entry )
    m_Object = Entry->m_Object;
  else
    m_Object = 0LL;
  if ( SLOBYTE(v5->m_ObjectFlags) < 0 && (Flink = (FxVerifierLock *)v5[-1].m_ListHead.Flink) != 0LL )
    FxVerifierLock::Unlock(Flink, PreviousIrql, v8);
  else
    KeReleaseSpinLock(&v5->m_NPLock.m_Lock, PreviousIrql);
  if ( m_Object )
  {
    m_Globals = (int)m_Object[1].m_Globals;
    v3 = (char *)&m_Object[1].m_Globals + 4;
    *(_OWORD *)((char *)&m_Object[1].m_Globals + 4) = *(_OWORD *)&m_Object[1].__vftable;
    HIDWORD(m_Object[1].m_ChildListHead.Flink) = m_Globals;
  }
  return (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)v3;
}
