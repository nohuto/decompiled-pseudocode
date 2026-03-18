/*
 * XREFs of NtUnloadKey2 @ 0x140549F84
 * Callers:
 *     NtUnloadKey @ 0x14054CF40 (NtUnloadKey.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14002D250 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074D34 (ExWaitForRundownProtectionRelease.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x140087508 (CmpDecrementAppHiveUnloadCount.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     CmpLogTransactionAborted @ 0x1401356B4 (CmpLogTransactionAborted.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401598C0 (ExfUnblockPushLock.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     CmpUnfreezeHive @ 0x1401B47F4 (CmpUnfreezeHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403FB7E4 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FB854 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1403FB8B4 (LOCK_HIVE_LOAD.c)
 *     CmpUnlockRegistry @ 0x14040476C (CmpUnlockRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x140413F70 (SeSinglePrivilegeCheck.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140439400 (CmpIsKeyDeletedForKeyBody.c)
 *     CmPostCallbackNotification @ 0x140439490 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x140452A00 (CmpCallCallBacks.c)
 *     CmpCleanupParseContext @ 0x14046466C (CmpCleanupParseContext.c)
 *     ObReferenceObjectByNameEx @ 0x140499E04 (ObReferenceObjectByNameEx.c)
 *     CmpFlushNotify @ 0x14049A0FC (CmpFlushNotify.c)
 *     CmpSignalDeferredPosts @ 0x14049A8F0 (CmpSignalDeferredPosts.c)
 *     CmpSearchForOpenSubKeys @ 0x14049ACE4 (CmpSearchForOpenSubKeys.c)
 *     CmUnloadKey @ 0x14049F858 (CmUnloadKey.c)
 *     CmpReferenceKeyControlBlock @ 0x1404A0538 (CmpReferenceKeyControlBlock.c)
 *     CmShutdownCmRM @ 0x1404D9898 (CmShutdownCmRM.c)
 *     CmSnapshotRMTxArray @ 0x1404EB0B4 (CmSnapshotRMTxArray.c)
 *     CmCloseRmHandle @ 0x1404EFED4 (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x1404EFEF4 (CmCloseTmHandle.c)
 *     CmpReportNotify @ 0x140514840 (CmpReportNotify.c)
 *     CmObliterateRMTxArray @ 0x140603200 (CmObliterateRMTxArray.c)
 *     CmpRollbackTransactionArray @ 0x140605148 (CmpRollbackTransactionArray.c)
 *     CmpLogUnsupportedOperation @ 0x14060BD0C (CmpLogUnsupportedOperation.c)
 */

NTSTATUS __stdcall NtUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  ULONG v2; // r12d
  char v4; // r13
  char PreviousMode; // bl
  ULONG_PTR v6; // rsi
  __int64 v7; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // r15
  __int64 v13; // rdx
  NTSTATUS v14; // ebx
  struct _KTHREAD *v15; // rax
  PVOID v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KTHREAD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _BYTE *v24; // r14
  __int64 v25; // rdx
  char v26; // r8
  __int64 v27; // rcx
  void *v28; // r12
  __int64 v29; // r15
  void *v30; // r13
  signed int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // r8
  unsigned int v39; // ebx
  __int64 v40; // rdx
  char v41; // dl
  __int64 v42; // rcx
  char v43; // al
  int v44; // r14d
  signed __int32 v45[8]; // [rsp+0h] [rbp-100h] BYREF
  char v46; // [rsp+40h] [rbp-C0h]
  char v47; // [rsp+41h] [rbp-BFh]
  char v48; // [rsp+42h] [rbp-BEh]
  char v49; // [rsp+43h] [rbp-BDh]
  char v50; // [rsp+44h] [rbp-BCh]
  int v51; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v52[4]; // [rsp+4Ch] [rbp-B4h] BYREF
  ULONG v53; // [rsp+50h] [rbp-B0h]
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  int v55; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v56; // [rsp+64h] [rbp-9Ch] BYREF
  _QWORD *v57[2]; // [rsp+68h] [rbp-98h] BYREF
  _SLIST_ENTRY v58; // [rsp+78h] [rbp-88h] BYREF
  __int64 v59; // [rsp+88h] [rbp-78h] BYREF
  __int64 v60; // [rsp+90h] [rbp-70h]
  int v61; // [rsp+98h] [rbp-68h]
  PVOID *v62; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v63[5]; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v64[60]; // [rsp+D0h] [rbp-30h] BYREF

  v53 = Flags;
  v2 = Flags;
  Object = 0LL;
  v50 = 0;
  v49 = 0;
  memset(v63, 0, sizeof(v63));
  v55 = 0;
  v48 = 0;
  v4 = 0;
  v46 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v6 = 0LL;
  v7 = 0LL;
  memset(v64, 0, 0xE8uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v14 = -1073741431;
LABEL_35:
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
    return v14;
  }
  v12 = 1;
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    v14 = -1073741727;
    goto LABEL_35;
  }
  v64[6] = 4;
  v64[0] = 5;
  v14 = ObReferenceObjectByNameEx(
          (__int64)TargetKey,
          v13,
          0,
          (struct _OBJECT_TYPE *)CmKeyObjectType,
          PreviousMode,
          (__int64)v64,
          &Object);
  if ( v14 < 0 )
    goto LABEL_33;
  *((_QWORD *)&v58.Next + 1) = &v58;
  v58.Next = &v58;
  v57[1] = v57;
  v57[0] = v57;
  v15 = KeGetCurrentThread();
  --v15->KernelApcDisable;
  if ( CmpCallBackCount )
  {
    if ( !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
    {
      v16 = Object;
      v63[0] = Object;
      v14 = CmpCallCallBacks(0x22u, (__int64)v63, 1, 0x23u, (__int64)Object, &v58);
      if ( v14 < 0 )
      {
        ObfDereferenceObject(v16);
        if ( v14 == -1073740541 )
          v14 = 0;
        goto LABEL_32;
      }
    }
  }
  while ( 1 )
  {
    v51 = 0;
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v17, v18, v19);
    v20 = KeGetCurrentThread();
    v12 = 0;
    --v20->KernelApcDisable;
    if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v21, v22, v23);
      v24 = Object;
