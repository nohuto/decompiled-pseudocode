/*
 * XREFs of ?PnpPowerDereferenceSelf@FxPkgPnp@@AEAAXXZ @ 0x1C009E648
 * Callers:
 *     ?PnpEventQueriedSurpriseRemove@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C009A0B0 (-PnpEventQueriedSurpriseRemove@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventQueryCanceled@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C009A0D0 (-PnpEventQueryCanceled@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventQueriedRemoving@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C009A9B0 (-PnpEventQueriedRemoving@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEAD@Z @ 0x1C0017540 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEAD@Z.c)
 */

void __fastcall FxPkgPnp::PnpPowerDereferenceSelf(FxPkgPnp *this)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rcx

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
    FxPowerIdleMachine::IoDecrement(&m_Owner->m_PowerIdleMachine, 0LL, 0, 0LL);
}
