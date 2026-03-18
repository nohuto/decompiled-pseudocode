/*
 * XREFs of imp_WdfDeviceSetCharacteristics @ 0x1C0071CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfDeviceSetCharacteristics(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        __int64 DeviceCharacteristics)
{
  int v3; // ebx
  FxDevice *v4; // rcx
  FxDevice *pDevice; // [rsp+48h] [rbp+10h] BYREF

  v3 = DeviceCharacteristics;
  LOWORD(DeviceCharacteristics) = 0;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v4 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    DeviceCharacteristics = LOWORD(v4->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v4 = (FxDevice *)((char *)v4 - DeviceCharacteristics);
  }
  if ( v4->m_Type == 4098 )
  {
    pDevice = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pDevice, (void *)Device, 0x1002u, DeviceCharacteristics);
    v4 = pDevice;
  }
  v4->m_DeviceObject.m_DeviceObject->Characteristics = v3 | 0x100;
}
