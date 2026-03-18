/*
 * XREFs of imp_WdfDeviceEnqueueRequest @ 0x1C0070DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0094CBC (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 */

int __fastcall imp_WdfDeviceEnqueueRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        unsigned __int64 Request)
{
  __int64 v3; // rdi
  unsigned __int64 v5; // rbp
  char v6; // r15
  FxDevice *v7; // rbx
  unsigned __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *v9; // r12
  FxRequest *v10; // rcx
  FxDevice *pDevice; // [rsp+68h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+78h] [rbp+20h] BYREF

  LOWORD(v3) = 0;
  v5 = Device;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v6 = Device & 7;
  v7 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Device) = 0;
  Offset = ~v5 & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (v5 & 1) != 0 )
  {
    Device = LOWORD(v7->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    Offset -= Device;
  }
  if ( *(_WORD *)(Offset + 8) == 4098 )
  {
    pDevice = (FxDevice *)Offset;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)Offset, (void **)&pDevice, (void *)v5, 0x1002u, Device);
    Offset = (unsigned __int64)pDevice;
  }
  v9 = *(_FX_DRIVER_GLOBALS **)(Offset + 16);
  LOWORD(Offset) = 0;
  if ( (v6 & 1) != 0 )
  {
    Offset = LOWORD(v7->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v7 = (FxDevice *)((char *)v7 - Offset);
  }
  if ( v7->m_Type == 4098 )
  {
    pDevice = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pDevice, (void *)v5, 0x1002u, Offset);
    v7 = pDevice;
  }
  if ( !Request )
    FxVerifierBugCheckWorker(v9, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v10 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v3 = LOWORD(v10->__vftable);
    v10 = (FxRequest *)((char *)v10 - v3);
  }
  if ( v10->m_Type == 4104 )
  {
    pRequest = v10;
  }
  else
  {
    FxObjectHandleGetPtrQI(v10, (void **)&pRequest, (void *)Request, 0x1008u, v3);
    v10 = pRequest;
    v7 = pDevice;
  }
  return FxPkgIo::EnqueueRequest(v7->m_PkgIo, v7, v10);
}
