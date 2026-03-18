/*
 * XREFs of ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C009B0E0
 * Callers:
 *     ?PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005844 (-PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_PnpQueryDeviceRelations@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0037ED0 (-_PnpQueryDeviceRelations@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002C9CC (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002CB5C (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memmove @ 0x1C0040140 (memmove.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ?Invoke@FxPnpDeviceRelationsQuery@@QEAAXPEAUWDFDEVICE__@@W4_DEVICE_RELATION_TYPE@@@Z @ 0x1C00676F0 (-Invoke@FxPnpDeviceRelationsQuery@@QEAAXPEAUWDFDEVICE__@@W4_DEVICE_RELATION_TYPE@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C0071D08 (WPP_IFR_SF_qdd.c)
 *     ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C00A3610 (-GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z.c)
 */

__int64 __fastcall FxPkgPnp::HandleQueryDeviceRelations(FxPkgPnp *this, FxIrp *Irp, FxRelatedDeviceList *List)
{
  __int64 result; // rax
  _IRP *m_Irp; // rax
  FxDeviceBase *m_DeviceBase; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  WDFDEVICE__ *v11; // rdx
  int v12; // ebx
  unsigned int *Information; // rdi
  FxRelatedDevice *NextEntry; // rax
  SIZE_T v15; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v17; // rbp
  unsigned int i; // ebx
  unsigned int v19; // r14d
  unsigned __int8 m_Retries; // bl
  FxDeviceBase *v21; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rcx
  bool v24; // bl
  FxRelatedDevice *v25; // rbx
  FxRelatedDevice *v26; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  DEVICE_RELATION_TYPE Type; // [rsp+A8h] [rbp+20h]

  if ( !List )
    return 3221225659LL;
  m_Irp = Irp->m_Irp;
  m_DeviceBase = this->m_DeviceBase;
  m_Globals = this->m_Globals;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  LOWORD(m_Irp) = m_DeviceBase->m_ObjectSize;
  v11 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !(_WORD)m_Irp )
    v11 = 0LL;
  Type = CurrentStackLocation->Parameters.QueryDeviceRelations.Type;
  FxPnpDeviceRelationsQuery::Invoke(&this->m_DeviceRelationsQuery, v11, Type);
  v12 = 0;
  Information = (unsigned int *)Irp->m_Irp->IoStatus.Information;
  FxTransactionedList::LockForEnum(List, m_Globals);
  NextEntry = 0LL;
  while ( 1 )
  {
    NextEntry = FxRelatedDeviceList::GetNextEntry(List, NextEntry);
    if ( !NextEntry )
      break;
    ++v12;
  }
  if ( v12 )
  {
    if ( Information )
      v12 += *Information;
    if ( v12 )
    {
      v15 = 8LL * (unsigned int)(v12 - 1) + 16;
      goto LABEL_17;
    }
  }
  else if ( !List->m_NeedReportMissing || Information )
  {
    FxTransactionedList::UnlockFromEnum(List, m_Globals);
    return 3221225659LL;
  }
  v15 = 4LL;
LABEL_17:
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, m_Globals->Tag);
  v17 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v15);
    if ( Information && *Information )
      memmove(v17, Information, 8LL * (*Information - 1) + 16);
    v25 = 0LL;
    while ( 1 )
    {
      v26 = FxRelatedDeviceList::GetNextEntry(List, v25);
      v25 = v26;
      if ( !v26 )
        break;
      m_DeviceObject = v26->m_DeviceObject;
      if ( v26->m_State == RelatedDeviceStateNeedsReportPresent )
        v26->m_State = RelatedDeviceStateReportedPresent;
      *(_QWORD *)&v17[2 * *v17 + 2] = m_DeviceObject;
      ObfReferenceObject(m_DeviceObject);
      ++*v17;
    }
    List->m_Retries = 0;
    v19 = 0;
    v24 = 0;
  }
  else
  {
    if ( Information )
    {
      for ( i = 0; i < *Information; ++i )
        ObfDereferenceObject(*(PVOID *)&Information[2 * i + 2]);
    }
    ++List->m_Retries;
    v19 = -1073741670;
    m_Retries = List->m_Retries;
    v21 = this->m_DeviceBase;
    m_ObjectSize = v21->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qdd(m_Globals, 2u, 0xCu, 0x1Cu, WPP_FxPkgPnp_cpp_Traceguids, _a1, Type, -1073741670);
    v24 = m_Retries < 3u;
  }
  FxTransactionedList::UnlockFromEnum(List, this->m_Globals);
  if ( Information )
    ExFreePoolWithTag(Information, 0);
  if ( v24 )
    IoInvalidateDeviceRelations(this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject, Type);
  result = v19;
  Irp->m_Irp->IoStatus.Status = v19;
  Irp->m_Irp->IoStatus.Information = (unsigned __int64)v17;
  return result;
}
