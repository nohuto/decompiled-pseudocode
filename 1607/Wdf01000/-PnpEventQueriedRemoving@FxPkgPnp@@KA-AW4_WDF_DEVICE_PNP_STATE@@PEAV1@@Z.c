/*
 * XREFs of ?PnpEventQueriedRemoving@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00935D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0025E40 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?PnpPowerDereferenceSelf@FxPkgPnp@@AEAAXXZ @ 0x1C0097A48 (-PnpPowerDereferenceSelf@FxPkgPnp@@AEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventQueriedRemoving(FxPkgPnp *This, __int64 a2, unsigned __int8 a3)
{
  FxPkgPnp::PowerPolicyProcessEvent(This, PwrPolStop, a3);
  FxPkgPnp::PnpPowerDereferenceSelf(This);
  return 314LL;
}
