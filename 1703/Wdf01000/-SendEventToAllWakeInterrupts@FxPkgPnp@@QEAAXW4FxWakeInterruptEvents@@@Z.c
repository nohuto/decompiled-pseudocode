/*
 * XREFs of ?SendEventToAllWakeInterrupts@FxPkgPnp@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C009C0EC
 * Callers:
 *     ?PowerNotifyingD0EntryToWakeInterrupts@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0014AA0 (-PowerNotifyingD0EntryToWakeInterrupts@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerNotifyingD0ExitToWakeInterrupts@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C003B4B0 (-PowerNotifyingD0ExitToWakeInterrupts@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerNotifyingD0EntryToWakeInterruptsNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0099B70 (-PowerNotifyingD0EntryToWakeInterruptsNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerNotifyingD0ExitToWakeInterruptsNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0099BA0 (-PowerNotifyingD0ExitToWakeInterruptsNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerUpFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0099F50 (-PowerUpFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerUpFailedDerefParent@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0099F90 (-PowerUpFailedDerefParent@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerUpFailedDerefParentNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0099FD0 (-PowerUpFailedDerefParentNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerUpFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009A000 (-PowerUpFailedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C00A0CA8 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
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
