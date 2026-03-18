/*
 * XREFs of imp_WdfDeviceGetDeviceState @ 0x1C0071210
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?GetPnpState@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_STATE@@@Z @ 0x1C009D804 (-GetPnpState@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_STATE@@@Z.c)
 */

void __fastcall imp_WdfDeviceGetDeviceState(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _WDF_DEVICE_STATE *DeviceState)
{
  WDFDEVICE__ *_a1; // rbx
  FxDevice *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxDevice *pDevice; // [rsp+78h] [rbp+20h] BYREF

  _a1 = (WDFDEVICE__ *)Device;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v5 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Device) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    Device = LOWORD(v5->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v5 = (FxDevice *)((char *)v5 - Device);
  }
  if ( v5->m_Type == 4098 )
  {
    pDevice = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pDevice, _a1, 0x1002u, Device);
    v5 = pDevice;
  }
  m_Globals = v5->m_Globals;
  if ( !DeviceState )
    FxVerifierNullBugCheck(v5->m_Globals, retaddr);
  if ( DeviceState->Size == 28 )
  {
    FxPkgPnp::GetPnpState(v5->m_PkgPnp, DeviceState);
  }
  else
  {
    WPP_IFR_SF_qdd(m_Globals, 2u, 0x12u, 0x16u, WPP_FxDeviceApi_cpp_Traceguids, _a1, DeviceState->Size, 28);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
}
