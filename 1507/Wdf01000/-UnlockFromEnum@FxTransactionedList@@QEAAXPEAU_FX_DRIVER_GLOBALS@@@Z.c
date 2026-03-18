/*
 * XREFs of ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001E1F0
 * Callers:
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z @ 0x1C00066DC (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x1C000E628 (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C0019618 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C001C080 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerPolStartingDecideS0Wake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C001E420 (-PowerPolStartingDecideS0Wake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerD0StartingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C001E750 (-PowerD0StartingDmaEnable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x1C005BAE4 (-PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ.c)
 *     imp_WdfDeviceClearRemovalRelationsDevices @ 0x1C006C720 (imp_WdfDeviceClearRemovalRelationsDevices.c)
 *     ?ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ @ 0x1C0099368 (-ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ.c)
 *     ?PnpEventRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C009A630 (-PnpEventRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ @ 0x1C009AB00 (-PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C009D8D0 (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x1C009DBD8 (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C009DC84 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerPolSleepingWakeRevertArmWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0660 (-PowerPolSleepingWakeRevertArmWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeRevertArmWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A07A0 (-PowerPolSleepingWakeRevertArmWakeNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemWakeDeviceWakeDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0FC0 (-PowerPolSystemWakeDeviceWakeDisarm@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemWakeDeviceWokeDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A11F0 (-PowerPolSystemWakeDeviceWokeDisarm@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxTransactionedList::UnlockFromEnum(FxTransactionedList *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  MxEvent *m_DeletingDoneEvent; // rsi
  _LIST_ENTRY *p_m_TransactionHead; // rdi
  _LIST_ENTRY *v7; // rax
  _LIST_ENTRY *Flink; // r14
  _LIST_ENTRY *v9; // rax
  _LIST_ENTRY *v10; // r14
  int v11; // eax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v13; // rcx
  _LIST_ENTRY *v14; // rax
  _LIST_ENTRY *v15; // rcx
  _LIST_ENTRY *v16; // rcx
  _LIST_ENTRY *v17; // rdi
  _LIST_ENTRY releaseHead; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  releaseHead.Blink = &releaseHead;
  releaseHead.Flink = &releaseHead;
  m_DeletingDoneEvent = 0LL;
  this->AcquireLock(this, FxDriverGlobals, &irql);
  if ( this->m_ListLockedRecursionCount-- == 1 )
  {
    p_m_TransactionHead = &this->m_TransactionHead;
    while ( p_m_TransactionHead->Flink != p_m_TransactionHead )
    {
      Flink = p_m_TransactionHead->Flink;
      v9 = p_m_TransactionHead->Flink->Flink;
      if ( p_m_TransactionHead->Flink->Blink != p_m_TransactionHead || v9->Blink != Flink )
        __fastfail(3u);
      p_m_TransactionHead->Flink = v9;
      v9->Blink = p_m_TransactionHead;
      Flink->Blink = Flink;
      Flink->Flink = Flink;
      v10 = Flink - 1;
      v11 = (int)v10[2].Flink;
      if ( v11 == 2 )
      {
        Blink = this->m_ListHead.Blink;
        v10->Flink = &this->m_ListHead;
        v10->Blink = Blink;
        if ( Blink->Flink != &this->m_ListHead )
          __fastfail(3u);
        Blink->Flink = v10;
        this->m_ListHead.Blink = v10;
        this->EntryAdded(this, (FxTransactionedEntry *)v10);
      }
      else if ( v11 == 3 )
      {
        v13 = v10->Flink;
        v14 = v10->Blink;
        if ( v10->Flink->Blink != v10 || v14->Flink != v10 )
          __fastfail(3u);
        v14->Flink = v13;
        v13->Blink = v14;
        v15 = releaseHead.Blink;
        v10[1].Flink = &releaseHead;
        v10[1].Blink = v15;
        if ( v15->Flink != &releaseHead )
          __fastfail(3u);
        v15->Flink = v10 + 1;
        releaseHead.Blink = v10 + 1;
        this->EntryRemoved(this, (FxTransactionedEntry *)v10);
      }
      LODWORD(v10[2].Flink) = 1;
    }
  }
  if ( !this->m_ListLockedRecursionCount && this->m_Deleting )
  {
    m_DeletingDoneEvent = this->m_DeletingDoneEvent;
    this->m_DeletingDoneEvent = 0LL;
  }
  this->ReleaseLock(this, FxDriverGlobals, irql);
  while ( 1 )
  {
    v7 = releaseHead.Flink;
    if ( releaseHead.Flink == &releaseHead )
      break;
    v16 = releaseHead.Flink->Flink;
    if ( releaseHead.Flink->Blink != &releaseHead || v16->Blink != releaseHead.Flink )
      __fastfail(3u);
    releaseHead.Flink = releaseHead.Flink->Flink;
    v17 = v7 - 1;
    v16->Blink = &releaseHead;
    v7->Blink = v7;
    v7->Flink = v7;
    ((void (__fastcall *)(_LIST_ENTRY *, _LIST_ENTRY *, __int64, const char *))v7[1].Blink->Flink[1].Flink)(
      v7[1].Blink,
      &v7[-1],
      226LL,
      "minkernel\\wdf\\framework\\shared\\support\\fxtransactionedlist.cpp");
    if ( this->m_DeleteOnRemove )
      ((void (__fastcall *)(_LIST_ENTRY *))v17[2].Blink->Flink[3].Flink)(v17[2].Blink);
  }
  if ( m_DeletingDoneEvent )
    KeSetEvent(&m_DeletingDoneEvent->m_Event, 0, 0);
}
