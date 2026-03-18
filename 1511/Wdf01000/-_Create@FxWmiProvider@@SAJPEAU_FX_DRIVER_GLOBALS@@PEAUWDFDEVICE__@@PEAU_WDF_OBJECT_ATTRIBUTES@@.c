/*
 * XREFs of ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C002B960
 * Callers:
 *     imp_WdfWmiInstanceCreate @ 0x1C002B250 (imp_WdfWmiInstanceCreate.c)
 *     imp_WdfWmiProviderCreate @ 0x1C0060D40 (imp_WdfWmiProviderCreate.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00097B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     __security_check_cookie @ 0x1C0035B00 (__security_check_cookie.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0056944 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_DDd @ 0x1C0058FD8 (WPP_IFR_SF_DDd.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0059F40 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ @ 0x1C0060F74 (-DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ.c)
 *     WPP_IFR_SF_Dddd @ 0x1C00611AC (WPP_IFR_SF_Dddd.c)
 *     ?DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z @ 0x1C0062054 (-DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z.c)
 *     ?RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z @ 0x1C006217C (-RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x1C00621EC (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C006D4B8 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_DDxd @ 0x1C006D54C (WPP_IFR_SF_DDxd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C006EA24 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006F418 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006F710 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00BA470 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
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
  FxWmiProvider *v22; // rax
  _FX_DRIVER_GLOBALS *v23; // rdx
  FxWmiProvider *v24; // rbx
  _QWORD *v25; // r14
  _LIST_ENTRY *p_m_ChildEntry; // r13
  FxDevice *Driver; // rdi
  _FX_DRIVER_GLOBALS *v28; // rax
  _LIST_ENTRY *p_m_ListEntry; // r12
  int (__fastcall *EvtWmiProviderFunctionControl)(WDFWMIPROVIDER__ *, _WDF_WMI_PROVIDER_CONTROL, unsigned __int8); // rax
  unsigned __int64 *p_m_Lock; // r15
  KIRQL v32; // al
  unsigned __int8 v33; // r8
  __int64 v34; // r14
  unsigned __int8 v35; // al
  unsigned __int8 v36; // r8
  _LIST_ENTRY *v37; // rdi
  _LIST_ENTRY *v38; // rsi
  bool v39; // dl
  _LIST_ENTRY *v40; // rax
  unsigned __int8 v41; // r12
  int v42; // esi
  bool v43; // zf
  FxDevice *v44; // r14
  _QWORD *v45; // r12
  KIRQL v46; // r15
  KIRQL v47; // r14
  _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v49; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rcx
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rcx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v53; // rax
  unsigned __int64 ContextSize; // r8
  _FX_DRIVER_GLOBALS *v55; // rdx
  FxVerifierLock *v56; // rcx
  FxVerifierLock *v57; // rcx
  unsigned __int64 v58; // rdx
  _FX_DRIVER_GLOBALS *v59; // rax
  unsigned __int16 m_ObjectSize; // ax
  char *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rcx
  const _GUID *Tag; // [rsp+28h] [rbp-79h]
  int _a3; // [rsp+38h] [rbp-69h]
  int globals; // [rsp+40h] [rbp-61h]
  int v67; // [rsp+48h] [rbp-59h]
  unsigned __int8 PreviousIrql; // [rsp+58h] [rbp-49h] BYREF
  unsigned __int8 updated; // [rsp+59h] [rbp-48h]
  FxDevice *pDevice; // [rsp+60h] [rbp-41h] BYREF
  void *PPObject; // [rsp+68h] [rbp-39h] BYREF
  WDFWMIPROVIDER__ **v72; // [rsp+70h] [rbp-31h]
  FxWmiProvider **v73; // [rsp+78h] [rbp-29h]
  _GUID zeroGuid; // [rsp+80h] [rbp-21h] BYREF
  __int64 v75; // [rsp+90h] [rbp-11h]
  void *retaddr; // [rsp+F0h] [rbp+4Fh]

  v72 = WmiProvider;
  v73 = Provider;
  *(_QWORD *)&zeroGuid.Data1 = ProviderAttributes;
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
  updated = 0;
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
    v75 = 0LL;
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
      v22 = (FxWmiProvider *)FxPoolAllocator(
                               m_Globals,
                               &m_Globals->FxPoolFrameworks,
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
          v53 = ProviderAttributes->ContextTypeInfo;
          if ( v53 )
          {
            ContextSize = ProviderAttributes->ContextSizeOverride;
            if ( !ContextSize )
              ContextSize = v53->ContextSize;
            memset(&v24[1].m_SpinLock.m_Lock, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          }
          v24[1].m_ChildListHead.Blink = (_LIST_ENTRY *)ProviderAttributes->ContextTypeInfo;
        }
      }
      if ( v24 )
      {
        v25 = PPObject;
        v24->__vftable = (FxWmiProvider_vtbl *)&FxObject::`vftable';
        p_m_ChildEntry = &v24->m_ChildEntry;
        v24->m_Globals = m_Globals;
        *(_DWORD *)&v24->m_Type = 14684164;
        Driver = 0LL;
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
        if ( SLOBYTE(v24->m_ObjectFlags) < 0 )
        {
          v55 = v24->m_Globals;
          if ( v55->FxVerifierLock )
          {
            pDevice = 0LL;
            FxVerifierLock::CreateAndInitialize((FxVerifierLock **)&pDevice, v55, v24);
            *(_QWORD *)&v24[-1].m_MinInstanceBufferSize = pDevice;
          }
        }
        v24->__vftable = (FxWmiProvider_vtbl *)&FxWmiProvider::`vftable';
        p_m_ListEntry = &v24->m_ListEntry;
        v24->m_FunctionControl.m_Method = 0LL;
        v24->m_ListEntry.Blink = &v24->m_ListEntry;
        v24->m_ListEntry.Flink = &v24->m_ListEntry;
        v24->m_InstanceListHead.Blink = &v24->m_InstanceListHead;
        v24->m_InstanceListHead.Flink = &v24->m_InstanceListHead;
        v24->m_NumInstances = 0;
        v24->m_Parent = (FxWmiIrpHandler *)v25[83];
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
        v34 = *((_QWORD *)PPObject + 83);
        if ( *(char *)(v34 + 24) < 0 && (v56 = *(FxVerifierLock **)(v34 - 24)) != 0LL )
        {
          FxVerifierLock::Lock(v56, &PreviousIrql, v33);
          v35 = PreviousIrql;
        }
        else
        {
          v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v34 + 112));
        }
        PreviousIrql = v35;
        if ( p_m_ListEntry->Flink == p_m_ListEntry )
        {
          v37 = *(_LIST_ENTRY **)(v34 + 120);
          v38 = (_LIST_ENTRY *)(v34 + 120);
          if ( v37 == (_LIST_ENTRY *)(v34 + 120) )
          {
LABEL_35:
            v39 = 0;
            if ( *(_DWORD *)(v34 + 140) == 1 )
            {
              v39 = (v24->m_Flags & 4) != 0;
            }
            else if ( *(_DWORD *)(v34 + 140) == 2 )
            {
              v42 = -1073741436;
              Driver = 0LL;
              goto LABEL_98;
            }
            ++*(_DWORD *)(v34 + 136);
            v40 = *(_LIST_ENTRY **)(v34 + 128);
            p_m_ListEntry->Flink = v38;
            v24->m_ListEntry.Blink = v40;
            if ( v40->Flink != v38 )
              __fastfail(3u);
            v40->Flink = p_m_ListEntry;
            *(_QWORD *)(v34 + 128) = p_m_ListEntry;
            v41 = PreviousIrql;
            if ( v39 )
              updated = FxWmiIrpHandler::DeferUpdateLocked((FxWmiIrpHandler *)v34, PreviousIrql);
            Driver = 0LL;
            v42 = 0;
LABEL_41:
            if ( *(char *)(v34 + 24) < 0 && (v57 = *(FxVerifierLock **)(v34 - 24)) != 0LL )
              FxVerifierLock::Unlock(v57, v41, v36);
            else
              KeReleaseSpinLock((PKSPIN_LOCK)(v34 + 112), v41);
            if ( v42 >= 0 )
            {
              v43 = v24->m_ObjectSize == 0;
              v44 = (FxDevice *)PPObject;
              pDevice = 0LL;
              if ( v43 )
              {
                v42 = -1073741816;
              }
              else
              {
                v45 = *(_QWORD **)&zeroGuid.Data1;
                if ( *(_QWORD *)&zeroGuid.Data1 && *(_DWORD *)(*(_QWORD *)&zeroGuid.Data1 + 24LL) == 2 )
                {
                  FxObject::MarkPassiveCallbacks(v24, ObjectLock);
                  Driver = pDevice;
                }
                if ( v44 )
                {
                  Driver = v44;
                  pDevice = v44;
                }
                else if ( v45 && (v58 = v45[4]) != 0 )
                {
                  FxObjectHandleGetPtr(v24->m_Globals, v58, 0x1000u, (void **)&pDevice);
                  Driver = pDevice;
                }
                else if ( !v24->m_ParentObject )
                {
                  v59 = v24->m_Globals;
                  if ( (FxWmiProvider *)v59->Driver != v24 )
                    Driver = (FxDevice *)v59->Driver;
                  pDevice = Driver;
                }
                if ( !Driver )
                  goto LABEL_57;
                v46 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
                if ( v24->m_ObjectState == 1 )
                {
                  if ( v24->m_ParentObject )
                  {
                    KeReleaseSpinLock(&v24->m_SpinLock.m_Lock, v46);
                    v42 = -1071644147;
                  }
                  else
                  {
                    v47 = KeAcquireSpinLockRaiseToDpc(&Driver->m_SpinLock.m_Lock);
                    if ( Driver->m_ObjectState == 1 )
                    {
                      Blink = Driver->m_ChildListHead.Blink;
                      p_m_ChildEntry->Flink = &Driver->m_ChildListHead;
                      v24->m_ChildEntry.Blink = Blink;
                      if ( Blink->Flink != &Driver->m_ChildListHead )
                        __fastfail(3u);
                      Blink->Flink = p_m_ChildEntry;
                      Driver->m_ChildListHead.Blink = p_m_ChildEntry;
                      if ( !v24->m_DeviceBase )
                        v24->m_DeviceBase = Driver->m_DeviceBase;
                      KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, v47);
                      v42 = 0;
                      v24->m_ParentObject = Driver;
                    }
                    else
                    {
                      FxObject::TraceDroppedEvent(Driver, FxObjectDroppedEventAddChildObjectInternal);
                      KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, v47);
                      v42 = -1073741738;
                    }
                    KeReleaseSpinLock(&v24->m_SpinLock.m_Lock, v46);
                    if ( v42 >= 0 )
                    {
LABEL_57:
                      if ( v45 )
                      {
                        m_ObjectSize = v24->m_ObjectSize;
                        if ( m_ObjectSize )
                          v61 = (char *)v24 + m_ObjectSize;
                        else
                          v61 = 0LL;
                        v62 = v45[2];
                        if ( v62 )
                          *((_QWORD *)v61 + 3) = v62;
                        v63 = v45[1];
                        if ( v63 )
                        {
                          *((_QWORD *)v61 + 2) = v63;
                          v24->m_ObjectFlags |= 0x400u;
                        }
                      }
                      v24->m_ObjectFlags |= 8u;
                      if ( v24->m_ObjectSize )
                        v49 = (unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL;
                      else
                        v49 = 0LL;
                      v42 = 0;
                      *v72 = (WDFWMIPROVIDER__ *)v49;
                      *v73 = v24;
                      if ( updated )
                        FxWmiIrpHandler::UpdateGuids(*((FxWmiIrpHandler **)PPObject + 83));
                      return (unsigned int)v42;
                    }
                  }
                }
                else
                {
                  FxObject::TraceDroppedEvent(v24, FxObjectDroppedEventAssignParentObject);
                  KeReleaseSpinLock(&v24->m_SpinLock.m_Lock, v46);
                  v42 = -1073741738;
                }
                v44 = (FxDevice *)PPObject;
              }
              FxWmiIrpHandler::RemoveProvider(v44->m_PkgWmi, v24);
            }
            if ( updated )
              FxWmiIrpHandler::DecrementUpdateCount(*((FxWmiIrpHandler **)PPObject + 83));
            FxObject::DeleteFromFailedCreate(v24);
            return (unsigned int)v42;
          }
          while ( RtlCompareMemory(&v37[3], &v24->m_Guid, 0x10uLL) != 16 )
          {
            v37 = v37->Flink;
            if ( v37 == v38 )
              goto LABEL_34;
          }
          if ( v37 == (_LIST_ENTRY *)120 )
          {
LABEL_34:
            p_m_Lock = &v24->m_SpinLock.m_Lock;
            goto LABEL_35;
          }
          p_m_Lock = &v24->m_SpinLock.m_Lock;
          Driver = 0LL;
        }
        v42 = 0x40000000;
LABEL_98:
        v41 = PreviousIrql;
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
