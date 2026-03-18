/*
 * XREFs of ?RemoveLocked@FxTransactionedList@@IEAAEPEAUFxTransactionedEntry@@@Z @ 0x1C0081540
 * Callers:
 *     ?Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C00814BC (-Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 *     ?SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C008161C (-SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C001C1A0 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 */

char __fastcall FxTransactionedList::RemoveLocked(FxTransactionedList *this, FxTransactionedEntry *Entry)
{
  char v2; // bl
  _LIST_ENTRY *p_m_TransactionLink; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v8; // rcx
  _LIST_ENTRY *v9; // rax
  _LIST_ENTRY *p_m_TransactionHead; // rax
  _LIST_ENTRY *v11; // rcx
  _LIST_ENTRY *v12; // rdx

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
    p_m_TransactionHead = &this->m_TransactionHead;
    Entry->m_Transaction = FxTransactionActionRemove;
    v11 = &Entry->m_TransactionLink;
    v12 = this->m_TransactionHead.Blink;
    if ( v12->Flink != &this->m_TransactionHead )
      __fastfail(3u);
    v11->Blink = v12;
    v11->Flink = p_m_TransactionHead;
    v12->Flink = v11;
    p_m_TransactionHead->Blink = v11;
    FxObject::AddRef(
      Entry->m_TransactionedObject,
      Entry,
      423,
      "minkernel\\wdf\\framework\\shared\\support\\fxtransactionedlist.cpp");
  }
  else
  {
    v8 = Entry->m_ListLink.Flink;
    v9 = Entry->m_ListLink.Blink;
    if ( (FxTransactionedEntry *)Entry->m_ListLink.Flink->Blink != Entry || (FxTransactionedEntry *)v9->Flink != Entry )
      __fastfail(3u);
    v9->Flink = v8;
    v8->Blink = v9;
    Entry->m_ListLink.Blink = &Entry->m_ListLink;
    Entry->m_ListLink.Flink = &Entry->m_ListLink;
    ((void (__fastcall *)(FxTransactionedList *))this->EntryRemoved)(this);
    return 1;
  }
  return v2;
}
