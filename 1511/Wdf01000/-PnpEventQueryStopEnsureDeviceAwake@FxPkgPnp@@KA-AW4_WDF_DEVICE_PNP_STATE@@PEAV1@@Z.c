/*
 * XREFs of ?PnpEventQueryStopEnsureDeviceAwake@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0085370
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?PnpPowerReferenceDuringQueryPnp@FxPkgPnp@@AEAAJXZ @ 0x1C0089380 (-PnpPowerReferenceDuringQueryPnp@FxPkgPnp@@AEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventQueryStopEnsureDeviceAwake(FxPkgPnp *This)
{
  int Pnp; // eax
  int _a2; // ebx
  FxDeviceBase *m_DeviceBase; // rax
  const void *_a1; // rax

  Pnp = FxPkgPnp::PnpPowerReferenceDuringQueryPnp(This);
  _a2 = Pnp;
  if ( Pnp == 259 )
    return 314LL;
  if ( Pnp >= 0 )
    return 272LL;
  m_DeviceBase = This->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x17u, WPP_PnpStateMachine_cpp_Traceguids, _a1, _a2);
  This->m_PendingPnPIrp->IoStatus.Status = _a2;
  return 281LL;
}
