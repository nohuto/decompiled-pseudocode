/*
 * XREFs of ?PnpEventQueryStopAskDriver@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0097340
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C001ABB8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventQueryStopAskDriver(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  unsigned __int16 m_ObjectSize; // dx
  unsigned __int64 v5; // rcx
  int _a1; // edi
  __int64 result; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  _FX_DRIVER_GLOBALS *v9; // rdx

  m_DeviceBase = This->m_DeviceBase;
  m_Method = This->m_DeviceQueryStop.m_Method;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  if ( m_Method )
  {
    v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v5 = 0LL;
    _a1 = m_Method((WDFDEVICE__ *)v5);
  }
  else
  {
    _a1 = 0;
  }
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
          || v9->FxVerifyDownlevel )
        {
          FxVerifierDbgBreakPoint(v9);
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
