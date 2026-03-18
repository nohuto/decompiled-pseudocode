/*
 * XREFs of StopIdleWorker @ 0x1C0072D5C
 * Callers:
 *     imp_WdfDeviceStopIdleNoTrack @ 0x1C00740E0 (imp_WdfDeviceStopIdleNoTrack.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00023CC (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z @ 0x1C000E4C0 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C006E2BC (WPP_IFR_SF_qdd.c)
 */

__int64 __fastcall StopIdleWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        unsigned __int8 WaitForD0,
        void *Tag,
        int Line,
        char *File)
{
  FxDevice *v9; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  FxPowerIdleMachine *p_m_PowerIdleMachine; // rcx
  unsigned int v13; // edi
  int _a3; // eax
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  v9 = pDevice;
  m_Globals = pDevice->m_Globals;
  if ( WaitForD0 )
  {
    result = FxVerifierCheckIrqlLevel(pDevice->m_Globals, 0);
    if ( (int)result < 0 )
      return result;
    v9 = pDevice;
  }
  p_m_PowerIdleMachine = &v9->m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine;
  if ( p_m_PowerIdleMachine )
  {
    _a3 = FxPowerIdleMachine::PowerReferenceWorker(
            p_m_PowerIdleMachine,
            WaitForD0,
            FxPowerReferenceDefault,
            Tag,
            Line,
            File);
    v13 = _a3;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qdd(m_Globals, 5u, 0x12u, 0x25u, WPP_FxDeviceApi_cpp_Traceguids, Device, WaitForD0, _a3);
  }
  else
  {
    v13 = -1073741436;
    WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0x24u, WPP_FxDeviceApi_cpp_Traceguids, Device, -1073741436);
  }
  return v13;
}
