/*
 * XREFs of imp_WdfDeviceGetAlignmentRequirement @ 0x1C0070F40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall imp_WdfDeviceGetAlignmentRequirement(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Device)
{
  __int64 Offset; // r8
  FxDeviceBase *v3; // rcx
  FxDeviceBase *pDeviceBase; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1030uLL);
  v3 = (FxDeviceBase *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    Offset = LOWORD(v3->FxNonPagedObject::FxObject::__vftable);
    v3 = (FxDeviceBase *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4144 )
  {
    pDeviceBase = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pDeviceBase, (void *)Device, 0x1030u, Offset);
    v3 = pDeviceBase;
  }
  return v3->m_DeviceObject.m_DeviceObject->AlignmentRequirement;
}
