/*
 * XREFs of imp_WdfRegistryOpenKey @ 0x1C0017710
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0030CC4 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_DDxd @ 0x1C0079714 (WPP_IFR_SF_DDxd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D1734 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

int __fastcall imp_WdfRegistryOpenKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 ParentKey,
        _UNICODE_STRING *KeyName,
        ACCESS_MASK DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _WDF_OBJECT_ATTRIBUTES *v6; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  int result; // eax
  unsigned int v10; // r8d
  unsigned __int16 v11; // r9
  unsigned __int16 Length; // dx
  int v13; // eax
  unsigned __int64 ContextSizeOverride; // rax
  SIZE_T v15; // r13
  int v16; // ebx
  _LIST_ENTRY *Caller; // rax
  _QWORD *v18; // rax
  _FX_DRIVER_GLOBALS *v19; // rdx
  unsigned __int64 v20; // rbx
  _LIST_ENTRY *v21; // rsi
  __int64 v22; // rax
  void **v23; // r9
  unsigned __int64 v24; // r14
  bool v25; // zf
  __int64 v26; // rax
  KIRQL v27; // al
  unsigned __int16 v28; // dx
  KIRQL v29; // al
  unsigned __int16 v30; // dx
  KIRQL v31; // r8
  _LIST_ENTRY *v32; // rcx
  int v33; // esi
  WDFKEY__ *v34; // r14
  NTSTATUS v35; // eax
  unsigned __int16 v36; // ax
  _QWORD *i; // rax
  FxRegKey *v38; // rcx
  __int64 v39; // r8
  unsigned __int64 ParentObject; // r8
  FxObject *v41; // rbp
  __int64 v42; // rcx
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 v44; // r9
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rcx
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v48; // rax
  unsigned __int64 ContextSize; // r8
  unsigned __int64 v50; // r8
  __int64 v51; // rcx
  const void *v52; // rcx
  const void *v53; // rcx
  unsigned __int16 v54; // ax
  char *v55; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  const _GUID *Tag; // [rsp+20h] [rbp-B8h]
  void *v59; // [rsp+50h] [rbp-88h] BYREF
  FxRegKey *pParent; // [rsp+58h] [rbp-80h] BYREF
  void *PPObject; // [rsp+60h] [rbp-78h] BYREF
  void *m_Key; // [rsp+68h] [rbp-70h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-68h] BYREF
  _LIST_ENTRY *retaddr; // [rsp+D8h] [rbp+0h]
  int v65; // [rsp+E0h] [rbp+8h] BYREF
  KIRQL v66; // [rsp+E8h] [rbp+10h]
  ACCESS_MASK v67; // [rsp+F8h] [rbp+20h]

  v67 = DesiredAccess;
  v6 = KeyAttributes;
  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  if ( ParentKey )
  {
    v38 = (FxRegKey *)(~ParentKey & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(v39) = 0;
    if ( (ParentKey & 1) != 0 )
    {
      v39 = LOWORD(v38->__vftable);
      v38 = (FxRegKey *)((char *)v38 - v39);
    }
    if ( v38->m_Type == 4102 )
    {
      pParent = v38;
    }
    else
    {
      FxObjectHandleGetPtrQI(v38, (void **)&pParent, (void *)ParentKey, 0x1006u, v39);
      v38 = pParent;
    }
    m_Globals = v38->FxPagedObject::FxObject::m_Globals;
    m_Key = v38->m_Key;
  }
  else
  {
    m_Key = 0LL;
    if ( KeyAttributes )
    {
      if ( KeyAttributes->Size == 56 )
      {
        ParentObject = (unsigned __int64)KeyAttributes->ParentObject;
        if ( ParentObject )
        {
          v41 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
          LOWORD(v42) = 0;
          if ( (ParentObject & 1) != 0 )
          {
            v42 = LOWORD(v41->__vftable);
            v41 = (FxObject *)((char *)v41 - v42);
          }
          if ( v41->m_Type == 4096 )
          {
            PPObject = v41;
          }
          else
          {
            FxObjectHandleGetPtrQI(v41, &PPObject, (void *)ParentObject, 0x1000u, v42);
            v41 = (FxObject *)PPObject;
          }
          m_Globals = v41->m_Globals;
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
  if ( !Key )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *Key = 0LL;
  if ( !m_Globals->FxVerifierOn || (CurrentIrql = KeGetCurrentIrql()) == 0 )
  {
    result = FxValidateObjectAttributes(m_Globals, v6, 0);
    if ( result < 0 )
      return result;
    Length = KeyName->Length;
    if ( (KeyName->Length & 1) != 0 )
    {
      v13 = Length;
      v44 = 13;
    }
    else
    {
      LOWORD(v13) = KeyName->MaximumLength;
      if ( (v13 & 1) != 0 )
      {
        v13 = (unsigned __int16)v13;
        v44 = 14;
      }
      else
      {
        if ( !(_WORD)v13 || KeyName->Buffer )
        {
          if ( Length <= (unsigned __int16)v13 )
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
            v15 = 176LL;
            v16 = 0;
            if ( ContextSizeOverride )
            {
              v46 = (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v46 < ContextSizeOverride )
                goto LABEL_88;
              v47 = v46 + 176;
              if ( v47 < 0xB0 )
              {
                v16 = -1073741675;
                goto LABEL_87;
              }
              v15 = v47;
            }
            if ( m_Globals->FxVerifierHandle )
            {
              if ( v15 + 32 < v15 )
              {
                v15 = -1LL;
                v16 = -1073741675;
              }
              else
              {
                v15 += 32LL;
                v16 = 0;
              }
            }
            if ( v16 >= 0 )
            {
              if ( m_Globals->FxPoolTrackingOn )
                Caller = retaddr;
              else
                Caller = 0LL;
              v18 = FxPoolAllocator(
                      m_Globals,
                      (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
                      ExDefaultNonPagedPoolType,
                      v15,
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
                  v48 = v6->ContextTypeInfo;
                  if ( v48 )
                  {
                    ContextSize = v6->ContextSizeOverride;
                    if ( !ContextSize )
                      ContextSize = v48->ContextSize;
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
                *(_QWORD *)(v20 + 56) = 0LL;
                *(_BYTE *)(v20 + 48) = 1;
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
                *(_QWORD *)(v20 + 112) = 0LL;
                v24 = 0LL;
                *(_QWORD *)(v20 + 104) = 0LL;
                *(_QWORD *)(v20 + 120) = m_Globals;
                v25 = *(_WORD *)(v20 + 10) == 0;
                v59 = 0LL;
                if ( v25 )
                {
                  v33 = -1073741816;
                }
                else
                {
                  if ( !v6 )
                    goto LABEL_131;
                  if ( v6->ExecutionLevel == WdfExecutionLevelPassive )
                  {
                    FxObject::MarkPassiveCallbacks((FxObject *)v20, ObjectLock);
                    v24 = (unsigned __int64)v59;
                    v23 = (void **)(v20 + 112);
                  }
                  v50 = (unsigned __int64)v6->ParentObject;
                  if ( v50 )
                  {
                    v24 = ~v50 & 0xFFFFFFFFFFFFFFF8uLL;
                    LOWORD(v51) = 0;
                    if ( (v50 & 1) != 0 )
                    {
                      v51 = *(unsigned __int16 *)v24;
                      v24 -= v51;
                    }
                    if ( *(_WORD *)(v24 + 8) == 4096 )
                    {
                      v59 = (void *)v24;
                    }
                    else
                    {
                      FxObjectHandleGetPtrQI((FxObject *)v24, &v59, (void *)v50, 0x1000u, v51);
                      v24 = (unsigned __int64)v59;
                      v23 = (void **)(v20 + 112);
                    }
                  }
                  else
                  {
LABEL_131:
                    if ( !*(_QWORD *)(v20 + 64) )
                    {
                      v26 = *(_QWORD *)(v20 + 16);
                      if ( *(_QWORD *)(v26 + 72) != v20 )
                      {
                        v24 = *(_QWORD *)(v26 + 72);
                        v59 = (void *)v24;
                      }
                    }
                  }
                  if ( !v24 )
                  {
LABEL_40:
                    if ( v6 )
                    {
                      v54 = *(_WORD *)(v20 + 10);
                      if ( v54 )
                        v55 = (char *)(v20 + v54);
                      else
                        v55 = 0LL;
                      EvtDestroyCallback = v6->EvtDestroyCallback;
                      if ( EvtDestroyCallback )
                        *((_QWORD *)v55 + 3) = EvtDestroyCallback;
                      EvtCleanupCallback = v6->EvtCleanupCallback;
                      if ( EvtCleanupCallback )
                      {
                        *((_QWORD *)v55 + 2) = EvtCleanupCallback;
                        *(_WORD *)(v20 + 24) |= 0x400u;
                      }
                    }
                    *(_WORD *)(v20 + 24) |= 8u;
                    if ( *(_WORD *)(v20 + 10) )
                      v34 = (WDFKEY__ *)(v20 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    else
                      v34 = 0LL;
                    ObjectAttributes.RootDirectory = m_Key;
                    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                    ObjectAttributes.Length = 48;
                    ObjectAttributes.Attributes = 576;
                    ObjectAttributes.ObjectName = KeyName;
                    v35 = ZwOpenKey(v23, v67, &ObjectAttributes);
                    v33 = v35;
                    if ( v35 >= 0 )
                      *Key = v34;
                    else
                      WPP_IFR_SF_d(m_Globals, 2u, 2u, 0xBu, WPP_FxRegistryAPI_cpp_Traceguids, v35);
                    if ( v33 >= 0 )
                      return v33;
                    goto LABEL_46;
                  }
                  v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 56));
                  v28 = *(_WORD *)(v20 + 26);
                  LOBYTE(v65) = v27;
                  if ( v28 == 1 )
                  {
                    if ( *(_QWORD *)(v20 + 64) )
                    {
                      KeReleaseSpinLock((PKSPIN_LOCK)(v20 + 56), v27);
                      v33 = -1071644147;
                    }
                    else
                    {
                      v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v24 + 56));
                      v30 = *(_WORD *)(v24 + 26);
                      v31 = v29;
                      v66 = v29;
                      if ( v30 == 1 )
                      {
                        v32 = *(_LIST_ENTRY **)(v24 + 40);
                        v21->Flink = (_LIST_ENTRY *)(v24 + 32);
                        *(_QWORD *)(v20 + 80) = v32;
                        if ( v32->Flink != (_LIST_ENTRY *)(v24 + 32) )
                          __fastfail(3u);
                        v32->Flink = v21;
                        *(_QWORD *)(v24 + 40) = v21;
                        if ( !*(_QWORD *)(v20 + 96) )
                          *(_QWORD *)(v20 + 96) = *(_QWORD *)(v24 + 96);
                        KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 56), v29);
                        v33 = 0;
                        *(_QWORD *)(v20 + 64) = v24;
                      }
                      else
                      {
                        if ( (*(_WORD *)(v24 + 24) & 0x200) != 0 )
                        {
                          if ( *(_WORD *)(v24 + 10) )
                            v53 = (const void *)(v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
                          else
                            v53 = 0LL;
                          WPP_IFR_SF_qqLL(
                            *(_FX_DRIVER_GLOBALS **)(v24 + 16),
                            4u,
                            0x14u,
                            0xBu,
                            WPP_FxObject_hpp_Traceguids,
                            (const void *)v24,
                            v53,
                            v30,
                            1u);
                          v31 = v66;
                        }
                        KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 56), v31);
                        v33 = -1073741738;
                      }
                      KeReleaseSpinLock((PKSPIN_LOCK)(v20 + 56), v65);
                      if ( v33 >= 0 )
                      {
                        v23 = (void **)(v20 + 112);
                        goto LABEL_40;
                      }
                    }
                  }
                  else
                  {
                    if ( (*(_WORD *)(v20 + 24) & 0x200) != 0 )
                    {
                      if ( *(_WORD *)(v20 + 10) )
                        v52 = (const void *)(v20 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      else
                        v52 = 0LL;
                      WPP_IFR_SF_qqLL(
                        *(_FX_DRIVER_GLOBALS **)(v20 + 16),
                        4u,
                        0x14u,
                        0xBu,
                        WPP_FxObject_hpp_Traceguids,
                        (const void *)v20,
                        v52,
                        v28,
                        0);
                    }
                    KeReleaseSpinLock((PKSPIN_LOCK)(v20 + 56), v65);
                    v33 = -1073741738;
                  }
                }
LABEL_46:
                v36 = *(_WORD *)(v20 + 10);
                if ( v36 )
                {
                  for ( i = (_QWORD *)(v20 + v36); i; i = (_QWORD *)i[1] )
                  {
                    i[3] = 0LL;
                    i[2] = 0LL;
                  }
                }
                *(_WORD *)(v20 + 24) &= ~0x400u;
                (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v20 + 48LL))(v20);
                return v33;
              }
LABEL_88:
              WPP_IFR_SF_d(m_Globals, 2u, 2u, 0xAu, WPP_FxRegistryAPI_cpp_Traceguids, -1073741670);
              return -1073741670;
            }
LABEL_87:
            WPP_IFR_SF_DDxd(m_Globals, 0x80u, v10, v11, Tag, 0x80u, 0, ContextSizeOverride, v16);
            goto LABEL_88;
          }
          WPP_IFR_SF_qddd(
            m_Globals,
            Length,
            6u,
            0x10u,
            WPP_FxValidateFunctions_hpp_Traceguids_0,
            KeyName,
            Length,
            (unsigned __int16)v13,
            -1073741811);
          return -1073741811;
        }
        v13 = (unsigned __int16)v13;
        v44 = 15;
      }
    }
    WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v44, WPP_FxValidateFunctions_hpp_Traceguids_0, KeyName, v13, -1073741811);
    return -1073741811;
  }
  WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
  v65 = 7567731;
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
    m_Globals->Public.DriverName,
    (const char *)&v65,
    m_Globals->Public.DriverName,
    (const char *)&v65);
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return -1073741808;
}
