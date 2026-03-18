/*
 * XREFs of ?DrainListLocked@FxDisposeList@@AEAAXPEAE@Z @ 0x1C0077AB4
 * Callers:
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x1C0009884 (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 *     ?_WorkItemThunk@FxDisposeList@@CAXPEAX@Z @ 0x1C0077B50 (-_WorkItemThunk@FxDisposeList@@CAXPEAX@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C007B988 (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 */

void __fastcall FxDisposeList::DrainListLocked(FxDisposeList *this, unsigned __int8 *PreviousIrql)
{
  _SINGLE_LIST_ENTRY *p_m_List; // rdi
  _SINGLE_LIST_ENTRY *Next; // r8
  FxObject *v6; // rbp
  KIRQL v7; // dl
  FxVerifierLock *m_WorkItemThread; // rcx
  unsigned __int8 v9; // r8

  p_m_List = &this->m_List;
  while ( p_m_List->Next )
  {
    Next = p_m_List->Next;
    v6 = (FxObject *)&p_m_List->Next[-11];
    p_m_List->Next = p_m_List->Next->Next;
    Next->Next = 0LL;
    if ( !p_m_List->Next )
      this->m_ListEnd = &p_m_List->Next;
    v7 = *PreviousIrql;
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_WorkItemThread = (FxVerifierLock *)this[-1].m_WorkItemThread) != 0LL )
      FxVerifierLock::Unlock(m_WorkItemThread, v7, (unsigned __int8)Next);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v7);
    FxObject::DeferredDisposeWorkItem(v6);
    FxNonPagedObject::Lock(this, PreviousIrql, v9);
  }
}
