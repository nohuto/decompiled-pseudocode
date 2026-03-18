/*
 * XREFs of ?PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ @ 0x1C0006648
 * Callers:
 *     ?PowerWakePending@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0005F20 (-PowerWakePending@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0019960 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PowerCompleteWakeRequestFromWithinMachine@FxPkgPnp@@IEAAXJ@Z @ 0x1C009B78C (-PowerCompleteWakeRequestFromWithinMachine@FxPkgPnp@@IEAAXJ@Z.c)
 *     ?PowerD0DisarmingWakeAtBus@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009B8E0 (-PowerD0DisarmingWakeAtBus@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerD0DisarmingWakeAtBusNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009B910 (-PowerD0DisarmingWakeAtBusNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C001C5A8 (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 */

void __fastcall FxPkgPnp::PowerCompletePendedWakeIrp(FxPkgPnp *this)
{
  unsigned __int64 *p_m_Lock; // rsi
  KIRQL v3; // al
  _LIST_ENTRY *p_m_WaitWakeIrpToBeProcessedList; // rdx
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *v6; // r8
  int Blink; // r8d
  FxIrp irp; // [rsp+30h] [rbp+8h] BYREF

  if ( this->m_SharedPower.m_WaitWakeOwner )
  {
    p_m_Lock = &this->m_PowerMachine.m_WaitWakeLock.m_Lock;
    v3 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerMachine.m_WaitWakeLock.m_Lock);
    p_m_WaitWakeIrpToBeProcessedList = &this->m_PowerMachine.m_WaitWakeIrpToBeProcessedList;
    Flink = this->m_PowerMachine.m_WaitWakeIrpToBeProcessedList.Flink;
    v6 = Flink->Flink;
    if ( Flink->Blink != &this->m_PowerMachine.m_WaitWakeIrpToBeProcessedList || v6->Blink != Flink )
      __fastfail(3u);
    p_m_WaitWakeIrpToBeProcessedList->Flink = v6;
    v6->Blink = p_m_WaitWakeIrpToBeProcessedList;
    KeReleaseSpinLock(p_m_Lock, v3);
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    Blink = (int)Flink[-8].Blink;
    irp.m_Irp = (_IRP *)&Flink[-11].Blink;
    FxPkgPnp::CompletePowerRequest(this, &irp, Blink);
  }
}
