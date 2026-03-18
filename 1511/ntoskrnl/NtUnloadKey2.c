/*
 * XREFs of NtUnloadKey2 @ 0x14050ABE0
 * Callers:
 *     NtUnloadKey @ 0x14054B940 (NtUnloadKey.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x1400D2A60 (CmpDecrementAppHiveUnloadCount.c)
 *     ExfUnblockPushLock @ 0x140150264 (ExfUnblockPushLock.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmpUnfreezeHive @ 0x1401A9ED0 (CmpUnfreezeHive.c)
 *     CmpLogTransactionAborted @ 0x1401AA55C (CmpLogTransactionAborted.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403DE3F0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1403DE460 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1403DE4C0 (LOCK_HIVE_LOAD.c)
 *     CmpReportNotify @ 0x1403F4FC4 (CmpReportNotify.c)
 *     CmpReferenceKeyControlBlock @ 0x1403FA9B0 (CmpReferenceKeyControlBlock.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 *     CmpSignalDeferredPosts @ 0x1404218C4 (CmpSignalDeferredPosts.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmPostCallbackNotification @ 0x140424CB0 (CmPostCallbackNotification.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     CmUnloadKey @ 0x140498EAC (CmUnloadKey.c)
 *     CmpSearchForOpenSubKeys @ 0x140499670 (CmpSearchForOpenSubKeys.c)
 *     CmpFlushNotify @ 0x140499B90 (CmpFlushNotify.c)
 *     ObReferenceObjectByNameEx @ 0x14049AE04 (ObReferenceObjectByNameEx.c)
 *     CmShutdownCmRM @ 0x14049B0F8 (CmShutdownCmRM.c)
 *     CmCloseTmHandle @ 0x14049B370 (CmCloseTmHandle.c)
 *     CmCloseRmHandle @ 0x14049B390 (CmCloseRmHandle.c)
 *     CmSnapshotRMTxArray @ 0x14049B3B0 (CmSnapshotRMTxArray.c)
 *     CmObliterateRMTxArray @ 0x1405E3848 (CmObliterateRMTxArray.c)
 *     CmpRollbackTransactionArray @ 0x1405E5C08 (CmpRollbackTransactionArray.c)
 */

