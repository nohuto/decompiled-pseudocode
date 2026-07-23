/*
 * XREFs of NtUnloadKey2 @ 0x14054A4C4
 * Callers:
 *     NtUnloadKey @ 0x14054D480 (NtUnloadKey.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14002CDD0 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x14010B700 (CmpDecrementAppHiveUnloadCount.c)
 *     CmpLogTransactionAborted @ 0x140135C24 (CmpLogTransactionAborted.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x140159E30 (ExfUnblockPushLock.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpUnfreezeHive @ 0x1401B46D8 (CmpUnfreezeHive.c)
 *     CmpSignalDeferredPosts @ 0x1403E3810 (CmpSignalDeferredPosts.c)
 *     CmpSearchForOpenSubKeys @ 0x1403E3C04 (CmpSearchForOpenSubKeys.c)
 *     CmpFlushNotify @ 0x1403E435C (CmpFlushNotify.c)
 *     ObReferenceObjectByNameEx @ 0x1403E4434 (ObReferenceObjectByNameEx.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403FA6A4 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FA714 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1403FA774 (LOCK_HIVE_LOAD.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmPostCallbackNotification @ 0x140438360 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     CmpCleanupParseContext @ 0x14046353C (CmpCleanupParseContext.c)
 *     CmShutdownCmRM @ 0x1404BCE9C (CmShutdownCmRM.c)
 *     CmSnapshotRMTxArray @ 0x1404CD238 (CmSnapshotRMTxArray.c)
 *     CmCloseRmHandle @ 0x1404D1FC8 (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x1404D1FE8 (CmCloseTmHandle.c)
 *     CmpReportNotify @ 0x1404F7C30 (CmpReportNotify.c)
 *     CmUnloadKey @ 0x140517C64 (CmUnloadKey.c)
 *     CmpReferenceKeyControlBlock @ 0x140518944 (CmpReferenceKeyControlBlock.c)
 *     CmObliterateRMTxArray @ 0x1406032B4 (CmObliterateRMTxArray.c)
 *     CmpRollbackTransactionArray @ 0x1406051FC (CmpRollbackTransactionArray.c)
 *     CmpLogUnsupportedOperation @ 0x14060BDC0 (CmpLogUnsupportedOperation.c)
 */

