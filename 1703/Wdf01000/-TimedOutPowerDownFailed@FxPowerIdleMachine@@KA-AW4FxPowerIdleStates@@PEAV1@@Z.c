/*
 * XREFs of ?TimedOutPowerDownFailed@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C00126E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPowerIdleMachine::TimedOutPowerDownFailed(FxPowerIdleMachine *This)
{
  This->m_Flags &= ~0x40u;
  return 34LL;
}
