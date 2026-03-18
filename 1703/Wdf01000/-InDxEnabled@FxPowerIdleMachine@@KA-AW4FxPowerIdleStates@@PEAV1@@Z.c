/*
 * XREFs of ?InDxEnabled@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0012660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPowerIdleMachine::InDxEnabled(FxPowerIdleMachine *This)
{
  This->m_Flags |= 1u;
  return 17LL;
}
