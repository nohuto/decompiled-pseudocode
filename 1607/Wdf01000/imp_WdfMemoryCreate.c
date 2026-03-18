/*
 * XREFs of imp_WdfMemoryCreate @ 0x1C0001C80
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A070 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C00146A0 (-_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003B8A0 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0063DB0 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0063E54 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_dd @ 0x1C00649A8 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qddd @ 0x1C00651D0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_DDxd @ 0x1C007BC28 (WPP_IFR_SF_DDxd.c)
 *     WPP_IFR_SF_qDqD @ 0x1C007BD2C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?AllocateTagTracker@FxObject@@IEAAXG@Z @ 0x1C007CFC4 (-AllocateTagTracker@FxObject@@IEAAXG@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C9490 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
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
  unsigned __int64 ParentObject; // rdi
  FxObject *v12; // rbx
  __int64 v13; // rcx
  FxObject_vtbl *v14; // rax
  unsigned __int8 v15; // dl
  unsigned int v16; // r8d
  unsigned __int16 v17; // r9
  unsigned __int8 v18; // al
  unsigned __int64 v19; // r14
  int result; // eax
  unsigned int v21; // r8d
  unsigned __int16 v22; // r9
  unsigned __int64 ContextSizeOverride; // rdx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  __int16 v25; // r15
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdi
  int v28; // ebx
  void *Caller; // rax
  FxMemoryObject *v30; // rax
  _FX_DRIVER_GLOBALS *v31; // rdx
  FxMemoryObject *v32; // rdi
  _QWORD *v33; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v34; // rax
  _FX_DRIVER_GLOBALS *v35; // rax
  bool v36; // zf
  FxObject *Driver; // rbx
  unsigned __int64 v38; // rbp
  __int64 v39; // rcx
  FxObject_vtbl *v40; // rax
  unsigned __int8 v41; // dl
  unsigned int v42; // r8d
  unsigned __int16 v43; // r9
  KIRQL v44; // al
  KIRQL v45; // r15
  KIRQL v46; // r12
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rcx
  int v49; // ebp
  unsigned __int16 m_ObjectSize; // ax
  char *v51; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  WDFMEMORY__ *v54; // rax
  void **v55; // rbx
  _FX_DRIVER_GLOBALS *v56; // rax
  unsigned __int8 CurrentIrql; // cl
  unsigned __int64 v58; // rax
  unsigned __int64 ContextSize; // r8
  const _GUID *Tag; // [rsp+20h] [rbp-78h]
  FxObject **p_pParent; // [rsp+50h] [rbp-48h] BYREF
  __int16 v62; // [rsp+58h] [rbp-40h]
  __int16 v63; // [rsp+5Ah] [rbp-3Eh]
  void *retaddr; // [rsp+98h] [rbp+0h]
  FxObject *pParent; // [rsp+A0h] [rbp+8h] BYREF
  FxMemoryObject *pBuffer; // [rsp+A8h] [rbp+10h] BYREF

  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
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
          v63 = v13;
          v62 = 4096;
          if ( v14->QueryInterface(v12, (FxQueryInterfaceParams *)&p_pParent) < 0 )
          {
            WPP_IFR_SF_qDqD(v12->m_Globals, v15, v16, v17, Tag, (const void *)ParentObject, 0x1000u, v12, v12->m_Type);
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
  if ( !Memory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v18 = 1;
  if ( (PoolType & 0xFFFFFEFF) != 1 && (PoolType & 0xFFFFFEFF) != 5 )
    v18 = 2;
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > v18 )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, v18);
      FxVerifierDbgBreakPoint(m_Globals);
      return -1073741808;
    }
  }
  v19 = BufferSize;
  if ( !BufferSize )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xAu, WPP_FxMemoryBufferApi_cpp_Traceguids, -1073741811);
    return -1073741811;
  }
  *Memory = 0LL;
  result = FxValidateObjectAttributes(m_Globals, Attributes, 0);
  if ( result >= 0 )
  {
    if ( !PoolTag )
      PoolTag = m_Globals->Tag;
    if ( m_Globals->FxVerifierOn && FxLibraryGlobals.VfCheckNxPoolType )
      FxLibraryGlobals.VfCheckNxPoolType(PoolType, retaddr, PoolTag);
    if ( v19 >= 0x1000
      || m_Globals->FxVerifierOn && m_Globals->FxPoolTrackingOn
      || (PoolType & 0xFFFFFEFF) == 1
      || (PoolType & 0xFFFFFEFF) == 5 )
    {
      result = FxMemoryBufferFromPool::_Create(m_Globals, Attributes, PoolType, PoolTag, v19, &pBuffer);
LABEL_82:
      v32 = pBuffer;
      goto LABEL_48;
    }
    if ( PoolType <= NonPagedPoolCacheAlignedMustS
      && (PoolType == NonPagedPoolMustSucceed
       || PoolType == NonPagedPoolCacheAligned
       || PoolType == NonPagedPoolCacheAlignedMustS) )
    {
      PoolType = ExDefaultNonPagedPoolType;
    }
    if ( !PoolTag )
      PoolTag = m_Globals->Tag;
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
    v25 = v19 + 15;
    v26 = ((((unsigned __int16)v19 + 15) & 0xFFF0) + 128 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL;
    v27 = v26 + 48;
    if ( v26 + 48 < v26 )
    {
      v28 = -1073741675;
    }
    else
    {
      v21 = 0;
      v28 = 0;
      if ( ContextSizeOverride )
      {
        v58 = (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v58 < ContextSizeOverride )
        {
LABEL_117:
          result = -1073741670;
          goto LABEL_82;
        }
        if ( v58 + v27 < v27 )
        {
          v27 = -1LL;
          v28 = -1073741675;
        }
        else
        {
          v27 += v58;
        }
      }
      if ( v28 >= 0 )
      {
        if ( m_Globals->FxVerifierHandle )
        {
          if ( v27 + 32 < v27 )
          {
            v27 = -1LL;
            v28 = -1073741675;
          }
          else
          {
            v27 += 32LL;
            v28 = 0;
          }
        }
        if ( v28 >= 0 )
        {
          if ( m_Globals->FxPoolTrackingOn )
            Caller = retaddr;
          else
            Caller = 0LL;
          v30 = (FxMemoryObject *)FxPoolAllocator(
                                    m_Globals,
                                    &m_Globals->FxPoolFrameworks,
                                    PoolType,
                                    v27,
                                    PoolTag,
                                    Caller);
          v32 = v30;
          if ( v30 )
          {
            if ( m_Globals->FxVerifierHandle )
            {
              memset(v30, 0, 0x20uLL);
              *(_DWORD *)(&v32->m_ObjectState + 1) = 1146058822;
              v32 = (FxMemoryObject *)((char *)v32 + 32);
            }
            v33 = (FxMemoryObject_vtbl **)((char *)&v32->FxObject::__vftable + (unsigned __int16)((v25 & 0xFFF0) + 128));
            v33[1] = 0LL;
            v33[2] = 0LL;
            v33[3] = 0LL;
            v33[4] = 0LL;
            v33[5] = 0LL;
            *v33 = v32;
            if ( Attributes )
            {
              v34 = Attributes->ContextTypeInfo;
              if ( v34 )
              {
                ContextSize = Attributes->ContextSizeOverride;
                if ( !ContextSize )
                  ContextSize = v34->ContextSize;
                memset(v33 + 6, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
              }
              v33[4] = Attributes->ContextTypeInfo;
            }
          }
          if ( v32 )
          {
            v32->m_Globals = m_Globals;
            v32->FxObject::__vftable = (FxMemoryObject_vtbl *)&FxObject::`vftable';
            v32->m_ObjectSize = ((v25 & 0xFFF0) + 128) & 0xFFF0;
            v32->m_Type = 4096;
            v32->m_SpinLock.m_Lock = 0LL;
            v32->m_SpinLock.m_DbgFlagIsInitialized = 1;
            v32->m_Refcnt = 1;
            *(_DWORD *)&v32->m_ObjectFlags = 0x10000;
            v32->m_ParentObject = 0LL;
            v32->m_ChildListHead.Blink = &v32->m_ChildListHead;
            v32->m_ChildListHead.Flink = &v32->m_ChildListHead;
            v32->m_ChildEntry.Blink = &v32->m_ChildEntry;
            v32->m_ChildEntry.Flink = &v32->m_ChildEntry;
            v35 = v32->m_Globals;
            v32->m_DisposeSingleEntry.Next = 0LL;
            v32->m_DeviceBase = 0LL;
            if ( v35->FxVerifierOn )
              FxObject::Vf_VerifyConstruct(v32, v31, 0);
            v32->m_BufferSize = v19;
            v32->FxObject::__vftable = (FxMemoryObject_vtbl *)&FxMemoryObject::`vftable'{for `FxObject'};
            v32->IFxMemory::__vftable = (IFxMemory_vtbl *)&FxMemoryObject::`vftable'{for `IFxMemory'};
            if ( SLOBYTE(v32->m_ObjectFlags) < 0 )
              FxObject::AllocateTagTracker(v32, 0x100Au);
            v32->FxObject::__vftable = (FxMemoryObject_vtbl *)&FxMemoryBuffer::`vftable'{for `FxObject'};
            v32->IFxMemory::__vftable = (IFxMemory_vtbl *)&FxMemoryBuffer::`vftable'{for `IFxMemory'};
            result = 0;
LABEL_48:
            if ( result < 0 )
              return result;
            v36 = v32->m_ObjectSize == 0;
            Driver = 0LL;
            pParent = 0LL;
            if ( v36 )
            {
              v49 = -1073741816;
            }
            else
            {
              if ( !Attributes )
                goto LABEL_130;
              if ( Attributes->ExecutionLevel == WdfExecutionLevelPassive )
              {
                FxObject::MarkPassiveCallbacks(v32, ObjectLock);
                Driver = pParent;
              }
              v38 = (unsigned __int64)Attributes->ParentObject;
              if ( v38 )
              {
                Driver = (FxObject *)(~v38 & 0xFFFFFFFFFFFFFFF8uLL);
                LOWORD(v39) = 0;
                if ( (v38 & 1) != 0 )
                {
                  v39 = LOWORD(Driver->__vftable);
                  Driver = (FxObject *)((char *)Driver - v39);
                }
                if ( Driver->m_Type == 4096 )
                {
                  pParent = Driver;
                }
                else
                {
                  pParent = 0LL;
                  p_pParent = &pParent;
                  v40 = Driver->__vftable;
                  v63 = v39;
                  v62 = 4096;
                  if ( v40->QueryInterface(Driver, (FxQueryInterfaceParams *)&p_pParent) < 0 )
                  {
                    WPP_IFR_SF_qDqD(
                      Driver->m_Globals,
                      v41,
                      v42,
                      v43,
                      Tag,
                      (const void *)v38,
                      0x1000u,
                      Driver,
                      Driver->m_Type);
                    FxVerifierBugCheckWorker(Driver->m_Globals, WDF_INVALID_HANDLE, v38, 0x1000uLL);
                  }
                  Driver = pParent;
                }
              }
              else
              {
LABEL_130:
                if ( !v32->m_ParentObject )
                {
                  v56 = v32->m_Globals;
                  if ( (FxMemoryObject *)v56->Driver != v32 )
                  {
                    Driver = v56->Driver;
                    pParent = Driver;
                  }
                }
              }
              if ( !Driver )
                goto LABEL_68;
              v44 = KeAcquireSpinLockRaiseToDpc(&v32->m_SpinLock.m_Lock);
              v45 = v44;
              if ( v32->m_ObjectState == 1 )
              {
                if ( v32->m_ParentObject )
                {
                  KeReleaseSpinLock(&v32->m_SpinLock.m_Lock, v44);
                  v49 = -1071644147;
                }
                else
                {
                  v46 = KeAcquireSpinLockRaiseToDpc(&Driver->m_SpinLock.m_Lock);
                  if ( Driver->m_ObjectState == 1 )
                  {
                    Blink = Driver->m_ChildListHead.Blink;
                    p_m_ChildEntry = &v32->m_ChildEntry;
                    if ( Blink->Flink != &Driver->m_ChildListHead )
                      __fastfail(3u);
                    p_m_ChildEntry->Flink = &Driver->m_ChildListHead;
                    v32->m_ChildEntry.Blink = Blink;
                    Blink->Flink = p_m_ChildEntry;
                    Driver->m_ChildListHead.Blink = p_m_ChildEntry;
                    if ( !v32->m_DeviceBase )
                      v32->m_DeviceBase = Driver->m_DeviceBase;
                    KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, v46);
                    v49 = 0;
                    v32->m_ParentObject = Driver;
                  }
                  else
                  {
                    FxObject::TraceDroppedEvent(Driver, FxObjectDroppedEventAddChildObjectInternal);
                    KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, v46);
                    v49 = -1073741738;
                  }
                  KeReleaseSpinLock(&v32->m_SpinLock.m_Lock, v45);
                  if ( v49 >= 0 )
                  {
LABEL_68:
                    if ( Attributes )
                    {
                      m_ObjectSize = v32->m_ObjectSize;
                      if ( m_ObjectSize )
                        v51 = (char *)v32 + m_ObjectSize;
                      else
                        v51 = 0LL;
                      EvtDestroyCallback = Attributes->EvtDestroyCallback;
                      if ( EvtDestroyCallback )
                        *((_QWORD *)v51 + 3) = EvtDestroyCallback;
                      EvtCleanupCallback = Attributes->EvtCleanupCallback;
                      if ( EvtCleanupCallback )
                      {
                        *((_QWORD *)v51 + 2) = EvtCleanupCallback;
                        v32->m_ObjectFlags |= 0x400u;
                      }
                    }
                    v32->m_ObjectFlags |= 8u;
                    if ( v32->m_ObjectSize )
                      v54 = (WDFMEMORY__ *)((unsigned __int64)v32 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    else
                      v54 = 0LL;
                    v49 = 0;
                    v55 = Buffer;
                    *Memory = v54;
                    if ( v55 )
                      *v55 = (void *)v32->GetBuffer(&v32->IFxMemory);
                    return v49;
                  }
                }
              }
              else
              {
                FxObject::TraceDroppedEvent(v32, FxObjectDroppedEventAssignParentObject);
                KeReleaseSpinLock(&v32->m_SpinLock.m_Lock, v45);
                v49 = -1073741738;
              }
            }
            FxObject::DeleteFromFailedCreate(v32);
            return v49;
          }
          goto LABEL_117;
        }
      }
    }
    WPP_IFR_SF_DDxd(
      m_Globals,
      ContextSizeOverride,
      v21,
      v22,
      Tag,
      0x78u,
      (unsigned __int16)v19,
      ContextSizeOverride,
      v28);
    goto LABEL_117;
  }
  return result;
}
