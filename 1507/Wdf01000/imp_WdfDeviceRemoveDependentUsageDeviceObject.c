/*
 * XREFs of imp_WdfDeviceRemoveDependentUsageDeviceObject @ 0x1C006CBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080B88 (-SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceRemoveDependentUsageDeviceObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _DEVICE_OBJECT *DependentDevice)
{
  FxDevice *v4; // rcx
  __int64 Offset; // r8
  FxPkgPnp *m_PkgPnp; // rdx
  FxTransactionedList *m_UsageDependentDeviceList; // rcx
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
  if ( !DependentDevice )
    FxVerifierNullBugCheck(v4->m_Globals, retaddr);
  m_PkgPnp = v4->m_PkgPnp;
  m_UsageDependentDeviceList = m_PkgPnp->m_UsageDependentDeviceList;
  if ( m_UsageDependentDeviceList )
    FxTransactionedList::SearchForAndRemove(m_UsageDependentDeviceList, m_PkgPnp->m_Globals, DependentDevice);
}
