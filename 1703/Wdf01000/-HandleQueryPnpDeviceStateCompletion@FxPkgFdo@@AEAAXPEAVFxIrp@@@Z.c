/*
 * XREFs of ?HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C0029734
 * Callers:
 *     ?_PnpQueryPnpDeviceState@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C002C2D0 (-_PnpQueryPnpDeviceState@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     ?HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z @ 0x1C0027100 (-HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z.c)
 *     WPP_IFR_SF_qqdq @ 0x1C002C464 (WPP_IFR_SF_qqdq.c)
 */

void __fastcall FxPkgFdo::HandleQueryPnpDeviceStateCompletion(FxPkgFdo *this, FxIrp *Irp, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int globals; // eax
  unsigned int v7; // r8d
  FxDeviceBase *m_DeviceBase; // r11
  unsigned __int16 m_ObjectSize; // cx
  _DEVICE_OBJECT *_a4; // r10
  const void *_a3; // r11
  _FX_DRIVER_GLOBALS *v12; // rcx

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x13u, WPP_fxpkgfdo_cpp_Traceguids);
  globals = FxPkgPnp::HandleQueryPnpDeviceState(this, Irp->m_Irp->IoStatus.Information, a3);
  Irp->m_Irp->IoStatus.Information = globals;
  m_DeviceBase = this->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  _a4 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
  _a3 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    _a3 = 0LL;
  WPP_IFR_SF_qqdq(
    this->m_Globals,
    (unsigned __int8)Irp->m_Irp,
    v7,
    0x14u,
    WPP_fxpkgfdo_cpp_Traceguids,
    _a3,
    _a4,
    globals,
    Irp->m_Irp);
  v12 = this->m_Globals;
  if ( v12->FxVerboseOn )
    WPP_IFR_SF_(v12, 5u, 0xCu, 0x15u, WPP_fxpkgfdo_cpp_Traceguids);
}
