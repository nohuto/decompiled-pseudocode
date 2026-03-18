/*
 * XREFs of imp_WdfDeviceSetFailed @ 0x1C0073FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 *     ?SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z @ 0x1C0097D24 (-SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z.c)
 */

void __fastcall imp_WdfDeviceSetFailed(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device, __int32 FailedAction)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_DRIVER_GLOBALS *v6; // rdx
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
    FxPkgPnp::SetDeviceFailed(pDevice->m_PkgPnp, v6, (_WDF_DEVICE_FAILED_ACTION)FailedAction);
  }
}
