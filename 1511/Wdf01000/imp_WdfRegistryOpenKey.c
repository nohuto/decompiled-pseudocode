/*
 * XREFs of imp_WdfRegistryOpenKey @ 0x1C00087F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00097B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0056944 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C0057BD0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C0059110 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C006063C (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_DDxd @ 0x1C006D54C (WPP_IFR_SF_DDxd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C006EA24 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00BA470 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

int __fastcall imp_WdfRegistryOpenKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *ParentKey,
        _UNICODE_STRING *KeyName,
        ACCESS_MASK DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _WDF_OBJECT_ATTRIBUTES *v6; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  int v8; // ebx
  WDFKEY__ **v10; // r12
  int result; // eax
  unsigned __int16 v12; // r9
  unsigned __int16 Length; // dx
  int v14; // eax
  unsigned __int64 ContextSizeOverride; // rax
  unsigned __int64 v16; // r13
  void *Caller; // rax
  void *v18; // rax
  _FX_DRIVER_GLOBALS *v19; // rdx
  unsigned __int64 v20; // rbx
  _LIST_ENTRY *v21; // rdi
  __int64 v22; // rax
  void **v23; // r9
  FxObject *v24; // rbp
  __int64 v25; // rax
  KIRQL v26; // r12
  KIRQL v27; // dl
  _LIST_ENTRY *Blink; // rcx
  int v29; // edi
  unsigned __int64 v30; // rbp
  NTSTATUS v31; // eax
  unsigned __int16 v32; // ax
  _QWORD *i; // rax
  void *ParentObject; // rdx
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 v36; // r9
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rcx
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v40; // rax
  unsigned __int64 ContextSize; // r8
  unsigned __int64 v42; // rdx
  unsigned __int16 v43; // ax
  char *v44; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  const _GUID *Tag; // [rsp+20h] [rbp-C8h]
  void *m_Key; // [rsp+50h] [rbp-98h]
  FxRegKey *pParent; // [rsp+58h] [rbp-90h] BYREF
  void *PPObject; // [rsp+60h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-80h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]
  KIRQL v53; // [rsp+F0h] [rbp+8h]
  void *v54; // [rsp+100h] [rbp+18h] BYREF
  ACCESS_MASK v55; // [rsp+108h] [rbp+20h]

  v55 = DesiredAccess;
  v6 = KeyAttributes;
  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  v8 = 0;
  if ( ParentKey )
  {
    FxObjectHandleGetPtr(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      (unsigned __int64)ParentKey,
      0x1006u,
      (void **)&pParent);
    m_Globals = pParent->FxPagedObject::FxObject::m_Globals;
    m_Key = pParent->m_Key;
  }
  else
  {
    m_Key = 0LL;
    if ( KeyAttributes )
    {
      if ( KeyAttributes->Size == 56 )
      {
        ParentObject = KeyAttributes->ParentObject;
        if ( ParentObject )
        {
          FxObjectHandleGetPtr(
            (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
            (unsigned __int64)ParentObject,
            0x1000u,
            &PPObject);
          m_Globals = (_FX_DRIVER_GLOBALS *)*((_QWORD *)PPObject + 2);
        }
      }
      else
      {
        WPP_IFR_SF_qddd(
          (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
          0,
          6u,
          0xBu,
          WPP_FxValidateFunctions_hpp_Traceguids,
          KeyAttributes,
          56,
          KeyAttributes->Size,
          -1073741820);
      }
    }
  }
  if ( !KeyName )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v10 = Key;
  if ( !Key )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *Key = 0LL;
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
      return -1073741808;
    }
  }
  result = FxValidateObjectAttributes(m_Globals, v6, 0);
  if ( result >= 0 )
  {
    Length = KeyName->Length;
    if ( (KeyName->Length & 1) != 0 )
    {
      v14 = Length;
      v36 = 13;
    }
    else
    {
      LOWORD(v14) = KeyName->MaximumLength;
      if ( (v14 & 1) != 0 )
      {
        v14 = (unsigned __int16)v14;
        v36 = 14;
      }
      else
      {
        if ( !(_WORD)v14 || KeyName->Buffer )
        {
          if ( Length <= (unsigned __int16)v14 )
          {
            ContextSizeOverride = 0LL;
            if ( v6 )
            {
              ContextTypeInfo = v6->ContextTypeInfo;
              if ( ContextTypeInfo )
              {
                ContextSizeOverride = v6->ContextSizeOverride;
                if ( !ContextSizeOverride )
                  ContextSizeOverride = ContextTypeInfo->ContextSize;
              }
            }
            v16 = 176LL;
            if ( ContextSizeOverride )
            {
              v38 = (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v38 < ContextSizeOverride )
                goto LABEL_102;
              v39 = v38 + 176;
              if ( v39 < 0xB0 )
              {
                v8 = -1073741675;
                goto LABEL_75;
              }
              v16 = v39;
            }
            if ( m_Globals->FxVerifierHandle )
            {
              if ( v16 + 32 < v16 )
              {
                v16 = -1LL;
                v8 = -1073741675;
              }
              else
              {
                v16 += 32LL;
                v8 = 0;
              }
            }
            if ( v8 >= 0 )
            {
              if ( m_Globals->FxPoolTrackingOn )
                Caller = retaddr;
              else
                Caller = 0LL;
              v18 = FxPoolAllocator(
                      m_Globals,
                      &m_Globals->FxPoolFrameworks,
                      ExDefaultNonPagedPoolType,
                      v16,
                      m_Globals->Tag,
                      Caller);
              v20 = (unsigned __int64)v18;
              if ( v18 )
              {
                if ( m_Globals->FxVerifierHandle )
                {
                  memset(v18, 0, 0x20uLL);
                  *(_DWORD *)(v20 + 28) = 1146058822;
                  v20 += 32LL;
                }
                *(_QWORD *)(v20 + 136) = 0LL;
                *(_QWORD *)(v20 + 144) = 0LL;
                *(_QWORD *)(v20 + 152) = 0LL;
                *(_QWORD *)(v20 + 160) = 0LL;
                *(_QWORD *)(v20 + 168) = 0LL;
                *(_QWORD *)(v20 + 128) = v20;
                if ( v6 )
                {
                  v40 = v6->ContextTypeInfo;
                  if ( v40 )
                  {
                    ContextSize = v6->ContextSizeOverride;
                    if ( !ContextSize )
                      ContextSize = v40->ContextSize;
                    memset((void *)(v20 + 176), 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                  }
                  *(_QWORD *)(v20 + 160) = v6->ContextTypeInfo;
                }
              }
              if ( v20 )
              {
                *(_QWORD *)(v20 + 16) = m_Globals;
                *(_QWORD *)v20 = &FxObject::`vftable';
                v21 = (_LIST_ENTRY *)(v20 + 72);
                *(_DWORD *)(v20 + 8) = 8392710;
                *(_BYTE *)(v20 + 48) = 1;
                *(_QWORD *)(v20 + 56) = 0LL;
                *(_DWORD *)(v20 + 12) = 1;
                *(_DWORD *)(v20 + 24) = 0x10000;
                *(_QWORD *)(v20 + 64) = 0LL;
                *(_QWORD *)(v20 + 40) = v20 + 32;
                *(_QWORD *)(v20 + 32) = v20 + 32;
                *(_QWORD *)(v20 + 80) = v20 + 72;
                *(_QWORD *)(v20 + 72) = v20 + 72;
                v22 = *(_QWORD *)(v20 + 16);
                *(_QWORD *)(v20 + 88) = 0LL;
                *(_QWORD *)(v20 + 96) = 0LL;
                if ( *(_BYTE *)(v22 + 316) )
                  FxObject::Vf_VerifyConstruct((FxObject *)v20, v19, 0);
                *(_WORD *)(v20 + 24) |= 0x11u;
                v23 = (void **)(v20 + 112);
                *(_QWORD *)v20 = &FxRegKey::`vftable';
                v24 = 0LL;
                *(_QWORD *)(v20 + 112) = 0LL;
                *(_QWORD *)(v20 + 104) = 0LL;
                *(_QWORD *)(v20 + 120) = m_Globals;
                v54 = 0LL;
                if ( *(_WORD *)(v20 + 10) )
                {
                  if ( !v6 )
                    goto LABEL_105;
                  if ( v6->ExecutionLevel == WdfExecutionLevelPassive )
                  {
                    FxObject::MarkPassiveCallbacks((FxObject *)v20, ObjectLock);
                    v24 = (FxObject *)v54;
                    v23 = (void **)(v20 + 112);
                  }
                  v42 = (unsigned __int64)v6->ParentObject;
                  if ( v42 )
                  {
                    FxObjectHandleGetPtr(*(_FX_DRIVER_GLOBALS **)(v20 + 16), v42, 0x1000u, &v54);
                    v24 = (FxObject *)v54;
                    v23 = (void **)(v20 + 112);
                  }
                  else
                  {
LABEL_105:
                    if ( !*(_QWORD *)(v20 + 64) )
                    {
                      v25 = *(_QWORD *)(v20 + 16);
                      if ( *(_QWORD *)(v25 + 72) != v20 )
                      {
                        v24 = *(FxObject **)(v25 + 72);
                        v54 = v24;
                      }
                    }
                  }
                  if ( !v24 )
                  {
LABEL_40:
                    if ( v6 )
                    {
                      v43 = *(_WORD *)(v20 + 10);
                      if ( v43 )
                        v44 = (char *)(v20 + v43);
                      else
                        v44 = 0LL;
                      EvtDestroyCallback = v6->EvtDestroyCallback;
                      if ( EvtDestroyCallback )
                        *((_QWORD *)v44 + 3) = EvtDestroyCallback;
                      EvtCleanupCallback = v6->EvtCleanupCallback;
                      if ( EvtCleanupCallback )
                      {
                        *((_QWORD *)v44 + 2) = EvtCleanupCallback;
                        *(_WORD *)(v20 + 24) |= 0x400u;
                      }
                    }
                    *(_WORD *)(v20 + 24) |= 8u;
                    if ( *(_WORD *)(v20 + 10) )
                      v30 = v20 ^ 0xFFFFFFFFFFFFFFF8uLL;
                    else
                      v30 = 0LL;
                    ObjectAttributes.RootDirectory = m_Key;
                    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                    ObjectAttributes.Length = 48;
                    ObjectAttributes.Attributes = 576;
                    ObjectAttributes.ObjectName = KeyName;
                    v31 = ZwOpenKey(v23, v55, &ObjectAttributes);
                    v29 = v31;
                    if ( v31 >= 0 )
                      *v10 = (WDFKEY__ *)v30;
                    else
                      WPP_IFR_SF_d(
                        m_Globals,
                        2u,
                        2u,
                        0xBu,
                        (const _GUID *)&FxObject::`vftable'.WdfVerifierAllocateFailCount,
                        v31);
                    if ( v29 >= 0 )
                      return v29;
                    goto LABEL_46;
                  }
                  v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 56));
                  if ( *(_WORD *)(v20 + 26) == 1 )
                  {
                    if ( *(_QWORD *)(v20 + 64) )
                    {
                      KeReleaseSpinLock((PKSPIN_LOCK)(v20 + 56), v26);
                      v29 = -1071644147;
                    }
                    else
                    {
                      v27 = KeAcquireSpinLockRaiseToDpc(&v24->m_SpinLock.m_Lock);
                      v53 = v27;
                      if ( v24->m_ObjectState == 1 )
                      {
                        Blink = v24->m_ChildListHead.Blink;
                        v21->Flink = &v24->m_ChildListHead;
                        *(_QWORD *)(v20 + 80) = Blink;
                        if ( Blink->Flink != &v24->m_ChildListHead )
                          __fastfail(3u);
                        Blink->Flink = v21;
                        v24->m_ChildListHead.Blink = v21;
                        if ( !*(_QWORD *)(v20 + 96) )
                          *(_QWORD *)(v20 + 96) = v24->m_DeviceBase;
                        KeReleaseSpinLock(&v24->m_SpinLock.m_Lock, v27);
                        v29 = 0;
                        *(_QWORD *)(v20 + 64) = v24;
                      }
                      else
                      {
                        FxObject::TraceDroppedEvent(v24, FxObjectDroppedEventAddChildObjectInternal);
                        KeReleaseSpinLock(&v24->m_SpinLock.m_Lock, v53);
                        v29 = -1073741738;
                      }
                      KeReleaseSpinLock((PKSPIN_LOCK)(v20 + 56), v26);
                      if ( v29 >= 0 )
                      {
                        v10 = Key;
                        v23 = (void **)(v20 + 112);
                        goto LABEL_40;
                      }
                    }
                  }
                  else
                  {
                    FxObject::TraceDroppedEvent((FxObject *)v20, FxObjectDroppedEventAssignParentObject);
                    KeReleaseSpinLock((PKSPIN_LOCK)(v20 + 56), v26);
                    v29 = -1073741738;
                  }
                }
                else
                {
                  v29 = -1073741816;
                }
LABEL_46:
                v32 = *(_WORD *)(v20 + 10);
                if ( v32 )
                {
                  for ( i = (_QWORD *)(v20 + v32); i; i = (_QWORD *)i[1] )
                  {
                    i[3] = 0LL;
                    i[2] = 0LL;
                  }
                }
                *(_WORD *)(v20 + 24) &= ~0x400u;
                (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v20 + 48LL))(v20);
                return v29;
              }
LABEL_102:
              WPP_IFR_SF_d(
                m_Globals,
                2u,
                2u,
                0xAu,
                (const _GUID *)&FxObject::`vftable'.WdfVerifierAllocateFailCount,
                -1073741670);
              return -1073741670;
            }
LABEL_75:
            WPP_IFR_SF_DDxd(m_Globals, 0, 0x80u, v12, Tag, 0x80u, 0, ContextSizeOverride, v8);
            goto LABEL_102;
          }
          WPP_IFR_SF_qddd(
            m_Globals,
            Length,
            6u,
            0x10u,
            WPP_FxValidateFunctions_hpp_Traceguids_0,
            KeyName,
            Length,
            (unsigned __int16)v14,
            -1073741811);
          return -1073741811;
        }
        v14 = (unsigned __int16)v14;
        v36 = 15;
      }
    }
    WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v36, WPP_FxValidateFunctions_hpp_Traceguids_0, KeyName, v14, -1073741811);
    return -1073741811;
  }
  return result;
}
