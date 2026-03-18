/*
 * XREFs of ?_PowerWaitWakeCancelRoutine@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000F9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPnp::_PowerWaitWakeCancelRoutine(_DEVICE_OBJECT *DeviceObject, _IRP *Irp)
{
  FxPkgPnp *v4; // rbx
  KIRQL v5; // al
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_ListEntry; // rcx

  IoReleaseCancelSpinLock(Irp->CancelIrql);
  v4 = *(FxPkgPnp **)(*((_QWORD *)DeviceObject->DeviceExtension - 6) + 648LL);
  v5 = KeAcquireSpinLockRaiseToDpc(&v4->m_PowerMachine.m_WaitWakeLock.m_Lock);
  Blink = v4->m_PowerMachine.m_WaitWakeIrpToBeProcessedList.Blink;
  p_ListEntry = &Irp->Tail.Overlay.ListEntry;
  Irp->Tail.Overlay.ListEntry.Flink = &v4->m_PowerMachine.m_WaitWakeIrpToBeProcessedList;
  Irp->Tail.Overlay.ListEntry.Blink = Blink;
  if ( Blink->Flink != &v4->m_PowerMachine.m_WaitWakeIrpToBeProcessedList )
    __fastfail(3u);
  Blink->Flink = p_ListEntry;
  v4->m_PowerMachine.m_WaitWakeIrpToBeProcessedList.Blink = p_ListEntry;
  Irp->IoStatus.Status = -1073741536;
  v4->m_SharedPower.m_WaitWakeIrp = 0LL;
  KeReleaseSpinLock(&v4->m_PowerMachine.m_WaitWakeLock.m_Lock, v5);
  FxPkgPnp::PowerProcessEvent(v4, PowerWakeCanceled, 0);
}
