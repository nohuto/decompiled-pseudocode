/*
 * XREFs of ?Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C0080A08
 * Callers:
 *     ?RemoveIoTarget@FxDevice@@UEAAXPEAVFxIoTarget@@@Z @ 0x1C0076A50 (-RemoveIoTarget@FxDevice@@UEAAXPEAVFxIoTarget@@@Z.c)
 *     ?RemoveChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z @ 0x1C009E7DC (-RemoveChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z.c)
 *     ?RemoveDmaEnabler@FxPkgPnp@@QEAAXPEAVFxDmaEnabler@@@Z @ 0x1C009F914 (-RemoveDmaEnabler@FxPkgPnp@@QEAAXPEAVFxDmaEnabler@@@Z.c)
 * Callees:
 *     ?RemoveLocked@FxTransactionedList@@IEAAEPEAUFxTransactionedEntry@@@Z @ 0x1C0080A8C (-RemoveLocked@FxTransactionedList@@IEAAEPEAUFxTransactionedEntry@@@Z.c)
 */

void __fastcall FxTransactionedList::Remove(
        FxTransactionedList *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxTransactionedEntry *Entry)
{
  unsigned __int8 v6; // bl
  __int64 v7; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  this->AcquireLock(this, FxDriverGlobals, &irql);
  v6 = FxTransactionedList::RemoveLocked(this, Entry);
  LOBYTE(v7) = irql;
  this->ReleaseLock(this, FxDriverGlobals, v7);
  if ( v6 )
  {
    if ( this->m_DeleteOnRemove )
      Entry->m_TransactionedObject->DeleteObject(Entry->m_TransactionedObject);
  }
}
