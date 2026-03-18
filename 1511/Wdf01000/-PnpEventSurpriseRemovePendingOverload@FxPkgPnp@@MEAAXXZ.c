/*
 * XREFs of ?PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ @ 0x1C0085950
 * Callers:
 *     ?PnpEventSurpriseRemovePendingOverload@FxPkgPdo@@EEAAXXZ @ 0x1C00846F0 (-PnpEventSurpriseRemovePendingOverload@FxPkgPdo@@EEAAXXZ.c)
 * Callees:
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00273F0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0027498 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C00274E0 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x1C005FF80 (-NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PnpEventSurpriseRemovePendingOverload(FxPkgPnp *this)
{
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxTransactionedEntry *v3; // rdi
  FxTransactionedEntry *NextEntryLocked; // rax

  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo )
  {
    FxTransactionedList::LockForEnum(&m_EnumInfo->m_ChildListList, this->m_Globals);
    v3 = 0LL;
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(&this->m_EnumInfo->m_ChildListList, v3);
      v3 = NextEntryLocked;
      if ( !NextEntryLocked )
        break;
      FxChildList::NotifyDeviceSurpriseRemove((FxChildList *)&NextEntryLocked[-3].m_TransactionLink.Blink);
    }
    FxTransactionedList::UnlockFromEnum(&this->m_EnumInfo->m_ChildListList, this->m_Globals);
  }
}
