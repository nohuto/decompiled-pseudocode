/*
 * XREFs of ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z @ 0x1C00066DC
 * Callers:
 *     ?PowerWakingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00063E0 (-PowerWakingDmaEnable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingDmaEnableNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C950 (-PowerWakingDmaEnableNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?PowerUp@FxDmaEnabler@@QEAAJXZ @ 0x1C00091E0 (-PowerUp@FxDmaEnabler@@QEAAJXZ.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0019D10 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001E1F0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001E298 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C001E2E0 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 */

unsigned __int8 __fastcall FxPkgPnp::PowerDmaEnableAndScan(
        FxPkgPnp *this,
        unsigned __int8 ImplicitPowerUp,
        unsigned __int8 a3)
{
  FxSpinLockTransactionedList *m_DmaEnablerList; // rcx
  char v6; // si
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxTransactionedEntry *v8; // rdi
  FxTransactionedEntry *v9; // rax
  FxObject *m_TransactionedObject; // rax
  unsigned __int64 v11; // rcx
  _SINGLE_LIST_ENTRY *Next; // rax
  FxTransactionedEntry *v14; // rdi
  FxTransactionedEntry *NextEntryLocked; // rax

  m_DmaEnablerList = this->m_DmaEnablerList;
  v6 = 1;
  if ( m_DmaEnablerList )
  {
    FxTransactionedList::LockForEnum(m_DmaEnablerList, this->m_Globals);
    v14 = 0LL;
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(this->m_DmaEnablerList, v14);
      v14 = NextEntryLocked;
      if ( !NextEntryLocked )
        break;
      if ( FxDmaEnabler::PowerUp((FxDmaEnabler *)NextEntryLocked->m_TransactionedObject) < 0 )
      {
        v6 = 0;
        break;
      }
    }
    FxTransactionedList::UnlockFromEnum(this->m_DmaEnablerList, this->m_Globals);
    if ( !v6 )
      return 0;
  }
  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo )
  {
    FxTransactionedList::LockForEnum(&m_EnumInfo->m_ChildListList, this->m_Globals);
    v8 = 0LL;
    while ( 1 )
    {
      v9 = FxTransactionedList::GetNextEntryLocked(&this->m_EnumInfo->m_ChildListList, v8);
      v8 = v9;
      if ( !v9 )
        break;
      m_TransactionedObject = v9->m_TransactionedObject;
      if ( m_TransactionedObject->m_ObjectSize )
        v11 = (unsigned __int64)m_TransactionedObject ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v11 = 0LL;
      Next = m_TransactionedObject[1].m_DisposeSingleEntry.Next;
      if ( Next )
        ((void (__fastcall *)(unsigned __int64))Next)(v11);
    }
    FxTransactionedList::UnlockFromEnum(&this->m_EnumInfo->m_ChildListList, this->m_Globals);
  }
  if ( !ImplicitPowerUp )
    FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolPowerUpHwStarted, a3);
  return 1;
}
