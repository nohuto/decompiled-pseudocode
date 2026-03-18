/*
 * XREFs of ?SendEventToAllWakeInterrupts@FxPkgPnp@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C009E87C
 * Callers:
 *     ?PowerNotifyingD0EntryToWakeInterrupts@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0007A60 (-PowerNotifyingD0EntryToWakeInterrupts@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerNotifyingD0ExitToWakeInterrupts@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C002FE90 (-PowerNotifyingD0ExitToWakeInterrupts@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerNotifyingD0EntryToWakeInterruptsNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C2D0 (-PowerNotifyingD0EntryToWakeInterruptsNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerNotifyingD0ExitToWakeInterruptsNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C300 (-PowerNotifyingD0ExitToWakeInterruptsNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerUpFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C5D0 (-PowerUpFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerUpFailedDerefParent@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C600 (-PowerUpFailedDerefParent@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerUpFailedDerefParentNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C630 (-PowerUpFailedDerefParentNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerUpFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C660 (-PowerUpFailedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C00A3304 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 */

void __fastcall FxPkgPnp::SendEventToAllWakeInterrupts(FxPkgPnp *this, FxWakeInterruptEvents WakeInterruptEvent)
{
  unsigned int m_WakeInterruptCount; // eax
  _LIST_ENTRY *p_m_InterruptListHead; // rdi
  _LIST_ENTRY *i; // rbx
  FxWakeInterruptMachine *Blink; // rcx

  m_WakeInterruptCount = this->m_WakeInterruptCount;
  if ( m_WakeInterruptCount )
  {
    p_m_InterruptListHead = &this->m_InterruptListHead;
    this->m_WakeInterruptPendingAckCount = m_WakeInterruptCount;
    for ( i = this->m_InterruptListHead.Flink; i != p_m_InterruptListHead; i = i->Flink )
    {
      Blink = (FxWakeInterruptMachine *)i[-11].Blink;
      if ( Blink )
        FxWakeInterruptMachine::ProcessEvent(Blink, WakeInterruptEvent);
    }
  }
}
