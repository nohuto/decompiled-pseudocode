/*
 * XREFs of imp_WdfControlFinishInitializing @ 0x1C002A8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?Register@FxWmiIrpHandler@@QEAAJXZ @ 0x1C002AE38 (-Register@FxWmiIrpHandler@@QEAAJXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfControlFinishInitializing(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  _DEVICE_OBJECT *m_DeviceObject; // rbx
  FxDevice *pDevice; // [rsp+40h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  m_DeviceObject = pDevice->m_DeviceObject.m_DeviceObject;
  if ( pDevice->m_Legacy )
  {
    FxWmiIrpHandler::Register(pDevice->m_PkgWmi);
    m_DeviceObject->Flags &= ~0x80u;
  }
  else
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xAu, WPP_FxDeviceControlAPI_cpp_Traceguids, Device);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
