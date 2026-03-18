/*
 * XREFs of ?PowerPolSleepingWakeRevertArmWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B280
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ @ 0x1C0010590 (-PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ.c)
 *     WPP_IFR_SF_ @ 0x1C00211D8 (WPP_IFR_SF_.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x1C008C134 (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleepingWakeRevertArmWake(FxPkgPnp *This)
{
  __int64 result; // rax

  WPP_IFR_SF_(This->m_Globals, 2u, 0xCu, 0x19u, WPP_PowerPolicyStateMachine_cpp_Traceguids);
  FxPkgPnp::PowerPolicyDisarmWakeFromSx(This);
  if ( FxPkgPnp::PowerPolicyCancelWaitWake(This) )
    return 1433LL;
  result = 1320LL;
  if ( !This->m_PowerPolicyMachine.m_Owner->m_WakeCompletionEventDropped )
    return 1433LL;
  return result;
}
