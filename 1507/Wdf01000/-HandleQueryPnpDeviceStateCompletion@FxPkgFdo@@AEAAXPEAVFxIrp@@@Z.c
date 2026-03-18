/*
 * XREFs of ?HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C001355C
 * Callers:
 *     ?_PnpQueryPnpDeviceState@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0010F30 (-_PnpQueryPnpDeviceState@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqdq @ 0x1C0010FD0 (WPP_IFR_SF_qqdq.c)
 *     ?HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z @ 0x1C001C420 (-HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 */

void __fastcall FxPkgFdo::HandleQueryPnpDeviceStateCompletion(FxPkgFdo *this, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int PnpDeviceState; // eax
  FxDeviceBase *m_DeviceBase; // rcx
  _DEVICE_OBJECT *_a4; // r8
  const void *_a3; // rcx
  _FX_DRIVER_GLOBALS *v9; // rcx

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x13u, WPP_fxpkgfdo_cpp_Traceguids);
  PnpDeviceState = FxPkgPnp::HandleQueryPnpDeviceState(this, Irp->m_Irp->IoStatus.Information);
  Irp->m_Irp->IoStatus.Information = PnpDeviceState;
  m_DeviceBase = this->m_DeviceBase;
  _a4 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
  if ( m_DeviceBase->m_ObjectSize )
    _a3 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a3 = 0LL;
  WPP_IFR_SF_qqdq(
    this->m_Globals,
    (unsigned __int8)Irp->m_Irp,
    (unsigned int)_a4,
    0x14u,
    WPP_fxpkgfdo_cpp_Traceguids,
    _a3,
    _a4,
    PnpDeviceState,
    Irp->m_Irp);
  v9 = this->m_Globals;
  if ( v9->FxVerboseOn )
    WPP_IFR_SF_(v9, 5u, 0xCu, 0x15u, WPP_fxpkgfdo_cpp_Traceguids);
}
