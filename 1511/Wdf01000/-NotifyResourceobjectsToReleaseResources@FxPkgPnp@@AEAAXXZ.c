/*
 * XREFs of ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x1C0088928
 * Callers:
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C0084A4C (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     ?PnpEventStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0085860 (-PnpEventStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00273F0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0027498 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C00274E0 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     memset @ 0x1C0036C40 (memset.c)
 */

void __fastcall FxPkgPnp::NotifyResourceobjectsToReleaseResources(FxPkgPnp *this)
{
  _LIST_ENTRY *p_m_InterruptListHead; // r15
  _LIST_ENTRY *i; // r14
  int Flink_high; // edi
  FxSpinLockTransactionedList *m_DmaEnablerList; // rcx
  FxSpinLockTransactionedList *v6; // r8
  FxTransactionedEntry *NextEntryLocked; // rdx

  p_m_InterruptListHead = &this->m_InterruptListHead;
  for ( i = this->m_InterruptListHead.Flink; i != p_m_InterruptListHead; i = i->Flink )
  {
    Flink_high = HIDWORD(i[-4].Flink);
    memset(&i[-6].Blink, 0, 0x40uLL);
    LODWORD(i[-6].Blink) = 64;
    i[-2].Blink = 0LL;
    HIDWORD(i[-4].Flink) = Flink_high;
  }
  m_DmaEnablerList = this->m_DmaEnablerList;
  if ( m_DmaEnablerList )
  {
    FxTransactionedList::LockForEnum(m_DmaEnablerList, this->m_Globals);
    v6 = this->m_DmaEnablerList;
    NextEntryLocked = 0LL;
    do
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(v6, NextEntryLocked);
    while ( NextEntryLocked );
    FxTransactionedList::UnlockFromEnum(v6, this->m_Globals);
  }
}
