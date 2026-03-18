/*
 * XREFs of ?PowerPolStoppingCancelWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009A300
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ @ 0x1C0012CF0 (-PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStoppingCancelWake(FxPkgPnp *This)
{
  __int64 result; // rax

  if ( FxPkgPnp::PowerPolicyCancelWaitWake(This) )
    return 1433LL;
  result = 1371LL;
  if ( !This->m_PowerPolicyMachine.m_Owner->m_WakeCompletionEventDropped )
    return 1433LL;
  return result;
}
