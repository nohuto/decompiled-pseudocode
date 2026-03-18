/*
 * XREFs of ?PnpEventRestartHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0085700
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C00151C0 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAE@Z @ 0x1C0015D00 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAE@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventRestartHardwareAvailable(FxPkgPnp *This)
{
  unsigned __int8 v2; // r8
  unsigned __int8 matched; // [rsp+38h] [rbp+10h] BYREF

  if ( (int)FxPkgPnp::PnpPrepareHardware(This, &matched) < 0 )
    return 299 - (unsigned int)(matched != 0);
  FxPkgPnp::PowerPolicyProcessEvent(This, PwrPolStart, v2);
  return 314LL;
}
