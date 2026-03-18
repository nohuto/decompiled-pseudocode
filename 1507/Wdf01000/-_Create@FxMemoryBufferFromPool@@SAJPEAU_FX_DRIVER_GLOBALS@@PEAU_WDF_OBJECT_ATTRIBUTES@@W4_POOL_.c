/*
 * XREFs of ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C0078D0C
 * Callers:
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C0025DCC (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     imp_WdfMemoryCreate @ 0x1C0025EE0 (imp_WdfMemoryCreate.c)
 * Callees:
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x1C0012998 (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0023368 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C00264A4 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxMemoryBufferFromPool::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _POOL_TYPE PoolType,
        ULONG PoolTag,
        unsigned __int64 BufferSize,
        FxMemoryObject **Buffer)
{
  _WDF_OBJECT_ATTRIBUTES *v10; // rdx
  FxObject *v11; // rcx
  bool IsPagedPoolType; // r14
  FxDeviceBase *v13; // rdi
  FxMemoryObject *v14; // rax
  FxMemoryObject *v15; // rbx
  SIZE_T v17; // rax
  FxMemoryObject_vtbl *PoolWithTag; // rax

  IsPagedPoolType = FxIsPagedPoolType(PoolType);
  if ( IsPagedPoolType )
    v13 = FxDeviceBase::_SearchForDevice(v11, v10);
  else
    v13 = 0LL;
  v14 = (FxMemoryObject *)FxObjectHandleAlloc(
                            FxDriverGlobals,
                            ExDefaultNonPagedPoolType,
                            0x80uLL,
                            0,
                            Attributes,
                            0,
                            FxObjectTypeExternal);
  v15 = v14;
  if ( v13 )
  {
    if ( v14 )
    {
      FxMemoryObject::FxMemoryObject(v14, FxDriverGlobals, 0x80u, BufferSize);
      v15->m_DeviceBase = v13;
      v15->FxObject::__vftable = (FxMemoryObject_vtbl *)&FxMemoryPagedBufferFromPool::`vftable'{for `FxObject'};
LABEL_9:
      v15[1].FxObject::__vftable = 0LL;
      v15->IFxMemory::__vftable = (IFxMemory_vtbl *)&FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
      goto LABEL_11;
    }
  }
  else if ( v14 )
  {
    FxMemoryObject::FxMemoryObject(v14, FxDriverGlobals, 0x80u, BufferSize);
    v15->FxObject::__vftable = (FxMemoryObject_vtbl *)&FxMemoryPagedBufferFromPool::`vftable'{for `FxObject'};
    goto LABEL_9;
  }
  v15 = 0LL;
LABEL_11:
  if ( !v15 )
    return 3221225626LL;
  v17 = v15->GetBufferSize(&v15->IFxMemory);
  PoolWithTag = (FxMemoryObject_vtbl *)ExAllocatePoolWithTag(PoolType, v17, PoolTag);
  v15[1].FxObject::__vftable = PoolWithTag;
  if ( !PoolWithTag )
  {
    FxObject::DeleteFromFailedCreate(v15);
    return 3221225626LL;
  }
  if ( IsPagedPoolType )
    v15->m_ObjectFlags |= 0x11u;
  *Buffer = v15;
  return 0LL;
}
