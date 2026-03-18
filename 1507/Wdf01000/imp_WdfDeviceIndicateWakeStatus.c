/*
 * XREFs of imp_WdfDeviceIndicateWakeStatus @ 0x1C006CAA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z @ 0x1C009BFF0 (-PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z.c)
 */

__int64 __fastcall imp_WdfDeviceIndicateWakeStatus(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        int WaitWakeStatus)
{
  unsigned int v3; // ebx
  WDFDEVICE__ *_a1; // rdi
  FxDevice *v6; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxPkgPnp *m_PkgPnp; // rcx
  FxDevice *pDevice; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  _a1 = (WDFDEVICE__ *)Device;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v6 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Device) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    Device = LOWORD(v6->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v6 = (FxDevice *)((char *)v6 - Device);
  }
  if ( v6->m_Type == 4098 )
  {
    pDevice = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&pDevice, _a1, 0x1002u, Device);
    v6 = pDevice;
  }
  m_Globals = v6->m_Globals;
  if ( WaitWakeStatus == 259 || WaitWakeStatus == -1073741536 )
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0x18u, WPP_FxDeviceApiKm_cpp_Traceguids, _a1, WaitWakeStatus);
    return 3221225485LL;
  }
  else
  {
    m_PkgPnp = v6->m_PkgPnp;
    if ( m_PkgPnp->m_SharedPower.m_WaitWakeOwner )
    {
      if ( !FxPkgPnp::PowerIndicateWaitWakeStatus(m_PkgPnp, WaitWakeStatus) )
      {
        WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x19u, WPP_FxDeviceApiKm_cpp_Traceguids, _a1);
        return (unsigned int)-1073741808;
      }
    }
    else
    {
      WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x1Au, WPP_FxDeviceApiKm_cpp_Traceguids, _a1);
      return (unsigned int)-1073741436;
    }
    return v3;
  }
}
