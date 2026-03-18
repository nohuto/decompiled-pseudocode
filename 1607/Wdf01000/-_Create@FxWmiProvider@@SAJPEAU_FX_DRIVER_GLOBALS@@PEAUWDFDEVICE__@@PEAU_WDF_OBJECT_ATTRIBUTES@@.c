/*
 * XREFs of ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0031BB0
 * Callers:
 *     imp_WdfWmiInstanceCreate @ 0x1C00314A0 (imp_WdfWmiInstanceCreate.c)
 *     imp_WdfWmiProviderCreate @ 0x1C006F460 (imp_WdfWmiProviderCreate.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A070 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     __security_check_cookie @ 0x1C003A860 (__security_check_cookie.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003B8A0 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003B900 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003BAB8 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0063DB0 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0063E54 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_DDd @ 0x1C0064788 (WPP_IFR_SF_DDd.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0066A4C (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ @ 0x1C006F694 (-DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ.c)
 *     WPP_IFR_SF_Dddd @ 0x1C006F8CC (WPP_IFR_SF_Dddd.c)
 *     ?DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z @ 0x1C00708B4 (-DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z.c)
 *     ?RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z @ 0x1C00709DC (-RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x1C0070A4C (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C007BB94 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_DDxd @ 0x1C007BC28 (WPP_IFR_SF_DDxd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C9490 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxWmiProvider::_Create(
        _FX_DRIVER_GLOBALS *CallersGlobals,
        unsigned __int64 Device,
        _WDF_OBJECT_ATTRIBUTES *ProviderAttributes,
        _WDF_WMI_PROVIDER_CONFIG *WmiProviderConfig,
        WDFWMIPROVIDER__ **WmiProvider,
        FxWmiProvider **Provider)
{
  FxObject *v8; // rcx
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
  SIZE_T v19; // r13
  int v20; // ebx
  void *Caller; // rax
  _QWORD *v22; // rax
  _FX_DRIVER_GLOBALS *v23; // rdx
  unsigned __int64 v24; // rbx
  _QWORD *v25; // r14
  unsigned __int8 **v26; // r13
  FxVerifierLock *v27; // rdi
  __int64 v28; // rax
  _QWORD *v29; // r12
  int (__fastcall *EvtWmiProviderFunctionControl)(WDFWMIPROVIDER__ *, _WDF_WMI_PROVIDER_CONTROL, unsigned __int8); // rax
  unsigned __int64 *v31; // r15
  KIRQL v32; // al
  unsigned __int8 v33; // r8
  __int64 v34; // r14
  KIRQL v35; // al
  unsigned __int8 v36; // r8
  _QWORD *v37; // rdi
  _QWORD *v38; // rsi
  bool v39; // dl
  _QWORD *v40; // rax
  unsigned __int8 v41; // r12
  int v42; // esi
  bool v43; // zf
  void *v44; // r14
  _WDF_OBJECT_ATTRIBUTES *v45; // r12
  KIRQL v46; // r15
  KIRQL v47; // r14
  FxVerifierLock **v48; // rcx
  unsigned __int64 v49; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rcx
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rcx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v53; // rax
  unsigned __int64 ContextSize; // r8
  _FX_DRIVER_GLOBALS *v55; // rdx
  FxVerifierLock *v56; // rcx
  FxVerifierLock *v57; // rcx
  unsigned __int64 ParentObject; // rdx
  __int64 v59; // rax
  unsigned __int16 v60; // ax
  char *v61; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  const _GUID *Tag; // [rsp+28h] [rbp-79h]
  int _a3; // [rsp+38h] [rbp-69h]
  int globals; // [rsp+40h] [rbp-61h]
  int v67; // [rsp+48h] [rbp-59h]
  FxDevice *pDevice; // [rsp+58h] [rbp-49h] BYREF
  void *PPObject; // [rsp+60h] [rbp-41h] BYREF
  FxVerifierLock *VerifierLock; // [rsp+68h] [rbp-39h] BYREF
  _WDF_OBJECT_ATTRIBUTES *v71; // [rsp+70h] [rbp-31h]
  WDFWMIPROVIDER__ **v72; // [rsp+78h] [rbp-29h]
  _GUID zeroGuid; // [rsp+80h] [rbp-21h] BYREF
  __int64 v74; // [rsp+90h] [rbp-11h]
  void *retaddr; // [rsp+F0h] [rbp+4Fh]

  v72 = WmiProvider;
  *(_QWORD *)&zeroGuid.Data1 = Provider;
  v71 = ProviderAttributes;
  if ( !Device )
    FxVerifierBugCheckWorker(CallersGlobals, WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  v8 = (FxObject *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v9) = 0;
  if ( (Device & 1) != 0 )
  {
    v9 = LOWORD(v8->__vftable);
    v8 = (FxObject *)((char *)v8 - v9);
  }
  if ( v8->m_Type == 4098 )
  {
    PPObject = v8;
  }
  else
  {
    FxObjectHandleGetPtrQI(v8, &PPObject, (void *)Device, 0x1002u, v9);
    v8 = (FxObject *)PPObject;
  }
  m_Globals = v8->m_Globals;
  *Provider = 0LL;
  BYTE1(pDevice) = 0;
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
      WPP_IFR_SF_Dddd(m_Globals, Flags, v13, v14, Tag, WmiProviderConfig->Flags, _a3, globals, v67);
      return 3221225485LL;
    }
    *(_QWORD *)zeroGuid.Data4 = 0LL;
    v74 = 0LL;
    if ( RtlCompareMemory(&WmiProviderConfig->Guid, zeroGuid.Data4, 0x10uLL) == 16 )
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
      v51 = (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v51 < ContextSizeOverride )
        goto LABEL_129;
      v52 = v51 + 272;
      if ( v52 < 0x110 )
      {
        v20 = -1073741675;
        goto LABEL_81;
      }
      v19 = v52;
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
      v22 = FxPoolAllocator(
              m_Globals,
              &m_Globals->FxPoolFrameworks,
              ExDefaultNonPagedPoolType,
              v19,
              m_Globals->Tag,
              Caller);
      v24 = (unsigned __int64)v22;
      if ( v22 )
      {
        if ( m_Globals->FxVerifierHandle )
        {
          memset(v22, 0, 0x20uLL);
          *(_DWORD *)(v24 + 28) = 1146058822;
          v24 += 32LL;
        }
        memset((void *)(v24 + 224), 0, 0x30uLL);
        *(_QWORD *)(v24 + 224) = v24;
        if ( ProviderAttributes )
        {
          v53 = ProviderAttributes->ContextTypeInfo;
          if ( v53 )
          {
            ContextSize = ProviderAttributes->ContextSizeOverride;
            if ( !ContextSize )
              ContextSize = v53->ContextSize;
            memset((void *)(v24 + 272), 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          }
          *(_QWORD *)(v24 + 256) = ProviderAttributes->ContextTypeInfo;
        }
      }
      if ( v24 )
      {
        v25 = PPObject;
        *(_QWORD *)v24 = &FxObject::`vftable';
        v26 = (unsigned __int8 **)(v24 + 72);
        *(_QWORD *)(v24 + 16) = m_Globals;
        *(_DWORD *)(v24 + 8) = 14684164;
        v27 = 0LL;
        *(_QWORD *)(v24 + 56) = 0LL;
        *(_BYTE *)(v24 + 48) = 1;
        *(_DWORD *)(v24 + 12) = 1;
        *(_DWORD *)(v24 + 24) = 0x10000;
        *(_QWORD *)(v24 + 64) = 0LL;
        *(_QWORD *)(v24 + 40) = v24 + 32;
        *(_QWORD *)(v24 + 32) = v24 + 32;
        *(_QWORD *)(v24 + 80) = v24 + 72;
        *(_QWORD *)(v24 + 72) = v24 + 72;
        v28 = *(_QWORD *)(v24 + 16);
        *(_QWORD *)(v24 + 88) = 0LL;
        *(_QWORD *)(v24 + 96) = 0LL;
        if ( *(_BYTE *)(v28 + 316) )
          FxObject::Vf_VerifyConstruct((FxObject *)v24, v23, 0);
        *(_QWORD *)v24 = &FxNonPagedObject::`vftable';
        *(_QWORD *)(v24 + 112) = 0LL;
        *(_BYTE *)(v24 + 104) = 1;
        if ( *(char *)(v24 + 24) < 0 )
        {
          v55 = *(_FX_DRIVER_GLOBALS **)(v24 + 16);
          if ( v55->FxVerifierLock )
          {
            VerifierLock = 0LL;
            FxVerifierLock::CreateAndInitialize(&VerifierLock, v55, (FxObject *)v24);
            *(_QWORD *)(v24 - 24) = VerifierLock;
          }
        }
        *(_QWORD *)v24 = &FxWmiProvider::`vftable';
        v29 = (_QWORD *)(v24 + 120);
        *(_QWORD *)(v24 + 200) = 0LL;
        *(_QWORD *)(v24 + 128) = v24 + 120;
        *(_QWORD *)(v24 + 120) = v24 + 120;
        *(_QWORD *)(v24 + 144) = v24 + 136;
        *(_QWORD *)(v24 + 136) = v24 + 136;
        *(_DWORD *)(v24 + 152) = 0;
        *(_QWORD *)(v24 + 160) = v25[83];
        *(_WORD *)(v24 + 208) = 0;
        *(_BYTE *)(v24 + 210) = 0;
        *(_QWORD *)(v24 + 184) = 0LL;
        *(_DWORD *)(v24 + 196) = WmiProviderConfig->Flags;
        *(_DWORD *)(v24 + 192) = WmiProviderConfig->MinInstanceBufferSize;
        *(_GUID *)(v24 + 168) = WmiProviderConfig->Guid;
        EvtWmiProviderFunctionControl = WmiProviderConfig->EvtWmiProviderFunctionControl;
        if ( EvtWmiProviderFunctionControl )
          *(_QWORD *)(v24 + 200) = EvtWmiProviderFunctionControl;
        v31 = (unsigned __int64 *)(v24 + 56);
        v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v24 + 56));
        *(_WORD *)(v24 + 24) |= 2u;
        KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 56), v32);
        *(_WORD *)(v24 + 24) |= 0x800u;
        v34 = *((_QWORD *)PPObject + 83);
        if ( *(char *)(v34 + 24) < 0 && (v56 = *(FxVerifierLock **)(v34 - 24)) != 0LL )
        {
          FxVerifierLock::Lock(v56, (unsigned __int8 *)&pDevice, v33);
          v35 = (unsigned __int8)pDevice;
        }
        else
        {
          v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v34 + 112));
        }
        LOBYTE(pDevice) = v35;
        if ( (_QWORD *)*v29 == v29 )
        {
          v37 = *(_QWORD **)(v34 + 120);
          v38 = (_QWORD *)(v34 + 120);
          if ( v37 == (_QWORD *)(v34 + 120) )
          {
LABEL_35:
            v39 = 0;
            if ( *(_DWORD *)(v34 + 140) == 1 )
            {
              v39 = (*(_BYTE *)(v24 + 196) & 4) != 0;
            }
            else if ( *(_DWORD *)(v34 + 140) == 2 )
            {
              v42 = -1073741436;
              v27 = 0LL;
              goto LABEL_98;
            }
            ++*(_DWORD *)(v34 + 136);
            v40 = *(_QWORD **)(v34 + 128);
            if ( (_QWORD *)*v40 != v38 )
              __fastfail(3u);
            *v29 = v38;
            *(_QWORD *)(v24 + 128) = v40;
            *v40 = v29;
            *(_QWORD *)(v34 + 128) = v29;
            v41 = (unsigned __int8)pDevice;
            if ( v39 )
              BYTE1(pDevice) = FxWmiIrpHandler::DeferUpdateLocked((FxWmiIrpHandler *)v34, (unsigned __int8)pDevice);
            v27 = 0LL;
            v42 = 0;
LABEL_41:
            if ( *(char *)(v34 + 24) < 0 && (v57 = *(FxVerifierLock **)(v34 - 24)) != 0LL )
              FxVerifierLock::Unlock(v57, v41, v36);
            else
              KeReleaseSpinLock((PKSPIN_LOCK)(v34 + 112), v41);
            if ( v42 >= 0 )
            {
              v43 = *(_WORD *)(v24 + 10) == 0;
              v44 = PPObject;
              VerifierLock = 0LL;
              if ( v43 )
              {
                v42 = -1073741816;
              }
              else
              {
                v45 = v71;
                if ( v71 && v71->ExecutionLevel == WdfExecutionLevelPassive )
                {
                  FxObject::MarkPassiveCallbacks((FxObject *)v24, ObjectLock);
                  v27 = VerifierLock;
                }
                if ( v44 )
                {
                  v27 = (FxVerifierLock *)v44;
                  VerifierLock = (FxVerifierLock *)v44;
                }
                else if ( v45 && (ParentObject = (unsigned __int64)v45->ParentObject) != 0 )
                {
                  FxObjectHandleGetPtr(
                    *(_FX_DRIVER_GLOBALS **)(v24 + 16),
                    ParentObject,
                    0x1000u,
                    (void **)&VerifierLock);
                  v27 = VerifierLock;
                }
                else if ( !*(_QWORD *)(v24 + 64) )
                {
                  v59 = *(_QWORD *)(v24 + 16);
                  if ( *(_QWORD *)(v59 + 72) != v24 )
                    v27 = *(FxVerifierLock **)(v59 + 72);
                  VerifierLock = v27;
                }
                if ( !v27 )
                  goto LABEL_57;
                v46 = KeAcquireSpinLockRaiseToDpc(v31);
                if ( *(_WORD *)(v24 + 26) == 1 )
                {
                  if ( *(_QWORD *)(v24 + 64) )
                  {
                    KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 56), v46);
                    v42 = -1071644147;
                  }
                  else
                  {
                    v47 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v27->m_Mutex.m_Lock.Owner);
                    if ( WORD1(v27->m_Lock.m_Lock) == 1 )
                    {
                      v48 = *(FxVerifierLock ***)&v27->m_Mutex.m_DbgFlagIsInitialized;
                      if ( *v48 != (FxVerifierLock *)&v27->m_OldIrql )
                        __fastfail(3u);
                      *v26 = &v27->m_OldIrql;
                      *(_QWORD *)(v24 + 80) = v48;
                      *v48 = (FxVerifierLock *)v26;
                      *(_QWORD *)&v27->m_Mutex.m_DbgFlagIsInitialized = v26;
                      if ( !*(_QWORD *)(v24 + 96) )
                        *(_QWORD *)(v24 + 96) = *(_QWORD *)&v27->m_Mutex.m_Lock.OldIrql;
                      KeReleaseSpinLock((PKSPIN_LOCK)&v27->m_Mutex.m_Lock.Owner, v47);
                      v42 = 0;
                      *(_QWORD *)(v24 + 64) = v27;
                    }
                    else
                    {
                      FxObject::TraceDroppedEvent((FxObject *)v27, FxObjectDroppedEventAddChildObjectInternal);
                      KeReleaseSpinLock((PKSPIN_LOCK)&v27->m_Mutex.m_Lock.Owner, v47);
                      v42 = -1073741738;
                    }
                    KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 56), v46);
                    if ( v42 >= 0 )
                    {
LABEL_57:
                      if ( v45 )
                      {
                        v60 = *(_WORD *)(v24 + 10);
                        if ( v60 )
                          v61 = (char *)(v24 + v60);
                        else
                          v61 = 0LL;
                        EvtDestroyCallback = v45->EvtDestroyCallback;
                        if ( EvtDestroyCallback )
                          *((_QWORD *)v61 + 3) = EvtDestroyCallback;
                        EvtCleanupCallback = v45->EvtCleanupCallback;
                        if ( EvtCleanupCallback )
                        {
                          *((_QWORD *)v61 + 2) = EvtCleanupCallback;
                          *(_WORD *)(v24 + 24) |= 0x400u;
                        }
                      }
                      *(_WORD *)(v24 + 24) |= 8u;
                      if ( *(_WORD *)(v24 + 10) )
                        v49 = v24 ^ 0xFFFFFFFFFFFFFFF8uLL;
                      else
                        v49 = 0LL;
                      v42 = 0;
                      *v72 = (WDFWMIPROVIDER__ *)v49;
                      **(_QWORD **)&zeroGuid.Data1 = v24;
                      if ( BYTE1(pDevice) )
                        FxWmiIrpHandler::UpdateGuids(*((FxWmiIrpHandler **)PPObject + 83));
                      return (unsigned int)v42;
                    }
                  }
                }
                else
                {
                  FxObject::TraceDroppedEvent((FxObject *)v24, FxObjectDroppedEventAssignParentObject);
                  KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 56), v46);
                  v42 = -1073741738;
                }
                v44 = PPObject;
              }
              FxWmiIrpHandler::RemoveProvider(*((FxWmiIrpHandler **)v44 + 83), (FxWmiProvider *)v24);
            }
            if ( BYTE1(pDevice) )
              FxWmiIrpHandler::DecrementUpdateCount(*((FxWmiIrpHandler **)PPObject + 83));
            FxObject::DeleteFromFailedCreate((FxObject *)v24);
            return (unsigned int)v42;
          }
          while ( RtlCompareMemory(v37 + 6, (const void *)(v24 + 168), 0x10uLL) != 16 )
          {
            v37 = (_QWORD *)*v37;
            if ( v37 == v38 )
              goto LABEL_34;
          }
          if ( v37 == (_QWORD *)120 )
          {
LABEL_34:
            v31 = (unsigned __int64 *)(v24 + 56);
            goto LABEL_35;
          }
          v31 = (unsigned __int64 *)(v24 + 56);
          v27 = 0LL;
        }
        v42 = 0x40000000;
LABEL_98:
        v41 = (unsigned __int8)pDevice;
        goto LABEL_41;
      }
LABEL_129:
      WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0xFu, WPP_FxWmiProvider_cpp_Traceguids, -1073741670);
      return 3221225626LL;
    }
LABEL_81:
    WPP_IFR_SF_DDxd(m_Globals, 0, v16, v17, Tag, 0xD8u, 0, ContextSizeOverride, v20);
    goto LABEL_129;
  }
  return result;
}
