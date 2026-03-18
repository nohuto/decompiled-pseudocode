/*
 * XREFs of ?PowerD0StartingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C002C520
 * Callers:
 *     <none>
 * Callees:
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002C9CC (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002CB5C (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C002CC18 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?PowerUp@FxDmaEnabler@@QEAAJXZ @ 0x1C0035DA0 (-PowerUp@FxDmaEnabler@@QEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerD0StartingDmaEnable(FxPkgPnp *This)
{
  FxSpinLockTransactionedList *m_DmaEnablerList; // rcx
  char v3; // di
  FxEnumerationInfo *m_EnumInfo; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxWaitLockTransactionedList_vtbl *v6; // rax
  __int64 v7; // r8
  _LIST_ENTRY *p_m_ListHead; // rbx
  FxEnumerationInfo *v9; // rax
  _LIST_ENTRY *v10; // rax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *Flink; // rax
  __int16 v13; // dx
  unsigned __int64 v14; // rcx
  FxTransactionedEntry *v16; // rbx
  FxTransactionedEntry *NextEntryLocked; // rax
  char v18; // [rsp+30h] [rbp+8h] BYREF

  m_DmaEnablerList = This->m_DmaEnablerList;
  v3 = 1;
  if ( m_DmaEnablerList )
  {
    FxTransactionedList::LockForEnum(m_DmaEnablerList, This->m_Globals);
    v16 = 0LL;
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(This->m_DmaEnablerList, v16);
      v16 = NextEntryLocked;
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
    m_EnumInfo->m_ChildListList.AcquireLock(&m_EnumInfo->m_ChildListList, m_Globals, (unsigned __int8 *)&v18);
    v6 = m_EnumInfo->m_ChildListList.__vftable;
    ++m_EnumInfo->m_ChildListList.m_ListLockedRecursionCount;
    LOBYTE(v7) = v18;
    v6->ReleaseLock(&m_EnumInfo->m_ChildListList, m_Globals, v7);
    p_m_ListHead = 0LL;
    while ( 1 )
    {
      v9 = This->m_EnumInfo;
      if ( !p_m_ListHead )
        p_m_ListHead = &v9->m_ChildListList.m_ListHead;
      v10 = &v9->m_ChildListList.m_ListHead;
      while ( 1 )
      {
        p_m_ListHead = p_m_ListHead->Flink;
        if ( p_m_ListHead == v10 )
          break;
        if ( LODWORD(p_m_ListHead[2].Flink) == 1 )
          goto LABEL_9;
      }
      p_m_ListHead = 0LL;
LABEL_9:
      if ( !p_m_ListHead )
        break;
      Blink = p_m_ListHead[2].Blink;
      Flink = Blink[12].Flink;
      v13 = WORD1(Blink->Blink);
      if ( Flink )
      {
        v14 = (unsigned __int64)Blink ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !v13 )
          v14 = 0LL;
        ((void (__fastcall *)(unsigned __int64))Flink)(v14);
      }
    }
    FxTransactionedList::UnlockFromEnum(&This->m_EnumInfo->m_ChildListList, This->m_Globals);
  }
  return 786LL;
}
