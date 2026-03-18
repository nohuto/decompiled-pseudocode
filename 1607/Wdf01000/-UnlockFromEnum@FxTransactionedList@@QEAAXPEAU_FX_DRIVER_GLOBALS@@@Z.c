/*
 * XREFs of ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0022880
 * Callers:
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z @ 0x1C0012F94 (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x1C001F684 (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     ?PowerPolStartingDecideS0Wake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0021490 (-PowerPolStartingDecideS0Wake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C00255F0 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0027610 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerD0StartingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0034100 (-PowerD0StartingDmaEnable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x1C00626E8 (-PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ.c)
 *     imp_WdfDeviceClearRemovalRelationsDevices @ 0x1C0074320 (imp_WdfDeviceClearRemovalRelationsDevices.c)
 *     ?ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ @ 0x1C00921F8 (-ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ.c)
 *     ?PnpEventRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00932E0 (-PnpEventRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ @ 0x1C0093710 (-PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C0096D00 (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x1C0097014 (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C00970C0 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x1C009AC84 (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxTransactionedList::UnlockFromEnum(FxTransactionedList *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  MxEvent *m_DeletingDoneEvent; // rsi
  void (__fastcall *AcquireLock)(FxTransactionedList *, _FX_DRIVER_GLOBALS *, unsigned __int8 *); // rax
  _LIST_ENTRY *p_m_TransactionHead; // rdi
  void (__fastcall *ReleaseLock)(FxTransactionedList *, _FX_DRIVER_GLOBALS *, unsigned __int8); // rax
  _LIST_ENTRY *v9; // rax
  _LIST_ENTRY *Flink; // r14
  _LIST_ENTRY *v11; // rax
  _LIST_ENTRY *v12; // r14
  int v13; // eax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v15; // rcx
  _LIST_ENTRY *v16; // rax
  _LIST_ENTRY *v17; // rax
  _LIST_ENTRY *v18; // rcx
  _LIST_ENTRY *v19; // rcx
  _LIST_ENTRY *v20; // rdi
  _LIST_ENTRY releaseHead; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  releaseHead.Blink = &releaseHead;
  releaseHead.Flink = &releaseHead;
  m_DeletingDoneEvent = 0LL;
  AcquireLock = this->AcquireLock;
  if ( (char *)AcquireLock == (char *)FxWaitLockTransactionedList::AcquireLock )
  {
    KeEnterCriticalRegion();
    if ( KeWaitForSingleObject(&this[1], Executive, 0, 0, 0LL) == 258 )
      KeLeaveCriticalRegion();
    else
      this[1].m_TransactionHead.Blink = (_LIST_ENTRY *)KeGetCurrentThread();
  }
  else
  {
    AcquireLock(this, FxDriverGlobals, &irql);
  }
  if ( this->m_ListLockedRecursionCount-- == 1 )
  {
    p_m_TransactionHead = &this->m_TransactionHead;
    while ( p_m_TransactionHead->Flink != p_m_TransactionHead )
    {
      Flink = p_m_TransactionHead->Flink;
      v11 = p_m_TransactionHead->Flink->Flink;
      if ( p_m_TransactionHead->Flink->Blink != p_m_TransactionHead || v11->Blink != Flink )
        __fastfail(3u);
      p_m_TransactionHead->Flink = v11;
      v11->Blink = p_m_TransactionHead;
      Flink->Blink = Flink;
      Flink->Flink = Flink;
      v12 = Flink - 1;
      v13 = (int)v12[2].Flink;
      if ( v13 == 2 )
      {
        Blink = this->m_ListHead.Blink;
        if ( Blink->Flink != &this->m_ListHead )
          __fastfail(3u);
        v12->Flink = &this->m_ListHead;
        v12->Blink = Blink;
        Blink->Flink = v12;
        this->m_ListHead.Blink = v12;
        this->EntryAdded(this, (FxTransactionedEntry *)v12);
      }
      else if ( v13 == 3 )
      {
        v15 = v12->Flink;
        v16 = v12->Blink;
        if ( v12->Flink->Blink != v12 || v16->Flink != v12 )
          __fastfail(3u);
        v16->Flink = v15;
        v15->Blink = v16;
        v17 = v12 + 1;
        v18 = releaseHead.Blink;
        if ( releaseHead.Blink->Flink != &releaseHead )
          __fastfail(3u);
        v12[1].Blink = releaseHead.Blink;
        v17->Flink = &releaseHead;
        v18->Flink = v17;
        releaseHead.Blink = v12 + 1;
        this->EntryRemoved(this, (FxTransactionedEntry *)v12);
      }
      LODWORD(v12[2].Flink) = 1;
    }
  }
  if ( !this->m_ListLockedRecursionCount && this->m_Deleting )
  {
    m_DeletingDoneEvent = this->m_DeletingDoneEvent;
    this->m_DeletingDoneEvent = 0LL;
  }
  ReleaseLock = this->ReleaseLock;
  if ( (char *)ReleaseLock == (char *)FxWaitLockTransactionedList::ReleaseLock )
  {
    this[1].m_TransactionHead.Blink = 0LL;
    KeSetEvent((PRKEVENT)&this[1], 0, 0);
    KeLeaveCriticalRegion();
  }
  else
  {
    ReleaseLock(this, FxDriverGlobals, irql);
  }
  while ( 1 )
  {
    v9 = releaseHead.Flink;
    if ( releaseHead.Flink == &releaseHead )
      break;
    v19 = releaseHead.Flink->Flink;
    if ( releaseHead.Flink->Blink != &releaseHead || v19->Blink != releaseHead.Flink )
      __fastfail(3u);
    releaseHead.Flink = releaseHead.Flink->Flink;
    v20 = v9 - 1;
    v19->Blink = &releaseHead;
    v9->Blink = v9;
    v9->Flink = v9;
    ((void (__fastcall *)(_LIST_ENTRY *, _LIST_ENTRY *, __int64, const char *))v9[1].Blink->Flink[1].Flink)(
      v9[1].Blink,
      &v9[-1],
      226LL,
      "minkernel\\wdf\\framework\\shared\\support\\fxtransactionedlist.cpp");
    if ( this->m_DeleteOnRemove )
      ((void (__fastcall *)(_LIST_ENTRY *))v20[2].Blink->Flink[3].Flink)(v20[2].Blink);
  }
  if ( m_DeletingDoneEvent )
    KeSetEvent(&m_DeletingDoneEvent->m_Event, 0, 0);
}
