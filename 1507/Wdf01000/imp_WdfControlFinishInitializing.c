/*
 * XREFs of imp_WdfControlFinishInitializing @ 0x1C0024FA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?Register@FxWmiIrpHandler@@QEAAJXZ @ 0x1C0025530 (-Register@FxWmiIrpHandler@@QEAAJXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall imp_WdfControlFinishInitializing(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Device)
{
  WDFDEVICE__ *_a1; // rdi
  FxDevice *v3; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _DEVICE_OBJECT *m_DeviceObject; // rbx
  int v6; // [rsp+58h] [rbp+10h] BYREF
  FxDevice *pDevice; // [rsp+60h] [rbp+18h] BYREF

  _a1 = (WDFDEVICE__ *)Device;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v3 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Device) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    Device = LOWORD(v3->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v3 = (FxDevice *)((char *)v3 - Device);
  }
  if ( v3->m_Type == 4098 )
  {
    pDevice = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pDevice, _a1, 0x1002u, Device);
    v3 = pDevice;
  }
  m_Globals = v3->m_Globals;
  m_DeviceObject = v3->m_DeviceObject.m_DeviceObject;
  if ( v3->m_Legacy )
  {
    FxWmiIrpHandler::Register(v3->m_PkgWmi);
    m_DeviceObject->Flags &= ~0x80u;
  }
  else
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xAu, WPP_FxDeviceControlAPI_cpp_Traceguids, _a1);
    v6 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&v6,
      m_Globals->Public.DriverName,
      (const char *)&v6);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
}
