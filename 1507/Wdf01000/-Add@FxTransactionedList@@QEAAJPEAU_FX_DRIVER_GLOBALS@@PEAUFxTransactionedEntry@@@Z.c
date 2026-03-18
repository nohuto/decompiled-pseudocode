/*
 * XREFs of ?Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C001E12C
 * Callers:
 *     ?AddDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z @ 0x1C000E810 (-AddDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z.c)
 *     ?AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0099170 (-AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C009CCAC (-AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C009CE6C (-AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxTransactionedList::Add(
        FxTransactionedList *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxTransactionedEntry *Entry)
{
  __int64 v6; // r8
  int v7; // esi
  _LIST_ENTRY *v8; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *p_m_TransactionLink; // rdi
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  this->AcquireLock(this, FxDriverGlobals, &irql);
  if ( this->m_Deleting )
  {
    v7 = -1073741436;
  }
  else
  {
    v7 = this->ProcessAdd(this, Entry);
    if ( v7 >= 0 )
    {
      if ( this->m_ListLockedRecursionCount )
      {
        Entry->m_Transaction = FxTransactionActionAdd;
        Blink = this->m_TransactionHead.Blink;
        p_m_TransactionLink = &Entry->m_TransactionLink;
        p_m_TransactionLink->Flink = &this->m_TransactionHead;
        p_m_TransactionLink->Blink = Blink;
        if ( Blink->Flink != &this->m_TransactionHead )
          __fastfail(3u);
        Blink->Flink = p_m_TransactionLink;
        this->m_TransactionHead.Blink = p_m_TransactionLink;
      }
      else
      {
        v8 = this->m_ListHead.Blink;
        Entry->m_ListLink.Flink = &this->m_ListHead;
        Entry->m_ListLink.Blink = v8;
        if ( v8->Flink != &this->m_ListHead )
          __fastfail(3u);
        v8->Flink = &Entry->m_ListLink;
        this->m_ListHead.Blink = &Entry->m_ListLink;
        this->EntryAdded(this, Entry);
      }
    }
  }
  LOBYTE(v6) = irql;
  this->ReleaseLock(this, FxDriverGlobals, v6);
  return (unsigned int)v7;
}
