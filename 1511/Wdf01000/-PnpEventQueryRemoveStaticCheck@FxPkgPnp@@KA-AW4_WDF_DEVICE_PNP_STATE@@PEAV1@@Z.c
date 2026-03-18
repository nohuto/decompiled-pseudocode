/*
 * XREFs of ?PnpEventQueryRemoveStaticCheck@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00851C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?IsInSpecialUse@FxPkgPnp@@IEAAEXZ @ 0x1C0055294 (-IsInSpecialUse@FxPkgPnp@@IEAAEXZ.c)
 *     WPP_IFR_SF_dddd @ 0x1C0067D30 (WPP_IFR_SF_dddd.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventQueryRemoveStaticCheck(FxPkgPnp *This)
{
  unsigned int _a1; // eax
  int v3; // ecx
  __int64 v4; // rcx

  _a1 = This->m_DeviceStopCount;
  if ( _a1 )
  {
    WPP_IFR_SF_d(This->m_Globals, 4u, 0xCu, 0x13u, WPP_PnpStateMachine_cpp_Traceguids, _a1);
    v3 = -1073741436;
LABEL_5:
    This->m_PendingPnPIrp->IoStatus.Status = v3;
    return 281LL;
  }
  if ( FxPkgPnp::IsInSpecialUse(This) )
  {
    WPP_IFR_SF_dddd(
      *(_FX_DRIVER_GLOBALS **)(v4 + 16),
      4u,
      0xCu,
      0x14u,
      WPP_PnpStateMachine_cpp_Traceguids,
      *(_DWORD *)(v4 + 280),
      *(_DWORD *)(v4 + 284),
      *(_DWORD *)(v4 + 288),
      *(_DWORD *)(v4 + 292));
    v3 = -1073741661;
    goto LABEL_5;
  }
  return 267LL;
}
