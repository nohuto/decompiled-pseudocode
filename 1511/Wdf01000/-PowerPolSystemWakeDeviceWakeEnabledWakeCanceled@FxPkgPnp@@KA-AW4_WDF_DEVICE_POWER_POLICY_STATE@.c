/*
 * XREFs of ?PowerPolSystemWakeDeviceWakeEnabledWakeCanceled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C000F480
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z @ 0x1C001353C (-PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestActi.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemWakeDeviceWakeEnabledWakeCanceled(FxPkgPnp *This)
{
  int v1; // eax
  unsigned int v2; // ecx

  v1 = FxPkgPnp::PowerPolicySendDevicePowerRequest(This, PowerDeviceD0, Retry);
  v2 = 1433;
  if ( v1 < 0 )
    return 1389;
  return v2;
}
