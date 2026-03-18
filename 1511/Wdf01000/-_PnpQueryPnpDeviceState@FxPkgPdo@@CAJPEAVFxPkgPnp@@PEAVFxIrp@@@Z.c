/*
 * XREFs of ?_PnpQueryPnpDeviceState@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C002D570
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z @ 0x1C00170A0 (-HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00211D8 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qqdq @ 0x1C002D954 (WPP_IFR_SF_qqdq.c)
 */

__int64 __fastcall FxPkgPdo::_PnpQueryPnpDeviceState(FxPkgPnp *This, FxIrp *Irp, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned int globals; // eax
  FxDeviceBase *m_DeviceBase; // rcx
  _DEVICE_OBJECT *_a4; // r8
  const void *_a3; // rcx

  m_Globals = This->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x16u, WPP_FxPkgPdo_cpp_Traceguids);
  globals = FxPkgPnp::HandleQueryPnpDeviceState(This, Irp->m_Irp->IoStatus.Information, a3);
  Irp->m_Irp->IoStatus.Information = globals;
  m_DeviceBase = This->m_DeviceBase;
  _a4 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
  if ( m_DeviceBase->m_ObjectSize )
    _a3 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a3 = 0LL;
  WPP_IFR_SF_qqdq(
    m_Globals,
    (unsigned __int8)Irp->m_Irp,
    (unsigned int)_a4,
    0x17u,
    WPP_FxPkgPdo_cpp_Traceguids,
    _a3,
    _a4,
    globals,
    Irp->m_Irp);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x18u, WPP_FxPkgPdo_cpp_Traceguids);
  return FxPkgPnp::CompletePnpRequest(This, Irp, 0);
}
