/*
 * XREFs of imp_WdfDeviceClearRemovalRelationsDevices @ 0x1C006C720
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001E1F0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001E298 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080B88 (-SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C00A6B8C (-GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z.c)
 */

void __fastcall imp_WdfDeviceClearRemovalRelationsDevices(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Device)
{
  FxDevice *v2; // rcx
  __int64 Offset; // r8
  FxPkgPnp *m_PkgPnp; // rbx
  FxTransactionedList *m_RemovalDeviceList; // rcx
  FxRelatedDevice *NextEntry; // rax
  FxTransactionedList *v7; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
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
  m_RemovalDeviceList = m_PkgPnp->m_RemovalDeviceList;
  if ( m_RemovalDeviceList )
  {
    FxTransactionedList::LockForEnum(m_RemovalDeviceList, m_PkgPnp->m_Globals);
    while ( 1 )
    {
      NextEntry = FxRelatedDeviceList::GetNextEntry(m_PkgPnp->m_RemovalDeviceList, 0LL);
      m_Globals = m_PkgPnp->m_Globals;
      if ( !NextEntry )
        break;
      FxTransactionedList::SearchForAndRemove(v7, m_Globals, NextEntry->m_DeviceObject);
    }
    FxTransactionedList::UnlockFromEnum(v7, m_Globals);
  }
}
