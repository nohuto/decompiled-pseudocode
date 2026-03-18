/*
 * XREFs of imp_WdfMemoryCreate @ 0x1C000D480
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001E40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00097B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C002DD60 (-_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0056944 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C0057BD0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_DDxd @ 0x1C006D54C (WPP_IFR_SF_DDxd.c)
 *     WPP_IFR_SF_qDqD @ 0x1C006D650 (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?AllocateTagTracker@FxObject@@IEAAXG@Z @ 0x1C006E8D8 (-AllocateTagTracker@FxObject@@IEAAXG@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C006EA24 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00BA470 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

int __fastcall imp_WdfMemoryCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _POOL_TYPE PoolType,
        unsigned int PoolTag,
        unsigned __int64 BufferSize,
        WDFMEMORY__ **Memory,
        void **Buffer)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned int v8; // r13d
  unsigned __int64 ParentObject; // rdi
  FxObject *v12; // rbx
  __int64 v13; // rcx
  FxObject_vtbl *v14; // rax
  unsigned __int8 v15; // dl
  unsigned int v16; // r8d
  WDFMEMORY__ **v17; // rdx
  unsigned __int64 v18; // r14
  int result; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 ContextSizeOverride; // rdx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  __int16 v24; // r15
  unsigned __int64 v25; // rcx
  SIZE_T v26; // rdi
  int v27; // ebx
  void *Caller; // rax
  FxMemoryObject *v29; // rax
  _FX_DRIVER_GLOBALS *v30; // rdx
  FxMemoryObject *v31; // rdi
  _QWORD *v32; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v33; // rax
  _FX_DRIVER_GLOBALS *v34; // rax
  bool v35; // zf
  FxObject *Driver; // rbx
  unsigned __int64 v37; // rbp
  __int64 v38; // rcx
  FxObject_vtbl *v39; // rax
  unsigned __int8 v40; // dl
  unsigned int v41; // r8d
  unsigned __int16 v42; // r9
  KIRQL v43; // al
  KIRQL v44; // r15
  KIRQL v45; // r12
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  int v48; // ebp
  unsigned __int16 m_ObjectSize; // ax
  char *v50; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  WDFMEMORY__ *v53; // rax
  void **v54; // rbx
  _FX_DRIVER_GLOBALS *v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int64 ContextSize; // r8
  const _GUID *Tag; // [rsp+20h] [rbp-78h]
  FxObject **p_pParent; // [rsp+50h] [rbp-48h] BYREF
  __int16 v60; // [rsp+58h] [rbp-40h]
  __int16 v61; // [rsp+5Ah] [rbp-3Eh]
  void *retaddr; // [rsp+98h] [rbp+0h]
  FxObject *pParent; // [rsp+A0h] [rbp+8h] BYREF
  FxMemoryObject *pBuffer; // [rsp+A8h] [rbp+10h] BYREF

  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  v8 = PoolTag;
  if ( Attributes )
  {
    if ( Attributes->Size == 56 )
    {
      ParentObject = (unsigned __int64)Attributes->ParentObject;
      if ( ParentObject )
      {
        v12 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
        LOWORD(v13) = 0;
        if ( (ParentObject & 1) != 0 )
        {
          v13 = LOWORD(v12->__vftable);
          v12 = (FxObject *)((char *)v12 - v13);
        }
        if ( v12->m_Type == 4096 )
        {
          pParent = v12;
        }
        else
        {
          pParent = 0LL;
          p_pParent = &pParent;
          v14 = v12->__vftable;
          v61 = v13;
          v60 = 4096;
          if ( v14->QueryInterface(v12, (FxQueryInterfaceParams *)&p_pParent) < 0 )
          {
            WPP_IFR_SF_qDqD(
              v12->m_Globals,
              v15,
              v16,
              PoolTag,
              Tag,
              (const void *)ParentObject,
              0x1000u,
              v12,
              v12->m_Type);
            FxVerifierBugCheckWorker(v12->m_Globals, WDF_INVALID_HANDLE, ParentObject, 0x1000uLL);
          }
          v12 = pParent;
        }
        m_Globals = v12->m_Globals;
      }
    }
    else
    {
      WPP_IFR_SF_qddd(
        (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
        (unsigned __int8)Attributes,
        6u,
        0xBu,
        WPP_FxValidateFunctions_hpp_Traceguids,
        Attributes,
        56,
        Attributes->Size,
        -1073741820);
    }
  }
  v17 = Memory;
  if ( !Memory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( (PoolType & 0xFFFFFEFF) == 1 || (PoolType & 0xFFFFFEFF) == 5 )
  {
    result = FxVerifierCheckIrqlLevel(m_Globals, 0);
    if ( result < 0 )
      return result;
    v17 = Memory;
  }
  v18 = BufferSize;
  if ( !BufferSize )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xAu, WPP_FxMemoryBufferApi_cpp_Traceguids, -1073741811);
    return -1073741811;
  }
  *v17 = 0LL;
  result = FxValidateObjectAttributes(m_Globals, Attributes, 0, PoolTag);
  if ( result >= 0 )
  {
    if ( !v8 )
      v8 = m_Globals->Tag;
    if ( m_Globals->FxVerifierOn && FxLibraryGlobals.VfCheckNxPoolType )
      FxLibraryGlobals.VfCheckNxPoolType(PoolType, retaddr, v8);
    v21 = 1LL;
    if ( v18 >= 0x1000
      || m_Globals->FxVerifierOn && m_Globals->FxPoolTrackingOn
      || (PoolType & 0xFFFFFEFF) == 1
      || (PoolType & 0xFFFFFEFF) == 5 )
    {
      result = FxMemoryBufferFromPool::_Create(m_Globals, Attributes, PoolType, v8, v18, &pBuffer);
      v21 = 1LL;
LABEL_86:
      v31 = pBuffer;
      goto LABEL_46;
    }
    if ( PoolType <= NonPagedPoolCacheAlignedMustS
      && (PoolType == NonPagedPoolMustSucceed
       || PoolType == NonPagedPoolCacheAligned
       || PoolType == NonPagedPoolCacheAlignedMustS) )
    {
      PoolType = ExDefaultNonPagedPoolType;
    }
    if ( !v8 )
      v8 = m_Globals->Tag;
    ContextSizeOverride = 0LL;
    if ( Attributes )
    {
      ContextTypeInfo = Attributes->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        ContextSizeOverride = Attributes->ContextSizeOverride;
        if ( !ContextSizeOverride )
          ContextSizeOverride = ContextTypeInfo->ContextSize;
      }
    }
    v24 = v18 + 15;
    v25 = ((((unsigned __int16)v18 + 15) & 0xFFF0) + 128 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL;
    v26 = v25 + 48;
    if ( v25 + 48 < v25 )
    {
      v27 = -1073741675;
    }
    else
    {
      v20 = 0LL;
      v27 = 0;
      if ( ContextSizeOverride )
      {
        v56 = (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v56 < ContextSizeOverride )
        {
LABEL_116:
          result = -1073741670;
          goto LABEL_86;
        }
        if ( v56 + v26 < v26 )
        {
          v26 = -1LL;
          v27 = -1073741675;
        }
        else
        {
          v26 += v56;
        }
      }
      if ( v27 >= 0 )
      {
        if ( m_Globals->FxVerifierHandle )
        {
          if ( v26 + 32 < v26 )
          {
            v26 = -1LL;
            v27 = -1073741675;
          }
          else
          {
            v26 += 32LL;
            v27 = 0;
          }
        }
        if ( v27 >= 0 )
        {
          if ( m_Globals->FxPoolTrackingOn )
            Caller = retaddr;
          else
            Caller = 0LL;
          v29 = (FxMemoryObject *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, PoolType, v26, v8, Caller);
          v31 = v29;
          if ( v29 )
          {
            if ( m_Globals->FxVerifierHandle )
            {
              memset(v29, 0, 0x20uLL);
              *(_DWORD *)(&v31->m_ObjectState + 1) = 1146058822;
              v31 = (FxMemoryObject *)((char *)v31 + 32);
            }
            v32 = (FxMemoryObject_vtbl **)((char *)&v31->FxObject::__vftable + (unsigned __int16)((v24 & 0xFFF0) + 128));
            v32[1] = 0LL;
            v32[2] = 0LL;
            v32[3] = 0LL;
            v32[4] = 0LL;
            v32[5] = 0LL;
            *v32 = v31;
            if ( Attributes )
            {
              v33 = Attributes->ContextTypeInfo;
              if ( v33 )
              {
                ContextSize = Attributes->ContextSizeOverride;
                if ( !ContextSize )
                  ContextSize = v33->ContextSize;
                memset(v32 + 6, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
              }
              v32[4] = Attributes->ContextTypeInfo;
            }
          }
          v21 = 1LL;
          if ( v31 )
          {
            v31->m_Globals = m_Globals;
            v31->FxObject::__vftable = (FxMemoryObject_vtbl *)&FxObject::`vftable';
            v31->m_ObjectSize = ((v24 & 0xFFF0) + 128) & 0xFFF0;
            v31->m_Type = 4096;
            v31->m_SpinLock.m_Lock = 0LL;
            v31->m_SpinLock.m_DbgFlagIsInitialized = 1;
            v31->m_Refcnt = 1;
            *(_DWORD *)&v31->m_ObjectFlags = 0x10000;
            v31->m_ParentObject = 0LL;
            v31->m_ChildListHead.Blink = &v31->m_ChildListHead;
            v31->m_ChildListHead.Flink = &v31->m_ChildListHead;
            v31->m_ChildEntry.Blink = &v31->m_ChildEntry;
            v31->m_ChildEntry.Flink = &v31->m_ChildEntry;
            v34 = v31->m_Globals;
            v31->m_DisposeSingleEntry.Next = 0LL;
            v31->m_DeviceBase = 0LL;
            if ( v34->FxVerifierOn )
            {
              FxObject::Vf_VerifyConstruct(v31, v30, 0);
              v21 = 1LL;
            }
            v31->m_BufferSize = v18;
            v31->FxObject::__vftable = (FxMemoryObject_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedAllocations;
            v31->IFxMemory::__vftable = (IFxMemory_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock.Contention;
            if ( SLOBYTE(v31->m_ObjectFlags) < 0 )
            {
              FxObject::AllocateTagTracker(v31, 0x100Au);
              v21 = 1LL;
            }
            v31->FxObject::__vftable = (FxMemoryObject_vtbl *)&FxObject::`vftable'.WdfLogHeader;
            v31->IFxMemory::__vftable = (IFxMemory_vtbl *)&FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
            result = 0;
LABEL_46:
            if ( result < 0 )
              return result;
            v35 = v31->m_ObjectSize == 0;
            Driver = 0LL;
            pParent = 0LL;
            if ( v35 )
            {
              v48 = -1073741816;
            }
            else
            {
              if ( !Attributes )
                goto LABEL_129;
              if ( Attributes->ExecutionLevel == WdfExecutionLevelPassive )
              {
                FxObject::MarkPassiveCallbacks(v31, ObjectLock);
                Driver = pParent;
              }
              v37 = (unsigned __int64)Attributes->ParentObject;
              if ( v37 )
              {
                Driver = (FxObject *)(~v37 & 0xFFFFFFFFFFFFFFF8uLL);
                LOWORD(v38) = 0;
                if ( (v37 & 1) != 0 )
                {
                  v38 = LOWORD(Driver->__vftable);
                  Driver = (FxObject *)((char *)Driver - v38);
                }
                if ( Driver->m_Type == 4096 )
                {
                  pParent = Driver;
                }
                else
                {
                  pParent = 0LL;
                  p_pParent = &pParent;
                  v39 = Driver->__vftable;
                  v61 = v38;
                  v60 = 4096;
                  if ( ((int (__fastcall *)(FxObject *, FxObject ***, __int64, __int64))v39->QueryInterface)(
                         Driver,
                         &p_pParent,
                         v20,
                         v21) < 0 )
                  {
                    WPP_IFR_SF_qDqD(
                      Driver->m_Globals,
                      v40,
                      v41,
                      v42,
                      Tag,
                      (const void *)v37,
                      0x1000u,
                      Driver,
                      Driver->m_Type);
                    FxVerifierBugCheckWorker(Driver->m_Globals, WDF_INVALID_HANDLE, v37, 0x1000uLL);
                  }
                  Driver = pParent;
                }
              }
              else
              {
LABEL_129:
                if ( !v31->m_ParentObject )
                {
                  v55 = v31->m_Globals;
                  if ( (FxMemoryObject *)v55->Driver != v31 )
                  {
                    Driver = v55->Driver;
                    pParent = Driver;
                  }
                }
              }
              if ( !Driver )
                goto LABEL_66;
              v43 = KeAcquireSpinLockRaiseToDpc(&v31->m_SpinLock.m_Lock);
              v44 = v43;
              if ( v31->m_ObjectState == 1 )
              {
                if ( v31->m_ParentObject )
                {
                  KeReleaseSpinLock(&v31->m_SpinLock.m_Lock, v43);
                  v48 = -1071644147;
                }
                else
                {
                  v45 = KeAcquireSpinLockRaiseToDpc(&Driver->m_SpinLock.m_Lock);
                  if ( Driver->m_ObjectState == 1 )
                  {
                    Blink = Driver->m_ChildListHead.Blink;
                    p_m_ChildEntry = &v31->m_ChildEntry;
                    v31->m_ChildEntry.Flink = &Driver->m_ChildListHead;
                    v31->m_ChildEntry.Blink = Blink;
                    if ( Blink->Flink != &Driver->m_ChildListHead )
                      __fastfail(3u);
                    Blink->Flink = p_m_ChildEntry;
                    Driver->m_ChildListHead.Blink = p_m_ChildEntry;
                    if ( !v31->m_DeviceBase )
                      v31->m_DeviceBase = Driver->m_DeviceBase;
                    KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, v45);
                    v48 = 0;
                    v31->m_ParentObject = Driver;
                  }
                  else
                  {
                    FxObject::TraceDroppedEvent(Driver, FxObjectDroppedEventAddChildObjectInternal);
                    KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, v45);
                    v48 = -1073741738;
                  }
                  KeReleaseSpinLock(&v31->m_SpinLock.m_Lock, v44);
                  if ( v48 >= 0 )
                  {
LABEL_66:
                    if ( Attributes )
                    {
                      m_ObjectSize = v31->m_ObjectSize;
                      if ( m_ObjectSize )
                        v50 = (char *)v31 + m_ObjectSize;
                      else
                        v50 = 0LL;
                      EvtDestroyCallback = Attributes->EvtDestroyCallback;
                      if ( EvtDestroyCallback )
                        *((_QWORD *)v50 + 3) = EvtDestroyCallback;
                      EvtCleanupCallback = Attributes->EvtCleanupCallback;
                      if ( EvtCleanupCallback )
                      {
                        *((_QWORD *)v50 + 2) = EvtCleanupCallback;
                        v31->m_ObjectFlags |= 0x400u;
                      }
                    }
                    v31->m_ObjectFlags |= 8u;
                    if ( v31->m_ObjectSize )
                      v53 = (WDFMEMORY__ *)((unsigned __int64)v31 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    else
                      v53 = 0LL;
                    v48 = 0;
                    v54 = Buffer;
                    *Memory = v53;
                    if ( v54 )
                      *v54 = (void *)v31->GetBuffer(&v31->IFxMemory);
                    return v48;
                  }
                }
              }
              else
              {
                FxObject::TraceDroppedEvent(v31, FxObjectDroppedEventAssignParentObject);
                KeReleaseSpinLock(&v31->m_SpinLock.m_Lock, v44);
                v48 = -1073741738;
              }
            }
            FxObject::DeleteFromFailedCreate(v31);
            return v48;
          }
          goto LABEL_116;
        }
      }
    }
    WPP_IFR_SF_DDxd(
      m_Globals,
      ContextSizeOverride,
      v20,
      1u,
      Tag,
      0x78u,
      (unsigned __int16)v18,
      ContextSizeOverride,
      v27);
    v21 = 1LL;
    goto LABEL_116;
  }
  return result;
}
