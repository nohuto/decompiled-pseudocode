/*
 * XREFs of NtUnloadKeyEx @ 0x14049A1D4
 * Callers:
 *     <none>
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14002D250 (ExIsResourceAcquiredSharedLite.c)
 *     KeResetEvent @ 0x14002E630 (KeResetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074D34 (ExWaitForRundownProtectionRelease.c)
 *     KeCancelTimer @ 0x1400C3480 (KeCancelTimer.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     CmpEnableLazyFlush @ 0x140131B00 (CmpEnableLazyFlush.c)
 *     CmpLogTransactionAborted @ 0x1401356B4 (CmpLogTransactionAborted.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401598C0 (ExfUnblockPushLock.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403FB7E4 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FB854 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1403FB8B4 (LOCK_HIVE_LOAD.c)
 *     CmpUnlockRegistry @ 0x14040476C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404047A0 (CmpLockRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x140413F70 (SeSinglePrivilegeCheck.c)
 *     CmpDelayCloseWorker @ 0x1404256F0 (CmpDelayCloseWorker.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140439400 (CmpIsKeyDeletedForKeyBody.c)
 *     CmPostCallbackNotification @ 0x140439490 (CmPostCallbackNotification.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacks @ 0x140452A00 (CmpCallCallBacks.c)
 *     CmpCleanupParseContext @ 0x14046466C (CmpCleanupParseContext.c)
 *     ObReferenceObjectByNameEx @ 0x140499E04 (ObReferenceObjectByNameEx.c)
 *     CmpFlushNotify @ 0x14049A0FC (CmpFlushNotify.c)
 *     CmpSignalDeferredPosts @ 0x14049A8F0 (CmpSignalDeferredPosts.c)
 *     CmpSearchForOpenSubKeys @ 0x14049ACE4 (CmpSearchForOpenSubKeys.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x14049B1B4 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmUnloadKeyEx @ 0x14049D9AC (CmUnloadKeyEx.c)
 *     CmShutdownCmRM @ 0x1404D9898 (CmShutdownCmRM.c)
 *     CmSnapshotRMTxArray @ 0x1404EB0B4 (CmSnapshotRMTxArray.c)
 *     CmCloseRmHandle @ 0x1404EFED4 (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x1404EFEF4 (CmCloseTmHandle.c)
 *     CmpReportNotify @ 0x140514840 (CmpReportNotify.c)
 *     CmObliterateRMTxArray @ 0x140603200 (CmObliterateRMTxArray.c)
 *     CmpRollbackTransactionArray @ 0x140605148 (CmpRollbackTransactionArray.c)
 */