NTSTATUS __stdcall NtUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  ULONG v2; // r12d
  void *v4; // r13
  char v5; // r15
  __int64 v6; // r14
  ULONG_PTR v7; // rdi
  KPROCESSOR_MODE PreviousMode; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rdx
  NTSTATUS v11; // ebx
  struct _KTHREAD *v12; // rax
  PVOID v13; // rsi
  struct _KTHREAD *v14; // rax
  PVOID v15; // rsi
  int v16; // eax
  char v17; // r8
  __int64 v18; // rcx
  void *v19; // r12
  __int64 v20; // r15
  __int64 v21; // r8
  char v22; // r15
  signed int v23; // ebx
  struct _KTHREAD *v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // ebx
  __int64 v28; // rdx
  char v29; // dl
  __int64 v30; // rcx
  char v31; // al
  int v32; // esi
  signed __int32 v33[8]; // [rsp+0h] [rbp-100h] BYREF
  char v34; // [rsp+40h] [rbp-C0h]
  char v35; // [rsp+41h] [rbp-BFh]
  char v36; // [rsp+42h] [rbp-BEh]
  int v37; // [rsp+44h] [rbp-BCh] BYREF
  _BYTE v38[8]; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  int v40; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v41; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v42; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+68h] [rbp-98h]
  _QWORD *v44[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v45[2]; // [rsp+80h] [rbp-80h] BYREF
  PVOID *v46; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v47[5]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v48[48]; // [rsp+C0h] [rbp-40h] BYREF
  char v50; // [rsp+1A0h] [rbp+A0h]
  char v51; // [rsp+1A8h] [rbp+A8h]

  v2 = Flags;
  LOBYTE(v4) = 0;
  Object = 0LL;
  memset(v48, 0, 136);
  v36 = 0;
  v35 = 0;
  memset(v47, 0, sizeof(v47));
  v40 = 0;
  v5 = 0;
  v51 = 0;
  v6 = 0LL;
  v50 = 0;
  v7 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v11 = -1073741431;
LABEL_33:
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v11;
  }
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    v11 = -1073741727;
    goto LABEL_33;
  }
  v48[6] = 4;
  v48[0] = 5;
  v11 = ObReferenceObjectByNameEx(
          (__int64)TargetKey,
          v10,
          0x20006u,
          (struct _OBJECT_TYPE *)CmKeyObjectType,
          PreviousMode,
          v48,
          &Object);
  if ( v11 < 0 )
    goto LABEL_32;
  v45[1] = v45;
  v45[0] = v45;
  v44[1] = v44;
  v44[0] = v44;
  v12 = KeGetCurrentThread();
  --v12->KernelApcDisable;
  if ( CmpCallBackCount )
  {
    if ( !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
    {
      v13 = Object;
      v47[0] = Object;
      v11 = CmpCallCallBacks(0x22u, (__int64)v47, 1, 0x23u, (__int64)Object, (__int64)v45);
      if ( v11 < 0 )
      {
        ObfDereferenceObject(v13);
        v25 = KeGetCurrentThread();
        if ( v11 == -1073740541 )
          v11 = 0;
        KiLeaveCriticalRegionUnsafe((__int64)v25);
        goto LABEL_32;
      }
    }
  }
  while ( 1 )
  {
    v37 = 0;
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
      break;
    LOBYTE(v4) = 1;
    v37 = 6;
    v34 = 1;
    LOCK_HIVE_LOAD();
    CmpLockRegistryFreezeAware(1);
    v15 = Object;
    v6 = *((_QWORD *)Object + 1);
    v16 = *(_DWORD *)(v6 + 4);
    v7 = *(_QWORD *)(v6 + 32);
    if ( (v16 & 0x80u) != 0 )
    {
      v23 = -1073741790;
      goto LABEL_57;
    }
    if ( (v16 & 0x20000) != 0 )
    {
      v23 = (*((_BYTE *)Object + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_57;
    }
    if ( (v16 & 0x40000) != 0 && !v5 )
    {
      v23 = -1073740763;
      goto LABEL_27;
    }
    if ( *(_BYTE *)(v7 + 4112) == 1 && ((*(_DWORD *)(v7 + 5360) & 0x20) == 0 || v2 != 1) )
    {
      v23 = -1073741431;
      goto LABEL_57;
    }
    CmpReportNotify(v6, v7, *(_DWORD *)(v6 + 40), 0LL, 4, (__int64)v44);
    CmpFlushNotify((__int64)v15, v2 == 1, (__int64)v44);
    v18 = *(_QWORD *)(v6 + 32);
    v19 = 0LL;
    v20 = *(_QWORD *)(v7 + 5400);
    v4 = 0LL;
    if ( (*(_DWORD *)(v18 + 5360) & 4) != 0
      || v18 == CmpMasterHive
      || *(_DWORD *)(*(_QWORD *)(v18 + 64) + 36LL) != *(_DWORD *)(v6 + 40) )
    {
      v23 = (*(_BYTE *)(v7 + 5360) & 4) != 0 ? -1073741790 : -1073741811;
      goto LABEL_56;
    }
    if ( Flags == 1 )
    {
      v42 = 0LL;
      v43 = 0LL;
      if ( !(unsigned int)CmpSearchForOpenSubKeys(v6, 1, v17, &v42) )
        goto LABEL_18;
      if ( (_DWORD)v42 != -1073741267 )
        goto LABEL_55;
      CmpLogTransactionAborted(v6, 0xAu, v21, HIDWORD(v42));
      UNLOCK_HIVE_LOAD();
      CmpUnlockRegistry();
      v37 = 0;
      v23 = CmpRollbackTransactionArray(HIDWORD(v42), v43, 0LL, &v40);
      if ( v23 < 0 )
        goto LABEL_56;
      v5 = v51;
LABEL_38:
      v2 = Flags;
    }
    else
    {
      if ( *(_DWORD *)v6 != 2 && ((unsigned int)CmpSearchForOpenSubKeys(v6, 0, v17, 0LL) || *(_DWORD *)v6 != 2) )
      {
LABEL_55:
        v23 = -1073741535;
LABEL_56:
        LOBYTE(v4) = v34;
        goto LABEL_57;
      }
LABEL_18:
      if ( !v51 )
      {
        *(_DWORD *)(v6 + 4) |= 0x40000u;
        if ( (*(_DWORD *)(v7 + 5360) & 0x20) != 0 )
        {
          *(_DWORD *)(v7 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 5500), 1u) & 0x7F) + 5504) = 32;
          CmpUnfreezeHive(v7);
          ++CmpActiveAppHiveUnloadCount;
          v50 = 1;
        }
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD();
        _InterlockedIncrement(&CmpActiveHiveRundownCount);
        ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v7 + 2776));
        _InterlockedExchange64((volatile __int64 *)(v7 + 2776), 1LL);
        v5 = 1;
        v51 = 1;
        *(_DWORD *)(v7 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 5500), 1u) & 0x7F) + 5504) = 1;
        goto LABEL_38;
      }
      if ( !v20 || v36 )
      {
        v22 = 0;
        LOBYTE(v4) = v34;
        v23 = CmUnloadKey(v6, Flags, &v37);
        goto LABEL_21;
      }
      v23 = CmSnapshotRMTxArray(v20, &v41, &v46);
      if ( v23 < 0 )
        goto LABEL_56;
      v27 = v41;
      CmpLogTransactionAborted(v6, 9u, v26, v41);
      CmpUnlockRegistry();
      if ( v27 )
      {
        UNLOCK_HIVE_LOAD();
        v37 = 0;
        v23 = CmpRollbackTransactionArray(v27, v46, v38, &v40);
        if ( v23 < 0 )
          goto LABEL_56;
        v2 = Flags;
        if ( v38[0] == 1 )
        {
          CmObliterateRMTxArray(v20);
          goto LABEL_71;
        }
        v5 = v51;
      }
      else
      {
        if ( v35 )
        {
          LOBYTE(v28) = 1;
          CmShutdownCmRM(v20, v28);
          v36 = 1;
        }
        else
        {
          v19 = (void *)CmCloseRmHandle(v20, 0);
          v4 = (void *)CmCloseTmHandle(v30, v29);
          v35 = 1;
        }
        UNLOCK_HIVE_LOAD();
        if ( v19 )
          ZwClose(v19);
        v5 = v51;
        v2 = Flags;
        if ( v4 )
        {
          ZwClose(v4);
          LOBYTE(v4) = 0;
LABEL_71:
          v2 = Flags;
          v5 = v51;
        }
        else
        {
          LOBYTE(v4) = 0;
        }
      }
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v15 = Object;
  v23 = -1073741431;
