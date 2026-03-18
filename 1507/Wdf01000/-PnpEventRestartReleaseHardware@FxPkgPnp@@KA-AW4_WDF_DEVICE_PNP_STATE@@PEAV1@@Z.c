/*
 * XREFs of ?PnpEventRestartReleaseHardware@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C009A910
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?PnpReleaseHardware@FxPkgPnp@@IEAAJXZ @ 0x1C009AE4C (-PnpReleaseHardware@FxPkgPnp@@IEAAJXZ.c)
 *     ?SetInternalFailure@FxPkgPnp@@IEAAXXZ @ 0x1C009E930 (-SetInternalFailure@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventRestartReleaseHardware(FxPkgPnp *This)
{
  int _a1; // eax
  int v3; // edi

  _a1 = FxPkgPnp::PnpReleaseHardware(This);
  v3 = _a1;
  if ( _a1 >= 0 )
    return This->PnpSendStartDeviceDownTheStackOverload(This) != 0 ? 307 : 314;
  WPP_IFR_SF_d(This->m_Globals, 2u, 0xCu, 0x1Cu, WPP_PnpStateMachine_cpp_Traceguids, _a1);
  FxPkgPnp::SetInternalFailure(This);
  This->m_PendingPnPIrp->IoStatus.Status = v3;
  return 299LL;
}
