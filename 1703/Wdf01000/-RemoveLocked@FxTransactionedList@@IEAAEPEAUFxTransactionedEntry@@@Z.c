/*
 * XREFs of ?RemoveLocked@FxTransactionedList@@IEAAEPEAUFxTransactionedEntry@@@Z @ 0x1C002CC44
 * Callers:
 *     ?Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C002CAE0 (-Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 *     ?SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0085A7C (-SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001CE64 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 */

char __fastcall FxTransactionedList::RemoveLocked(FxTransactionedList *this, FxTransactionedEntry *Entry)
{
  char v2; // bl
  _LIST_ENTRY *v5; // rcx
  _LIST_ENTRY *v6; // rax
  _LIST_ENTRY *p_m_TransactionLink; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *p_m_TransactionHead; // rax
  _LIST_ENTRY *v12; // rcx
  _LIST_ENTRY *v13; // rdx

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
    v12 = &Entry->m_TransactionLink;
    v13 = this->m_TransactionHead.Blink;
    if ( v13->Flink != &this->m_TransactionHead )
      __fastfail(3u);
    v12->Blink = v13;
    v12->Flink = p_m_TransactionHead;
    v13->Flink = v12;
    p_m_TransactionHead->Blink = v12;
    FxObject::AddRef(
      Entry->m_TransactionedObject,
      Entry,
      423,
      "minkernel\\wdf\\framework\\shared\\support\\fxtransactionedlist.cpp");
  }
  else
  {
    v5 = Entry->m_ListLink.Flink;
    v6 = Entry->m_ListLink.Blink;
    if ( (FxTransactionedEntry *)Entry->m_ListLink.Flink->Blink != Entry || (FxTransactionedEntry *)v6->Flink != Entry )
      __fastfail(3u);
    v6->Flink = v5;
    v5->Blink = v6;
    Entry->m_ListLink.Blink = &Entry->m_ListLink;
    Entry->m_ListLink.Flink = &Entry->m_ListLink;
    ((void (__fastcall *)(FxTransactionedList *))this->EntryRemoved)(this);
    return 1;
  }
  return v2;
}
