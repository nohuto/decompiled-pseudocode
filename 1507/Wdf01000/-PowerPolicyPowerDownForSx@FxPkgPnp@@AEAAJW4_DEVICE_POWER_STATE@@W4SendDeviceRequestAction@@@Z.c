/*
 * XREFs of ?PowerPolicyPowerDownForSx@FxPkgPnp@@AEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z @ 0x1C005BB54
 * Callers:
 *     ?PowerPolSleepingWakePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A05D0 (-PowerPolSleepingWakePowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?PowerPolicyBlockChildrenPowerUp@FxPkgPnp@@AEAAXXZ @ 0x1C0006508 (-PowerPolicyBlockChildrenPowerUp@FxPkgPnp@@AEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolicyPowerDownForSx(
        FxPkgPnp *this,
        _FX_DRIVER_GLOBALS *DxState,
        SendDeviceRequestAction Action)
{
  POWER_STATE v4; // edi

  v4.SystemState = (int)DxState;
  FxPkgPnp::PowerPolicyBlockChildrenPowerUp(this, DxState);
  return FxPkgPnp::PowerPolicySendDevicePowerRequest(this, v4, Action);
}
