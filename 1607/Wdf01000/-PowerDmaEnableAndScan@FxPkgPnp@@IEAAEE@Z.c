/*
 * XREFs of ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z @ 0x1C0012F94
 * Callers:
 *     ?PowerWakingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0012CB0 (-PowerWakingDmaEnable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingDmaEnableNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0095E40 (-PowerWakingDmaEnableNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0022838 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0022880 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C0022A68 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0025E40 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?PowerUp@FxDmaEnabler@@QEAAJXZ @ 0x1C002FB68 (-PowerUp@FxDmaEnabler@@QEAAJXZ.c)
 */

unsigned __int8 __fastcall FxPkgPnp::PowerDmaEnableAndScan(FxPkgPnp *this, unsigned __int8 ImplicitPowerUp)
{
  FxSpinLockTransactionedList *m_DmaEnablerList; // rcx
  char v5; // si
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxTransactionedEntry *v7; // rdi
  FxTransactionedEntry *v8; // rax
  FxObject *m_TransactionedObject; // rax
  unsigned __int64 v10; // rcx
  _SINGLE_LIST_ENTRY *Next; // rax
  FxTransactionedEntry *v13; // rdi
  FxTransactionedEntry *NextEntryLocked; // rax

  m_DmaEnablerList = this->m_DmaEnablerList;
  v5 = 1;
  if ( m_DmaEnablerList )
  {
    FxTransactionedList::LockForEnum(m_DmaEnablerList, this->m_Globals);
    v13 = 0LL;
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(this->m_DmaEnablerList, v13);
      v13 = NextEntryLocked;
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
    v7 = 0LL;
    while ( 1 )
    {
      v8 = FxTransactionedList::GetNextEntryLocked(&this->m_EnumInfo->m_ChildListList, v7);
      v7 = v8;
      if ( !v8 )
        break;
      m_TransactionedObject = v8->m_TransactionedObject;
      if ( m_TransactionedObject->m_ObjectSize )
        v10 = (unsigned __int64)m_TransactionedObject ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v10 = 0LL;
      Next = m_TransactionedObject[1].m_DisposeSingleEntry.Next;
      if ( Next )
        ((void (__fastcall *)(unsigned __int64))Next)(v10);
    }
    FxTransactionedList::UnlockFromEnum(&this->m_EnumInfo->m_ChildListList, this->m_Globals);
  }
  if ( !ImplicitPowerUp )
    FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolPowerUpHwStarted, 0);
  return 1;
}
