/*
 * XREFs of ?RemoveLocked@FxTransactionedList@@IEAAEPEAUFxTransactionedEntry@@@Z @ 0x1C0073598
 * Callers:
 *     ?Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C0073514 (-Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 *     ?SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0073674 (-SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C0023220 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 */

char __fastcall FxTransactionedList::RemoveLocked(FxTransactionedList *this, FxTransactionedEntry *Entry)
{
  char v2; // bl
  _LIST_ENTRY *p_m_TransactionLink; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v7; // rdx
  _LIST_ENTRY *v8; // rax
  _LIST_ENTRY *v9; // rax
  _LIST_ENTRY *v10; // rdx
  _LIST_ENTRY *p_m_TransactionHead; // rcx

  v2 = 0;
  if ( Entry->m_Transaction == FxTransactionActionAdd )
  {
    p_m_TransactionLink = &Entry->m_TransactionLink;
    v2 = 1;
    Flink = Entry->m_TransactionLink.Flink;
    Blink = p_m_TransactionLink->Blink;
    if ( Flink->Blink != p_m_TransactionLink || Blink->Flink != p_m_TransactionLink )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    p_m_TransactionLink->Blink = p_m_TransactionLink;
    p_m_TransactionLink->Flink = p_m_TransactionLink;
    Entry->m_Transaction = FxTransactionActionNothing;
  }
  else if ( this->m_ListLockedRecursionCount )
  {
    Entry->m_Transaction = FxTransactionActionRemove;
    v9 = &Entry->m_TransactionLink;
    v10 = this->m_TransactionHead.Blink;
    p_m_TransactionHead = &this->m_TransactionHead;
    v9->Flink = p_m_TransactionHead;
    v9->Blink = v10;
    if ( v10->Flink != p_m_TransactionHead )
      __fastfail(3u);
    v10->Flink = v9;
    p_m_TransactionHead->Blink = v9;
    FxObject::AddRef(
      Entry->m_TransactionedObject,
      Entry,
      423,
      "minkernel\\wdf\\framework\\shared\\support\\fxtransactionedlist.cpp");
  }
  else
  {
    v7 = Entry->m_ListLink.Flink;
    v8 = Entry->m_ListLink.Blink;
    if ( (FxTransactionedEntry *)v7->Blink != Entry || (FxTransactionedEntry *)v8->Flink != Entry )
      __fastfail(3u);
    v8->Flink = v7;
    v7->Blink = v8;
    Entry->m_ListLink.Blink = &Entry->m_ListLink;
    Entry->m_ListLink.Flink = &Entry->m_ListLink;
    this->EntryRemoved(this, Entry);
    return 1;
  }
  return v2;
}
