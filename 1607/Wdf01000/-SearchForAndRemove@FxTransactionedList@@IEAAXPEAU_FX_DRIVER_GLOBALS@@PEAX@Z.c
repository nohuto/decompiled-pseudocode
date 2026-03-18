/*
 * XREFs of ?SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C008161C
 * Callers:
 *     imp_WdfPdoRemoveEjectionRelationsPhysicalDevice @ 0x1C006C9F0 (imp_WdfPdoRemoveEjectionRelationsPhysicalDevice.c)
 *     imp_WdfDeviceClearRemovalRelationsDevices @ 0x1C0074320 (imp_WdfDeviceClearRemovalRelationsDevices.c)
 *     imp_WdfDeviceRemoveDependentUsageDeviceObject @ 0x1C0074550 (imp_WdfDeviceRemoveDependentUsageDeviceObject.c)
 *     imp_WdfDeviceRemoveRemovalRelationsPhysicalDevice @ 0x1C00745C0 (imp_WdfDeviceRemoveRemovalRelationsPhysicalDevice.c)
 *     ?ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ @ 0x1C00921F8 (-ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ.c)
 * Callees:
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C0022A68 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?RemoveLocked@FxTransactionedList@@IEAAEPEAUFxTransactionedEntry@@@Z @ 0x1C0081540 (-RemoveLocked@FxTransactionedList@@IEAAEPEAUFxTransactionedEntry@@@Z.c)
 */

void __fastcall FxTransactionedList::SearchForAndRemove(
        FxTransactionedList *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        void *EntryData)
{
  char v4; // bp
  _LIST_ENTRY *i; // rsi
  FxTransactionedEntry *v8; // rbx
  __int64 v9; // r8
  FxTransactionedEntry *NextEntryLocked; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY **p_Flink; // rcx
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  this->AcquireLock(this, FxDriverGlobals, &irql);
  for ( i = this->m_TransactionHead.Flink; i != &this->m_TransactionHead; i = i->Flink )
  {
    v8 = (FxTransactionedEntry *)&i[-1];
    if ( this->Compare(this, (FxTransactionedEntry *)&i[-1], EntryData) )
    {
      if ( v8->m_Transaction == FxTransactionActionAdd )
      {
        Flink = i->Flink;
        p_Flink = &v8->m_TransactionLink.Blink->Flink;
        if ( i->Flink->Blink != i || *p_Flink != i )
          __fastfail(3u);
        *p_Flink = Flink;
        v4 = 1;
        Flink->Blink = (_LIST_ENTRY *)p_Flink;
        i->Blink = i;
        i->Flink = i;
      }
      goto $Done_48;
    }
  }
  v8 = 0LL;
  while ( 1 )
  {
    NextEntryLocked = FxTransactionedList::GetNextEntryLocked(this, v8);
    v8 = NextEntryLocked;
    if ( !NextEntryLocked )
      break;
    if ( this->Compare(this, NextEntryLocked, EntryData) )
    {
      v4 = FxTransactionedList::RemoveLocked(this, v8);
      break;
    }
  }
$Done_48:
  LOBYTE(v9) = irql;
  this->ReleaseLock(this, FxDriverGlobals, v9);
  if ( v4 )
  {
    if ( this->m_DeleteOnRemove )
      v8->m_TransactionedObject->DeleteObject(v8->m_TransactionedObject);
  }
}
