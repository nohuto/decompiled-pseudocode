/*
 * XREFs of ?PnpReleaseHardware@FxPkgPnp@@IEAAJXZ @ 0x1C0085CD4
 * Callers:
 *     ?PnpEventFailedOwnHardware@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0084BE0 (-PnpEventFailedOwnHardware@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0085680 (-PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRestartReleaseHardware@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0085740 (-PnpEventRestartReleaseHardware@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0085860 (-PnpEventStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0020B68 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00211D8 (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpReleaseHardware(FxPkgPnp *this)
{
  FxCmResList *m_Resources; // rdx
  unsigned __int64 v3; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v5; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFCMRESLIST__ *); // rax
  unsigned int v7; // esi
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  _FX_DRIVER_GLOBALS *v9; // rdx
  _LIST_ENTRY *Blink; // rdi
  _LIST_ENTRY *p_m_InterruptListHead; // rbx
  _LIST_ENTRY **p_Blink; // rcx

  m_Resources = this->m_Resources;
  if ( m_Resources->m_ObjectSize )
    v3 = (unsigned __int64)m_Resources ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v3 = 0LL;
  m_DeviceBase = this->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v5 = 0LL;
  m_Method = this->m_DeviceReleaseHardware.m_Method;
  if ( m_Method )
    v7 = m_Method((WDFDEVICE__ *)v5, (WDFCMRESLIST__ *)v3);
  else
    v7 = 0;
  if ( v7 == -1073741637 )
  {
    WPP_IFR_SF_(this->m_Globals, 2u, 0xCu, 0x20u, WPP_PnpStateMachine_cpp_Traceguids);
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerifierOn )
    {
      if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, (unsigned int)m_Globals, 0xBu)
        || v9->FxVerifyDownlevel )
      {
        FxVerifierDbgBreakPoint(v9);
      }
    }
  }
  Blink = this->m_InterruptListHead.Blink;
  p_m_InterruptListHead = &this->m_InterruptListHead;
  while ( Blink != p_m_InterruptListHead )
  {
    p_Blink = &Blink[-28].Blink;
    Blink = Blink->Blink;
    if ( *((_BYTE *)p_Blink + 264) )
      ((void (__fastcall *)(_LIST_ENTRY **))(*p_Blink)[3].Flink)(p_Blink);
  }
  return v7;
}
