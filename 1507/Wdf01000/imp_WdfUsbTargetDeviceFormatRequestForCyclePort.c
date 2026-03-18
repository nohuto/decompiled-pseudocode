/*
 * XREFs of imp_WdfUsbTargetDeviceFormatRequestForCyclePort @ 0x1C0089080
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C008C6F0 (-FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z.c)
 */

int __fastcall imp_WdfUsbTargetDeviceFormatRequestForCyclePort(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbDevice,
        unsigned __int64 Request)
{
  __int64 v3; // rbx
  FxUsbDevice *v5; // r10
  __int64 Offset; // rcx
  FxRequest *v7; // rcx
  FxUsbDevice *pUsbDevice; // [rsp+48h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+58h] [rbp+20h] BYREF

  LOWORD(v3) = 0;
  if ( !UsbDevice )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1202uLL);
  v5 = (FxUsbDevice *)(~UsbDevice & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (UsbDevice & 1) != 0 )
  {
    Offset = LOWORD(v5->__vftable);
    v5 = (FxUsbDevice *)((char *)v5 - Offset);
  }
  if ( v5->m_Type == 4610 )
  {
    pUsbDevice = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pUsbDevice, (void *)UsbDevice, 0x1202u, Offset);
    v5 = pUsbDevice;
  }
  if ( !Request )
    FxVerifierBugCheckWorker(v5->m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v7 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v3 = LOWORD(v7->__vftable);
    v7 = (FxRequest *)((char *)v7 - v3);
  }
  if ( v7->m_Type == 4104 )
  {
    pRequest = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pRequest, (void *)Request, 0x1008u, v3);
    v5 = pUsbDevice;
    v7 = pRequest;
  }
  return FxUsbDevice::FormatCycleRequest(v5, v7);
}
