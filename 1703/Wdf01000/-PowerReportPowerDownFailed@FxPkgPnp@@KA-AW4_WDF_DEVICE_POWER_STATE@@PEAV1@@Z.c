/*
 * XREFs of ?PowerReportPowerDownFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0099C30
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C0099CD4 (-PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerReportPowerDownFailed(FxPkgPnp *This, __int64 a2)
{
  LOBYTE(a2) = 1;
  This->PowerReleasePendingDeviceIrp(This, a2);
  FxPkgPnp::PowerSendPowerDownFailureEvent(This, FxPowerDownTypeExplicit);
  return 867LL;
}
