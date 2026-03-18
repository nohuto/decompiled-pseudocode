/*
 * XREFs of ?StartedPowerUp@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C003A010
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0023450 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 */

__int64 __fastcall FxPowerIdleMachine::StartedPowerUp(FxPowerIdleMachine *This)
{
  signed __int8 m_Flags; // al
  _SINGLE_LIST_ENTRY *Next; // rcx

  KeSetEvent(&This->m_D0NotificationEvent.m_Event.m_Event, 0, 0);
  m_Flags = This->m_Flags;
  if ( m_Flags < 0 )
  {
    Next = This[1].m_PowerTimeoutTimer.m_Timer.TimerDpc.DpcListEntry.Next;
    This->m_Flags = m_Flags & 0x7F;
    FxPkgPnp::PnpProcessEvent((FxPkgPnp *)Next, PnpEventDeviceInD0, 0);
  }
  return 5LL;
}
