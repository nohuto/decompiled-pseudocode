/*
 * XREFs of ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C002B4F0
 * Callers:
 *     imp_WdfWmiInstanceCreate @ 0x1C002B250 (imp_WdfWmiInstanceCreate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00097B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0056944 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0059F40 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     WPP_IFR_SF_iid @ 0x1C00619AC (WPP_IFR_SF_iid.c)
 *     WPP_IFR_SF_iqdd @ 0x1C0061A90 (WPP_IFR_SF_iqdd.c)
 *     WPP_IFR_SF_qdqqqqd @ 0x1C0061CAC (WPP_IFR_SF_qdqqqqd.c)
 *     WPP_IFR_SF_qDd @ 0x1C00635D8 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_DDxd @ 0x1C006D54C (WPP_IFR_SF_DDxd.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C006EA24 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C0070180 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00BA470 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
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
  FxVerifierLock *v11; // rdx
  unsigned int v12; // r8d
  unsigned __int16 v13; // r9
  int v14; // ebp
  unsigned __int64 v15; // rax
  ULONG v16; // r13d
  SIZE_T v17; // rcx
  int v18; // ebx
  void *Caller; // rax
  FxWmiInstanceExternal *v20; // rax
  _FX_DRIVER_GLOBALS *v21; // rdx
  FxWmiInstanceExternal *v22; // rbx
  _LIST_ENTRY *p_m_ChildEntry; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned int v25; // edx
  unsigned __int8 v26; // al
  KIRQL v27; // r13
  KIRQL v28; // r12
  _LIST_ENTRY *Blink; // rcx
  WDFWMIINSTANCE__ *v30; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v31; // rcx
  unsigned __int64 v32; // rdx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v33; // rax
  unsigned __int64 v34; // r8
  unsigned __int16 m_ObjectSize; // ax
  char *v36; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  unsigned __int8 UseContextForQuery; // al
  const void *v40; // rsi
  int (__fastcall *EvtWmiInstanceSetInstance)(WDFWMIINSTANCE__ *, unsigned int, void *); // rcx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 ContextSize; // rbx
  unsigned __int64 ContextSizeOverride; // rax
  void *v45; // rcx
  unsigned __int64 m_MinInstanceBufferSize; // rax
  const void *v47; // rsi
  _FX_DRIVER_GLOBALS *v48; // rdx
  FxTagTracker *m_TracingHandle; // rcx
  const _GUID *Tag; // [rsp+20h] [rbp-78h]
  int level; // [rsp+40h] [rbp-58h]
  int v52; // [rsp+58h] [rbp-40h]
  void *_a2; // [rsp+60h] [rbp-38h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  FxVerifierLock *VerifierLock; // [rsp+A8h] [rbp+10h] BYREF

  _a2 = 0LL;
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
      if ( Provider->m_ObjectSize )
        v40 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v40 = 0LL;
      WPP_IFR_SF_qdqqqqd(
        FxDriverGlobals,
        (unsigned __int8)Provider,
        (unsigned int)WmiInstanceConfig,
        (unsigned __int16)InstanceAttributes,
        Tag,
        v40,
        UseContextForQuery,
        WmiInstanceConfig->EvtWmiInstanceQueryInstance,
        WmiInstanceConfig->EvtWmiInstanceSetInstance,
        WmiInstanceConfig->EvtWmiInstanceSetItem,
        WmiInstanceConfig->EvtWmiInstanceExecuteMethod,
        v52);
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
    v45 = (void *)(ContextSizeOverride + ContextSize);
    if ( ContextSizeOverride + ContextSize < ContextSize )
    {
      WPP_IFR_SF_iid(FxDriverGlobals, (unsigned __int8)v11, v12, v13, Tag, -1LL, ContextSizeOverride, -1073741675);
      return 3221225621LL;
    }
    ContextSize += ContextSizeOverride;
    _a2 = v45;
    v14 = 0;
  }
  if ( ContextSize > 0xFFFFFFFF )
  {
    WPP_IFR_SF_qDd(
      FxDriverGlobals,
      (unsigned __int8)v11,
      0x12u,
      0xFu,
      WPP_FxWmiInstance_cpp_Traceguids,
      _a2,
      0xFFFFFFFF,
      0xC0000095);
    return 3221225621LL;
  }
  m_MinInstanceBufferSize = Provider->m_MinInstanceBufferSize;
  if ( ContextSize >= m_MinInstanceBufferSize )
  {
LABEL_4:
    v15 = 0LL;
    v16 = FxDriverGlobals->Tag;
    if ( InstanceAttributes )
    {
      v31 = InstanceAttributes->ContextTypeInfo;
      if ( v31 )
      {
        v15 = InstanceAttributes->ContextSizeOverride;
        if ( !v15 )
          v15 = v31->ContextSize;
      }
    }
    v17 = 240LL;
    v18 = 0;
    VerifierLock = (FxVerifierLock *)240;
    if ( v15 )
    {
      v32 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v32 < v15 )
        goto LABEL_103;
      v11 = (FxVerifierLock *)(v32 + 240);
      if ( (unsigned __int64)v11 < 0xF0 )
      {
        v18 = -1073741675;
        VerifierLock = (FxVerifierLock *)-1LL;
        goto LABEL_87;
      }
      v17 = (SIZE_T)v11;
      VerifierLock = v11;
    }
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      v11 = (FxVerifierLock *)(v17 + 32);
      if ( v17 + 32 < v17 )
      {
        v17 = -1LL;
        v18 = -1073741675;
        VerifierLock = (FxVerifierLock *)-1LL;
      }
      else
      {
        v17 += 32LL;
        VerifierLock = v11;
        v18 = 0;
      }
    }
    if ( v18 >= 0 )
    {
      if ( FxDriverGlobals->FxPoolTrackingOn )
        Caller = retaddr;
      else
        Caller = 0LL;
      v20 = (FxWmiInstanceExternal *)FxPoolAllocator(
                                       FxDriverGlobals,
                                       &FxDriverGlobals->FxPoolFrameworks,
                                       ExDefaultNonPagedPoolType,
                                       v17,
                                       v16,
                                       Caller);
      v22 = v20;
      if ( v20 )
      {
        if ( FxDriverGlobals->FxVerifierHandle )
        {
          memset(v20, 0, 0x20uLL);
          *(_DWORD *)(&v22->m_ObjectState + 1) = 1146058822;
          v22 = (FxWmiInstanceExternal *)((char *)v22 + 32);
        }
        memset(&v22[1].m_Type, 0, 0x30uLL);
        *(_QWORD *)&v22[1].m_Type = v22;
        if ( InstanceAttributes )
        {
          v33 = InstanceAttributes->ContextTypeInfo;
          if ( v33 )
          {
            v34 = InstanceAttributes->ContextSizeOverride;
            if ( !v34 )
              v34 = v33->ContextSize;
            memset(&v22[1].m_SpinLock.m_Lock, 0, (v34 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          }
          v22[1].m_ChildListHead.Blink = (_LIST_ENTRY *)InstanceAttributes->ContextTypeInfo;
        }
      }
      if ( v22 )
      {
        v22->m_Globals = FxDriverGlobals;
        v22->__vftable = (FxWmiInstanceExternal_vtbl *)&FxObject::`vftable';
        p_m_ChildEntry = &v22->m_ChildEntry;
        *(_DWORD *)&v22->m_Type = 12587060;
        v22->m_SpinLock.m_DbgFlagIsInitialized = 1;
        v22->m_SpinLock.m_Lock = 0LL;
        v22->m_Refcnt = 1;
        *(_DWORD *)&v22->m_ObjectFlags = 0x10000;
        v22->m_ParentObject = 0LL;
        v22->m_ChildListHead.Blink = &v22->m_ChildListHead;
        v22->m_ChildListHead.Flink = &v22->m_ChildListHead;
        v22->m_ChildEntry.Blink = &v22->m_ChildEntry;
        v22->m_ChildEntry.Flink = &v22->m_ChildEntry;
        m_Globals = v22->m_Globals;
        v22->m_DisposeSingleEntry.Next = 0LL;
        v22->m_DeviceBase = 0LL;
        if ( m_Globals->FxVerifierOn )
          FxObject::Vf_VerifyConstruct(v22, v21, 0);
        v22->__vftable = (FxWmiInstanceExternal_vtbl *)&FxNonPagedObject::`vftable';
        v22->m_NPLock.m_Lock = 0LL;
        v22->m_NPLock.m_DbgFlagIsInitialized = 1;
        if ( SLOBYTE(v22->m_ObjectFlags) < 0 )
        {
          v48 = v22->m_Globals;
          if ( v48->FxVerifierLock )
          {
            VerifierLock = 0LL;
            FxVerifierLock::CreateAndInitialize(&VerifierLock, v48, v22);
            v22[-1].m_SetItemCallback.m_Method = (int (__fastcall *)(WDFWMIINSTANCE__ *, unsigned int, unsigned int, void *))VerifierLock;
          }
        }
        v22->__vftable = (FxWmiInstanceExternal_vtbl *)&FxWmiInstance::`vftable';
        v22->m_ListEntry.Blink = &v22->m_ListEntry;
        v22->m_ListEntry.Flink = &v22->m_ListEntry;
        v22->m_Provider = Provider;
        v25 = _InterlockedIncrement(&Provider->m_Refcnt);
        if ( SLOBYTE(Provider->m_ObjectFlags) < 0 )
        {
          m_TracingHandle = (FxTagTracker *)Provider[-1].m_TracingHandle;
          if ( m_TracingHandle )
            FxTagTracker::UpdateTagHistory(
              m_TracingHandle,
              v22,
              37,
              "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiinstance.cpp",
              TagAddRef,
              v25);
        }
        v22->m_ObjectFlags |= 0x800u;
        v22->__vftable = (FxWmiInstanceExternal_vtbl *)&FxWmiInstanceExternal::`vftable';
        v22->m_QueryInstanceCallback.m_Method = 0LL;
        v22->m_SetInstanceCallback.m_Method = 0LL;
        v22->m_SetItemCallback.m_Method = 0LL;
        v22->m_ExecuteMethodCallback.m_Method = 0LL;
        v22->m_ContextLength = 0;
        v26 = WmiInstanceConfig->UseContextForQuery;
        v22->m_UseContextForQuery = v26;
        if ( !v26 )
          v22->m_QueryInstanceCallback.m_Method = WmiInstanceConfig->EvtWmiInstanceQueryInstance;
        v22->m_SetInstanceCallback.m_Method = WmiInstanceConfig->EvtWmiInstanceSetInstance;
        v22->m_SetItemCallback.m_Method = WmiInstanceConfig->EvtWmiInstanceSetItem;
        v22->m_ExecuteMethodCallback.m_Method = WmiInstanceConfig->EvtWmiInstanceExecuteMethod;
        if ( _a2 )
          v22->m_ContextLength = (unsigned int)_a2;
        if ( v14 >= 0 )
        {
          if ( v22->m_ObjectSize )
          {
            if ( InstanceAttributes && InstanceAttributes->ExecutionLevel == WdfExecutionLevelPassive )
              FxObject::MarkPassiveCallbacks(v22, ObjectLock);
            v27 = KeAcquireSpinLockRaiseToDpc(&v22->m_SpinLock.m_Lock);
            if ( v22->m_ObjectState == 1 )
            {
              if ( v22->m_ParentObject )
              {
                KeReleaseSpinLock(&v22->m_SpinLock.m_Lock, v27);
                v14 = -1071644147;
              }
              else
              {
                v28 = KeAcquireSpinLockRaiseToDpc(&Provider->m_SpinLock.m_Lock);
                if ( Provider->m_ObjectState == 1 )
                {
                  Blink = Provider->m_ChildListHead.Blink;
                  p_m_ChildEntry->Flink = &Provider->m_ChildListHead;
                  v22->m_ChildEntry.Blink = Blink;
                  if ( Blink->Flink != &Provider->m_ChildListHead )
                    __fastfail(3u);
                  Blink->Flink = p_m_ChildEntry;
                  Provider->m_ChildListHead.Blink = p_m_ChildEntry;
                  if ( !v22->m_DeviceBase )
                    v22->m_DeviceBase = Provider->m_DeviceBase;
                  KeReleaseSpinLock(&Provider->m_SpinLock.m_Lock, v28);
                  v14 = 0;
                  v22->m_ParentObject = Provider;
                }
                else
                {
                  FxObject::TraceDroppedEvent(Provider, FxObjectDroppedEventAddChildObjectInternal);
                  KeReleaseSpinLock(&Provider->m_SpinLock.m_Lock, v28);
                  v14 = -1073741738;
                }
                KeReleaseSpinLock(&v22->m_SpinLock.m_Lock, v27);
                if ( v14 >= 0 )
                {
                  if ( InstanceAttributes )
                  {
                    m_ObjectSize = v22->m_ObjectSize;
                    if ( m_ObjectSize )
                      v36 = (char *)v22 + m_ObjectSize;
                    else
                      v36 = 0LL;
                    EvtDestroyCallback = InstanceAttributes->EvtDestroyCallback;
                    if ( EvtDestroyCallback )
                      *((_QWORD *)v36 + 3) = EvtDestroyCallback;
                    EvtCleanupCallback = InstanceAttributes->EvtCleanupCallback;
                    if ( EvtCleanupCallback )
                    {
                      *((_QWORD *)v36 + 2) = EvtCleanupCallback;
                      v22->m_ObjectFlags |= 0x400u;
                    }
                  }
                  v22->m_ObjectFlags |= 8u;
                  if ( v22->m_ObjectSize )
                    v30 = (WDFWMIINSTANCE__ *)((unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  else
                    v30 = 0LL;
                  v14 = 0;
                  *WmiInstance = v30;
                  *Instance = v22;
                  return (unsigned int)v14;
                }
              }
            }
            else
            {
              FxObject::TraceDroppedEvent(v22, FxObjectDroppedEventAssignParentObject);
              KeReleaseSpinLock(&v22->m_SpinLock.m_Lock, v27);
              v14 = -1073741738;
            }
          }
          else
          {
            v14 = -1073741816;
          }
        }
        FxObject::DeleteFromFailedCreate(v22);
        return (unsigned int)v14;
      }
LABEL_103:
      WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0x11u, WPP_FxWmiInstance_cpp_Traceguids, -1073741670);
      return 3221225626LL;
    }
LABEL_87:
    WPP_IFR_SF_DDxd(FxDriverGlobals, (unsigned __int8)v11, 0, v13, Tag, 0xB8u, 0, v15, v18);
    goto LABEL_103;
  }
  if ( Provider->m_ObjectSize )
    v47 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v47 = 0LL;
  WPP_IFR_SF_iqdd(
    FxDriverGlobals,
    (unsigned __int8)v11,
    v12,
    v13,
    Tag,
    ContextSize,
    v47,
    m_MinInstanceBufferSize,
    level);
  return 3221225507LL;
}
