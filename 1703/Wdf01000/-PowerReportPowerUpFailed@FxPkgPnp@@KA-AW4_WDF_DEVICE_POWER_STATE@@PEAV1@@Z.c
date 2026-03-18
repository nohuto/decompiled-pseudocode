/*
 * XREFs of ?PowerReportPowerUpFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0099C70
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ @ 0x1C0099D68 (-PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerReportPowerUpFailed(FxPkgPnp *This, __int64 a2)
{
  FxPkgPnp_vtbl *v2; // rax

  v2 = This->__vftable;
  LOBYTE(a2) = 1;
  This->m_SystemPowerAction = 0;
  v2->PowerReleasePendingDeviceIrp(This, a2);
  FxPkgPnp::PowerSendPowerUpFailureEvent(This);
  return 867LL;
}
