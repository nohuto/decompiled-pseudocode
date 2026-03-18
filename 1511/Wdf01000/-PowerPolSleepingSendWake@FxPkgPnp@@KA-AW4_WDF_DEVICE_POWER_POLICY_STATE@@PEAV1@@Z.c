/*
 * XREFs of ?PowerPolSleepingSendWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B1B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?PowerPolicySendWaitWakeRequest@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z @ 0x1C001349C (-PowerPolicySendWaitWakeRequest@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleepingSendWake(FxPkgPnp *This)
{
  POWER_STATE v1; // edx
  int _a1; // eax

  v1.SystemState = This->m_SystemWake;
  This->m_WakeInterruptsKeepConnected = 1;
  _a1 = FxPkgPnp::PowerPolicySendWaitWakeRequest(This, v1);
  if ( _a1 >= 0 )
    return 1433LL;
  WPP_IFR_SF_d(This->m_Globals, 2u, 0xCu, 0x1Eu, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1);
  return 1320LL;
}
