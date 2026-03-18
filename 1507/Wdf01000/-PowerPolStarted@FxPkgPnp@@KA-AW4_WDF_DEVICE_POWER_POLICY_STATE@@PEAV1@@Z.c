/*
 * XREFs of ?PowerPolStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C002C5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0017010 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStarted(FxPkgPnp *This)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rdi
  KIRQL v2; // bl

  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  v2 = KeAcquireSpinLockRaiseToDpc(&m_Owner->m_PowerIdleMachine.m_Lock.m_Lock);
  FxPowerIdleMachine::ProcessEventLocked(&m_Owner->m_PowerIdleMachine, PowerIdleEventDisabled);
  KeReleaseSpinLock(&m_Owner->m_PowerIdleMachine.m_Lock.m_Lock, v2);
  return 1433LL;
}