LABEL_76:
      v31 = -1073741431;
      goto LABEL_80;
    }
    v12 = 1;
    v51 = 6;
    v47 = 1;
    LOCK_HIVE_LOAD();
    CmpLockRegistryFreezeAware(1);
    v24 = Object;
    v6 = *((_QWORD *)Object + 1);
    v7 = *(_QWORD *)(v6 + 24);
    if ( (*(_DWORD *)(v6 + 4) & 0x80u) != 0 )
    {
      v31 = -1073741790;
      goto LABEL_80;
    }
    if ( CmpIsKeyDeletedForKeyBody((__int64)Object, 0LL) )
      break;
    if ( (*(_DWORD *)(v6 + 4) & 0x40000) != 0 && !v4 )
    {
      v31 = -1073740763;
      goto LABEL_27;
    }
    if ( *(_BYTE *)(v7 + 4112) == 1 && ((*(_DWORD *)(v7 + 5360) & 0x20) == 0 || v2 != 1) )
      goto LABEL_76;
    CmpReportNotify(v6, v7, *(_DWORD *)(v6 + 32), 0LL, 4, (__int64)v57);
    CmpFlushNotify((__int64)v24, v2 == 1, (__int64)v57);
    v27 = *(_QWORD *)(v6 + 24);
    v28 = 0LL;
    v29 = *(_QWORD *)(v7 + 5400);
    v30 = 0LL;
    if ( (*(_DWORD *)(v27 + 5360) & 4) != 0
      || v27 == CmpMasterHive
      || *(_DWORD *)(*(_QWORD *)(v27 + 64) + 36LL) != *(_DWORD *)(v6 + 32) )
    {
      v31 = (*(_BYTE *)(v7 + 5360) & 4) != 0 ? -1073741790 : -1073741811;
LABEL_79:
      v12 = v47;
      goto LABEL_80;
    }
    if ( v53 != 1 )
    {
      if ( *(_DWORD *)v6 != 2 && ((unsigned int)CmpSearchForOpenSubKeys(v6, 0, v26, 0LL) || *(_DWORD *)v6 != 2) )
        goto LABEL_57;
      goto LABEL_18;
    }
    v59 = 0LL;
    v36 = *(_QWORD *)(v6 + 184);
    v60 = 0LL;
    v61 = 0;
    if ( v36 && *(_QWORD *)(v36 + 32) != v36 + 32 )
    {
      CmpLogUnsupportedOperation(3LL);
LABEL_57:
      v31 = -1073741535;
      goto LABEL_79;
    }
    if ( (unsigned int)CmpSearchForOpenSubKeys(v6, 1, v26, &v59) )
    {
      if ( (_DWORD)v59 != -1073741267 )
        goto LABEL_57;
      CmpLogTransactionAborted(v6, 0xAu, v37, HIDWORD(v59));
      UNLOCK_HIVE_LOAD();
      CmpUnlockRegistry();
      v51 = 0;
      v31 = CmpRollbackTransactionArray(HIDWORD(v59), v60, 0LL, &v55);
      if ( v31 < 0 )
        goto LABEL_79;
      v4 = v48;
LABEL_43:
      v2 = v53;
    }
    else
    {
LABEL_18:
      if ( !v48 )
      {
        *(_DWORD *)(v6 + 4) |= 0x40000u;
        if ( (*(_DWORD *)(v7 + 5360) & 0x20) != 0 )
        {
          *(_DWORD *)(v7 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 5500), 1u) & 0x7F) + 5504) = 32;
          CmpUnfreezeHive(v7);
          ++CmpActiveAppHiveUnloadCount;
          v46 = 1;
        }
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD();
        _InterlockedIncrement(&CmpActiveHiveRundownCount);
        ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v7 + 2776));
        _InterlockedExchange64((volatile __int64 *)(v7 + 2776), 1LL);
        v4 = 1;
        v48 = 1;
        *(_DWORD *)(v7 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 5500), 1u) & 0x7F) + 5504) = 1;
        goto LABEL_43;
      }
      if ( !v29 || v50 )
      {
        v12 = v47;
        v31 = CmUnloadKey(v6, v25, &v51);
        goto LABEL_21;
      }
      v31 = CmSnapshotRMTxArray(v29, &v56, &v62);
      if ( v31 < 0 )
        goto LABEL_79;
      v39 = v56;
      CmpLogTransactionAborted(v6, 9u, v38, v56);
      CmpUnlockRegistry();
      if ( v39 )
      {
        UNLOCK_HIVE_LOAD();
        v51 = 0;
        v31 = CmpRollbackTransactionArray(v39, v62, v52, &v55);
        if ( v31 < 0 )
          goto LABEL_79;
        v4 = v48;
        v2 = v53;
        if ( v52[0] == 1 )
        {
          CmObliterateRMTxArray(v29);
          goto LABEL_53;
        }
      }
      else
      {
        if ( v49 )
        {
          LOBYTE(v40) = 1;
          CmShutdownCmRM(v29, v40);
          v50 = 1;
        }
        else
        {
          v28 = (void *)CmCloseRmHandle(v29, 0);
          v30 = (void *)CmCloseTmHandle(v42, v41);
          v49 = 1;
        }
        UNLOCK_HIVE_LOAD();
        if ( v28 )
          ZwClose(v28);
        v2 = v53;
        if ( v30 )
          ZwClose(v30);
LABEL_53:
        v4 = v48;
      }
    }
  }
  v31 = (v24[48] & 1) != 0 ? -1073740763 : -1073741444;
