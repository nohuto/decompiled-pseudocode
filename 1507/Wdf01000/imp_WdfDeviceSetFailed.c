/*
 * XREFs of imp_WdfDeviceSetFailed @ 0x1C0071F10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?SetDeviceFailed@FxPkgPnp@@QEAAXW4_WDF_DEVICE_FAILED_ACTION@@@Z @ 0x1C009E8D4 (-SetDeviceFailed@FxPkgPnp@@QEAAXW4_WDF_DEVICE_FAILED_ACTION@@@Z.c)
 */

void __fastcall imp_WdfDeviceSetFailed(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        __int32 FailedAction)
{
  WDFDEVICE__ *_a1; // rbx
  unsigned __int16 *v5; // rcx
  _FX_DRIVER_GLOBALS *v6; // r10
  __int64 v7; // r10
  FxDevice *pDevice; // [rsp+68h] [rbp+20h] BYREF

  _a1 = (WDFDEVICE__ *)Device;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v5 = (unsigned __int16 *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Device) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    Device = *v5;
    v5 = (unsigned __int16 *)((char *)v5 - Device);
  }
  if ( v5[4] == 4098 )
  {
    pDevice = (FxDevice *)v5;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v5, (void **)&pDevice, _a1, 0x1002u, Device);
    v5 = (unsigned __int16 *)pDevice;
  }
  v6 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v5 + 2);
  if ( (unsigned int)(FailedAction - 1) > 1 )
  {
    WPP_IFR_SF_d(v6, 2u, 0x12u, 0x22u, WPP_FxDeviceApi_cpp_Traceguids, FailedAction);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( *(_BYTE *)(v7 + 318) )
      DbgBreakPoint();
  }
  else
  {
    WPP_IFR_SF_qid(v6, 4u, 0x12u, 0x23u, WPP_FxDeviceApi_cpp_Traceguids, _a1, *((_QWORD *)v5 + 18), FailedAction);
    FxPkgPnp::SetDeviceFailed(pDevice->m_PkgPnp, (_WDF_DEVICE_FAILED_ACTION)FailedAction);
  }
}
