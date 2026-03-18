/*
 * XREFs of ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C00242B0
 * Callers:
 *     imp_WdfWmiInstanceCreate @ 0x1C0024010 (imp_WdfWmiInstanceCreate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0030CC4 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0031BDC (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     WPP_IFR_SF_qDd @ 0x1C005D990 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_iid @ 0x1C006989C (WPP_IFR_SF_iid.c)
 *     WPP_IFR_SF_iqdd @ 0x1C0069980 (WPP_IFR_SF_iqdd.c)
 *     WPP_IFR_SF_qdqqqqd @ 0x1C0069B9C (WPP_IFR_SF_qdqqqqd.c)
 *     WPP_IFR_SF_DDxd @ 0x1C0079714 (WPP_IFR_SF_DDxd.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D1734 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxWmiInstanceExternal::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 Provider,
        _WDF_WMI_INSTANCE_CONFIG *WmiInstanceConfig,
        _WDF_OBJECT_ATTRIBUTES *InstanceAttributes,
        WDFWMIINSTANCE__ **WmiInstance,
        FxWmiInstanceExternal **Instance)
{
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  unsigned int v12; // r8d
  unsigned __int16 v13; // r9
  int v14; // ebp
  unsigned __int64 v15; // rax
  SIZE_T v16; // rcx
  int v17; // ebx
  _LIST_ENTRY *Caller; // rax
  FxWmiInstanceExternal *v19; // rax
  _FX_DRIVER_GLOBALS *v20; // rdx
  FxWmiInstanceExternal *v21; // rbx
  _LIST_ENTRY *p_m_ChildEntry; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned int v24; // edx
  unsigned __int8 v25; // al
  KIRQL v26; // al
  unsigned __int16 m_ObjectState; // dx
  KIRQL v28; // r13
  KIRQL v29; // al
  unsigned __int16 v30; // dx
  KIRQL v31; // r12
  _LIST_ENTRY *v32; // rcx
  WDFWMIINSTANCE__ *v33; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v34; // rcx
  unsigned __int64 v35; // rdx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v36; // rax
  unsigned __int64 v37; // r8
  unsigned __int16 m_ObjectSize; // ax
  char *v39; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  unsigned __int8 UseContextForQuery; // al
  const void *v43; // rsi
  int (__fastcall *EvtWmiInstanceSetInstance)(WDFWMIINSTANCE__ *, unsigned int, void *); // rcx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 ContextSize; // rbx
  unsigned __int64 ContextSizeOverride; // rax
  void *v48; // rcx
  unsigned __int64 v49; // rax
  const void *v50; // rsi
  _FX_DRIVER_GLOBALS *v51; // r12
  __int64 v52; // r15
  FxVerifierLock *v53; // rax
  __int64 v54; // rax
  FxTagTracker *v55; // rcx
  const void *v56; // rcx
  const void *v57; // rcx
  const _GUID *Tag; // [rsp+20h] [rbp-78h]
  int level; // [rsp+40h] [rbp-58h]
  int v60; // [rsp+58h] [rbp-40h]
  void *_a2; // [rsp+60h] [rbp-38h]
  _LIST_ENTRY *retaddr; // [rsp+98h] [rbp+0h]

  _a2 = 0LL;
  *Instance = 0LL;
  *WmiInstance = 0LL;
  if ( (*(_DWORD *)(Provider + 196) & 1) != 0 )
  {
    UseContextForQuery = WmiInstanceConfig->UseContextForQuery;
    if ( UseContextForQuery
      || WmiInstanceConfig->EvtWmiInstanceQueryInstance
      || WmiInstanceConfig->EvtWmiInstanceSetInstance
      || WmiInstanceConfig->EvtWmiInstanceSetItem
      || WmiInstanceConfig->EvtWmiInstanceExecuteMethod )
    {
      if ( *(_WORD *)(Provider + 10) )
        v43 = (const void *)(Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v43 = 0LL;
      WPP_IFR_SF_qdqqqqd(
        FxDriverGlobals,
        Provider,
        (unsigned int)WmiInstanceConfig,
        (unsigned __int16)InstanceAttributes,
        Tag,
        v43,
        UseContextForQuery,
        WmiInstanceConfig->EvtWmiInstanceQueryInstance,
        WmiInstanceConfig->EvtWmiInstanceSetInstance,
        WmiInstanceConfig->EvtWmiInstanceSetItem,
        WmiInstanceConfig->EvtWmiInstanceExecuteMethod,
        v60);
      return 3221225485LL;
    }
  }
  result = FxValidateObjectAttributes(FxDriverGlobals, InstanceAttributes, 1, (unsigned __int16)InstanceAttributes);
  v14 = result;
  if ( (int)result < 0 )
    return result;
  if ( !WmiInstanceConfig->UseContextForQuery )
    goto LABEL_4;
  EvtWmiInstanceSetInstance = WmiInstanceConfig->EvtWmiInstanceSetInstance;
  if ( EvtWmiInstanceSetInstance || WmiInstanceConfig->EvtWmiInstanceSetItem )
  {
    WPP_IFR_SF_qid(
      FxDriverGlobals,
      2u,
      0x12u,
      0xCu,
      WPP_FxWmiInstance_cpp_Traceguids,
      EvtWmiInstanceSetInstance,
      (__int64)WmiInstanceConfig->EvtWmiInstanceSetItem,
      -1073741811);
    return 3221225485LL;
  }
  if ( !InstanceAttributes || (ContextTypeInfo = InstanceAttributes->ContextTypeInfo) == 0LL )
  {
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x12u, 0xDu, WPP_FxWmiInstance_cpp_Traceguids, InstanceAttributes, -1073741811);
    return 3221225485LL;
  }
  ContextSize = ContextTypeInfo->ContextSize;
  ContextSizeOverride = InstanceAttributes->ContextSizeOverride;
  _a2 = (void *)ContextSize;
  if ( ContextSizeOverride )
  {
    v48 = (void *)(ContextSizeOverride + ContextSize);
    if ( ContextSizeOverride + ContextSize < ContextSize )
    {
      WPP_IFR_SF_iid(FxDriverGlobals, v11, v12, v13, Tag, -1LL, ContextSizeOverride, -1073741675);
      return 3221225621LL;
    }
    ContextSize += ContextSizeOverride;
    _a2 = v48;
    v14 = 0;
  }
  if ( ContextSize > 0xFFFFFFFF )
  {
    WPP_IFR_SF_qDd(FxDriverGlobals, v11, 0x12u, 0xFu, WPP_FxWmiInstance_cpp_Traceguids, _a2, 0xFFFFFFFF, 0xC0000095);
    return 3221225621LL;
  }
  v49 = *(unsigned int *)(Provider + 192);
  if ( ContextSize >= v49 )
  {
LABEL_4:
    v15 = 0LL;
    if ( InstanceAttributes )
    {
      v34 = InstanceAttributes->ContextTypeInfo;
      if ( v34 )
      {
        v15 = InstanceAttributes->ContextSizeOverride;
        if ( !v15 )
          v15 = v34->ContextSize;
      }
    }
    v16 = 240LL;
    v17 = 0;
    if ( v15 )
    {
      v35 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v35 < v15 )
        goto LABEL_121;
      v11 = v35 + 240;
      if ( v11 < 0xF0 )
      {
        v17 = -1073741675;
        goto LABEL_87;
      }
      v16 = v11;
    }
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      LOBYTE(v11) = v16 + 32;
      if ( v16 + 32 < v16 )
      {
        v16 = -1LL;
        v17 = -1073741675;
      }
      else
      {
        v16 += 32LL;
        v17 = 0;
      }
    }
    if ( v17 >= 0 )
    {
      if ( FxDriverGlobals->FxPoolTrackingOn )
        Caller = retaddr;
      else
        Caller = 0LL;
      v19 = (FxWmiInstanceExternal *)FxPoolAllocator(
                                       FxDriverGlobals,
                                       (_LIST_ENTRY *)&FxDriverGlobals->FxPoolFrameworks,
                                       ExDefaultNonPagedPoolType,
                                       v16,
                                       FxDriverGlobals->Tag,
                                       Caller);
      v21 = v19;
      if ( v19 )
      {
        if ( FxDriverGlobals->FxVerifierHandle )
        {
          memset(v19, 0, 0x20uLL);
          *(_DWORD *)(&v21->m_ObjectState + 1) = 1146058822;
          v21 = (FxWmiInstanceExternal *)((char *)v21 + 32);
        }
        memset(&v21[1].m_Type, 0, 0x30uLL);
        *(_QWORD *)&v21[1].m_Type = v21;
        if ( InstanceAttributes )
        {
          v36 = InstanceAttributes->ContextTypeInfo;
          if ( v36 )
          {
            v37 = InstanceAttributes->ContextSizeOverride;
            if ( !v37 )
              v37 = v36->ContextSize;
            memset(&v21[1].m_SpinLock.m_Lock, 0, (v37 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          }
          v21[1].m_ChildListHead.Blink = (_LIST_ENTRY *)InstanceAttributes->ContextTypeInfo;
        }
      }
      if ( v21 )
      {
        v21->m_Globals = FxDriverGlobals;
        v21->__vftable = (FxWmiInstanceExternal_vtbl *)&FxObject::`vftable';
        p_m_ChildEntry = &v21->m_ChildEntry;
        *(_DWORD *)&v21->m_Type = 12587060;
        v21->m_SpinLock.m_DbgFlagIsInitialized = 1;
        v21->m_SpinLock.m_Lock = 0LL;
        v21->m_Refcnt = 1;
        *(_DWORD *)&v21->m_ObjectFlags = 0x10000;
        v21->m_ParentObject = 0LL;
        v21->m_ChildListHead.Blink = &v21->m_ChildListHead;
        v21->m_ChildListHead.Flink = &v21->m_ChildListHead;
        v21->m_ChildEntry.Blink = &v21->m_ChildEntry;
        v21->m_ChildEntry.Flink = &v21->m_ChildEntry;
        m_Globals = v21->m_Globals;
        v21->m_DisposeSingleEntry.Next = 0LL;
        v21->m_DeviceBase = 0LL;
        if ( m_Globals->FxVerifierOn )
          FxObject::Vf_VerifyConstruct(v21, v20, 0);
        v21->__vftable = (FxWmiInstanceExternal_vtbl *)&FxNonPagedObject::`vftable';
        v21->m_NPLock.m_Lock = 0LL;
        v21->m_NPLock.m_DbgFlagIsInitialized = 1;
        if ( SLOBYTE(v21->m_ObjectFlags) >= 0 || (v51 = v21->m_Globals, !v51->FxVerifierLock) )
        {
LABEL_18:
          v21->__vftable = (FxWmiInstanceExternal_vtbl *)&FxWmiInstance::`vftable';
          v21->m_ListEntry.Blink = &v21->m_ListEntry;
          v21->m_ListEntry.Flink = &v21->m_ListEntry;
          v21->m_Provider = (FxWmiProvider *)Provider;
          v24 = _InterlockedIncrement((volatile signed __int32 *)(Provider + 12));
          if ( *(char *)(Provider + 24) < 0 )
          {
            v55 = *(FxTagTracker **)(Provider - 32);
            if ( v55 )
              FxTagTracker::UpdateTagHistory(
                v55,
                v21,
                37,
                "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiinstance.cpp",
                TagAddRef,
                v24);
          }
          v21->m_ObjectFlags |= 0x800u;
          v21->__vftable = (FxWmiInstanceExternal_vtbl *)&FxWmiInstanceExternal::`vftable';
          v21->m_QueryInstanceCallback.m_Method = 0LL;
          v21->m_SetInstanceCallback.m_Method = 0LL;
          v21->m_SetItemCallback.m_Method = 0LL;
          v21->m_ExecuteMethodCallback.m_Method = 0LL;
          v21->m_ContextLength = 0;
          v25 = WmiInstanceConfig->UseContextForQuery;
          v21->m_UseContextForQuery = v25;
          if ( !v25 )
            v21->m_QueryInstanceCallback.m_Method = WmiInstanceConfig->EvtWmiInstanceQueryInstance;
          v21->m_SetInstanceCallback.m_Method = WmiInstanceConfig->EvtWmiInstanceSetInstance;
          v21->m_SetItemCallback.m_Method = WmiInstanceConfig->EvtWmiInstanceSetItem;
          v21->m_ExecuteMethodCallback.m_Method = WmiInstanceConfig->EvtWmiInstanceExecuteMethod;
          if ( _a2 )
            v21->m_ContextLength = (unsigned int)_a2;
          if ( v14 >= 0 )
          {
            if ( v21->m_ObjectSize )
            {
              if ( InstanceAttributes && InstanceAttributes->ExecutionLevel == WdfExecutionLevelPassive )
                FxObject::MarkPassiveCallbacks(v21, ObjectLock);
              v26 = KeAcquireSpinLockRaiseToDpc(&v21->m_SpinLock.m_Lock);
              m_ObjectState = v21->m_ObjectState;
              v28 = v26;
              if ( m_ObjectState == 1 )
              {
                if ( v21->m_ParentObject )
                {
                  KeReleaseSpinLock(&v21->m_SpinLock.m_Lock, v26);
                  v14 = -1071644147;
                }
                else
                {
                  v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(Provider + 56));
                  v30 = *(_WORD *)(Provider + 26);
                  v31 = v29;
                  if ( v30 == 1 )
                  {
                    v32 = *(_LIST_ENTRY **)(Provider + 40);
                    p_m_ChildEntry->Flink = (_LIST_ENTRY *)(Provider + 32);
                    v21->m_ChildEntry.Blink = v32;
                    if ( v32->Flink != (_LIST_ENTRY *)(Provider + 32) )
                      __fastfail(3u);
                    v32->Flink = p_m_ChildEntry;
                    *(_QWORD *)(Provider + 40) = p_m_ChildEntry;
                    if ( !v21->m_DeviceBase )
                      v21->m_DeviceBase = *(FxDeviceBase **)(Provider + 96);
                    KeReleaseSpinLock((PKSPIN_LOCK)(Provider + 56), v29);
                    v14 = 0;
                    v21->m_ParentObject = (FxObject *)Provider;
                  }
                  else
                  {
                    if ( (*(_WORD *)(Provider + 24) & 0x200) != 0 )
                    {
                      if ( *(_WORD *)(Provider + 10) )
                        v57 = (const void *)(Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
                      else
                        v57 = 0LL;
                      WPP_IFR_SF_qqLL(
                        *(_FX_DRIVER_GLOBALS **)(Provider + 16),
                        4u,
                        0x14u,
                        0xBu,
                        WPP_FxObject_hpp_Traceguids,
                        (const void *)Provider,
                        v57,
                        v30,
                        1u);
                    }
                    KeReleaseSpinLock((PKSPIN_LOCK)(Provider + 56), v31);
                    v14 = -1073741738;
                  }
                  KeReleaseSpinLock(&v21->m_SpinLock.m_Lock, v28);
                  if ( v14 >= 0 )
                  {
                    if ( InstanceAttributes )
                    {
                      m_ObjectSize = v21->m_ObjectSize;
                      if ( m_ObjectSize )
                        v39 = (char *)v21 + m_ObjectSize;
                      else
                        v39 = 0LL;
                      EvtDestroyCallback = InstanceAttributes->EvtDestroyCallback;
                      if ( EvtDestroyCallback )
                        *((_QWORD *)v39 + 3) = EvtDestroyCallback;
                      EvtCleanupCallback = InstanceAttributes->EvtCleanupCallback;
                      if ( EvtCleanupCallback )
                      {
                        *((_QWORD *)v39 + 2) = EvtCleanupCallback;
                        v21->m_ObjectFlags |= 0x400u;
                      }
                    }
                    v21->m_ObjectFlags |= 8u;
                    if ( v21->m_ObjectSize )
                      v33 = (WDFWMIINSTANCE__ *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    else
                      v33 = 0LL;
                    v14 = 0;
                    *WmiInstance = v33;
                    *Instance = v21;
                    return (unsigned int)v14;
                  }
                }
              }
              else
              {
                if ( (v21->m_ObjectFlags & 0x200) != 0 )
                {
                  if ( v21->m_ObjectSize )
                    v56 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  else
                    v56 = 0LL;
                  WPP_IFR_SF_qqLL(
                    v21->m_Globals,
                    4u,
                    0x14u,
                    0xBu,
                    WPP_FxObject_hpp_Traceguids,
                    v21,
                    v56,
                    m_ObjectState,
                    0);
                }
                KeReleaseSpinLock(&v21->m_SpinLock.m_Lock, v28);
                v14 = -1073741738;
              }
            }
            else
            {
              v14 = -1073741816;
            }
          }
          FxObject::DeleteFromFailedCreate(v21);
          return (unsigned int)v14;
        }
        v52 = 0LL;
        v53 = (FxVerifierLock *)FxPoolAllocator(
                                  v51,
                                  (_LIST_ENTRY *)&v51->FxPoolFrameworks,
                                  ExDefaultNonPagedPoolType,
                                  0xB0uLL,
                                  v51->Tag,
                                  retaddr);
        if ( v53 )
        {
          FxVerifierLock::FxVerifierLock(v53, v51, v21);
          v52 = v54;
          if ( v54 )
          {
            if ( *(_BYTE *)(v54 + 122) )
            {
              *(_DWORD *)(v54 + 48) = 1;
              *(_QWORD *)(v54 + 56) = 0LL;
              *(_DWORD *)(v54 + 64) = 0;
              KeInitializeEvent((PRKEVENT)(v54 + 72), SynchronizationEvent, 0);
              *(_BYTE *)(v52 + 40) = 1;
            }
            goto LABEL_99;
          }
          v52 = 0LL;
        }
        WPP_IFR_SF_d(v51, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_hpp_Traceguids, -1073741670);
LABEL_99:
        v21[-1].m_SetItemCallback.m_Method = (int (__fastcall *)(WDFWMIINSTANCE__ *, unsigned int, unsigned int, void *))v52;
        goto LABEL_18;
      }
LABEL_121:
      WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0x11u, WPP_FxWmiInstance_cpp_Traceguids, -1073741670);
      return 3221225626LL;
    }
LABEL_87:
    WPP_IFR_SF_DDxd(FxDriverGlobals, v11, 0, v13, Tag, 0xB8u, 0, v15, v17);
    goto LABEL_121;
  }
  if ( *(_WORD *)(Provider + 10) )
    v50 = (const void *)(Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v50 = 0LL;
  WPP_IFR_SF_iqdd(FxDriverGlobals, v11, v12, v13, Tag, ContextSize, v50, v49, level);
  return 3221225507LL;
}
