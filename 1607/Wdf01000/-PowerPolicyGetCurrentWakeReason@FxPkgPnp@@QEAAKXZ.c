/*
 * XREFs of ?PowerPolicyGetCurrentWakeReason@FxPkgPnp@@QEAAKXZ @ 0x1C0012E28
 * Callers:
 *     ?PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ @ 0x1C0012E60 (-PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ.c)
 *     ?PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0099F10 (-PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009A010 (-PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerPolicyGetCurrentWakeReason(FxPkgPnp *this)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rdx
  __int64 result; // rax

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  result = 0LL;
  if ( m_Owner->m_WakeSettings.ArmForWakeIfChildrenAreArmedForWake && m_Owner->m_ChildrenArmedCount > 0 )
    result = 2LL;
  if ( m_Owner->m_WakeSettings.Enabled )
    return (unsigned int)result | 1;
  return result;
}
