/*
 * XREFs of ?PowerPolSystemWakeDeviceWakeDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009EFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001EE5C (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x1C009F6CC (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemWakeDeviceWakeDisarm(FxPkgPnp *This)
{
  if ( FxDevice::IsPdo(This->m_Device) )
    This->PowerDisableWakeAtBusOverload(This);
  FxPkgPnp::PowerPolicyDisarmWakeFromSx(This);
  return 1317LL;
}
