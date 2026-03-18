/*
 * XREFs of ?PowerPolicyHandleSystemQueryPower@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z @ 0x1C0097AD0
 * Callers:
 *     ?_DispatchQueryPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0012850 (-_DispatchQueryPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_DispatchQueryPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C00129B0 (-_DispatchQueryPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolicyHandleSystemQueryPower(FxPkgPnp *this, int QueryState)
{
  if ( QueryState >= 5 || QueryState <= this->m_SystemWake )
    return 0LL;
  WPP_IFR_SF_d(this->m_Globals, 3u, 0xCu, 0x39u, WPP_FxPkgPnp_cpp_Traceguids, QueryState - 1);
  return 3221226195LL;
}
