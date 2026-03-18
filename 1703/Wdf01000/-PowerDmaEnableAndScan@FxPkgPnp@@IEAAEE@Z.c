/*
 * XREFs of ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z @ 0x1C001322C
 * Callers:
 *     ?PowerWakingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0012EB0 (-PowerWakingDmaEnable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingDmaEnableNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009A360 (-PowerWakingDmaEnableNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0025590 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002C9CC (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002CB5C (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C002CC18 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?PowerUp@FxDmaEnabler@@QEAAJXZ @ 0x1C0035DA0 (-PowerUp@FxDmaEnabler@@QEAAJXZ.c)
 */

unsigned __int8 __fastcall FxPkgPnp::PowerDmaEnableAndScan(FxPkgPnp *this, unsigned __int8 ImplicitPowerUp)
{
  FxSpinLockTransactionedList *m_DmaEnablerList; // rcx
  char v5; // si
  FxEnumerationInfo *m_EnumInfo; // rcx
  _LIST_ENTRY *p_m_ListHead; // rbx
  FxEnumerationInfo *v8; // rax
  _LIST_ENTRY *v9; // rax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *Flink; // rax
  __int16 v12; // dx
  unsigned __int64 v13; // rcx
  FxTransactionedEntry *v15; // rbx
  FxTransactionedEntry *NextEntryLocked; // rax

  m_DmaEnablerList = this->m_DmaEnablerList;
  v5 = 1;
  if ( m_DmaEnablerList )
  {
    FxTransactionedList::LockForEnum(m_DmaEnablerList, this->m_Globals);
    v15 = 0LL;
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(this->m_DmaEnablerList, v15);
      v15 = NextEntryLocked;
      if ( !NextEntryLocked )
        break;
      if ( FxDmaEnabler::PowerUp((FxDmaEnabler *)NextEntryLocked->m_TransactionedObject) < 0 )
      {
        v5 = 0;
        break;
      }
    }
    FxTransactionedList::UnlockFromEnum(this->m_DmaEnablerList, this->m_Globals);
    if ( !v5 )
      return 0;
  }
  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo )
  {
    FxTransactionedList::LockForEnum(&m_EnumInfo->m_ChildListList, this->m_Globals);
    p_m_ListHead = 0LL;
    while ( 1 )
    {
      v8 = this->m_EnumInfo;
      if ( !p_m_ListHead )
        p_m_ListHead = &v8->m_ChildListList.m_ListHead;
      v9 = &v8->m_ChildListList.m_ListHead;
      while ( 1 )
      {
        p_m_ListHead = p_m_ListHead->Flink;
        if ( p_m_ListHead == v9 )
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
      v12 = WORD1(Blink->Blink);
      if ( Flink )
      {
        v13 = (unsigned __int64)Blink ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !v12 )
          v13 = 0LL;
        ((void (__fastcall *)(unsigned __int64))Flink)(v13);
      }
    }
    FxTransactionedList::UnlockFromEnum(&this->m_EnumInfo->m_ChildListList, this->m_Globals);
  }
  if ( !ImplicitPowerUp )
    FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolPowerUpHwStarted, 0);
  return 1;
}
