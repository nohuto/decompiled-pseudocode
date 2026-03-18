/*
 * XREFs of ?AllocateDmaEnablerList@FxPkgPnp@@QEAAJXZ @ 0x1C0018170
 * Callers:
 *     ?AllocateDmaEnablerList@FxDevice@@UEAAJXZ @ 0x1C001BFD0 (-AllocateDmaEnablerList@FxDevice@@UEAAJXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 */

__int64 __fastcall FxPkgPnp::AllocateDmaEnablerList(FxPkgPnp *this, __int64 a2, unsigned __int8 a3)
{
  unsigned int v3; // ebx
  unsigned __int8 v5; // r8
  FxSpinLockTransactionedList *v6; // rax
  FxSpinLockTransactionedList *v7; // rcx
  _LIST_ENTRY *p_m_ListHead; // rax
  void *Caller; // [rsp+38h] [rbp+0h]
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( this->m_DmaEnablerList )
    return 0LL;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( !this->m_DmaEnablerList )
  {
    v6 = (FxSpinLockTransactionedList *)FxPoolAllocator(
                                          this->m_Globals,
                                          &this->m_Globals->FxPoolFrameworks,
                                          ExDefaultNonPagedPoolType,
                                          0x48uLL,
                                          this->m_Globals->Tag,
                                          Caller);
    v7 = v6;
    if ( v6 )
    {
      v6->m_ListLockedRecursionCount = 0;
      *(_WORD *)&v6->m_DeleteOnRemove = 0;
      v6->m_Retries = 0;
      v6->m_DeletingDoneEvent = 0LL;
      p_m_ListHead = &v6->m_ListHead;
      p_m_ListHead->Blink = p_m_ListHead;
      p_m_ListHead->Flink = p_m_ListHead;
      v7->m_TransactionHead.Blink = &v7->m_TransactionHead;
      v7->m_TransactionHead.Flink = &v7->m_TransactionHead;
      v7->__vftable = (FxSpinLockTransactionedList_vtbl *)&FxSpinLockTransactionedList::`vftable';
      v7->m_ListLock.m_Lock = 0LL;
      v7->m_ListLock.m_DbgFlagIsInitialized = 1;
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
      this->m_DmaEnablerList = v7;
    else
      v3 = -1073741670;
  }
  FxNonPagedObject::Unlock(this, irql, v5);
  return v3;
}
