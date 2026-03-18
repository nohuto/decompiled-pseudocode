/*
 * XREFs of ?PowerGotoDxStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0086CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C00551C8 (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoDxStopped(FxPkgPnp *This, __int64 a2, unsigned __int8 a3)
{
  FxPkgPnp::PowerSendPowerDownEvents(This, FxPowerDownTypeImplicit, a3);
  return 789LL;
}
