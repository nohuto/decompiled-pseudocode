/*
 * XREFs of ?PowerD0StartingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0025E30
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00273F0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0027498 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C00274E0 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?PowerUp@FxDmaEnabler@@QEAAJXZ @ 0x1C0029A80 (-PowerUp@FxDmaEnabler@@QEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerD0StartingDmaEnable(FxPkgPnp *This)
{
  FxSpinLockTransactionedList *m_DmaEnablerList; // rcx
  char v3; // di
  FxEnumerationInfo *m_EnumInfo; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxWaitLockTransactionedList_vtbl *v6; // rax
  __int64 v7; // r8
  _LIST_ENTRY *v8; // rbx
  FxEnumerationInfo *v9; // rax
  _LIST_ENTRY *p_m_ListHead; // rax
  _LIST_ENTRY *Blink; // rax
  unsigned __int64 v12; // rcx
  _LIST_ENTRY *Flink; // rax
  FxTransactionedEntry *v15; // rbx
  FxTransactionedEntry *NextEntryLocked; // rax
  char v17; // [rsp+30h] [rbp+8h] BYREF

  m_DmaEnablerList = This->m_DmaEnablerList;
  v3 = 1;
  if ( m_DmaEnablerList )
  {
    FxTransactionedList::LockForEnum(m_DmaEnablerList, This->m_Globals);
    v15 = 0LL;
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(This->m_DmaEnablerList, v15);
      v15 = NextEntryLocked;
      if ( !NextEntryLocked )
        break;
      if ( FxDmaEnabler::PowerUp((FxDmaEnabler *)NextEntryLocked->m_TransactionedObject) < 0 )
      {
        v3 = 0;
        break;
      }
    }
    FxTransactionedList::UnlockFromEnum(This->m_DmaEnablerList, This->m_Globals);
    if ( !v3 )
      return 834LL;
  }
  m_EnumInfo = This->m_EnumInfo;
  if ( m_EnumInfo )
  {
    m_Globals = This->m_Globals;
    m_EnumInfo->m_ChildListList.AcquireLock(&m_EnumInfo->m_ChildListList, m_Globals, (unsigned __int8 *)&v17);
    v6 = m_EnumInfo->m_ChildListList.__vftable;
    ++m_EnumInfo->m_ChildListList.m_ListLockedRecursionCount;
    LOBYTE(v7) = v17;
    v6->ReleaseLock(&m_EnumInfo->m_ChildListList, m_Globals, v7);
    v8 = 0LL;
    while ( 1 )
    {
      v9 = This->m_EnumInfo;
      v8 = v8 ? v8->Flink : v9->m_ChildListList.m_ListHead.Flink;
      p_m_ListHead = &v9->m_ChildListList.m_ListHead;
      while ( v8 != p_m_ListHead )
      {
        if ( LODWORD(v8[2].Flink) == 1 )
          goto LABEL_9;
        v8 = v8->Flink;
      }
      v8 = 0LL;
LABEL_9:
      if ( !v8 )
        break;
      Blink = v8[2].Blink;
      if ( WORD1(Blink->Blink) )
        v12 = (unsigned __int64)Blink ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v12 = 0LL;
      Flink = Blink[12].Flink;
      if ( Flink )
        ((void (__fastcall *)(unsigned __int64))Flink)(v12);
    }
    FxTransactionedList::UnlockFromEnum(&This->m_EnumInfo->m_ChildListList, This->m_Globals);
  }
  return 786LL;
}
