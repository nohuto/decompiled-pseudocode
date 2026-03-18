/*
 * XREFs of imp_WdfDeviceAddRemovalRelationsPhysicalDevice @ 0x1C006C670
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C009CCAC (-AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

int __fastcall imp_WdfDeviceAddRemovalRelationsPhysicalDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _DEVICE_OBJECT *PhysicalDevice)
{
  FxDevice *v4; // rcx
  __int64 Offset; // r8
  void *retaddr; // [rsp+38h] [rbp+0h]
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
  if ( !PhysicalDevice )
    FxVerifierNullBugCheck(v4->m_Globals, retaddr);
  return FxPkgPnp::AddRemovalDevice(v4->m_PkgPnp, PhysicalDevice);
}
