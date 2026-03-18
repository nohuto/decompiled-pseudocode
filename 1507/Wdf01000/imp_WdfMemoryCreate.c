/*
 * XREFs of imp_WdfMemoryCreate @ 0x1C0025EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0030CC4 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C0078D0C (-_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_.c)
 *     WPP_IFR_SF_DDxd @ 0x1C0079714 (WPP_IFR_SF_DDxd.c)
 *     WPP_IFR_SF_qDqD @ 0x1C0079818 (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?AllocateTagTracker@FxObject@@IEAAXG@Z @ 0x1C007A938 (-AllocateTagTracker@FxObject@@IEAAXG@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D1734 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
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
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned int v8; // edi
  unsigned __int64 ParentObject; // rdi
  FxObject *v12; // rbx
  __int64 v13; // rcx
  FxObject_vtbl *v14; // rax
  unsigned __int8 v15; // dl
  unsigned int v16; // r8d
  unsigned __int64 v17; // r15
  int result; // eax
  unsigned __int16 v19; // r9
  unsigned __int64 ContextSizeOverride; // rdx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  __int16 v22; // r12
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r8
  int v25; // ebx
  _LIST_ENTRY *Caller; // rax
  FxMemoryObject *v27; // rax
  FxMemoryObject *v28; // rdi
  _QWORD *v29; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v30; // rax
  _FX_DRIVER_GLOBALS *v31; // rax
  bool v32; // zf
  unsigned __int64 Driver; // rbx
  unsigned __int64 v34; // r14
  __int64 v35; // rcx
  FxMemoryObject_vtbl *v36; // rax
  unsigned __int8 v37; // dl
  unsigned int v38; // r8d
  unsigned __int16 v39; // r9
  KIRQL v40; // al
  unsigned __int16 m_ObjectState; // dx
  KIRQL v42; // r13
  KIRQL v43; // al
  unsigned __int16 v44; // dx
  KIRQL v45; // r12
  _LIST_ENTRY *v46; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  int v48; // r14d
  unsigned __int16 m_ObjectSize; // ax
  char *v50; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  WDFMEMORY__ *v53; // rax
  void **v54; // rbx
  _FX_DRIVER_GLOBALS *v55; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 v57; // rax
  FxMemoryObject *v58; // rcx
  FxMemoryObject *v59; // rax
  unsigned __int64 ContextSize; // r8
  const void *v61; // rcx
  const void *v62; // rcx
  const _GUID *Tag; // [rsp+20h] [rbp-40h]
  void *p_pParent; // [rsp+50h] [rbp-10h] BYREF
  __int16 v65; // [rsp+58h] [rbp-8h]
  __int16 v66; // [rsp+5Ah] [rbp-6h]
  _LIST_ENTRY *retaddr; // [rsp+98h] [rbp+38h]
  FxMemoryObject *pBuffer; // [rsp+A0h] [rbp+40h] BYREF
  FxObject *pParent; // [rsp+A8h] [rbp+48h] BYREF

  LODWORD(pBuffer) = PoolTag;
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
          v66 = v13;
          v65 = 4096;
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
        v8 = (unsigned int)pBuffer;
      }
      else
      {
        v8 = PoolTag;
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
  if ( (PoolType & 0xFFFFFEFF) == 1 || (PoolType & 0xFFFFFEFF) == 5 )
  {
    if ( m_Globals->FxVerifierOn )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql )
      {
        WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
        LODWORD(pBuffer) = 7567731;
        Mx::MxDbgPrint(
          "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
          m_Globals->Public.DriverName,
          (const char *)&pBuffer,
          m_Globals->Public.DriverName,
          (const char *)&pBuffer);
        if ( m_Globals->FxVerifierDbgBreakOnError )
          DbgBreakPoint();
        return -1073741808;
      }
    }
  }
  v17 = BufferSize;
  if ( !BufferSize )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xAu, WPP_FxMemoryBufferApi_cpp_Traceguids, -1073741811);
    return -1073741811;
  }
  *Memory = 0LL;
  result = FxValidateObjectAttributes(m_Globals, Attributes, 0, PoolTag);
  if ( result >= 0 )
  {
    if ( !v8 )
      v8 = m_Globals->Tag;
    if ( m_Globals->FxVerifierOn && FxLibraryGlobals.VfCheckNxPoolType )
      FxLibraryGlobals.VfCheckNxPoolType(PoolType, retaddr, v8);
    if ( v17 >= 0x1000
      || m_Globals->FxVerifierOn && m_Globals->FxPoolTrackingOn
      || (PoolType & 0xFFFFFEFF) == 1
      || (PoolType & 0xFFFFFEFF) == 5 )
    {
      result = FxMemoryBufferFromPool::_Create(m_Globals, Attributes, PoolType, v8, v17, &pBuffer);
LABEL_101:
      v28 = pBuffer;
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
    v22 = v17 + 15;
    v23 = ((((unsigned __int16)v17 + 15) & 0xFFF0) + 128 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL;
    v24 = v23 + 48;
    pBuffer = (FxMemoryObject *)(v23 + 48);
    if ( v23 + 48 < v23 )
    {
      pBuffer = (FxMemoryObject *)-1LL;
      v25 = -1073741675;
    }
    else
    {
      v19 = 0;
      v25 = 0;
      if ( ContextSizeOverride )
      {
        v57 = (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v57 < ContextSizeOverride )
        {
LABEL_118:
          result = -1073741670;
          goto LABEL_101;
        }
        v58 = (FxMemoryObject *)(v57 + v24);
        if ( v57 + v24 < v24 )
        {
          v24 = -1LL;
          v25 = -1073741675;
          pBuffer = (FxMemoryObject *)-1LL;
        }
        else
        {
          v24 += v57;
          pBuffer = v58;
        }
      }
      if ( v25 >= 0 )
      {
        if ( m_Globals->FxVerifierHandle )
        {
          v59 = (FxMemoryObject *)(v24 + 32);
          if ( v24 + 32 < v24 )
          {
            v24 = -1LL;
            v25 = -1073741675;
            pBuffer = (FxMemoryObject *)-1LL;
          }
          else
          {
            v24 += 32LL;
            pBuffer = v59;
            v25 = 0;
          }
        }
        if ( v25 >= 0 )
        {
          if ( m_Globals->FxPoolTrackingOn )
            Caller = retaddr;
          else
            Caller = 0LL;
          v27 = (FxMemoryObject *)FxPoolAllocator(
                                    m_Globals,
                                    (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
                                    PoolType,
                                    v24,
                                    v8,
                                    Caller);
          v28 = v27;
          if ( v27 )
          {
            if ( m_Globals->FxVerifierHandle )
            {
              memset(v27, 0, 0x20uLL);
              *(_DWORD *)(&v28->m_ObjectState + 1) = 1146058822;
              v28 = (FxMemoryObject *)((char *)v28 + 32);
            }
            v29 = (FxMemoryObject_vtbl **)((char *)&v28->FxObject::__vftable + (unsigned __int16)((v22 & 0xFFF0) + 128));
            v29[1] = 0LL;
            v29[2] = 0LL;
            v29[3] = 0LL;
            v29[4] = 0LL;
            v29[5] = 0LL;
            *v29 = v28;
            if ( Attributes )
            {
              v30 = Attributes->ContextTypeInfo;
              if ( v30 )
              {
                ContextSize = Attributes->ContextSizeOverride;
                if ( !ContextSize )
                  ContextSize = v30->ContextSize;
                memset(v29 + 6, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
              }
              v29[4] = Attributes->ContextTypeInfo;
            }
          }
          if ( v28 )
          {
            v28->m_Globals = m_Globals;
            v28->FxObject::__vftable = (FxMemoryObject_vtbl *)&FxObject::`vftable';
            v28->m_ObjectSize = ((v22 & 0xFFF0) + 128) & 0xFFF0;
            v28->m_Type = 4096;
            v28->m_SpinLock.m_Lock = 0LL;
            v28->m_SpinLock.m_DbgFlagIsInitialized = 1;
            v28->m_Refcnt = 1;
            *(_DWORD *)&v28->m_ObjectFlags = 0x10000;
            v28->m_ParentObject = 0LL;
            v28->m_ChildListHead.Blink = &v28->m_ChildListHead;
            v28->m_ChildListHead.Flink = &v28->m_ChildListHead;
            v28->m_ChildEntry.Blink = &v28->m_ChildEntry;
            v28->m_ChildEntry.Flink = &v28->m_ChildEntry;
            v31 = v28->m_Globals;
            v28->m_DisposeSingleEntry.Next = 0LL;
            v28->m_DeviceBase = 0LL;
            if ( v31->FxVerifierOn )
              FxObject::Vf_VerifyConstruct(v28, (_FX_DRIVER_GLOBALS *)0x80, 0);
            v28->m_BufferSize = v17;
            v28->FxObject::__vftable = (FxMemoryObject_vtbl *)&FxMemoryObject::`vftable'{for `FxObject'};
            v28->IFxMemory::__vftable = (IFxMemory_vtbl *)&FxMemoryObject::`vftable'{for `IFxMemory'};
            if ( SLOBYTE(v28->m_ObjectFlags) < 0 )
              FxObject::AllocateTagTracker(v28, 0x100Au);
            v28->FxObject::__vftable = (FxMemoryObject_vtbl *)&FxMemoryBuffer::`vftable'{for `FxObject'};
            v28->IFxMemory::__vftable = (IFxMemory_vtbl *)&FxMemoryBuffer::`vftable'{for `IFxMemory'};
            result = 0;
LABEL_46:
            if ( result < 0 )
              return result;
            v32 = v28->m_ObjectSize == 0;
            Driver = 0LL;
            pBuffer = 0LL;
            if ( v32 )
            {
              v48 = -1073741816;
            }
            else
            {
              if ( !Attributes )
                goto LABEL_141;
              if ( Attributes->ExecutionLevel == WdfExecutionLevelPassive )
              {
                FxObject::MarkPassiveCallbacks(v28, ObjectLock);
                Driver = (unsigned __int64)pBuffer;
              }
              v34 = (unsigned __int64)Attributes->ParentObject;
              if ( v34 )
              {
                Driver = ~v34 & 0xFFFFFFFFFFFFFFF8uLL;
                LOWORD(v35) = 0;
                if ( (v34 & 1) != 0 )
                {
                  v35 = *(unsigned __int16 *)Driver;
                  Driver -= v35;
                }
                if ( *(_WORD *)(Driver + 8) == 4096 )
                {
                  pBuffer = (FxMemoryObject *)Driver;
                }
                else
                {
                  pBuffer = 0LL;
                  p_pParent = &pBuffer;
                  v36 = *(FxMemoryObject_vtbl **)Driver;
                  v66 = v35;
                  v65 = 4096;
                  if ( v36->QueryInterface((FxObject *)Driver, (FxQueryInterfaceParams *)&p_pParent) < 0 )
                  {
                    WPP_IFR_SF_qDqD(
                      *(_FX_DRIVER_GLOBALS **)(Driver + 16),
                      v37,
                      v38,
                      v39,
                      Tag,
                      (const void *)v34,
                      0x1000u,
                      (const void *)Driver,
                      *(unsigned __int16 *)(Driver + 8));
                    FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(Driver + 16), WDF_INVALID_HANDLE, v34, 0x1000uLL);
                  }
                  Driver = (unsigned __int64)pBuffer;
                }
              }
              else
              {
LABEL_141:
                if ( !v28->m_ParentObject )
                {
                  v55 = v28->m_Globals;
                  if ( (FxMemoryObject *)v55->Driver != v28 )
                  {
                    Driver = (unsigned __int64)v55->Driver;
                    pBuffer = (FxMemoryObject *)Driver;
                  }
                }
              }
              if ( !Driver )
                goto LABEL_66;
              v40 = KeAcquireSpinLockRaiseToDpc(&v28->m_SpinLock.m_Lock);
              m_ObjectState = v28->m_ObjectState;
              v42 = v40;
              if ( m_ObjectState == 1 )
              {
                if ( v28->m_ParentObject )
                {
                  KeReleaseSpinLock(&v28->m_SpinLock.m_Lock, v40);
                  v48 = -1071644147;
                }
                else
                {
                  v43 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(Driver + 56));
                  v44 = *(_WORD *)(Driver + 26);
                  v45 = v43;
                  if ( v44 == 1 )
                  {
                    v46 = *(_LIST_ENTRY **)(Driver + 40);
                    p_m_ChildEntry = &v28->m_ChildEntry;
                    v28->m_ChildEntry.Flink = (_LIST_ENTRY *)(Driver + 32);
                    v28->m_ChildEntry.Blink = v46;
                    if ( v46->Flink != (_LIST_ENTRY *)(Driver + 32) )
                      __fastfail(3u);
                    v46->Flink = p_m_ChildEntry;
                    *(_QWORD *)(Driver + 40) = p_m_ChildEntry;
                    if ( !v28->m_DeviceBase )
                      v28->m_DeviceBase = *(FxDeviceBase **)(Driver + 96);
                    KeReleaseSpinLock((PKSPIN_LOCK)(Driver + 56), v45);
                    v28->m_ParentObject = (FxObject *)Driver;
                    v48 = 0;
                  }
                  else
                  {
                    if ( (*(_WORD *)(Driver + 24) & 0x200) != 0 )
                    {
                      if ( *(_WORD *)(Driver + 10) )
                        v62 = (const void *)(Driver ^ 0xFFFFFFFFFFFFFFF8uLL);
                      else
                        v62 = 0LL;
                      WPP_IFR_SF_qqLL(
                        *(_FX_DRIVER_GLOBALS **)(Driver + 16),
                        4u,
                        0x14u,
                        0xBu,
                        WPP_FxObject_hpp_Traceguids,
                        (const void *)Driver,
                        v62,
                        v44,
                        1u);
                    }
                    KeReleaseSpinLock((PKSPIN_LOCK)(Driver + 56), v45);
                    v48 = -1073741738;
                  }
                  KeReleaseSpinLock(&v28->m_SpinLock.m_Lock, v42);
                  if ( v48 >= 0 )
                  {
LABEL_66:
                    if ( Attributes )
                    {
                      m_ObjectSize = v28->m_ObjectSize;
                      if ( m_ObjectSize )
                        v50 = (char *)v28 + m_ObjectSize;
                      else
                        v50 = 0LL;
                      EvtDestroyCallback = Attributes->EvtDestroyCallback;
                      if ( EvtDestroyCallback )
                        *((_QWORD *)v50 + 3) = EvtDestroyCallback;
                      EvtCleanupCallback = Attributes->EvtCleanupCallback;
                      if ( EvtCleanupCallback )
                      {
                        *((_QWORD *)v50 + 2) = EvtCleanupCallback;
                        v28->m_ObjectFlags |= 0x400u;
                      }
                    }
                    v28->m_ObjectFlags |= 8u;
                    if ( v28->m_ObjectSize )
                      v53 = (WDFMEMORY__ *)((unsigned __int64)v28 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    else
                      v53 = 0LL;
                    v48 = 0;
                    v54 = Buffer;
                    *Memory = v53;
                    if ( v54 )
                      *v54 = (void *)v28->GetBuffer(&v28->IFxMemory);
                    return v48;
                  }
                }
              }
              else
              {
                if ( (v28->m_ObjectFlags & 0x200) != 0 )
                {
                  if ( v28->m_ObjectSize )
                    v61 = (const void *)((unsigned __int64)v28 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  else
                    v61 = 0LL;
                  WPP_IFR_SF_qqLL(
                    v28->m_Globals,
                    4u,
                    0x14u,
                    0xBu,
                    WPP_FxObject_hpp_Traceguids,
                    v28,
                    v61,
                    m_ObjectState,
                    0);
                }
                KeReleaseSpinLock(&v28->m_SpinLock.m_Lock, v42);
                v48 = -1073741738;
              }
            }
            FxObject::DeleteFromFailedCreate(v28);
            return v48;
          }
          goto LABEL_118;
        }
      }
    }
    WPP_IFR_SF_DDxd(
      m_Globals,
      ContextSizeOverride,
      v24,
      v19,
      Tag,
      0x78u,
      (unsigned __int16)v17,
      ContextSizeOverride,
      v25);
    goto LABEL_118;
  }
  return result;
}