NTSTATUS __stdcall NtUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  void *v2; // r15
  PVOID v5; // r13
  char v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // r14
  char PreviousMode; // di
  __int64 v13; // rdx
  __int64 v14; // rdx
  NTSTATUS v15; // ebx
  __int64 v16; // r8
  __int64 v17; // r9
  NTSTATUS v18; // eax
  struct _KTHREAD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _KTHREAD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  ULONG_PTR v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // r8
  __int64 v30; // rcx
  void *v31; // r12
  __int64 v32; // r14
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  signed int v36; // ebx
  PVOID v37; // rcx
  __int64 v39; // r8
  unsigned int v40; // ebx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  signed __int32 v46[8]; // [rsp+0h] [rbp-100h] BYREF
  char v47; // [rsp+40h] [rbp-C0h]
  char v48; // [rsp+41h] [rbp-BFh]
  char v49; // [rsp+42h] [rbp-BEh]
  char v50; // [rsp+43h] [rbp-BDh]
  _BYTE v51[4]; // [rsp+44h] [rbp-BCh] BYREF
  int v52; // [rsp+48h] [rbp-B8h]
  PVOID v53; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v54; // [rsp+58h] [rbp-A8h] BYREF
  int v55; // [rsp+5Ch] [rbp-A4h] BYREF
  _QWORD v56[2]; // [rsp+60h] [rbp-A0h] BYREF
  _SLIST_ENTRY v57; // [rsp+70h] [rbp-90h] BYREF
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  __int64 v59; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v60[6]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v61[60]; // [rsp+C0h] [rbp-40h] BYREF

  v2 = 0LL;
  v53 = 0LL;
  v50 = 0;
  v49 = 0;
  v5 = 0LL;
  memset(v60, 0, 0x28uLL);
  v55 = 0;
  v47 = 0;
  v6 = 0;
  memset(v61, 0, 0xE8uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v15 = -1073741431;
LABEL_75:
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
    return v15;
  }
  v11 = 1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    v15 = -1073741727;
    goto LABEL_75;
  }
  v61[6] = 4;
  v61[0] = 5;
  v15 = ObReferenceObjectByNameEx(
          (__int64)TargetKey,
          v13,
          0,
          (struct _OBJECT_TYPE *)CmKeyObjectType,
          PreviousMode,
          (__int64)v61,
          &v53);
  if ( v15 < 0 )
    goto LABEL_34;
  if ( !Event )
    goto LABEL_7;
  v18 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  v5 = Object;
  v15 = v18;
  if ( v18 >= 0 )
  {
    KeResetEvent((PRKEVENT)Object);
LABEL_7:
    *((_QWORD *)&v57.Next + 1) = &v57;
    v57.Next = &v57;
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
    {
      v60[0] = v53;
      v60[1] = v5;
      v15 = CmpCallCallBacks(0x22u, (__int64)v60, 1, 0x23u, (__int64)v53, &v57);
    }
    if ( v15 < 0 )
    {
      if ( v15 == -1073740541 )
        v15 = 0;
      goto LABEL_31;
    }
    v56[1] = v56;
    v56[0] = v56;
    CmpLockRegistry();
    CmpRunDownDelayDerefKCBEngine(0LL, 0LL);
    CmpUnlockRegistry();
    CmpDelayCloseWorker(1LL);
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          ExReleaseRundownProtection(&CmpShutdownRundown);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v20, v21, v22);
          v23 = KeGetCurrentThread();
          v11 = 0;
          --v23->KernelApcDisable;
          if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
          {
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v24, v25, v26);
            v15 = -1073741431;
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v43, v44, v45);
            goto LABEL_34;
          }
          v11 = 1;
          v52 = 6;
          v48 = 1;
          LOCK_HIVE_LOAD();
          CmpLockRegistryFreezeAware(1);
          v27 = *((_QWORD *)v53 + 1);
          v28 = *(_QWORD *)(v27 + 24);
          if ( (*(_DWORD *)(v27 + 4) & 0x80u) != 0 )
          {
            v36 = -1073741790;
            goto LABEL_23;
          }
          if ( CmpIsKeyDeletedForKeyBody((__int64)v53, 0LL) )
          {
            v36 = (*((_BYTE *)v53 + 48) & 1) != 0 ? -1073740763 : -1073741444;
            goto LABEL_23;
          }
          if ( (*(_DWORD *)(v27 + 4) & 0x40000) != 0 && !v6 )
          {
            v36 = -1073740763;
            goto LABEL_24;
          }
          CmpReportNotify(v27, *(_QWORD *)(v27 + 24), *(_DWORD *)(v27 + 32), 0, 4, (__int64)v56);
          CmpFlushNotify((__int64)v53, 1, (__int64)v56);
          v30 = *(_QWORD *)(v27 + 24);
          v31 = 0LL;
          v32 = *(_QWORD *)(v28 + 5400);
          if ( (*(_DWORD *)(v30 + 5360) & 4) != 0
            || v30 == CmpMasterHive
            || *(_DWORD *)(*(_QWORD *)(v30 + 64) + 36LL) != *(_DWORD *)(v27 + 32) )
          {
            v36 = (*(_BYTE *)(v28 + 5360) & 4) != 0 ? -1073741790 : -1073741811;
LABEL_62:
            v11 = v48;
LABEL_23:
            if ( v47 )
            {
              if ( v36 < 0 )
              {
                *(_DWORD *)(v27 + 4) &= ~0x40000u;
                _InterlockedExchange64((volatile __int64 *)(v28 + 2776), 0LL);
                *(_DWORD *)(v28
                          + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v28 + 5500), 1u) & 0x7F)
                          + 5504) = 4;
              }
              if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
              {
                _InterlockedOr(v46, 0);
                if ( CmpActiveHiveRundownEvent )
                  ExfUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL);
              }
            }
