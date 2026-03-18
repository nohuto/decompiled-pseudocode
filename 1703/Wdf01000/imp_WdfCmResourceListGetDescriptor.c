/*
 * XREFs of imp_WdfCmResourceListGetDescriptor @ 0x1C0030820
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C003090C (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003F450 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 */

_CM_PARTIAL_RESOURCE_DESCRIPTOR *__fastcall imp_WdfCmResourceListGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        unsigned int Index)
{
  unsigned __int8 v4; // r8
  FxCmResList *v5; // rsi
  char *v6; // rbx
  FxCollectionEntry *Entry; // rax
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // r9
  FxObject *m_Object; // rdi
  int m_Globals; // ecx
  FxVerifierLock *m_Lock; // rcx
  unsigned __int8 PreviousIrql; // [rsp+30h] [rbp+8h] BYREF
  FxCmResList *pList; // [rsp+48h] [rbp+20h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)List,
    0x1036u,
    (void **)&pList);
  v5 = pList;
  v6 = 0LL;
  if ( SLOBYTE(pList->m_ObjectFlags) < 0 && (m_Lock = (FxVerifierLock *)pList[-1].m_NPLock.m_Lock) != 0LL )
    FxVerifierLock::Lock(m_Lock, &PreviousIrql, v4);
  else
    KeAcquireSpinLockRaiseToDpc(&pList->m_NPLock.m_Lock);
  Entry = FxCollectionInternal::FindEntry(&v5->FxCollectionInternal, Index);
  if ( Entry )
    m_Object = Entry->m_Object;
  else
    m_Object = 0LL;
  FxNonPagedObject::Unlock(v5, v9, v8);
  if ( m_Object )
  {
    m_Globals = (int)m_Object[1].m_Globals;
    v6 = (char *)&m_Object[1].m_Globals + 4;
    *(_OWORD *)((char *)&m_Object[1].m_Globals + 4) = *(_OWORD *)&m_Object[1].__vftable;
    HIDWORD(m_Object[1].m_ChildListHead.Flink) = m_Globals;
  }
  return (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)v6;
}
