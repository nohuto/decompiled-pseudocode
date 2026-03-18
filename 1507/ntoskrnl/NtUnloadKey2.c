/*
 * XREFs of NtUnloadKey2 @ 0x140580A7C
 * Callers:
 *     NtUnloadKey @ 0x1405C2C78 (NtUnloadKey.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memset @ 0x140195A80 (memset.c)
 *     CmpUnfreezeHive @ 0x1401DFB54 (CmpUnfreezeHive.c)
 *     CmpSignalDeferredPosts @ 0x1404293F0 (CmpSignalDeferredPosts.c)
 *     CmpReportNotify @ 0x140429FE8 (CmpReportNotify.c)
 *     UNLOCK_HIVE_LOAD @ 0x140446020 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x14044620C (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x14044626C (LOCK_HIVE_LOAD.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     CmPostCallbackNotification @ 0x140478170 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpReferenceKeyControlBlock @ 0x1404CBD60 (CmpReferenceKeyControlBlock.c)
 *     ObReferenceObjectByNameEx @ 0x1404EC8E0 (ObReferenceObjectByNameEx.c)
 *     CmpFlushNotify @ 0x1404ECD18 (CmpFlushNotify.c)
 *     CmpSearchForOpenSubKeys @ 0x1404ED9B4 (CmpSearchForOpenSubKeys.c)
 *     CmCloseRmHandle @ 0x1404EDFBC (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x1404EDFDC (CmCloseTmHandle.c)
 *     CmUnloadKey @ 0x1404EE348 (CmUnloadKey.c)
 *     CmShutdownCmRM @ 0x1404EEDC4 (CmShutdownCmRM.c)
 *     CmSnapshotRMTxArray @ 0x1404EF218 (CmSnapshotRMTxArray.c)
 *     CmObliterateRMTxArray @ 0x14065A634 (CmObliterateRMTxArray.c)
 *     CmpRollbackTransactionArray @ 0x14065CCEC (CmpRollbackTransactionArray.c)
 */

