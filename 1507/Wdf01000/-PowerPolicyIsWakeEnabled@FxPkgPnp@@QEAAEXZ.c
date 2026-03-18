/*
 * XREFs of ?PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ @ 0x1C0006590
 * Callers:
 *     ?PowerPolSystemSleepFromDeviceWaitingUnarmed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0005F00 (-PowerPolSystemSleepFromDeviceWaitingUnarmed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEA.c)
 *     ?_DispatchQueryPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0005F60 (-_DispatchQueryPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?PowerPolSleeping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0006010 (-PowerPolSleeping@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?DispatchSystemQueryPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C00060DC (-DispatchSystemQueryPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?PowerPolicyGetCurrentWakeReason@FxPkgPnp@@QEAAKXZ @ 0x1C0006558 (-PowerPolicyGetCurrentWakeReason@FxPkgPnp@@QEAAKXZ.c)
 */

bool __fastcall FxPkgPnp::PowerPolicyIsWakeEnabled(FxPkgPnp *this)
{
  return this->m_PowerPolicyMachine.m_Owner && (unsigned int)FxPkgPnp::PowerPolicyGetCurrentWakeReason(this);
}
