/*
 * XREFs of imp_WdfDeviceSetAlignmentRequirement @ 0x1C0071C40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfDeviceSetAlignmentRequirement(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        unsigned int AlignmentRequirement)
{
  __int64 Offset; // r10
  FxDeviceBase *v5; // rcx
  FxDeviceBase *pDeviceBase; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1030uLL);
  v5 = (FxDeviceBase *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    Offset = LOWORD(v5->FxNonPagedObject::FxObject::__vftable);
    v5 = (FxDeviceBase *)((char *)v5 - Offset);
  }
  if ( v5->m_Type == 4144 )
  {
    pDeviceBase = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pDeviceBase, (void *)Device, 0x1030u, Offset);
    v5 = pDeviceBase;
  }
  v5->m_DeviceObject.m_DeviceObject->AlignmentRequirement = AlignmentRequirement;
}
