/*
 * XREFs of ?Disabling@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0013740
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelIdleTimer@FxPowerIdleMachine@@IEAAEXZ @ 0x1C001377C (-CancelIdleTimer@FxPowerIdleMachine@@IEAAEXZ.c)
 */

__int64 __fastcall FxPowerIdleMachine::Disabling(FxPowerIdleMachine *This)
{
  return FxPowerIdleMachine::CancelIdleTimer(This) != 0 ? 5 : 31;
}
