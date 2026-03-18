/*
 * XREFs of ?PowerWakingConnectInterruptFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0087470
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ @ 0x1C008654C (-PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingConnectInterruptFailedNP(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rdx
  const void *_a2; // rax

  m_DeviceBase = This->m_DeviceBase;
  _a2 = 0LL;
  if ( m_DeviceBase->m_ObjectSize )
    _a2 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  WPP_IFR_SF_qq(
    This->m_Globals,
    2u,
    0xCu,
    0x20u,
    WPP_PowerStateMachine_cpp_Traceguids,
    m_DeviceBase->m_DeviceObject.m_DeviceObject,
    _a2);
  FxPkgPnp::PowerConnectInterruptFailed(This);
  return 829LL;
}
