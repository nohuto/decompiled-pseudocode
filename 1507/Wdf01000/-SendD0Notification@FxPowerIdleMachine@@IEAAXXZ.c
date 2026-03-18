/*
 * XREFs of ?SendD0Notification@FxPowerIdleMachine@@IEAAXXZ @ 0x1C00071C0
 * Callers:
 *     ?PowerUp@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0007170 (-PowerUp@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?InDxStopped@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C009F7D0 (-InDxStopped@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?PowerFailed@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C009F7F0 (-PowerFailed@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?TimedOutDisabled@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C009F860 (-TimedOutDisabled@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?TimedOutEnabled@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C009F880 (-TimedOutEnabled@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 * Callees:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C00187A0 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 */

void __fastcall FxPowerIdleMachine::SendD0Notification(FxPowerIdleMachine *this)
{
  unsigned __int8 v2; // r8
  signed __int8 m_Flags; // al
  _SINGLE_LIST_ENTRY *Next; // rcx

  KeSetEvent(&this->m_D0NotificationEvent.m_Event.m_Event, 0, 0);
  m_Flags = this->m_Flags;
  if ( m_Flags < 0 )
  {
    Next = this[1].m_PowerTimeoutTimer.m_Timer.TimerDpc.DpcListEntry.Next;
    this->m_Flags = m_Flags & 0x7F;
    FxPkgPnp::PnpProcessEvent((FxPkgPnp *)Next, PnpEventDeviceInD0, v2);
  }
}
