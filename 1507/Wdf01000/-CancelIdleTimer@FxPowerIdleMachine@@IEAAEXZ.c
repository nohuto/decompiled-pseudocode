/*
 * XREFs of ?CancelIdleTimer@FxPowerIdleMachine@@IEAAEXZ @ 0x1C000718C
 * Callers:
 *     ?Disabling@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0007150 (-Disabling@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?CancelTimer@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C009F780 (-CancelTimer@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxPowerIdleMachine::CancelIdleTimer(FxPowerIdleMachine *this)
{
  BOOLEAN v2; // al

  if ( this->m_PowerTimeoutTimer.m_Timer.m_IsExtTimer )
    v2 = ExCancelTimer(this->m_PowerTimeoutTimer.m_Timer.m_KernelExTimer, 0LL);
  else
    v2 = KeCancelTimer(&this->m_PowerTimeoutTimer.m_Timer.KernelTimer);
  if ( !v2 )
    return 0;
  this->m_Flags &= ~8u;
  return 1;
}
