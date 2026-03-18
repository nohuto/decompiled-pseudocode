/*
 * XREFs of ?PowerPolTimerExpiredWakeCompletedPowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0D40
 * Callers:
 *     <none>
 * Callees:
 *     ?RequestComponentActive@FxPoxInterface@@QEAAXXZ @ 0x1C0006858 (-RequestComponentActive@FxPoxInterface@@QEAAXXZ.c)
 *     ?DisableTimer@FxPowerIdleMachine@@QEAAEXZ @ 0x1C0017164 (-DisableTimer@FxPowerIdleMachine@@QEAAEXZ.c)
 *     ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z @ 0x1C00181EC (-PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestActi.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCompletedPowerUp(FxPkgPnp *This)
{
  int v2; // eax
  unsigned int v3; // ecx

  FxPoxInterface::RequestComponentActive(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  FxPowerIdleMachine::DisableTimer(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine);
  v2 = FxPkgPnp::PowerPolicySendDevicePowerRequest(This, (POWER_STATE)1, Retry);
  v3 = 1433;
  if ( v2 < 0 )
    return 1389;
  return v3;
}
