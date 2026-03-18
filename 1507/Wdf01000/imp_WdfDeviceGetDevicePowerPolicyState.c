/*
 * XREFs of imp_WdfDeviceGetDevicePowerPolicyState @ 0x1C0071110
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall imp_WdfDeviceGetDevicePowerPolicyState(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Device)
{
  __int64 Offset; // r8
  FxDevice *v3; // rcx
  FxDevice *pDevice; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v3 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    Offset = LOWORD(v3->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v3 = (FxDevice *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4098 )
  {
    pDevice = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pDevice, (void *)Device, 0x1002u, Offset);
    v3 = pDevice;
  }
  return (unsigned int)v3->m_CurrentPowerPolicyState;
}
