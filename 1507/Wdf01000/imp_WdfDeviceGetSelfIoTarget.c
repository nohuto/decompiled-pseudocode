/*
 * XREFs of imp_WdfDeviceGetSelfIoTarget @ 0x1C0071340
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

unsigned __int64 __fastcall imp_WdfDeviceGetSelfIoTarget(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Device)
{
  FxDevice *v2; // rcx
  __int64 Offset; // r8
  FxPkgPnp *m_PkgPnp; // rax
  unsigned __int64 result; // rax
  FxDevice *pDevice; // [rsp+48h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v2 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Device & 1) != 0 )
  {
    Offset = LOWORD(v2->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v2 = (FxDevice *)((char *)v2 - Offset);
  }
  if ( v2->m_Type == 4098 )
  {
    pDevice = v2;
  }
  else
  {
    FxObjectHandleGetPtrQI(v2, (void **)&pDevice, (void *)Device, 0x1002u, Offset);
    v2 = pDevice;
  }
  m_PkgPnp = v2->m_PkgPnp;
  if ( m_PkgPnp && m_PkgPnp->m_Type == 4353 )
    result = *(_QWORD *)&m_PkgPnp[1].m_ObjectFlags;
  else
    result = 0LL;
  if ( result )
  {
    if ( *(_WORD *)(result + 10) )
      result ^= 0xFFFFFFFFFFFFFFF8uLL;
    else
      return 0LL;
  }
  return result;
}
