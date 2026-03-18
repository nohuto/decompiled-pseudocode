/*
 * XREFs of ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C0033F00
 * Callers:
 *     imp_WdfWmiInstanceCreate @ 0x1C0033C60 (imp_WdfWmiInstanceCreate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000D7C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003F3E8 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003FAE4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C00671C4 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C006721C (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C006A220 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     WPP_IFR_SF_iid @ 0x1C0073B30 (WPP_IFR_SF_iid.c)
 *     WPP_IFR_SF_iqdd @ 0x1C0073C1C (WPP_IFR_SF_iqdd.c)
 *     WPP_IFR_SF_qdqqqqd @ 0x1C0073E44 (WPP_IFR_SF_qdqqqqd.c)
 *     WPP_IFR_SF_qDd @ 0x1C0075C18 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_DDxd @ 0x1C007FDD4 (WPP_IFR_SF_DDxd.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D4A70 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D4AB0 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxWmiInstanceExternal::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxWmiProvider *Provider,
        _WDF_WMI_INSTANCE_CONFIG *WmiInstanceConfig,
        _WDF_OBJECT_ATTRIBUTES *InstanceAttributes,
        WDFWMIINSTANCE__ **WmiInstance,
        FxWmiInstanceExternal **Instance)
{
  __int64 result; // rax
  char *v11; // rdx
  unsigned int v12; // r8d
  unsigned __int64 ContextSizeOverride; // r9
  signed int v14; // esi
  __int64 v15; // r10
  unsigned __int64 v16; // rdx
  ULONG v17; // r12d
  unsigned __int64 v18; // r8
  int v19; // ebx
  void *Caller; // rax
  FxWmiInstanceExternal *v21; // rax
  _FX_DRIVER_GLOBALS *v22; // rdx
  FxWmiInstanceExternal *v23; // rbx
  _LIST_ENTRY *p_m_ChildEntry; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned int v26; // edx
  unsigned __int8 v27; // al
  KIRQL v28; // r13
  KIRQL v29; // r12
  _LIST_ENTRY *Blink; // rcx
  _FX_DRIVER_GLOBALS *v31; // rdx
  WDFWMIINSTANCE__ *v32; // rdi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v33; // rax
  unsigned __int64 v34; // rax
  FxVerifierLock *v35; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v36; // rax
  unsigned __int64 v37; // r8
  unsigned __int16 m_ObjectSize; // ax
  char *v39; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  unsigned __int8 UseContextForQuery; // al
  const void *v43; // rbp
  int (__fastcall *EvtWmiInstanceSetInstance)(WDFWMIINSTANCE__ *, unsigned int, void *); // rcx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  char *ContextSize; // rbx
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  unsigned __int64 m_MinInstanceBufferSize; // rcx
  unsigned __int16 v50; // ax
  const void *v51; // rbp
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rcx
  _FX_DRIVER_GLOBALS *v54; // rdx
  FxTagTracker *v55; // rcx
  const _GUID *Tag; // [rsp+20h] [rbp-78h]
  int level; // [rsp+40h] [rbp-58h]
  int v58; // [rsp+58h] [rbp-40h]
  char *v59; // [rsp+60h] [rbp-38h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  FxVerifierLock *VerifierLock; // [rsp+A8h] [rbp+10h] BYREF

  v59 = 0LL;
  *Instance = 0LL;
  *WmiInstance = 0LL;
  if ( (Provider->m_Flags & 1) != 0 )
  {
    UseContextForQuery = WmiInstanceConfig->UseContextForQuery;
    if ( UseContextForQuery
      || WmiInstanceConfig->EvtWmiInstanceQueryInstance
      || WmiInstanceConfig->EvtWmiInstanceSetInstance
      || WmiInstanceConfig->EvtWmiInstanceSetItem
      || WmiInstanceConfig->EvtWmiInstanceExecuteMethod )
    {
      v43 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !Provider->m_ObjectSize )
        v43 = 0LL;
      WPP_IFR_SF_qdqqqqd(
        FxDriverGlobals,
        (unsigned __int8)Provider,
        (unsigned int)WmiInstanceConfig,
        (unsigned __int16)InstanceAttributes,
        Tag,
        v43,
        UseContextForQuery,
        WmiInstanceConfig->EvtWmiInstanceQueryInstance,
        WmiInstanceConfig->EvtWmiInstanceSetInstance,
        WmiInstanceConfig->EvtWmiInstanceSetItem,
        WmiInstanceConfig->EvtWmiInstanceExecuteMethod,
        v58);
      return 3221225485LL;
    }
  }
  result = FxValidateObjectAttributes(FxDriverGlobals, InstanceAttributes, 1, (unsigned __int16)InstanceAttributes);
  v14 = result;
  if ( (int)result < 0 )
    return result;
  v15 = -1LL;
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
  ContextSizeOverride = InstanceAttributes->ContextSizeOverride;
  ContextSize = (char *)ContextTypeInfo->ContextSize;
  v59 = ContextSize;
  if ( ContextSizeOverride )
  {
    v11 = &ContextSize[ContextSizeOverride];
    v47 = ContextTypeInfo->ContextSize;
    v48 = -1LL;
    v12 = (unsigned int)ContextSize;
    if ( &ContextSize[ContextSizeOverride] >= ContextSize )
      v48 = (__int64)&ContextSize[ContextSizeOverride];
    ContextSize = (char *)v48;
    v59 = (char *)v48;
    v14 = (unsigned __int64)v11 < v47 ? 0xC0000095 : 0;
    if ( (unsigned __int64)v11 < v47 )
    {
      WPP_IFR_SF_iid(
        FxDriverGlobals,
        (unsigned __int8)v11,
        v12,
        ContextSizeOverride,
        Tag,
        v48,
        ContextSizeOverride,
        (unsigned __int64)v11 < v47 ? 0xC0000095 : 0);
      return (unsigned int)v14;
    }
  }
  if ( (unsigned __int64)ContextSize > 0xFFFFFFFF )
  {
    WPP_IFR_SF_qDd(
      FxDriverGlobals,
      (unsigned __int8)v11,
      0x12u,
      0xFu,
      WPP_FxWmiInstance_cpp_Traceguids,
      ContextSize,
      0xFFFFFFFF,
      0xC0000095);
    return 3221225621LL;
  }
  m_MinInstanceBufferSize = Provider->m_MinInstanceBufferSize;
  if ( (unsigned __int64)ContextSize >= m_MinInstanceBufferSize )
  {
LABEL_4:
    v16 = 0LL;
    v17 = FxDriverGlobals->Tag;
    if ( InstanceAttributes )
    {
      v33 = InstanceAttributes->ContextTypeInfo;
      if ( v33 )
      {
        v16 = InstanceAttributes->ContextSizeOverride;
        if ( !v16 )
          v16 = v33->ContextSize;
      }
    }
    v18 = 240LL;
    v19 = 0;
    VerifierLock = (FxVerifierLock *)240;
    if ( v16 )
    {
      v34 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v34 < v16 )
        goto LABEL_104;
      v35 = (FxVerifierLock *)(v34 + 240);
      if ( (unsigned __int64)v35 < 0xF0 )
      {
        VerifierLock = (FxVerifierLock *)-1LL;
        v19 = -1073741675;
        goto LABEL_88;
      }
      v18 = (unsigned __int64)v35;
      VerifierLock = v35;
    }
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      v52 = v18 + 48;
      v53 = v18;
      if ( v18 + 48 >= v18 )
        v15 = v18 + 48;
      v18 = v15;
      VerifierLock = (FxVerifierLock *)v15;
      v19 = v52 < v53 ? 0xC0000095 : 0;
    }
    if ( v19 >= 0 )
    {
      if ( FxDriverGlobals->FxPoolTrackingOn )
        Caller = retaddr;
      else
        Caller = 0LL;
      v21 = (FxWmiInstanceExternal *)FxPoolAllocator(
                                       FxDriverGlobals,
                                       &FxDriverGlobals->FxPoolFrameworks,
                                       ExDefaultNonPagedPoolType,
                                       v18,
                                       v17,
                                       Caller);
      v23 = v21;
      if ( v21 )
      {
        if ( FxDriverGlobals->FxVerifierHandle )
        {
          memset(v21, 0, 0x30uLL);
          LODWORD(v23->m_ChildListHead.Flink) = 1146058822;
          v23 = (FxWmiInstanceExternal *)((char *)v23 + 48);
        }
        memset(&v23[1].m_Type, 0, 0x30uLL);
        *(_QWORD *)&v23[1].m_Type = v23;
        if ( InstanceAttributes )
        {
          v36 = InstanceAttributes->ContextTypeInfo;
          if ( v36 )
          {
            v37 = InstanceAttributes->ContextSizeOverride;
            if ( !v37 )
              v37 = v36->ContextSize;
            memset(&v23[1].m_SpinLock.m_Lock, 0, (v37 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          }
          v23[1].m_ChildListHead.Blink = (_LIST_ENTRY *)InstanceAttributes->ContextTypeInfo;
        }
      }
      if ( v23 )
      {
        v23->m_Globals = FxDriverGlobals;
        v23->__vftable = (FxWmiInstanceExternal_vtbl *)&FxObject::`vftable';
        p_m_ChildEntry = &v23->m_ChildEntry;
        *(_DWORD *)&v23->m_Type = 12587060;
        v23->m_SpinLock.m_DbgFlagIsInitialized = 1;
        v23->m_SpinLock.m_Lock = 0LL;
        v23->m_Refcnt = 1;
        *(_DWORD *)&v23->m_ObjectFlags = 0x10000;
        v23->m_ParentObject = 0LL;
        v23->m_ChildListHead.Blink = &v23->m_ChildListHead;
        v23->m_ChildListHead.Flink = &v23->m_ChildListHead;
        v23->m_ChildEntry.Blink = &v23->m_ChildEntry;
        v23->m_ChildEntry.Flink = &v23->m_ChildEntry;
        m_Globals = v23->m_Globals;
        v23->m_DisposeSingleEntry.Next = 0LL;
        v23->m_DeviceBase = 0LL;
        if ( m_Globals->FxVerifierOn )
          FxObject::Vf_VerifyConstruct(v23, v22, 0);
        v23->__vftable = (FxWmiInstanceExternal_vtbl *)FxNonPagedObject::`vftable';
        v23->m_NPLock.m_Lock = 0LL;
        v23->m_NPLock.m_DbgFlagIsInitialized = 1;
        if ( SLOBYTE(v23->m_ObjectFlags) < 0 )
        {
          v54 = v23->m_Globals;
          if ( v54->FxVerifierLock )
          {
            VerifierLock = 0LL;
            FxVerifierLock::CreateAndInitialize(&VerifierLock, v54, v23);
            v23[-1].m_QueryInstanceCallback.m_Method = (int (__fastcall *)(WDFWMIINSTANCE__ *, unsigned int, void *, unsigned int *))VerifierLock;
          }
        }
        v23->__vftable = (FxWmiInstanceExternal_vtbl *)FxWmiInstance::`vftable';
        v23->m_ListEntry.Blink = &v23->m_ListEntry;
        v23->m_ListEntry.Flink = &v23->m_ListEntry;
        v23->m_Provider = Provider;
        v26 = _InterlockedIncrement(&Provider->m_Refcnt);
        if ( SLOBYTE(Provider->m_ObjectFlags) < 0 )
        {
          v55 = *(FxTagTracker **)&Provider[-1].m_Guid.Data1;
          if ( v55 )
            FxTagTracker::UpdateTagHistory(
              v55,
              v23,
              37,
              "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiinstance.cpp",
              TagAddRef,
              v26);
        }
        v23->m_ObjectFlags |= 0x800u;
        v23->__vftable = (FxWmiInstanceExternal_vtbl *)FxWmiInstanceExternal::`vftable';
        v23->m_QueryInstanceCallback.m_Method = 0LL;
        v23->m_SetInstanceCallback.m_Method = 0LL;
        v23->m_SetItemCallback.m_Method = 0LL;
        v23->m_ExecuteMethodCallback.m_Method = 0LL;
        v23->m_ContextLength = 0;
        v27 = WmiInstanceConfig->UseContextForQuery;
        v23->m_UseContextForQuery = v27;
        if ( !v27 )
          v23->m_QueryInstanceCallback.m_Method = WmiInstanceConfig->EvtWmiInstanceQueryInstance;
        v23->m_SetInstanceCallback.m_Method = WmiInstanceConfig->EvtWmiInstanceSetInstance;
        v23->m_SetItemCallback.m_Method = WmiInstanceConfig->EvtWmiInstanceSetItem;
        v23->m_ExecuteMethodCallback.m_Method = WmiInstanceConfig->EvtWmiInstanceExecuteMethod;
        if ( v59 )
          v23->m_ContextLength = (unsigned int)v59;
        if ( v14 >= 0 )
        {
          if ( v23->m_ObjectSize )
          {
            if ( InstanceAttributes && InstanceAttributes->ExecutionLevel == WdfExecutionLevelPassive )
              FxObject::MarkPassiveCallbacks(v23, ObjectLock);
            v28 = KeAcquireSpinLockRaiseToDpc(&v23->m_SpinLock.m_Lock);
            if ( v23->m_ObjectState == 1 )
            {
              if ( v23->m_ParentObject )
              {
                KeReleaseSpinLock(&v23->m_SpinLock.m_Lock, v28);
                v14 = -1071644147;
              }
              else
              {
                v29 = KeAcquireSpinLockRaiseToDpc(&Provider->m_SpinLock.m_Lock);
                if ( Provider->m_ObjectState == 1 )
                {
                  Blink = Provider->m_ChildListHead.Blink;
                  if ( Blink->Flink != &Provider->m_ChildListHead )
                    __fastfail(3u);
                  p_m_ChildEntry->Flink = &Provider->m_ChildListHead;
                  v23->m_ChildEntry.Blink = Blink;
                  Blink->Flink = p_m_ChildEntry;
                  Provider->m_ChildListHead.Blink = p_m_ChildEntry;
                  if ( !v23->m_DeviceBase )
                    v23->m_DeviceBase = Provider->m_DeviceBase;
                  KeReleaseSpinLock(&Provider->m_SpinLock.m_Lock, v29);
                  v14 = 0;
                  v23->m_ParentObject = Provider;
                }
                else
                {
                  FxObject::TraceDroppedEvent(Provider, FxObjectDroppedEventAddChildObjectInternal);
                  KeReleaseSpinLock(&Provider->m_SpinLock.m_Lock, v29);
                  v14 = -1073741738;
                }
                KeReleaseSpinLock(&v23->m_SpinLock.m_Lock, v28);
                if ( v14 >= 0 )
                {
                  if ( InstanceAttributes )
                  {
                    m_ObjectSize = v23->m_ObjectSize;
                    if ( m_ObjectSize )
                      v39 = (char *)v23 + m_ObjectSize;
                    else
                      v39 = 0LL;
                    EvtDestroyCallback = InstanceAttributes->EvtDestroyCallback;
                    if ( EvtDestroyCallback )
                      *((_QWORD *)v39 + 3) = EvtDestroyCallback;
                    EvtCleanupCallback = InstanceAttributes->EvtCleanupCallback;
                    if ( EvtCleanupCallback )
                    {
                      *((_QWORD *)v39 + 2) = EvtCleanupCallback;
                      v23->m_ObjectFlags |= 0x400u;
                    }
                  }
                  v23->m_ObjectFlags |= 8u;
                  if ( v23->m_ObjectSize )
                    v32 = (WDFWMIINSTANCE__ *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  else
                    v32 = 0LL;
                  if ( v23->m_Globals->FxVerifierOn )
                    FxObject::Vf_VerifyLeakDetectionConsiderObject(v23, v31);
                  v14 = 0;
                  *WmiInstance = v32;
                  *Instance = v23;
                  return (unsigned int)v14;
                }
              }
            }
            else
            {
              FxObject::TraceDroppedEvent(v23, FxObjectDroppedEventAssignParentObject);
              KeReleaseSpinLock(&v23->m_SpinLock.m_Lock, v28);
              v14 = -1073741738;
            }
          }
          else
          {
            v14 = -1073741816;
          }
        }
        FxObject::DeleteFromFailedCreate(v23);
        return (unsigned int)v14;
      }
LABEL_104:
      WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0x11u, WPP_FxWmiInstance_cpp_Traceguids, -1073741670);
      return 3221225626LL;
    }
LABEL_88:
    WPP_IFR_SF_DDxd(FxDriverGlobals, v16, v18, ContextSizeOverride, Tag, 0xB8u, 0, v16, v19);
    goto LABEL_104;
  }
  v50 = Provider->m_ObjectSize;
  v51 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v50 )
    v51 = 0LL;
  WPP_IFR_SF_iqdd(
    FxDriverGlobals,
    (unsigned __int8)v11,
    v12,
    ContextSizeOverride,
    Tag,
    (__int64)ContextSize,
    v51,
    m_MinInstanceBufferSize,
    level);
  return 3221225507LL;
}
