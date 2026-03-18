/*
 * XREFs of ?InDxStopped@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C009CF50
 * Callers:
 *     <none>
 * Callees:
 *     ?SendD0Notification@FxPowerIdleMachine@@IEAAXXZ @ 0x1C00144E0 (-SendD0Notification@FxPowerIdleMachine@@IEAAXXZ.c)
 */

__int64 __fastcall FxPowerIdleMachine::InDxStopped(FxPowerIdleMachine *This)
{
  FxPowerIdleMachine::SendD0Notification(This);
  This->m_Flags &= 0xBCu;
  return 1LL;
}
