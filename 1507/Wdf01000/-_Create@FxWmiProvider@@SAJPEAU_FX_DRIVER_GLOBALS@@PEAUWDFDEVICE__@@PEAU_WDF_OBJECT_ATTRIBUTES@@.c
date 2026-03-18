/*
 * XREFs of ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0024720
 * Callers:
 *     imp_WdfWmiInstanceCreate @ 0x1C0024010 (imp_WdfWmiInstanceCreate.c)
 *     imp_WdfWmiProviderCreate @ 0x1C00689A0 (imp_WdfWmiProviderCreate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0030CC4 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0031BDC (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0031E08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ @ 0x1C0068D54 (-DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ.c)
 *     WPP_IFR_SF_Dddd @ 0x1C0069010 (WPP_IFR_SF_Dddd.c)
 *     ?DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z @ 0x1C0069F44 (-DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z.c)
 *     ?RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z @ 0x1C006A088 (-RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x1C006A118 (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 *     WPP_IFR_SF_DDxd @ 0x1C0079714 (WPP_IFR_SF_DDxd.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D1734 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxWmiProvider::_Create(
        _FX_DRIVER_GLOBALS *CallersGlobals,
        unsigned __int64 Device,
        _WDF_OBJECT_ATTRIBUTES *ProviderAttributes,
        _WDF_WMI_PROVIDER_CONFIG *WmiProviderConfig,
        WDFWMIPROVIDER__ **WmiProvider,
        FxWmiProvider **Provider)
{
  FxDevice *v8; // rcx
  __int64 v9; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 result; // rax
  unsigned __int8 v12; // dl
  unsigned int v13; // r8d
  unsigned __int16 v14; // r9
  unsigned int Flags; // edx
  unsigned int v16; // r8d
  unsigned __int16 v17; // r9
  unsigned __int64 ContextSizeOverride; // rax
  SIZE_T v19; // r15
  int v20; // ebx
  _LIST_ENTRY *Caller; // rax
  FxWmiProvider *v22; // rax
  _FX_DRIVER_GLOBALS *v23; // rdx
  FxWmiProvider *v24; // rbx
  FxDevice *v25; // rbp
  _LIST_ENTRY *p_m_ChildEntry; // r12
  unsigned __int64 Driver; // rdi
  _FX_DRIVER_GLOBALS *v28; // rax
  _LIST_ENTRY *p_m_ListEntry; // r15
  int (__fastcall *EvtWmiProviderFunctionControl)(WDFWMIPROVIDER__ *, _WDF_WMI_PROVIDER_CONTROL, unsigned __int8); // rax
  unsigned __int64 *p_m_Lock; // r14
  KIRQL v32; // al
  unsigned __int8 v33; // r8
  FxWmiIrpHandler *m_PkgWmi; // rbp
  unsigned __int8 v35; // al
  unsigned __int8 v36; // r8
  _LIST_ENTRY *Flink; // rdi
  _LIST_ENTRY *p_m_ProvidersListHead; // rsi
  bool v39; // dl
  _LIST_ENTRY *Blink; // rax
  unsigned __int8 v41; // r15
  unsigned __int8 updated; // r13
  int v43; // esi
  bool v44; // zf
  FxDevice *v45; // rbp
  _WDF_OBJECT_ATTRIBUTES *v46; // r15
  KIRQL v47; // al
  unsigned __int16 m_ObjectState; // dx
  KIRQL v49; // r14
  KIRQL v50; // al
  unsigned __int16 v51; // dx
  KIRQL v52; // bp
  _LIST_ENTRY *v53; // rcx
  unsigned __int64 v54; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rcx
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v58; // rax
  unsigned __int64 ContextSize; // r8
  _FX_DRIVER_GLOBALS *v60; // r14
  __int64 v61; // r15
  FxVerifierLock *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdi
  FxVerifierLock *v65; // rcx
  FxVerifierLock *v66; // rcx
  unsigned __int64 ParentObject; // r8
  __int64 v68; // rcx
  _FX_DRIVER_GLOBALS *v69; // rax
  const void *v70; // rcx
  const void *v71; // rcx
  unsigned __int16 m_ObjectSize; // ax
  char *v73; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  const _GUID *Tag; // [rsp+20h] [rbp-C8h]
  int _a3; // [rsp+30h] [rbp-B8h]
  int globals; // [rsp+38h] [rbp-B0h]
  int id; // [rsp+40h] [rbp-A8h]
  unsigned __int8 PreviousIrql[8]; // [rsp+50h] [rbp-98h] BYREF
  FxDevice *pDevice; // [rsp+58h] [rbp-90h] BYREF
  void *PPObject; // [rsp+60h] [rbp-88h] BYREF
  _WDF_OBJECT_ATTRIBUTES *v83; // [rsp+68h] [rbp-80h]
  FxWmiProvider **v84; // [rsp+70h] [rbp-78h]
  WDFWMIPROVIDER__ **v85; // [rsp+78h] [rbp-70h]
  _GUID zeroGuid; // [rsp+80h] [rbp-68h] BYREF
  _LIST_ENTRY *retaddr; // [rsp+E8h] [rbp+0h]

  v85 = WmiProvider;
  v84 = Provider;
  v83 = ProviderAttributes;
  if ( !Device )
    FxVerifierBugCheckWorker(CallersGlobals, WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  v8 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v9) = 0;
  if ( (Device & 1) != 0 )
  {
    v9 = LOWORD(v8->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v8 = (FxDevice *)((char *)v8 - v9);
  }
  if ( v8->m_Type == 4098 )
  {
    pDevice = v8;
  }
  else
  {
    FxObjectHandleGetPtrQI(v8, (void **)&pDevice, (void *)Device, 0x1002u, v9);
    v8 = pDevice;
  }
  m_Globals = v8->m_Globals;
  *Provider = 0LL;
  *WmiProvider = 0LL;
  result = FxValidateObjectAttributes(m_Globals, ProviderAttributes, 1, (unsigned __int16)WmiProviderConfig);
  if ( (int)result >= 0 )
  {
    if ( WmiProviderConfig->Size != 40 )
    {
      WPP_IFR_SF_DDd(
        m_Globals,
        v12,
        0xCu,
        0xAu,
        WPP_FxWmiProvider_cpp_Traceguids,
        WmiProviderConfig->Size,
        40,
        -1073741820);
      return 3221225476LL;
    }
    Flags = WmiProviderConfig->Flags;
    if ( (Flags & 0xFFFFFFF8) != 0 )
    {
      WPP_IFR_SF_DDd(m_Globals, Flags, 0xCu, 0xBu, WPP_FxWmiProvider_cpp_Traceguids, Flags, 7, -1073741811);
      return 3221225485LL;
    }
    if ( (Flags & 0xFFFFFFFB) != 0 && (Flags & 4) != 0 )
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0xCu, WPP_FxWmiProvider_cpp_Traceguids, -1073741811);
      return 3221225485LL;
    }
    if ( WmiProviderConfig->EvtWmiProviderFunctionControl && (Flags & 6) == 0 )
    {
      WPP_IFR_SF_Dddd(m_Globals, Flags, v13, v14, Tag, WmiProviderConfig->Flags, _a3, globals, id);
      return 3221225485LL;
    }
    *(_QWORD *)&zeroGuid.Data1 = 0LL;
    *(_QWORD *)zeroGuid.Data4 = 0LL;
    if ( RtlCompareMemory(&WmiProviderConfig->Guid, &zeroGuid, 0x10uLL) == 16 )
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0xEu, WPP_FxWmiProvider_cpp_Traceguids, -1073741811);
      return 3221225485LL;
    }
    ContextSizeOverride = 0LL;
    if ( ProviderAttributes )
    {
      ContextTypeInfo = ProviderAttributes->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        ContextSizeOverride = ProviderAttributes->ContextSizeOverride;
        if ( !ContextSizeOverride )
          ContextSizeOverride = ContextTypeInfo->ContextSize;
      }
    }
    v19 = 272LL;
    v20 = 0;
    if ( ContextSizeOverride )
    {
      v56 = (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v56 < ContextSizeOverride )
        goto LABEL_151;
      v57 = v56 + 272;
      if ( v57 < 0x110 )
      {
        v20 = -1073741675;
        goto LABEL_81;
      }
      v19 = v57;
    }
    if ( m_Globals->FxVerifierHandle )
    {
      if ( v19 + 32 < v19 )
      {
        v19 = -1LL;
        v20 = -1073741675;
      }
      else
      {
        v19 += 32LL;
        v20 = 0;
      }
    }
    if ( v20 >= 0 )
    {
      if ( m_Globals->FxPoolTrackingOn )
        Caller = retaddr;
      else
        Caller = 0LL;
      v22 = (FxWmiProvider *)FxPoolAllocator(
                               m_Globals,
                               (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
                               ExDefaultNonPagedPoolType,
                               v19,
                               m_Globals->Tag,
                               Caller);
      v24 = v22;
      if ( v22 )
      {
        if ( m_Globals->FxVerifierHandle )
        {
          memset(v22, 0, 0x20uLL);
          *(_DWORD *)(&v24->m_ObjectState + 1) = 1146058822;
          v24 = (FxWmiProvider *)((char *)v24 + 32);
        }
        memset(&v24[1].m_Type, 0, 0x30uLL);
        *(_QWORD *)&v24[1].m_Type = v24;
        if ( ProviderAttributes )
        {
          v58 = ProviderAttributes->ContextTypeInfo;
          if ( v58 )
          {
            ContextSize = ProviderAttributes->ContextSizeOverride;
            if ( !ContextSize )
              ContextSize = v58->ContextSize;
            memset(&v24[1].m_SpinLock.m_Lock, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          }
          v24[1].m_ChildListHead.Blink = (_LIST_ENTRY *)ProviderAttributes->ContextTypeInfo;
        }
      }
      if ( v24 )
      {
        v25 = pDevice;
        v24->m_Globals = m_Globals;
        p_m_ChildEntry = &v24->m_ChildEntry;
        v24->__vftable = (FxWmiProvider_vtbl *)&FxObject::`vftable';
        Driver = 0LL;
        *(_DWORD *)&v24->m_Type = 14684164;
        v24->m_SpinLock.m_Lock = 0LL;
        v24->m_SpinLock.m_DbgFlagIsInitialized = 1;
        v24->m_Refcnt = 1;
        *(_DWORD *)&v24->m_ObjectFlags = 0x10000;
        v24->m_ParentObject = 0LL;
        v24->m_ChildListHead.Blink = &v24->m_ChildListHead;
        v24->m_ChildListHead.Flink = &v24->m_ChildListHead;
        v24->m_ChildEntry.Blink = &v24->m_ChildEntry;
        v24->m_ChildEntry.Flink = &v24->m_ChildEntry;
        v28 = v24->m_Globals;
        v24->m_DisposeSingleEntry.Next = 0LL;
        v24->m_DeviceBase = 0LL;
        if ( v28->FxVerifierOn )
          FxObject::Vf_VerifyConstruct(v24, v23, 0);
        v24->__vftable = (FxWmiProvider_vtbl *)&FxNonPagedObject::`vftable';
        v24->m_NPLock.m_Lock = 0LL;
        v24->m_NPLock.m_DbgFlagIsInitialized = 1;
        if ( SLOBYTE(v24->m_ObjectFlags) >= 0 || (v60 = v24->m_Globals, !v60->FxVerifierLock) )
        {
LABEL_26:
          v24->__vftable = (FxWmiProvider_vtbl *)&FxWmiProvider::`vftable';
          p_m_ListEntry = &v24->m_ListEntry;
          v24->m_FunctionControl.m_Method = 0LL;
          v24->m_ListEntry.Blink = &v24->m_ListEntry;
          v24->m_ListEntry.Flink = &v24->m_ListEntry;
          v24->m_InstanceListHead.Blink = &v24->m_InstanceListHead;
          v24->m_InstanceListHead.Flink = &v24->m_InstanceListHead;
          v24->m_NumInstances = 0;
          v24->m_Parent = v25->m_PkgWmi;
          *(_WORD *)&v24->m_EventControlEnabled = 0;
          v24->m_RemoveGuid = 0;
          v24->m_TracingHandle = 0LL;
          v24->m_Flags = WmiProviderConfig->Flags;
          v24->m_MinInstanceBufferSize = WmiProviderConfig->MinInstanceBufferSize;
          v24->m_Guid = WmiProviderConfig->Guid;
          EvtWmiProviderFunctionControl = WmiProviderConfig->EvtWmiProviderFunctionControl;
          if ( EvtWmiProviderFunctionControl )
            v24->m_FunctionControl.m_Method = EvtWmiProviderFunctionControl;
          p_m_Lock = &v24->m_SpinLock.m_Lock;
          v32 = KeAcquireSpinLockRaiseToDpc(&v24->m_SpinLock.m_Lock);
          v24->m_ObjectFlags |= 2u;
          KeReleaseSpinLock(&v24->m_SpinLock.m_Lock, v32);
          v24->m_ObjectFlags |= 0x800u;
          m_PkgWmi = pDevice->m_PkgWmi;
          if ( SLOBYTE(m_PkgWmi->m_ObjectFlags) < 0
            && (v65 = *(FxVerifierLock **)&m_PkgWmi[-1].m_UpdateEvent.m_Event.m_DbgFlagIsInitialized) != 0LL )
          {
            FxVerifierLock::Lock(v65, PreviousIrql, v33);
            v35 = PreviousIrql[0];
          }
          else
          {
            v35 = KeAcquireSpinLockRaiseToDpc(&m_PkgWmi->m_NPLock.m_Lock);
          }
          PreviousIrql[0] = v35;
          if ( p_m_ListEntry->Flink == p_m_ListEntry )
          {
            Flink = m_PkgWmi->m_ProvidersListHead.Flink;
            p_m_ProvidersListHead = &m_PkgWmi->m_ProvidersListHead;
            if ( Flink == &m_PkgWmi->m_ProvidersListHead )
            {
LABEL_35:
              v39 = 0;
              if ( m_PkgWmi->m_RegisteredState == WmiRegistered )
              {
                v39 = (v24->m_Flags & 4) != 0;
              }
              else if ( m_PkgWmi->m_RegisteredState == WmiDeregistered )
              {
                updated = 0;
                v43 = -1073741436;
                Driver = 0LL;
                goto LABEL_105;
              }
              ++m_PkgWmi->m_NumProviders;
              Blink = m_PkgWmi->m_ProvidersListHead.Blink;
              p_m_ListEntry->Flink = p_m_ProvidersListHead;
              v24->m_ListEntry.Blink = Blink;
              if ( Blink->Flink != p_m_ProvidersListHead )
                __fastfail(3u);
              Blink->Flink = p_m_ListEntry;
              m_PkgWmi->m_ProvidersListHead.Blink = p_m_ListEntry;
              v41 = PreviousIrql[0];
              if ( v39 )
                updated = FxWmiIrpHandler::DeferUpdateLocked(m_PkgWmi, PreviousIrql[0]);
              else
                updated = 0;
              Driver = 0LL;
              v43 = 0;
LABEL_41:
              if ( SLOBYTE(m_PkgWmi->m_ObjectFlags) < 0
                && (v66 = *(FxVerifierLock **)&m_PkgWmi[-1].m_UpdateEvent.m_Event.m_DbgFlagIsInitialized) != 0LL )
              {
                FxVerifierLock::Unlock(v66, v41, v36);
              }
              else
              {
                KeReleaseSpinLock(&m_PkgWmi->m_NPLock.m_Lock, v41);
              }
              if ( v43 >= 0 )
              {
                v44 = v24->m_ObjectSize == 0;
                v45 = pDevice;
                PPObject = 0LL;
                if ( v44 )
                {
                  v43 = -1073741816;
                }
                else
                {
                  v46 = v83;
                  if ( v83 && v83->ExecutionLevel == WdfExecutionLevelPassive )
                  {
                    FxObject::MarkPassiveCallbacks(v24, ObjectLock);
                    Driver = (unsigned __int64)PPObject;
                  }
                  if ( v45 )
                  {
                    Driver = (unsigned __int64)v45;
                    PPObject = v45;
                  }
                  else if ( v46 && (ParentObject = (unsigned __int64)v46->ParentObject) != 0 )
                  {
                    Driver = ~ParentObject & 0xFFFFFFFFFFFFFFF8uLL;
                    LOWORD(v68) = 0;
                    if ( (ParentObject & 1) != 0 )
                    {
                      v68 = *(unsigned __int16 *)Driver;
                      Driver -= v68;
                    }
                    if ( *(_WORD *)(Driver + 8) == 4096 )
                    {
                      PPObject = (void *)Driver;
                    }
                    else
                    {
                      FxObjectHandleGetPtrQI((FxObject *)Driver, &PPObject, (void *)ParentObject, 0x1000u, v68);
                      Driver = (unsigned __int64)PPObject;
                    }
                  }
                  else if ( !v24->m_ParentObject )
                  {
                    v69 = v24->m_Globals;
                    if ( (FxWmiProvider *)v69->Driver != v24 )
                      Driver = (unsigned __int64)v69->Driver;
                    PPObject = (void *)Driver;
                  }
                  if ( !Driver )
                    goto LABEL_57;
                  v47 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
                  m_ObjectState = v24->m_ObjectState;
                  v49 = v47;
                  if ( m_ObjectState == 1 )
                  {
                    if ( v24->m_ParentObject )
                    {
                      KeReleaseSpinLock(&v24->m_SpinLock.m_Lock, v47);
                      v43 = -1071644147;
                    }
                    else
                    {
                      v50 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(Driver + 56));
                      v51 = *(_WORD *)(Driver + 26);
                      v52 = v50;
                      if ( v51 == 1 )
                      {
                        v53 = *(_LIST_ENTRY **)(Driver + 40);
                        p_m_ChildEntry->Flink = (_LIST_ENTRY *)(Driver + 32);
                        v24->m_ChildEntry.Blink = v53;
                        if ( v53->Flink != (_LIST_ENTRY *)(Driver + 32) )
                          __fastfail(3u);
                        v53->Flink = p_m_ChildEntry;
                        *(_QWORD *)(Driver + 40) = p_m_ChildEntry;
                        if ( !v24->m_DeviceBase )
                          v24->m_DeviceBase = *(FxDeviceBase **)(Driver + 96);
                        KeReleaseSpinLock((PKSPIN_LOCK)(Driver + 56), v50);
                        v24->m_ParentObject = (FxObject *)Driver;
                        v43 = 0;
                      }
                      else
                      {
                        if ( (*(_WORD *)(Driver + 24) & 0x200) != 0 )
                        {
                          if ( *(_WORD *)(Driver + 10) )
                            v71 = (const void *)(Driver ^ 0xFFFFFFFFFFFFFFF8uLL);
                          else
                            v71 = 0LL;
                          WPP_IFR_SF_qqLL(
                            *(_FX_DRIVER_GLOBALS **)(Driver + 16),
                            4u,
                            0x14u,
                            0xBu,
                            WPP_FxObject_hpp_Traceguids,
                            (const void *)Driver,
                            v71,
                            v51,
                            1u);
                        }
                        KeReleaseSpinLock((PKSPIN_LOCK)(Driver + 56), v52);
                        v43 = -1073741738;
                      }
                      KeReleaseSpinLock(&v24->m_SpinLock.m_Lock, v49);
                      if ( v43 >= 0 )
                      {
LABEL_57:
                        if ( v46 )
                        {
                          m_ObjectSize = v24->m_ObjectSize;
                          if ( m_ObjectSize )
                            v73 = (char *)v24 + m_ObjectSize;
                          else
                            v73 = 0LL;
                          EvtDestroyCallback = v46->EvtDestroyCallback;
                          if ( EvtDestroyCallback )
                            *((_QWORD *)v73 + 3) = EvtDestroyCallback;
                          EvtCleanupCallback = v46->EvtCleanupCallback;
                          if ( EvtCleanupCallback )
                          {
                            *((_QWORD *)v73 + 2) = EvtCleanupCallback;
                            v24->m_ObjectFlags |= 0x400u;
                          }
                        }
                        v24->m_ObjectFlags |= 8u;
                        if ( v24->m_ObjectSize )
                          v54 = (unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL;
                        else
                          v54 = 0LL;
                        v43 = 0;
                        *v85 = (WDFWMIPROVIDER__ *)v54;
                        *v84 = v24;
                        if ( updated )
                          FxWmiIrpHandler::UpdateGuids(pDevice->m_PkgWmi);
                        return (unsigned int)v43;
                      }
                    }
                  }
                  else
                  {
                    if ( (v24->m_ObjectFlags & 0x200) != 0 )
                    {
                      if ( v24->m_ObjectSize )
                        v70 = (const void *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      else
                        v70 = 0LL;
                      WPP_IFR_SF_qqLL(
                        v24->m_Globals,
                        4u,
                        0x14u,
                        0xBu,
                        WPP_FxObject_hpp_Traceguids,
                        v24,
                        v70,
                        m_ObjectState,
                        0);
                    }
                    KeReleaseSpinLock(&v24->m_SpinLock.m_Lock, v49);
                    v43 = -1073741738;
                  }
                  v45 = pDevice;
                }
                FxWmiIrpHandler::RemoveProvider(v45->m_PkgWmi, v24);
              }
              if ( updated )
                FxWmiIrpHandler::DecrementUpdateCount(pDevice->m_PkgWmi);
              FxObject::DeleteFromFailedCreate(v24);
              return (unsigned int)v43;
            }
            while ( RtlCompareMemory(&Flink[3], &v24->m_Guid, 0x10uLL) != 16 )
            {
              Flink = Flink->Flink;
              if ( Flink == p_m_ProvidersListHead )
                goto LABEL_34;
            }
            if ( Flink == (_LIST_ENTRY *)120 )
            {
LABEL_34:
              p_m_Lock = &v24->m_SpinLock.m_Lock;
              goto LABEL_35;
            }
            p_m_Lock = &v24->m_SpinLock.m_Lock;
            Driver = 0LL;
          }
          v43 = 0x40000000;
          updated = 0;
LABEL_105:
          v41 = PreviousIrql[0];
          goto LABEL_41;
        }
        v61 = 0LL;
        v62 = (FxVerifierLock *)FxPoolAllocator(
                                  v60,
                                  (_LIST_ENTRY *)&v60->FxPoolFrameworks,
                                  ExDefaultNonPagedPoolType,
                                  0xB0uLL,
                                  v60->Tag,
                                  retaddr);
        if ( v62 )
        {
          FxVerifierLock::FxVerifierLock(v62, v60, v24);
          v64 = v63;
          if ( v63 )
          {
            if ( *(_BYTE *)(v63 + 122) )
            {
              *(_QWORD *)(v63 + 56) = 0LL;
              *(_DWORD *)(v63 + 64) = 0;
              *(_DWORD *)(v63 + 48) = 1;
              KeInitializeEvent((PRKEVENT)(v63 + 72), SynchronizationEvent, 0);
              *(_BYTE *)(v64 + 40) = 1;
            }
            v61 = v64;
            Driver = 0LL;
            goto LABEL_99;
          }
          Driver = 0LL;
        }
        WPP_IFR_SF_d(v60, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_hpp_Traceguids, -1073741670);
LABEL_99:
        *(_QWORD *)&v24[-1].m_MinInstanceBufferSize = v61;
        goto LABEL_26;
      }
LABEL_151:
      WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0xFu, WPP_FxWmiProvider_cpp_Traceguids, -1073741670);
      return 3221225626LL;
    }
LABEL_81:
    WPP_IFR_SF_DDxd(m_Globals, 0, v16, v17, Tag, 0xD8u, 0, ContextSizeOverride, v20);
    goto LABEL_151;
  }
  return result;
}
