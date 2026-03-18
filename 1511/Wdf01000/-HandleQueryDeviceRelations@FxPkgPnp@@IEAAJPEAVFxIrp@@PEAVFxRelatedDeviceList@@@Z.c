/*
 * XREFs of ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C0088620
 * Callers:
 *     ?PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0003888 (-PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_PnpQueryDeviceRelations@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C002E730 (-_PnpQueryDeviceRelations@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00273F0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0027498 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memmove @ 0x1C0036900 (memmove.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     WPP_IFR_SF_qdd @ 0x1C006063C (WPP_IFR_SF_qdd.c)
 *     ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C009060C (-GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z.c)
 */

__int64 __fastcall FxPkgPnp::HandleQueryDeviceRelations(FxPkgPnp *this, FxIrp *Irp, FxRelatedDeviceList *List)
{
  __int64 result; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v9; // rcx
  void (__fastcall *m_Method)(WDFDEVICE__ *, _DEVICE_RELATION_TYPE); // rax
  int v11; // edi
  unsigned int *Information; // rbx
  FxRelatedDevice *NextEntry; // rax
  POOL_TYPE v14; // r9d
  SIZE_T v15; // rdi
  _DWORD *PoolWithTag; // rax
  _DWORD *v17; // rbp
  unsigned int i; // edi
  bool v19; // r14
  unsigned int v20; // edi
  FxDeviceBase *v21; // rax
  const void *_a1; // rax
  FxRelatedDevice *v23; // rdi
  FxRelatedDevice *v24; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  DEVICE_RELATION_TYPE Type; // [rsp+A8h] [rbp+20h]

  if ( !List )
    return 3221225659LL;
  m_Globals = this->m_Globals;
  m_DeviceBase = this->m_DeviceBase;
  Type = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.QueryDeviceRelations.Type;
  if ( m_DeviceBase->m_ObjectSize )
    v9 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v9 = 0LL;
  m_Method = this->m_DeviceRelationsQuery.m_Method;
  if ( m_Method )
    ((void (__fastcall *)(unsigned __int64))m_Method)(v9);
  v11 = 0;
  Information = (unsigned int *)Irp->m_Irp->IoStatus.Information;
  FxTransactionedList::LockForEnum(List, m_Globals);
  NextEntry = 0LL;
  while ( 1 )
  {
    NextEntry = FxRelatedDeviceList::GetNextEntry(List, NextEntry);
    if ( !NextEntry )
      break;
    v11 += v14;
  }
  if ( v11 )
  {
    if ( Information )
      v11 += *Information;
    if ( v11 )
    {
      v15 = 8LL * (unsigned int)(v11 - 1) + 16;
      goto LABEL_20;
    }
  }
  else if ( !List->m_NeedReportMissing || Information )
  {
    FxTransactionedList::UnlockFromEnum(List, m_Globals);
    return 3221225659LL;
  }
  v15 = 4LL;
LABEL_20:
  PoolWithTag = ExAllocatePoolWithTag(v14, v15, m_Globals->Tag);
  v17 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v15);
    if ( Information && *Information )
      memmove(v17, Information, 8LL * (*Information - 1) + 16);
    v23 = 0LL;
    while ( 1 )
    {
      v24 = FxRelatedDeviceList::GetNextEntry(List, v23);
      v23 = v24;
      if ( !v24 )
        break;
      m_DeviceObject = v24->m_DeviceObject;
      if ( v24->m_State == RelatedDeviceStateNeedsReportPresent )
        v24->m_State = RelatedDeviceStateReportedPresent;
      *(_QWORD *)&v17[2 * *v17 + 2] = m_DeviceObject;
      ObfReferenceObject(m_DeviceObject);
      ++*v17;
    }
    v19 = 0;
    v20 = 0;
    List->m_Retries = 0;
  }
  else
  {
    if ( Information )
    {
      for ( i = 0; i < *Information; ++i )
        ObfDereferenceObject(*(PVOID *)&Information[2 * i + 2]);
    }
    v19 = ++List->m_Retries < 3u;
    v20 = -1073741670;
    v21 = this->m_DeviceBase;
    if ( v21->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qdd(m_Globals, 2u, 0xCu, 0x1Cu, WPP_FxPkgPnp_cpp_Traceguids, _a1, Type, -1073741670);
  }
  FxTransactionedList::UnlockFromEnum(List, this->m_Globals);
  if ( Information )
    ExFreePoolWithTag(Information, 0);
  if ( v19 )
    IoInvalidateDeviceRelations(this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject, Type);
  result = v20;
  Irp->m_Irp->IoStatus.Status = v20;
  Irp->m_Irp->IoStatus.Information = (unsigned __int64)v17;
  return result;
}
