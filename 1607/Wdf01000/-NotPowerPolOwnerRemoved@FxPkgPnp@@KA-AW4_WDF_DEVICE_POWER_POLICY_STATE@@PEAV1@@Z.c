/*
 * XREFs of ?NotPowerPolOwnerRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009C950
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0024050 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::NotPowerPolOwnerRemoved(FxPkgPnp *This, __int64 a2, unsigned __int8 a3)
{
  FxPkgPnp::PnpProcessEvent(This, PnpEventPwrPolRemoved, a3);
  return 1433LL;
}
