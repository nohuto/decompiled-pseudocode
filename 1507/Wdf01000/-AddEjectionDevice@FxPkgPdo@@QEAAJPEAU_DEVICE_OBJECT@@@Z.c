/*
 * XREFs of ?AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0099170
 * Callers:
 *     imp_WdfPdoAddEjectionRelationsPhysicalDevice @ 0x1C0065670 (imp_WdfPdoAddEjectionRelationsPhysicalDevice.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C001E12C (-Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ??0FxRelatedDevice@@QEAA@PEAU_DEVICE_OBJECT@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00A6A90 (--0FxRelatedDevice@@QEAA@PEAU_DEVICE_OBJECT@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgPdo::AddEjectionDevice(FxPkgPdo *this, _DEVICE_OBJECT *DependentDevice, unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  _QWORD *v6; // rax
  FxRelatedDeviceList *v7; // rcx
  _QWORD *v8; // rax
  int v9; // edi
  FxDeviceBase *m_DeviceBase; // rax
  const void *v11; // rax
  FxVerifierLock *m_EjectionDeviceList; // rcx
  FxRelatedDevice *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  int v17; // ebx
  _LIST_ENTRY *Caller; // [rsp+48h] [rbp+0h]
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  if ( !this->m_EjectionDeviceList )
  {
    FxNonPagedObject::Lock(this, &irql, a3);
    if ( this->m_EjectionDeviceList )
      goto LABEL_11;
    v6 = FxPoolAllocator(
           this->m_Globals,
           (_LIST_ENTRY *)&this->m_Globals->FxPoolFrameworks,
           ExDefaultNonPagedPoolType,
           0x50uLL,
           this->m_Globals->Tag,
           Caller);
    v7 = (FxRelatedDeviceList *)v6;
    if ( v6 )
    {
      *((_DWORD *)v6 + 12) = 0;
      *(_WORD *)((char *)v6 + 53) = 0;
      v6[5] = 0LL;
      v8 = v6 + 1;
      v8[1] = v8;
      *v8 = v8;
      v7->m_TransactionHead.Blink = &v7->m_TransactionHead;
      v7->m_TransactionHead.Flink = &v7->m_TransactionHead;
      v7->m_ListLock.m_Lock = 0LL;
      v7->m_ListLock.m_DbgFlagIsInitialized = 1;
      v7->__vftable = (FxRelatedDeviceList_vtbl *)&FxRelatedDeviceList::`vftable';
      v7->m_DeleteOnRemove = 1;
      v7->m_NeedReportMissing = 0;
    }
    else
    {
      v7 = 0LL;
    }
    this->m_EjectionDeviceList = v7;
    if ( v7 )
    {
LABEL_11:
      v9 = 0;
    }
    else
    {
      v9 = -1073741670;
      m_DeviceBase = this->m_DeviceBase;
      v11 = m_DeviceBase->m_ObjectSize ? (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
      WPP_IFR_SF_q(this->m_Globals, 2u, 0xCu, 0x19u, WPP_FxPkgPdo_cpp_Traceguids, v11);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (m_EjectionDeviceList = (FxVerifierLock *)this[-1].m_EjectionDeviceList) != 0LL )
    {
      FxVerifierLock::Unlock(m_EjectionDeviceList, irql, v5);
    }
    else
    {
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    }
    if ( v9 < 0 )
      return (unsigned int)v9;
  }
  v14 = (FxRelatedDevice *)FxObjectHandleAlloc(
                             this->m_Globals,
                             ExDefaultNonPagedPoolType,
                             0xA8uLL,
                             0,
                             0LL,
                             0,
                             FxObjectTypeInternal);
  if ( v14 )
  {
    FxRelatedDevice::FxRelatedDevice(v14, DependentDevice, this->m_Globals);
    v16 = v15;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v16 )
    return 3221225626LL;
  v17 = FxTransactionedList::Add(this->m_EjectionDeviceList, this->m_Globals, (FxTransactionedEntry *)(v16 + 104));
  if ( v17 < 0 )
    FxObject::DeleteFromFailedCreate((FxObject *)v16);
  return (unsigned int)v17;
}