LABEL_57:
  v22 = v50;
LABEL_21:
  if ( v51 )
  {
    if ( v23 < 0 )
    {
      if ( (*(_DWORD *)(v7 + 5360) & 0x20) != 0 )
      {
        v31 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 5500), 1u);
        v32 = v37;
        *(_DWORD *)(v7 + 4LL * (v31 & 0x7F) + 5504) = 33;
        if ( (v32 & 4) == 0 )
        {
          LOCK_HIVE_LOAD();
          v32 |= 4u;
          v37 = v32;
        }
        if ( (v32 & 2) == 0 )
        {
          CmpLockRegistryFreezeAware(1);
          v37 = v32 | 2;
        }
        *(_BYTE *)(v7 + 4112) = 1;
        CmpReferenceKeyControlBlock((signed __int32 *)v6);
        *(_QWORD *)(v7 + 4104) = v6;
        if ( v22 )
          CmpDecrementAppHiveUnloadCount();
      }
      *(_DWORD *)(v6 + 4) &= ~0x40000u;
      _InterlockedExchange64((volatile __int64 *)(v7 + 2776), 0LL);
      *(_DWORD *)(v7 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 5500), 1u) & 0x7F) + 5504) = 2;
    }
    if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
    {
      _InterlockedOr(v33, 0);
      if ( CmpActiveHiveRundownEvent )
        ExfUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL);
    }
    v15 = Object;
  }
LABEL_27:
  if ( (v37 & 2) != 0 )
    CmpUnlockRegistry();
  if ( (v37 & 4) != 0 )
    UNLOCK_HIVE_LOAD();
  CmpSignalDeferredPosts(v44);
  v11 = CmPostCallbackNotification(0x23u, (__int64)v15, v23, (__int64)v47, v45);
  ObfDereferenceObject(v15);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( (_BYTE)v4 )
  {
LABEL_32:
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    goto LABEL_33;
  }
  return v11;
}
