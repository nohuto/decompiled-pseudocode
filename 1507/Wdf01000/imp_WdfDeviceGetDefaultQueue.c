/*
 * XREFs of imp_WdfDeviceGetDefaultQueue @ 0x1C0071040
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

WDFQUEUE__ *__fastcall imp_WdfDeviceGetDefaultQueue(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Device)
{
  WDFDEVICE__ *_a1; // rbx
  FxDevice *v3; // rcx
  FxIoQueue *m_DefaultQueue; // rax
  FxDevice *pFxDevice; // [rsp+48h] [rbp+10h] BYREF

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
    pFxDevice = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pFxDevice, _a1, 0x1002u, Device);
    v3 = pFxDevice;
  }
  m_DefaultQueue = v3->m_PkgIo->m_DefaultQueue;
  if ( m_DefaultQueue )
  {
    if ( m_DefaultQueue->m_ObjectSize )
      return (WDFQUEUE__ *)((unsigned __int64)m_DefaultQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      return 0LL;
  }
  else
  {
    WPP_IFR_SF_q(v3->m_Globals, 3u, 0xDu, 0x34u, WPP_FxDeviceApi_cpp_Traceguids, _a1);
    return 0LL;
  }
}