NTSTATUS __stdcall NtUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  ULONG v2; // r12d
  char v4; // r15
  char v5; // r13
  ULONG_PTR v6; // r14
  __int64 v7; // rdi
  KPROCESSOR_MODE PreviousMode; // bl
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v10; // rtt
  __int64 v11; // rdx
  NTSTATUS v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _KTHREAD *v15; // rax
  char v16; // si
  PVOID v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rtt
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  struct _KTHREAD *v24; // rax
  signed __int64 v25; // rcx
  unsigned __int64 v26; // rtt
  __int64 v27; // rcx
  PVOID v28; // rsi
  int v29; // eax
  __int64 v30; // r9
  __int64 v31; // rcx
  void *v32; // r12
  __int64 v33; // r15
  void *v34; // r13
  int v35; // eax
  signed int v36; // ebx
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned int v39; // ebx
  __int64 v40; // rdx
  __int64 v41; // rcx
  char v42; // r12
  signed int v43; // eax
  struct _KTHREAD *v44; // rcx
  __int16 v45; // ax
  unsigned __int64 v46; // rtt
  struct _KTHREAD *v47; // rcx
  __int16 v48; // ax
  int v50; // eax
  char v51; // dl
  __int64 v52; // rcx
  __int64 v53; // rax
  int v54; // eax
  struct _KTHREAD *v55; // rcx
  __int16 v56; // ax
  unsigned __int64 v57; // rtt
  struct _KTHREAD *v58; // rcx
  __int16 v59; // ax
  struct _KTHREAD *v60; // rcx
  __int16 v61; // ax
  struct _KTHREAD *v62; // rcx
  __int16 v63; // ax
  char v64; // al
  int v65; // esi
  signed __int32 v66[8]; // [rsp+0h] [rbp-100h] BYREF
  char v67; // [rsp+40h] [rbp-C0h]
  char v68; // [rsp+41h] [rbp-BFh]
  char v69; // [rsp+42h] [rbp-BEh]
  int v70; // [rsp+44h] [rbp-BCh] BYREF
  _BYTE v71[8]; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  int v73; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v74; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v75; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v76; // [rsp+68h] [rbp-98h]
  _QWORD *v77[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v78[3]; // [rsp+80h] [rbp-80h] BYREF
  PVOID *v79; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v80[6]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v81[48]; // [rsp+D0h] [rbp-30h] BYREF
  char v83; // [rsp+1B0h] [rbp+B0h]
  char v84; // [rsp+1B8h] [rbp+B8h]

  v2 = Flags;
  v4 = 0;
  Object = 0LL;
  memset(v81, 0, 136);
  v68 = 0;
  v69 = 0;
  memset(v80, 0, 40);
  v73 = 0;
  v5 = 0;
  v84 = 0;
  v6 = 0LL;
  v83 = 0;
  v7 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v10 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v10 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
    && !ExfAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v55 = KeGetCurrentThread();
    v56 = v55->KernelApcDisable + 1;
    v55->KernelApcDisable = v56;
    if ( !v56
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v55->ApcState.ApcListHead[0].Flink != &v55->152
      && !v55->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return -1073741431;
  }
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    _m_prefetchw(&CmpShutdownRundown);
    v57 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v57 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v58 = KeGetCurrentThread();
    v59 = v58->KernelApcDisable + 1;
    v58->KernelApcDisable = v59;
    if ( !v59
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v58->ApcState.ApcListHead[0].Flink != &v58->152
      && !v58->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return -1073741727;
  }
  v81[6] = 4;
  v81[0] = 5;
  v12 = ObReferenceObjectByNameEx(
          (__int64)TargetKey,
          0LL,
          0x20006u,
          (struct _OBJECT_TYPE *)CmKeyObjectType,
          PreviousMode,
          v81,
          (__int64 *)&Object);
  if ( v12 < 0 )
    goto LABEL_47;
  v78[1] = v78;
  v78[0] = v78;
  v77[1] = v77;
  v77[0] = v77;
  v15 = KeGetCurrentThread();
  --v15->KernelApcDisable;
  v16 = 1;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
  {
    v17 = Object;
    v80[0] = Object;
    v12 = CmpCallCallBacks(0x22u, (__int64)v80, 1, 35LL, (__int64)Object, (__int64)v78);
    if ( v12 >= 0 )
      goto LABEL_7;
    ObfDereferenceObject(v17);
    v60 = KeGetCurrentThread();
    if ( v12 == -1073740541 )
      v12 = 0;
    v61 = v60->KernelApcDisable + 1;
    v60->KernelApcDisable = v61;
    if ( !v61
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v60->ApcState.ApcListHead[0].Flink != &v60->152
      && !v60->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    goto LABEL_47;
  }
  while ( 1 )
  {
LABEL_13:
    v70 = 0;
    _m_prefetchw(&CmpShutdownRundown);
    v21 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v21 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v22 = KeGetCurrentThread();
    v23 = v22->KernelApcDisable + 1;
    v22->KernelApcDisable = v23;
    if ( !v23
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
      && !v22->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v24 = KeGetCurrentThread();
    --v24->KernelApcDisable;
    _m_prefetchw(&CmpShutdownRundown);
    v25 = (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2;
    v26 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v26 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  v25,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
      && !ExfAcquireRundownProtection(&CmpShutdownRundown) )
    {
      v62 = KeGetCurrentThread();
      v63 = v62->KernelApcDisable + 1;
      v62->KernelApcDisable = v63;
      if ( !v63
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v62->ApcState.ApcListHead[0].Flink != &v62->152
        && !v62->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v28 = Object;
      v36 = -1073741431;
      goto LABEL_106;
    }
    v4 = v16;
    v67 = v16;
    v70 = 6;
    LOCK_HIVE_LOAD(v25, v11, v13, v14);
    CmpLockRegistryFreezeAware(v16);
    v28 = Object;
    v6 = *((_QWORD *)Object + 1);
    v29 = *(_DWORD *)(v6 + 4);
    v7 = *(_QWORD *)(v6 + 32);
    if ( (v29 & 0x80u) != 0 )
    {
      v36 = -1073741790;
      goto LABEL_106;
    }
    if ( (v29 & 0x20000) != 0 )
    {
      v36 = (*((_BYTE *)Object + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_106;
    }
    if ( (v29 & 0x40000) != 0 && !v5 )
    {
      v36 = -1073740763;
      goto LABEL_41;
    }
    if ( *(_BYTE *)(v7 + 4112) == 1 && ((*(_DWORD *)(v7 + 5360) & 0x20) == 0 || v2 != 1) )
    {
      v36 = -1073741431;
      goto LABEL_106;
    }
    CmpReportNotify(v6, v7, *(_DWORD *)(v6 + 40), 0LL, 4, (__int64)v77);
    CmpFlushNotify((__int64)v28, v2 == 1, (__int64)v77, v30);
    v31 = *(_QWORD *)(v6 + 32);
    v32 = 0LL;
    v33 = *(_QWORD *)(v7 + 5400);
    v34 = 0LL;
    if ( (*(_DWORD *)(v31 + 5360) & 4) != 0
      || v31 == CmpMasterHive
      || *(_DWORD *)(*(_QWORD *)(v31 + 64) + 36LL) != *(_DWORD *)(v6 + 40) )
    {
      v36 = (*(_BYTE *)(v7 + 5360) & 4) != 0 ? -1073741790 : -1073741811;
LABEL_105:
      v4 = v67;
LABEL_106:
      v27 = 0LL;
      goto LABEL_107;
    }
    if ( Flags != 1 )
    {
      if ( *(_DWORD *)v6 != 2 )
      {
        v54 = CmpSearchForOpenSubKeys(v6, 0, v13, 0LL);
        v27 = 0LL;
        if ( v54 || *(_DWORD *)v6 != 2 )
          goto LABEL_63;
      }
      goto LABEL_27;
    }
    v75 = 0LL;
    v76 = 0LL;
    v50 = CmpSearchForOpenSubKeys(v6, 1, v13, &v75);
    v27 = 0LL;
    if ( v50 )
      break;
LABEL_27:
    if ( v84 )
    {
      if ( !v33 || v68 )
      {
        v42 = 0;
        v43 = CmUnloadKey(v6, Flags, &v70);
        v4 = v67;
        v27 = 0LL;
        v36 = v43;
        goto LABEL_35;
      }
      v35 = CmSnapshotRMTxArray(v33, &v74, &v79, v14);
      v27 = 0LL;
      v36 = v35;
      if ( v35 < 0 )
        goto LABEL_103;
      CmpUnlockRegistry();
      v39 = v74;
      if ( v74 )
      {
        UNLOCK_HIVE_LOAD(v38, v37);
        v70 = 0;
        v36 = CmpRollbackTransactionArray(v39, v79, v71, &v73);
        if ( v36 < 0 )
          goto LABEL_105;
        v5 = v84;
        v16 = 1;
        v2 = Flags;
        if ( v71[0] == 1 )
        {
          CmObliterateRMTxArray(v33);
          v4 = 0;
LABEL_60:
          v2 = Flags;
          v5 = v84;
        }
        else
        {
          v4 = 0;
        }
      }
      else
      {
        if ( v69 )
        {
          v16 = v74 + 1;
          LOBYTE(v37) = v74 + 1;
          CmShutdownCmRM(v33, v37);
          v68 = v16;
        }
        else
        {
          v32 = (void *)CmCloseRmHandle(v33, 0);
          v53 = CmCloseTmHandle(v52, v51);
          v16 = v40 + 1;
          v34 = (void *)v53;
          v69 = v40 + 1;
        }
        UNLOCK_HIVE_LOAD(v41, v40);
        v4 = 0;
        if ( v32 )
          ZwClose(v32);
        v2 = Flags;
        if ( v34 )
        {
          ZwClose(v34);
          goto LABEL_60;
        }
        v5 = v84;
      }
    }
    else
    {
      *(_DWORD *)(v6 + 4) |= 0x40000u;
      v16 = 1;
      if ( (*(_DWORD *)(v7 + 5360) & 0x20) != 0 )
      {
        *(_DWORD *)(v7 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 5500), 1u) & 0x7F) + 5504) = 32;
        CmpUnfreezeHive(v7);
        ++CmpActiveAppHiveUnloadCount;
        v83 = 1;
      }
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD(v19, v18);
      _InterlockedAdd(&CmpActiveHiveRundownCount, 1u);
      v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 2776), 1LL, 0LL);
      if ( v20 >= 2 )
        ExfWaitForRundownProtectionRelease((volatile signed __int64 *)(v7 + 2776), v20);
      _InterlockedExchange64((volatile __int64 *)(v7 + 2776), 1LL);
      v2 = Flags;
      v5 = 1;
      v84 = 1;
      v4 = 0;
      *(_DWORD *)(v7 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 5500), 1u) & 0x7F) + 5504) = 1;
    }
  }
  if ( (_DWORD)v75 == -1073741267 )
  {
    UNLOCK_HIVE_LOAD(0LL, v11);
    CmpUnlockRegistry();
    v4 = 0;
    v70 = 0;
    v36 = CmpRollbackTransactionArray(HIDWORD(v75), v76, 0LL, &v73);
    if ( v36 < 0 )
      goto LABEL_105;
    v5 = v84;
    v2 = 1;
LABEL_7:
    v16 = 1;
    goto LABEL_13;
  }
