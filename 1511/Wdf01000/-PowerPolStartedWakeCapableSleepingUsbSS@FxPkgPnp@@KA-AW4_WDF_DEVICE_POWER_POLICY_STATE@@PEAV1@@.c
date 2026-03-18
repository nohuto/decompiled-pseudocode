/*
 * XREFs of ?PowerPolStartedWakeCapableSleepingUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B570
 * Callers:
 *     <none>
 * Callees:
 *     ?DisableTimer@FxPowerIdleMachine@@QEAAEXZ @ 0x1C0012BF4 (-DisableTimer@FxPowerIdleMachine@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStartedWakeCapableSleepingUsbSS(FxPkgPnp *This)
{
  FxPowerIdleMachine::DisableTimer(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine);
  IoCancelIrp(This->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_IdleIrp.m_Irp);
  return 1433LL;
}
