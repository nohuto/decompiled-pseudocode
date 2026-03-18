/*
 * XREFs of ?PowerPolWokeFromS0UsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A1840
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ @ 0x1C00063FC (-PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ.c)
 *     ?DisableTimer@FxPowerIdleMachine@@QEAAEXZ @ 0x1C0017164 (-DisableTimer@FxPowerIdleMachine@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolWokeFromS0UsbSS(FxPkgPnp *This)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rcx

  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner->m_IdleSettings.UsbSSCapable )
    KeSetEvent((PRKEVENT)m_Owner->m_UsbIdle->m_IdleCallbackEvent, 0, 0);
  FxPowerIdleMachine::DisableTimer(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine);
  return FxPkgPnp::PowerPolicyCancelUsbSSIfCapable(This) != 0 ? 1433 : 1361;
}