LABEL_80:
  LOBYTE(v28) = v46;
LABEL_21:
  if ( v48 )
  {
    if ( v31 < 0 )
    {
      if ( (*(_DWORD *)(v7 + 5360) & 0x20) != 0 )
      {
        v43 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 5500), 1u);
        v44 = v51;
        *(_DWORD *)(v7 + 4LL * (v43 & 0x7F) + 5504) = 33;
        if ( (v44 & 4) == 0 )
        {
          LOCK_HIVE_LOAD();
          v44 |= 4u;
          v51 = v44;
        }
        if ( (v44 & 2) == 0 )
        {
          CmpLockRegistryFreezeAware(1);
          v51 = v44 | 2;
        }
        *(_BYTE *)(v7 + 4112) = 1;
        CmpReferenceKeyControlBlock(v6);
        *(_QWORD *)(v7 + 4104) = v6;
        if ( (_BYTE)v28 )
          CmpDecrementAppHiveUnloadCount();
      }
      *(_DWORD *)(v6 + 4) &= ~0x40000u;
      _InterlockedExchange64((volatile __int64 *)(v7 + 2776), 0LL);
      *(_DWORD *)(v7 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 5500), 1u) & 0x7F) + 5504) = 2;
    }
    if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
    {
      _InterlockedOr(v45, 0);
      if ( CmpActiveHiveRundownEvent )
        ExfUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL);
    }
    v24 = Object;
  }
LABEL_27:
  if ( (v51 & 2) != 0 )
    CmpUnlockRegistry();
  if ( (v51 & 4) != 0 )
    UNLOCK_HIVE_LOAD();
  CmpSignalDeferredPosts(v57);
  v14 = CmPostCallbackNotification(35, (__int64)v24, v31, (__int64)v63, &v58);
  ObfDereferenceObject(v24);
LABEL_32:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v32, v33, v34);
LABEL_33:
  CmpCleanupParseContext((__int64)v64, 0);
  if ( v12 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    goto LABEL_35;
  }
  return v14;
}
