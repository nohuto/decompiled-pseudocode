/*
 * XREFs of ?DrainListLocked@FxDisposeList@@AEAAXPEAE@Z @ 0x1C007F1C8
 * Callers:
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x1C007F244 (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 *     ?_WorkItemThunk@FxDisposeList@@CAXPEAX@Z @ 0x1C007F2D0 (-_WorkItemThunk@FxDisposeList@@CAXPEAX@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C008248C (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 */

void __fastcall FxDisposeList::DrainListLocked(FxDisposeList *this, unsigned __int8 *PreviousIrql)
{
  _SINGLE_LIST_ENTRY *p_m_List; // rbx
  _SINGLE_LIST_ENTRY *Next; // r8
  FxObject *v6; // rbp
  unsigned __int8 v7; // r8

  p_m_List = &this->m_List;
  while ( p_m_List->Next )
  {
    Next = p_m_List->Next;
    v6 = (FxObject *)&p_m_List->Next[-11];
    p_m_List->Next = p_m_List->Next->Next;
    Next->Next = 0LL;
    if ( !p_m_List->Next )
      this->m_ListEnd = &p_m_List->Next;
    FxNonPagedObject::Unlock(this, *PreviousIrql, (unsigned __int8)Next);
    FxObject::DeferredDisposeWorkItem(v6);
    FxNonPagedObject::Lock(this, PreviousIrql, v7);
  }
}
