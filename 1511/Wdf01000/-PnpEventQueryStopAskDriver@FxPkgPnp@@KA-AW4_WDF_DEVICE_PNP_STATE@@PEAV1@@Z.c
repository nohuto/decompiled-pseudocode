/*
 * XREFs of ?PnpEventQueryStopAskDriver@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0085280
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0020B68 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00211D8 (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventQueryStopAskDriver(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v3; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  int _a1; // edi
  __int64 result; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  _FX_DRIVER_GLOBALS *v8; // rdx

  m_DeviceBase = This->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v3 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v3 = 0LL;
  m_Method = This->m_DeviceQueryStop.m_Method;
  if ( m_Method )
    _a1 = m_Method((WDFDEVICE__ *)v3);
  else
    _a1 = 0;
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_d(This->m_Globals, 2u, 0xCu, 0x15u, WPP_PnpStateMachine_cpp_Traceguids, _a1);
    if ( _a1 == -1073741637 )
    {
      WPP_IFR_SF_(This->m_Globals, 2u, 0xCu, 0x16u, WPP_PnpStateMachine_cpp_Traceguids);
      m_Globals = This->m_Globals;
      if ( m_Globals->FxVerifierOn )
      {
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(This->m_Globals, (unsigned int)m_Globals, 0xBu)
          || v8->FxVerifyDownlevel )
        {
          FxVerifierDbgBreakPoint(v8);
        }
      }
    }
    result = 281LL;
  }
  else
  {
    result = 312LL;
  }
  This->m_PendingPnPIrp->IoStatus.Status = _a1;
  return result;
}