LABEL_63:
  v36 = -1073741535;
LABEL_103:
  v4 = v67;
LABEL_107:
  v42 = v83;
LABEL_35:
  if ( v84 )
  {
    if ( v36 < 0 )
    {
      if ( (*(_DWORD *)(v7 + 5360) & 0x20) != 0 )
      {
        v64 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 5500), 1u);
        v65 = v70;
        *(_DWORD *)(v7 + 4LL * (v64 & 0x7F) + 5504) = 33;
        if ( (v65 & 4) == 0 )
        {
          LOCK_HIVE_LOAD(0LL, v11, v13, v14);
          v65 |= 4u;
          v70 = v65;
        }
        if ( (v65 & 2) == 0 )
        {
          CmpLockRegistryFreezeAware(1);
          v70 = v65 | 2;
        }
        *(_BYTE *)(v7 + 4112) = 1;
        CmpReferenceKeyControlBlock(v6);
        *(_QWORD *)(v7 + 4104) = v6;
        if ( v42 )
        {
          if ( !--CmpActiveAppHiveUnloadCount )
          {
            _InterlockedOr(v66, 0);
            if ( CmpActiveAppHiveUnloadEvent )
              ExfUnblockPushLock(&CmpActiveAppHiveUnloadEvent, 0LL);
          }
        }
      }
      *(_DWORD *)(v6 + 4) &= ~0x40000u;
      _InterlockedExchange64((volatile __int64 *)(v7 + 2776), 0LL);
      *(_DWORD *)(v7 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 5500), 1u) & 0x7F) + 5504) = 2;
    }
    v27 = 0xFFFFFFFFLL;
    if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
    {
      _InterlockedOr(v66, 0);
      if ( CmpActiveHiveRundownEvent )
        ExfUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL);
    }
    v28 = Object;
  }
LABEL_41:
  if ( (v70 & 2) != 0 )
    CmpUnlockRegistry();
  if ( (v70 & 4) != 0 )
    UNLOCK_HIVE_LOAD(v27, v11);
  CmpSignalDeferredPosts(v77);
  v12 = CmPostCallbackNotification(35, (__int64)v28, v36, (__int64)v80, v78);
  ObfDereferenceObject(v28);
  v44 = KeGetCurrentThread();
  v45 = v44->KernelApcDisable + 1;
  v44->KernelApcDisable = v45;
  if ( !v45
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v44->ApcState.ApcListHead[0].Flink != &v44->152
    && !v44->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v4 )
  {
LABEL_47:
    _m_prefetchw(&CmpShutdownRundown);
    v46 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v46 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v47 = KeGetCurrentThread();
    v48 = v47->KernelApcDisable + 1;
    v47->KernelApcDisable = v48;
    if ( !v48
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v47->ApcState.ApcListHead[0].Flink != &v47->152
      && !v47->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v12;
}
