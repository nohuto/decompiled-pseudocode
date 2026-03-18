/*
 * XREFs of imp_WdfDeviceSetFailed @ 0x1C00679F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 *     ?SetDeviceFailed@FxPkgPnp@@QEAAXW4_WDF_DEVICE_FAILED_ACTION@@@Z @ 0x1C00895E8 (-SetDeviceFailed@FxPkgPnp@@QEAAXW4_WDF_DEVICE_FAILED_ACTION@@@Z.c)
 */

void __fastcall imp_WdfDeviceSetFailed(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device, __int32 FailedAction)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( (unsigned int)(FailedAction - 1) > 1 )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0x22u, WPP_FxDeviceApi_cpp_Traceguids, FailedAction);
    FxVerifierDbgBreakPoint(pDevice->m_Globals);
  }
  else
  {
    WPP_IFR_SF_qid(
      m_Globals,
      4u,
      0x12u,
      0x23u,
      WPP_FxDeviceApi_cpp_Traceguids,
      Device,
      (__int64)pDevice->m_DeviceObject.m_DeviceObject,
      FailedAction);
    FxPkgPnp::SetDeviceFailed(pDevice->m_PkgPnp, (_WDF_DEVICE_FAILED_ACTION)FailedAction);
  }
}
