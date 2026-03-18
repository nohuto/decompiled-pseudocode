/*
 * XREFs of ?CancelIdleTimer@FxPowerIdleMachine@@IEAAEXZ @ 0x1C001377C
 * Callers:
 *     ?Disabling@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0013740 (-Disabling@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?CancelTimer@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0098A40 (-CancelTimer@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 * Callees:
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C00137D8 (-Stop@MxTimer@@QEAAEXZ.c)
 */

unsigned __int8 __fastcall FxPowerIdleMachine::CancelIdleTimer(FxPowerIdleMachine *this)
{
  if ( !MxTimer::Stop(&this->m_PowerTimeoutTimer) )
    return 0;
  this->m_Flags &= ~8u;
  return 1;
}
