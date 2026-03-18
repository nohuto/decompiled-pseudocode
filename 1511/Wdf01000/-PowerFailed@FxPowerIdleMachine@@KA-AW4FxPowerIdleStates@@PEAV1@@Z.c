/*
 * XREFs of ?PowerFailed@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C008A4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendD0Notification@FxPowerIdleMachine@@IEAAXXZ @ 0x1C000F138 (-SendD0Notification@FxPowerIdleMachine@@IEAAXXZ.c)
 */

__int64 __fastcall FxPowerIdleMachine::PowerFailed(FxPowerIdleMachine *This)
{
  This->m_Flags = This->m_Flags & 0xEE | 0x10;
  FxPowerIdleMachine::SendD0Notification(This);
  return 5LL;
}
