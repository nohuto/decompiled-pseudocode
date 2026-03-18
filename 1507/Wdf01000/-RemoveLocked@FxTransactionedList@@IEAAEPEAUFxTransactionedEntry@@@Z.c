/*
 * XREFs of ?RemoveLocked@FxTransactionedList@@IEAAEPEAUFxTransactionedEntry@@@Z @ 0x1C0080A8C
 * Callers:
 *     ?Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C0080A08 (-Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 *     ?SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080B88 (-SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

char __fastcall FxTransactionedList::RemoveLocked(FxTransactionedList *this, FxTransactionedEntry *Entry)
{
  char v2; // bl
  _LIST_ENTRY *p_m_TransactionLink; // rax
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v6; // r8
  _LIST_ENTRY *v7; // rax
  _LIST_ENTRY *v8; // rax
  _LIST_ENTRY *v9; // r8
  _LIST_ENTRY *p_m_TransactionHead; // rcx
  FxObject *m_TransactionedObject; // rcx
  unsigned int RefCount; // r8d
  FxTagTracker *v13; // rcx

  v2 = 0;
  if ( Entry->m_Transaction == FxTransactionActionAdd )
  {
    p_m_TransactionLink = &Entry->m_TransactionLink;
    v2 = 1;
    Flink = Entry->m_TransactionLink.Flink;
    Blink = Entry->m_TransactionLink.Blink;
    if ( Flink->Blink != &Entry->m_TransactionLink || Blink->Flink != p_m_TransactionLink )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    Entry->m_TransactionLink.Blink = &Entry->m_TransactionLink;
    p_m_TransactionLink->Flink = p_m_TransactionLink;
    Entry->m_Transaction = FxTransactionActionNothing;
  }
  else if ( this->m_ListLockedRecursionCount )
  {
    Entry->m_Transaction = FxTransactionActionRemove;
    v8 = &Entry->m_TransactionLink;
    v9 = this->m_TransactionHead.Blink;
    p_m_TransactionHead = &this->m_TransactionHead;
    Entry->m_TransactionLink.Flink = p_m_TransactionHead;
    Entry->m_TransactionLink.Blink = v9;
    if ( v9->Flink != p_m_TransactionHead )
      __fastfail(3u);
    v9->Flink = v8;
    p_m_TransactionHead->Blink = v8;
    m_TransactionedObject = Entry->m_TransactionedObject;
    RefCount = _InterlockedIncrement(&m_TransactionedObject->m_Refcnt);
    if ( SLOBYTE(m_TransactionedObject->m_ObjectFlags) >= 0 )
      v13 = 0LL;
    else
      v13 = (FxTagTracker *)m_TransactionedObject[-1].m_ChildEntry.Flink;
    if ( v13 )
      FxTagTracker::UpdateTagHistory(
        v13,
        Entry,
        423,
        "minkernel\\wdf\\framework\\shared\\support\\fxtransactionedlist.cpp",
        TagAddRef,
        RefCount);
  }
  else
  {
    v6 = Entry->m_ListLink.Flink;
    v7 = Entry->m_ListLink.Blink;
    if ( (FxTransactionedEntry *)Entry->m_ListLink.Flink->Blink != Entry || (FxTransactionedEntry *)v7->Flink != Entry )
      __fastfail(3u);
    v7->Flink = v6;
    v6->Blink = v7;
    Entry->m_ListLink.Blink = &Entry->m_ListLink;
    Entry->m_ListLink.Flink = &Entry->m_ListLink;
    ((void (__fastcall *)(FxTransactionedList *))this->EntryRemoved)(this);
    return 1;
  }
  return v2;
}
