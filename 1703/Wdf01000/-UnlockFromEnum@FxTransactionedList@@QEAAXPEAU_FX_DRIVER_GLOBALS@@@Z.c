/*
 * XREFs of ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002CB5C
 * Callers:
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z @ 0x1C001322C (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x1C001FD3C (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C0024C28 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerD0StartingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C002C520 (-PowerD0StartingDmaEnable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x1C00656C4 (-PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ.c)
 *     imp_WdfDeviceClearRemovalRelationsDevices @ 0x1C0078220 (imp_WdfDeviceClearRemovalRelationsDevices.c)
 *     ?ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ @ 0x1C00963AC (-ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ.c)
 *     ?PnpEventRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00975D0 (-PnpEventRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ @ 0x1C0097A40 (-PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C009B0E0 (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x1C009B3C0 (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C009B474 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x1C009F6CC (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxTransactionedList::UnlockFromEnum(FxTransactionedList *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  MxEvent *m_DeletingDoneEvent; // r14
  __int64 v5; // r8
  _LIST_ENTRY *p_m_TransactionHead; // rsi
  _LIST_ENTRY *v8; // rax
  _LIST_ENTRY *Flink; // rdi
  _LIST_ENTRY *v10; // rax
  _LIST_ENTRY *v11; // rdi
  int v12; // eax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v14; // rcx
  _LIST_ENTRY *v15; // rax
  _LIST_ENTRY *v16; // rax
  _LIST_ENTRY *v17; // rcx
  _LIST_ENTRY *v18; // rcx
  _LIST_ENTRY *v19; // rdi
  _LIST_ENTRY releaseHead; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int8 irql; // [rsp+70h] [rbp+30h] BYREF

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
      v10 = p_m_TransactionHead->Flink->Flink;
      if ( p_m_TransactionHead->Flink->Blink != p_m_TransactionHead || v10->Blink != Flink )
        __fastfail(3u);
      p_m_TransactionHead->Flink = v10;
      v10->Blink = p_m_TransactionHead;
      Flink->Blink = Flink;
      Flink->Flink = Flink;
      v11 = Flink - 1;
      v12 = (int)v11[2].Flink;
      if ( v12 == 2 )
      {
        Blink = this->m_ListHead.Blink;
        if ( Blink->Flink != &this->m_ListHead )
          __fastfail(3u);
        v11->Flink = &this->m_ListHead;
        v11->Blink = Blink;
        Blink->Flink = v11;
        this->m_ListHead.Blink = v11;
        this->EntryAdded(this, (FxTransactionedEntry *)v11);
      }
      else if ( v12 == 3 )
      {
        v14 = v11->Flink;
        v15 = v11->Blink;
        if ( v11->Flink->Blink != v11 || v15->Flink != v11 )
          __fastfail(3u);
        v15->Flink = v14;
        v14->Blink = v15;
        v16 = v11 + 1;
        v17 = releaseHead.Blink;
        if ( releaseHead.Blink->Flink != &releaseHead )
          __fastfail(3u);
        v11[1].Blink = releaseHead.Blink;
        v16->Flink = &releaseHead;
        v17->Flink = v16;
        releaseHead.Blink = v11 + 1;
        this->EntryRemoved(this, (FxTransactionedEntry *)v11);
      }
      LODWORD(v11[2].Flink) = 1;
    }
  }
  if ( !this->m_ListLockedRecursionCount && this->m_Deleting )
  {
    m_DeletingDoneEvent = this->m_DeletingDoneEvent;
    this->m_DeletingDoneEvent = 0LL;
  }
  LOBYTE(v5) = irql;
  this->ReleaseLock(this, FxDriverGlobals, v5);
  while ( 1 )
  {
    v8 = releaseHead.Flink;
    if ( releaseHead.Flink == &releaseHead )
      break;
    v18 = releaseHead.Flink->Flink;
    if ( releaseHead.Flink->Blink != &releaseHead || v18->Blink != releaseHead.Flink )
      __fastfail(3u);
    releaseHead.Flink = releaseHead.Flink->Flink;
    v19 = v8 - 1;
    v18->Blink = &releaseHead;
    v8->Blink = v8;
    v8->Flink = v8;
    ((void (__fastcall *)(_LIST_ENTRY *, _LIST_ENTRY *, __int64, const char *))v8[1].Blink->Flink[1].Flink)(
      v8[1].Blink,
      &v8[-1],
      226LL,
      "minkernel\\wdf\\framework\\shared\\support\\fxtransactionedlist.cpp");
    if ( this->m_DeleteOnRemove )
      ((void (__fastcall *)(_LIST_ENTRY *))v19[2].Blink->Flink[3].Flink)(v19[2].Blink);
  }
  if ( m_DeletingDoneEvent )
    KeSetEvent(&m_DeletingDoneEvent->m_Event, 0, 0);
}
