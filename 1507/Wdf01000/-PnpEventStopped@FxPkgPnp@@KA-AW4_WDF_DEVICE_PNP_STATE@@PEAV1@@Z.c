/*
 * XREFs of ?PnpEventStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C009AA10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x1C005BD40 (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 *     ?PnpReleaseHardware@FxPkgPnp@@IEAAJXZ @ 0x1C009AE4C (-PnpReleaseHardware@FxPkgPnp@@IEAAJXZ.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x1C009DBD8 (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 *     ?SetInternalFailure@FxPkgPnp@@IEAAXXZ @ 0x1C009E930 (-SetInternalFailure@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventStopped(FxPkgPnp *This)
{
  int _a1; // eax
  unsigned __int8 v3; // dl
  unsigned int v4; // edi

  _a1 = FxPkgPnp::PnpReleaseHardware(This);
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_d(This->m_Globals, 2u, 0xCu, 0x1Bu, WPP_PnpStateMachine_cpp_Traceguids, _a1);
    FxPkgPnp::SetInternalFailure(This);
    v4 = 299;
  }
  else
  {
    FxPkgPnp::NotifyResourceobjectsToReleaseResources(This);
    v4 = 314;
  }
  FxPkgPnp::PnpFinishProcessingIrp(This, v3);
  return v4;
}
