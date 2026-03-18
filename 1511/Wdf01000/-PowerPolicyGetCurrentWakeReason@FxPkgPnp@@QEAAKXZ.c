/*
 * XREFs of ?PowerPolicyGetCurrentWakeReason@FxPkgPnp@@QEAAKXZ @ 0x1C00106C8
 * Callers:
 *     ?PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ @ 0x1C0010700 (-PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ.c)
 *     ?PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B340 (-PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B440 (-PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
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
