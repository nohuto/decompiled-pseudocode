/*
 * XREFs of ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C0096D00
 * Callers:
 *     ?PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0011820 (-PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_PnpQueryDeviceRelations@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0033FF0 (-_PnpQueryDeviceRelations@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0022838 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0022880 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memmove @ 0x1C003C440 (memmove.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?Invoke@FxPnpDeviceRelationsQuery@@QEAAXPEAUWDFDEVICE__@@W4_DEVICE_RELATION_TYPE@@@Z @ 0x1C006435C (-Invoke@FxPnpDeviceRelationsQuery@@QEAAXPEAUWDFDEVICE__@@W4_DEVICE_RELATION_TYPE@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C006E2BC (WPP_IFR_SF_qdd.c)
 *     ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C009E7CC (-GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z.c)
 */

__int64 __fastcall FxPkgPnp::HandleQueryDeviceRelations(FxPkgPnp *this, FxIrp *Irp, FxRelatedDeviceList *List)
{
  __int64 result; // rax
  _IRP *m_Irp; // rax
  unsigned int v8; // r12d
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned int Length; // eax
  WDFDEVICE__ *v12; // rdx
  int v13; // esi
  unsigned int *Information; // rbx
  FxRelatedDevice *NextEntry; // rax
  POOL_TYPE v16; // r9d
  SIZE_T v17; // rsi
  _DWORD *PoolWithTag; // rax
  _DWORD *v19; // rbp
  unsigned int i; // esi
  bool v21; // si
  FxDeviceBase *v22; // rax
  const void *_a1; // rax
  DEVICE_RELATION_TYPE v24; // r14d
  FxRelatedDevice *v25; // rsi
  FxRelatedDevice *v26; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  DEVICE_RELATION_TYPE Type; // [rsp+98h] [rbp+20h]

  if ( !List )
    return 3221225659LL;
  m_Irp = Irp->m_Irp;
  v8 = 0;
  m_Globals = this->m_Globals;
  m_DeviceBase = this->m_DeviceBase;
  Length = m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  Type = Length;
  if ( m_DeviceBase->m_ObjectSize )
    v12 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v12 = 0LL;
  FxPnpDeviceRelationsQuery::Invoke(&this->m_DeviceRelationsQuery, v12, Length);
  v13 = 0;
  Information = (unsigned int *)Irp->m_Irp->IoStatus.Information;
  FxTransactionedList::LockForEnum(List, m_Globals);
  NextEntry = 0LL;
  while ( 1 )
  {
    NextEntry = FxRelatedDeviceList::GetNextEntry(List, NextEntry);
    if ( !NextEntry )
      break;
    v13 += v16;
  }
  if ( v13 )
  {
    if ( Information )
      v13 += *Information;
    if ( v13 )
    {
      v17 = 8LL * (unsigned int)(v13 - 1) + 16;
      goto LABEL_18;
    }
  }
  else if ( !List->m_NeedReportMissing || Information )
  {
    FxTransactionedList::UnlockFromEnum(List, m_Globals);
    return 3221225659LL;
  }
  v17 = 4LL;
LABEL_18:
  PoolWithTag = ExAllocatePoolWithTag(v16, v17, m_Globals->Tag);
  v19 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v17);
    if ( Information && *Information )
      memmove(v19, Information, 8LL * (*Information - 1) + 16);
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
      *(_QWORD *)&v19[2 * *v19 + 2] = m_DeviceObject;
      ObfReferenceObject(m_DeviceObject);
      ++*v19;
    }
    v21 = 0;
    v24 = Type;
    List->m_Retries = 0;
  }
  else
  {
    if ( Information )
    {
      for ( i = 0; i < *Information; ++i )
        ObfDereferenceObject(*(PVOID *)&Information[2 * i + 2]);
    }
    ++List->m_Retries;
    v8 = -1073741670;
    v21 = List->m_Retries < 3u;
    v22 = this->m_DeviceBase;
    if ( v22->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    v24 = Type;
    WPP_IFR_SF_qdd(m_Globals, 2u, 0xCu, 0x1Cu, WPP_FxPkgPnp_cpp_Traceguids, _a1, Type, -1073741670);
  }
  FxTransactionedList::UnlockFromEnum(List, this->m_Globals);
  if ( Information )
    ExFreePoolWithTag(Information, 0);
  if ( v21 )
    IoInvalidateDeviceRelations(this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject, v24);
  Irp->m_Irp->IoStatus.Status = v8;
  result = v8;
  Irp->m_Irp->IoStatus.Information = (unsigned __int64)v19;
  return result;
}
