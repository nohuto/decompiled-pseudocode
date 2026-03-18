/*
 * XREFs of ?PowerPolSystemWakeDeviceWakeDisabled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00075B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemWakeDeviceWakeDisabled(FxPkgPnp *This)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  __int64 result; // rax
  bool v3; // zf

  if ( (This->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
    return 1326LL;
  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  if ( !m_Owner->m_IdleSettings.Enabled )
    return 1326LL;
  if ( m_Owner->m_IdleSettings.WakeFromS0Capable )
    return 1326LL;
  v3 = m_Owner->m_IdleSettings.PowerUpIdleDeviceOnSystemWake == 0;
  result = 1328LL;
  if ( !v3 )
    return 1326LL;
  return result;
}
