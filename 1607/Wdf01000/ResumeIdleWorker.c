/*
 * XREFs of ResumeIdleWorker @ 0x1C0072CDC
 * Callers:
 *     imp_WdfDeviceResumeIdleNoTrack @ 0x1C0073D50 (imp_WdfDeviceResumeIdleNoTrack.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEAD@Z @ 0x1C0023B60 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEAD@Z.c)
 */

void __fastcall ResumeIdleWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        void *Tag,
        int Line,
        char *File)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  FxDevice *pDevice; // [rsp+40h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Owner = pDevice->m_PkgPnp->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
    FxPowerIdleMachine::IoDecrement(&m_Owner->m_PowerIdleMachine, Tag, Line, File);
  else
    WPP_IFR_SF_(pDevice->m_Globals, 2u, 0x12u, 0x26u, WPP_FxDeviceApi_cpp_Traceguids);
}
