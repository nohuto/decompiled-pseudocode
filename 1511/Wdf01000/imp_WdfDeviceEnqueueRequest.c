/*
 * XREFs of imp_WdfDeviceEnqueueRequest @ 0x1C0002CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0006D50 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C006D4B8 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

int __fastcall imp_WdfDeviceEnqueueRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        unsigned __int64 Request)
{
  unsigned __int64 v4; // rsi
  FxDevice *v5; // rbx
  __int64 v6; // r14
  unsigned __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *v8; // r12
  FxRequest *v9; // rcx
  FxDevice *pDevice; // [rsp+68h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+78h] [rbp+20h] BYREF

  v4 = Device;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v5 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v6) = 0;
  LOWORD(Device) = 0;
  Offset = ~v4 & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (v4 & 1) != 0 )
  {
    Device = LOWORD(v5->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    Offset = (unsigned __int64)v5 - Device;
  }
  if ( *(_WORD *)(Offset + 8) == 4098 )
  {
    pDevice = (FxDevice *)Offset;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)Offset, (void **)&pDevice, (void *)v4, 0x1002u, Device);
    Offset = (unsigned __int64)pDevice;
  }
  v8 = *(_FX_DRIVER_GLOBALS **)(Offset + 16);
  LOWORD(Offset) = 0;
  if ( (v4 & 1) != 0 )
  {
    Offset = LOWORD(v5->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v5 = (FxDevice *)((char *)v5 - Offset);
  }
  if ( v5->m_Type == 4098 )
  {
    pDevice = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pDevice, (void *)v4, 0x1002u, Offset);
    v5 = pDevice;
  }
  if ( !Request )
    FxVerifierBugCheckWorker(v8, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v9 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v6 = LOWORD(v9->__vftable);
    v9 = (FxRequest *)((char *)v9 - v6);
  }
  if ( v9->m_Type == 4104 )
  {
    pRequest = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, (void **)&pRequest, (void *)Request, 0x1008u, v6);
    v9 = pRequest;
    v5 = pDevice;
  }
  return FxPkgIo::EnqueueRequest(v5->m_PkgIo, v5, v9);
}