LABEL_24:
            if ( (v52 & 2) != 0 )
              CmpUnlockRegistry();
            if ( (v52 & 4) != 0 )
              UNLOCK_HIVE_LOAD();
            if ( CmpEnableLazyFlushTimerInitialized
              && (CmpHoldLazyFlush & 1) != 0
              && KeCancelTimer(&CmpEnableLazyFlushTimer) )
            {
              CmpEnableLazyFlush(1);
            }
            CmpSignalDeferredPosts(v56);
            v15 = CmPostCallbackNotification(35, (__int64)v53, v36, (__int64)v60, &v57);
LABEL_31:
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v14, v16, v17);
            ObfDereferenceObject(v53);
            if ( v5 )
            {
              v37 = v5;
              goto LABEL_33;
            }
            goto LABEL_34;
          }
          if ( *(_DWORD *)v27 == 2 )
            break;
          if ( (unsigned int)CmpSearchForOpenSubKeys(v27, 0LL, v29, 0LL) || *(_DWORD *)v27 != 2 )
          {
            *(_DWORD *)(v28 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v28 + 5500), 1u) & 0x7F) + 5504) = 5;
LABEL_22:
            ExReleaseRundownProtection(&CmpShutdownRundown);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v33, v34, v35);
            v11 = 0;
            v36 = CmUnloadKeyEx(v27);
            goto LABEL_23;
          }
          if ( v47 )
            break;
          *(_DWORD *)(v27 + 4) |= 0x40000u;
          CmpUnlockRegistry();
          UNLOCK_HIVE_LOAD();
          _InterlockedIncrement(&CmpActiveHiveRundownCount);
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v28 + 2776));
          _InterlockedExchange64((volatile __int64 *)(v28 + 2776), 1LL);
          v6 = 1;
          v2 = 0LL;
          v47 = 1;
          *(_DWORD *)(v28 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v28 + 5500), 1u) & 0x7F) + 5504) = 3;
        }
        if ( !v32 || v50 )
          goto LABEL_22;
        v36 = CmSnapshotRMTxArray(v32, &v54, &v59);
        if ( v36 < 0 )
          goto LABEL_62;
        v40 = v54;
        CmpLogTransactionAborted(v27, 9u, v39, v54);
        CmpUnlockRegistry();
        if ( v40 )
          break;
        if ( v49 )
        {
          LOBYTE(v41) = 1;
          CmShutdownCmRM(v32, v41);
          v50 = 1;
        }
        else
        {
          v2 = (void *)CmCloseRmHandle(v32, 0LL);
          v31 = (void *)CmCloseTmHandle(v42);
          v49 = 1;
        }
        UNLOCK_HIVE_LOAD();
        if ( v2 )
          ZwClose(v2);
        v2 = 0LL;
        if ( v31 )
          ZwClose(v31);
LABEL_41:
        v6 = v47;
      }
      UNLOCK_HIVE_LOAD();
      v2 = 0LL;
      v52 = 0;
      v36 = CmpRollbackTransactionArray(v40, v59, v51, &v55);
      if ( v36 < 0 )
        goto LABEL_62;
      v6 = v47;
      if ( v51[0] == 1 )
      {
        CmObliterateRMTxArray(v32);
        goto LABEL_41;
      }
    }
  }
  v37 = v53;
LABEL_33:
  ObfDereferenceObject(v37);
LABEL_34:
  CmpCleanupParseContext((__int64)v61, 0);
  if ( v11 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    goto LABEL_75;
  }
  return v15;
}
