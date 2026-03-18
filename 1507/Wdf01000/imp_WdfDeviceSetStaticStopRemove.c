/*
 * XREFs of imp_WdfDeviceSetStaticStopRemove @ 0x1C0072060
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfDeviceSetStaticStopRemove(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        unsigned __int8 Stoppable)
{
  FxDevice *v4; // rcx
  __int64 Offset; // r8
  FxPkgPnp *m_PkgPnp; // rax
  FxDevice *pDevice; // [rsp+48h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v4 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Device & 1) != 0 )
  {
    Offset = LOWORD(v4->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v4 = (FxDevice *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4098 )
  {
    pDevice = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pDevice, (void *)Device, 0x1002u, Offset);
    v4 = pDevice;
  }
  m_PkgPnp = v4->m_PkgPnp;
  if ( Stoppable )
    _InterlockedDecrement((volatile signed __int32 *)&m_PkgPnp->m_DeviceStopCount);
  else
    _InterlockedIncrement((volatile signed __int32 *)&m_PkgPnp->m_DeviceStopCount);
}
