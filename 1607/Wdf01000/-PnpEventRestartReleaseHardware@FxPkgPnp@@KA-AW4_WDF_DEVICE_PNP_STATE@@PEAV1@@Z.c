/*
 * XREFs of ?PnpEventRestartReleaseHardware@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0093550
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpReleaseHardware@FxPkgPnp@@IEAAJXZ @ 0x1C0093A90 (-PnpReleaseHardware@FxPkgPnp@@IEAAJXZ.c)
 *     ?SetInternalFailure@FxPkgPnp@@IEAAXXZ @ 0x1C0097D74 (-SetInternalFailure@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventRestartReleaseHardware(FxPkgPnp *This)
{
  int v2; // edi
  __int64 result; // rax

  v2 = FxPkgPnp::PnpReleaseHardware(This);
  if ( v2 >= 0 )
    return This->PnpSendStartDeviceDownTheStackOverload(This) != 0 ? 307 : 314;
  FxPkgPnp::SetInternalFailure(This);
  result = 299LL;
  This->m_PendingPnPIrp->IoStatus.Status = v2;
  return result;
}
