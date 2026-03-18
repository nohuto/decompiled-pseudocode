/*
 * XREFs of ?AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C00841A0
 * Callers:
 *     imp_WdfPdoAddEjectionRelationsPhysicalDevice @ 0x1C005E4B0 (imp_WdfPdoAddEjectionRelationsPhysicalDevice.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000D260 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C0027328 (-Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ??0FxRelatedDevice@@QEAA@PEAU_DEVICE_OBJECT@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0090518 (--0FxRelatedDevice@@QEAA@PEAU_DEVICE_OBJECT@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
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
  FxRelatedDevice *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // ebx
  void *Caller; // [rsp+48h] [rbp+0h]
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  if ( !this->m_EjectionDeviceList )
  {
    FxNonPagedObject::Lock(this, &irql, a3);
    if ( this->m_EjectionDeviceList )
      goto LABEL_11;
    v6 = FxPoolAllocator(
           this->m_Globals,
           &this->m_Globals->FxPoolFrameworks,
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
    FxNonPagedObject::Unlock(this, irql, v5);
    if ( v9 < 0 )
      return (unsigned int)v9;
  }
  v13 = (FxRelatedDevice *)FxObjectHandleAlloc(
                             this->m_Globals,
                             ExDefaultNonPagedPoolType,
                             0xA8uLL,
                             0,
                             0LL,
                             0,
                             FxObjectTypeInternal);
  if ( v13 )
  {
    FxRelatedDevice::FxRelatedDevice(v13, DependentDevice, this->m_Globals);
    v15 = v14;
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v15 )
    return 3221225626LL;
  v16 = FxTransactionedList::Add(this->m_EjectionDeviceList, this->m_Globals, (FxTransactionedEntry *)(v15 + 104));
  if ( v16 < 0 )
    FxObject::DeleteFromFailedCreate((FxObject *)v15);
  return (unsigned int)v16;
}
