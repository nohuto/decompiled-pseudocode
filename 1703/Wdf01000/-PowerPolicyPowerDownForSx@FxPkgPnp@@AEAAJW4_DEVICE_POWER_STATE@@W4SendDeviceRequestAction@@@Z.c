/*
 * XREFs of ?PowerPolicyPowerDownForSx@FxPkgPnp@@AEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z @ 0x1C0065738
 * Callers:
 *     ?PowerPolSleepingWakePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009E6E0 (-PowerPolSleepingWakePowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?PowerPolicyBlockChildrenPowerUp@FxPkgPnp@@AEAAXXZ @ 0x1C0013020 (-PowerPolicyBlockChildrenPowerUp@FxPkgPnp@@AEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolicyPowerDownForSx(
        FxPkgPnp *this,
        POWER_STATE DxState,
        SendDeviceRequestAction Action)
{
  FxPkgPnp::PowerPolicyBlockChildrenPowerUp(this);
  return FxPkgPnp::PowerPolicySendDevicePowerRequest(this, DxState, Action);
}