NTSTATUS __stdcall NtUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  ULONG v2; // r12d
  char v4; // r13
  KPROCESSOR_MODE PreviousMode; // bl
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
  __int64 v26; // rdx
  char v27; // r8
  __int64 v28; // rcx
  void *v29; // r12
  __int64 v30; // r15
  void *v31; // r13
  signed int v32; // ebx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // r8
  unsigned int v40; // ebx
  __int64 v41; // rdx
  char v42; // dl
  __int64 v43; // rcx
  char v44; // al
  int v45; // r14d
  signed __int32 v46[8]; // [rsp+0h] [rbp-100h] BYREF
  char v47; // [rsp+40h] [rbp-C0h]
  char v48; // [rsp+41h] [rbp-BFh]
  char v49; // [rsp+42h] [rbp-BEh]
  char v50; // [rsp+43h] [rbp-BDh]
  char v51; // [rsp+44h] [rbp-BCh]
  int v52; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v53[4]; // [rsp+4Ch] [rbp-B4h] BYREF
  ULONG v54; // [rsp+50h] [rbp-B0h]
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  int v56; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v57; // [rsp+64h] [rbp-9Ch] BYREF
  _QWORD *v58[2]; // [rsp+68h] [rbp-98h] BYREF
  _SLIST_ENTRY v59; // [rsp+78h] [rbp-88h] BYREF
  __int64 v60; // [rsp+88h] [rbp-78h] BYREF
  __int64 v61; // [rsp+90h] [rbp-70h]
  int v62; // [rsp+98h] [rbp-68h]
  PVOID *v63; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v64[5]; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v65[60]; // [rsp+D0h] [rbp-30h] BYREF

  v54 = Flags;
  v2 = Flags;
  Object = 0LL;
  v51 = 0;
  v50 = 0;
  memset(v64, 0, sizeof(v64));
  v56 = 0;
  v49 = 0;
  v4 = 0;
  v47 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v6 = 0LL;
  v7 = 0LL;
  memset(v65, 0, 0xE8uLL);
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
  v65[6] = 4;
  v65[0] = 5;
  v14 = ObReferenceObjectByNameEx(
          (__int64)TargetKey,
          v13,
          0,
          (__int64)CmKeyObjectType,
          PreviousMode,
          (__int64)v65,
          &Object);
  if ( v14 < 0 )
    goto LABEL_33;
  *((_QWORD *)&v59.Next + 1) = &v59;
  v59.Next = &v59;
  v58[1] = v58;
  v58[0] = v58;
  v15 = KeGetCurrentThread();
  --v15->KernelApcDisable;
  if ( CmpCallBackCount )
  {
    if ( !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
    {
      v16 = Object;
      v64[0] = Object;
      v14 = CmpCallCallBacks(0x22u, (__int64)v64, 1, 0x23u, (__int64)Object, &v59);
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
    v52 = 0;
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
      v32 = -1073741431;
      goto LABEL_80;
    }
    v12 = 1;
    v52 = 6;
    v48 = 1;
    LOCK_HIVE_LOAD();
    CmpLockRegistryFreezeAware(1);
    v24 = Object;
    v6 = *((_QWORD *)Object + 1);
    v7 = *(_QWORD *)(v6 + 24);
    if ( (*(_DWORD *)(v6 + 4) & 0x80u) != 0 )
    {
      v32 = -1073741790;
      goto LABEL_80;
    }
    if ( CmpIsKeyDeletedForKeyBody((__int64)Object, 0LL) )
      break;
    if ( (*(_DWORD *)(v6 + 4) & 0x40000) != 0 && !v4 )
    {
      v32 = -1073740763;
      goto LABEL_27;
    }
    if ( *(_BYTE *)(v7 + 4112) == 1 && ((*(_DWORD *)(v7 + 5360) & 0x20) == 0 || v2 != 1) )
      goto LABEL_76;
    CmpReportNotify(v6, v7, *(_DWORD *)(v6 + 32), 0LL, 4, (__int64)v58);
    LOBYTE(v25) = v2 == 1;
    CmpFlushNotify((__int64)v24, v25, v58);
    v28 = *(_QWORD *)(v6 + 24);
    v29 = 0LL;
    v30 = *(_QWORD *)(v7 + 5400);
    v31 = 0LL;
    if ( (*(_DWORD *)(v28 + 5360) & 4) != 0
      || v28 == CmpMasterHive
      || *(_DWORD *)(*(_QWORD *)(v28 + 64) + 36LL) != *(_DWORD *)(v6 + 32) )
    {
      v32 = (*(_BYTE *)(v7 + 5360) & 4) != 0 ? -1073741790 : -1073741811;
LABEL_79:
      v12 = v48;
      goto LABEL_80;
    }
    if ( v54 != 1 )
    {
      if ( *(_DWORD *)v6 != 2 && ((unsigned int)CmpSearchForOpenSubKeys(v6, 0, v27, 0LL) || *(_DWORD *)v6 != 2) )
        goto LABEL_57;
      goto LABEL_18;
    }
    v60 = 0LL;
    v37 = *(_QWORD *)(v6 + 184);
    v61 = 0LL;
    v62 = 0;
    if ( v37 && *(_QWORD *)(v37 + 32) != v37 + 32 )
    {
      CmpLogUnsupportedOperation(3LL);
LABEL_57:
      v32 = -1073741535;
      goto LABEL_79;
    }
    if ( (unsigned int)CmpSearchForOpenSubKeys(v6, 1, v27, &v60) )
    {
      if ( (_DWORD)v60 != -1073741267 )
        goto LABEL_57;
      CmpLogTransactionAborted(v6, 0xAu, v38, HIDWORD(v60));
      UNLOCK_HIVE_LOAD();
      CmpUnlockRegistry();
      v52 = 0;
      v32 = CmpRollbackTransactionArray(HIDWORD(v60), v61, 0LL, &v56);
      if ( v32 < 0 )
        goto LABEL_79;
      v4 = v49;
LABEL_43:
      v2 = v54;
    }
    else
    {
LABEL_18:
      if ( !v49 )
      {
        *(_DWORD *)(v6 + 4) |= 0x40000u;
        if ( (*(_DWORD *)(v7 + 5360) & 0x20) != 0 )
        {
          *(_DWORD *)(v7 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 5500), 1u) & 0x7F) + 5504) = 32;
          CmpUnfreezeHive(v7);
          ++CmpActiveAppHiveUnloadCount;
          v47 = 1;
        }
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD();
        _InterlockedIncrement(&CmpActiveHiveRundownCount);
        ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v7 + 2776));
        _InterlockedExchange64((volatile __int64 *)(v7 + 2776), 1LL);
        v4 = 1;
        v49 = 1;
        *(_DWORD *)(v7 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 5500), 1u) & 0x7F) + 5504) = 1;
        goto LABEL_43;
      }
      if ( !v30 || v51 )
      {
        v12 = v48;
        v32 = CmUnloadKey(v6, v26, &v52);
        goto LABEL_21;
      }
      v32 = CmSnapshotRMTxArray(v30, &v57, &v63);
      if ( v32 < 0 )
        goto LABEL_79;
      v40 = v57;
      CmpLogTransactionAborted(v6, 9u, v39, v57);
      CmpUnlockRegistry();
      if ( v40 )
      {
        UNLOCK_HIVE_LOAD();
        v52 = 0;
        v32 = CmpRollbackTransactionArray(v40, v63, v53, &v56);
        if ( v32 < 0 )
          goto LABEL_79;
        v4 = v49;
        v2 = v54;
        if ( v53[0] == 1 )
        {
          CmObliterateRMTxArray(v30);
          goto LABEL_53;
        }
      }
      else
      {
        if ( v50 )
        {
          LOBYTE(v41) = 1;
          CmShutdownCmRM(v30, v41);
          v51 = 1;
        }
        else
        {
          v29 = (void *)CmCloseRmHandle(v30, 0);
          v31 = (void *)CmCloseTmHandle(v43, v42);
          v50 = 1;
        }
        UNLOCK_HIVE_LOAD();
        if ( v29 )
          ZwClose(v29);
        v2 = v54;
        if ( v31 )
          ZwClose(v31);
LABEL_53:
        v4 = v49;
      }
    }
  }
  v32 = (v24[48] & 1) != 0 ? -1073740763 : -1073741444;
