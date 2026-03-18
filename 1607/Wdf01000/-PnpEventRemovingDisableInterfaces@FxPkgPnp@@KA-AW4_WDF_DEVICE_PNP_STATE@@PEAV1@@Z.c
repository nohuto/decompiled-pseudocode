/*
 * XREFs of ?PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00934B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0025E40 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C0092864 (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     ?PnpReleaseHardware@FxPkgPnp@@IEAAJXZ @ 0x1C0093A90 (-PnpReleaseHardware@FxPkgPnp@@IEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventRemovingDisableInterfaces(FxPkgPnp *This)
{
  unsigned __int8 v2; // r8

  FxPkgPnp::PnpReleaseHardware(This);
  FxPkgPnp::PnpCleanupForRemove(This, 1u);
  FxPkgPnp::PowerPolicyProcessEvent(This, PwrPolRemove, v2);
  return 314LL;
}
