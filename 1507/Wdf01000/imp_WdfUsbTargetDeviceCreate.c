/*
 * XREFs of imp_WdfUsbTargetDeviceCreate @ 0x1C0086B70
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     FxUsbTargetDeviceCreate @ 0x1C0086364 (FxUsbTargetDeviceCreate.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFUSBDEVICE__ **UsbDevice)
{
  __int64 Offset; // r11
  FxDeviceBase *v7; // r10
  FxDeviceBase *pDevice; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1030uLL);
  v7 = (FxDeviceBase *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    Offset = LOWORD(v7->FxNonPagedObject::FxObject::__vftable);
    v7 = (FxDeviceBase *)((char *)v7 - Offset);
  }
  if ( v7->m_Type == 4144 )
  {
    pDevice = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pDevice, (void *)Device, 0x1030u, Offset);
    v7 = pDevice;
  }
  return FxUsbTargetDeviceCreate(v7->m_Globals, v7, 0xFFFFFFFF, Attributes, UsbDevice);
}