LABEL_80:
  LOBYTE(v29) = v47;
LABEL_21:
  if ( v49 )
  {
    if ( v32 < 0 )
    {
      if ( (*(_DWORD *)(v7 + 5360) & 0x20) != 0 )
      {
        v44 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 5500), 1u);
        v45 = v52;
        *(_DWORD *)(v7 + 4LL * (v44 & 0x7F) + 5504) = 33;
        if ( (v45 & 4) == 0 )
        {
          LOCK_HIVE_LOAD();
          v45 |= 4u;
          v52 = v45;
        }
        if ( (v45 & 2) == 0 )
        {
          CmpLockRegistryFreezeAware(1);
          v52 = v45 | 2;
        }
        *(_BYTE *)(v7 + 4112) = 1;
        CmpReferenceKeyControlBlock(v6);
        *(_QWORD *)(v7 + 4104) = v6;
        if ( (_BYTE)v29 )
          CmpDecrementAppHiveUnloadCount();
      }
      *(_DWORD *)(v6 + 4) &= ~0x40000u;
      _InterlockedExchange64((volatile __int64 *)(v7 + 2776), 0LL);
      *(_DWORD *)(v7 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 5500), 1u) & 0x7F) + 5504) = 2;
    }
    if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
    {
      _InterlockedOr(v46, 0);
      if ( CmpActiveHiveRundownEvent )
        ExfUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL);
    }
    v24 = Object;
  }
LABEL_27:
  if ( (v52 & 2) != 0 )
    CmpUnlockRegistry();
  if ( (v52 & 4) != 0 )
    UNLOCK_HIVE_LOAD();
  CmpSignalDeferredPosts(v58);
  v14 = CmPostCallbackNotification(35, (__int64)v24, v32, (__int64)v64, &v59);
  ObfDereferenceObject(v24);
LABEL_32:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v33, v34, v35);
LABEL_33:
  CmpCleanupParseContext((__int64)v65, 0);
  if ( v12 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    goto LABEL_35;
  }
  return v14;
}
