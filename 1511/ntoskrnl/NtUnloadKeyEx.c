/*
 * XREFs of NtUnloadKeyEx @ 0x1404986A4
 * Callers:
 *     <none>
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     KeCancelTimer @ 0x140091500 (KeCancelTimer.c)
 *     CmpEnableLazyFlush @ 0x140126C94 (CmpEnableLazyFlush.c)
 *     ExfUnblockPushLock @ 0x140150264 (ExfUnblockPushLock.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmpLogTransactionAborted @ 0x1401AA55C (CmpLogTransactionAborted.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403DE3F0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1403DE460 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1403DE4C0 (LOCK_HIVE_LOAD.c)
 *     CmpReportNotify @ 0x1403F4FC4 (CmpReportNotify.c)
 *     CmpDelayCloseWorker @ 0x1403F9EB0 (CmpDelayCloseWorker.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     CmpSignalDeferredPosts @ 0x1404218C4 (CmpSignalDeferredPosts.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmPostCallbackNotification @ 0x140424CB0 (CmPostCallbackNotification.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     CmUnloadKeyEx @ 0x140498BA0 (CmUnloadKeyEx.c)
 *     CmpSearchForOpenSubKeys @ 0x140499670 (CmpSearchForOpenSubKeys.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x140499880 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpFlushNotify @ 0x140499B90 (CmpFlushNotify.c)
 *     ObReferenceObjectByNameEx @ 0x14049AE04 (ObReferenceObjectByNameEx.c)
 *     CmShutdownCmRM @ 0x14049B0F8 (CmShutdownCmRM.c)
 *     CmCloseTmHandle @ 0x14049B370 (CmCloseTmHandle.c)
 *     CmCloseRmHandle @ 0x14049B390 (CmCloseRmHandle.c)
 *     CmSnapshotRMTxArray @ 0x14049B3B0 (CmSnapshotRMTxArray.c)
 *     CmObliterateRMTxArray @ 0x1405E3848 (CmObliterateRMTxArray.c)
 *     CmpRollbackTransactionArray @ 0x1405E5C08 (CmpRollbackTransactionArray.c)
 */

NTSTATUS __stdcall NtUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  int v3; // ebx
  void *v4; // r13
  PVOID v5; // r15
  struct _KTHREAD *CurrentThread; // rax
  char v7; // r14
  char v8; // r12
  KPROCESSOR_MODE PreviousMode; // di
  int v10; // edx
  NTSTATUS v11; // ebx
  NTSTATUS v12; // eax
  struct _KTHREAD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _KTHREAD *v17; // rax
  ULONG_PTR v18; // rsi
  int v19; // eax
  ULONG_PTR v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  void *v24; // r12
  __int64 v25; // r14
  signed int v26; // ebx
  __int64 v28; // r8
  unsigned int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rcx
  signed __int32 v32[8]; // [rsp+0h] [rbp-100h] BYREF
  char v33; // [rsp+40h] [rbp-C0h]
  char v34; // [rsp+41h] [rbp-BFh]
  _BYTE v35[2]; // [rsp+42h] [rbp-BEh] BYREF
  int v36; // [rsp+44h] [rbp-BCh]
  PVOID v37; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v38; // [rsp+50h] [rbp-B0h] BYREF
  int v39; // [rsp+54h] [rbp-ACh] BYREF
  _QWORD *v40[2]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v41[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v42; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v44[5]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v45[48]; // [rsp+B0h] [rbp-50h] BYREF
  char v46; // [rsp+190h] [rbp+90h]

  v3 = (int)TargetKey;
  v4 = 0LL;
  v37 = 0LL;
  memset(v45, 0, 136);
  v33 = 0;
  v34 = 0;
  memset(v44, 0, sizeof(v44));
  v5 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v39 = 0;
  v7 = 0;
  v46 = 0;
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
LABEL_38:
    v11 = -1073741431;
LABEL_42:
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v11;
  }
  v8 = 1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    v11 = -1073741727;
    goto LABEL_42;
  }
  v45[6] = 4;
  v45[0] = 5;
  v11 = ObReferenceObjectByNameEx(v3, v10, 131078, (_DWORD)CmKeyObjectType, PreviousMode, (__int64)v45, (__int64)&v37);
  if ( v11 < 0 )
  {
LABEL_41:
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    goto LABEL_42;
  }
  if ( !Event )
    goto LABEL_7;
  v12 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  v5 = Object;
  v11 = v12;
  if ( v12 < 0 )
  {
    ObfDereferenceObject(v37);
    goto LABEL_41;
  }
  KeResetEvent((PRKEVENT)Object);
LABEL_7:
  v41[1] = v41;
  v41[0] = v41;
  v13 = KeGetCurrentThread();
  --v13->KernelApcDisable;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
  {
    v44[0] = v37;
    v44[1] = v5;
    v11 = CmpCallCallBacks(0x22u, (__int64)v44, 1, 0x23u, (__int64)v37, (__int64)v41);
  }
  if ( v11 < 0 )
  {
    if ( v11 == -1073740541 )
      v11 = 0;
    goto LABEL_31;
  }
  v40[1] = v40;
  v40[0] = v40;
  CmpLockRegistry();
  CmpRunDownDelayDerefKCBEngine(0LL, 0LL);
  CmpUnlockRegistry();
  CmpDelayCloseWorker(1LL, v14, v15, v16);
  while ( 1 )
  {
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      goto LABEL_38;
    }
    v36 = 6;
    LOCK_HIVE_LOAD();
    CmpLockRegistryFreezeAware(1);
    v18 = *((_QWORD *)v37 + 1);
    v19 = *(_DWORD *)(v18 + 4);
    v20 = *(_QWORD *)(v18 + 32);
    if ( (v19 & 0x80u) != 0 )
      break;
    if ( (v19 & 0x20000) != 0 )
    {
      v26 = (*((_BYTE *)v37 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_66;
    }
    if ( (v19 & 0x40000) != 0 && !v7 )
    {
      v8 = 1;
      v26 = -1073740763;
      goto LABEL_24;
    }
    CmpReportNotify(v18, v20, *(_DWORD *)(v18 + 40), 0LL, 4, (__int64)v40);
    LOBYTE(v21) = 1;
    CmpFlushNotify(v37, v21, v40);
    v23 = *(_QWORD *)(v18 + 32);
    v24 = 0LL;
    v25 = *(_QWORD *)(v20 + 5400);
    if ( (*(_DWORD *)(v23 + 5360) & 4) != 0
      || v23 == CmpMasterHive
      || *(_DWORD *)(*(_QWORD *)(v23 + 64) + 36LL) != *(_DWORD *)(v18 + 40) )
    {
      v26 = (*(_BYTE *)(v20 + 5360) & 4) != 0 ? -1073741790 : -1073741811;
      goto LABEL_66;
    }
    if ( *(_DWORD *)v18 == 2 )
      goto LABEL_51;
    if ( (unsigned int)CmpSearchForOpenSubKeys(v18, 0LL, v22, 0LL) || *(_DWORD *)v18 != 2 )
    {
      *(_DWORD *)(v20 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 5500), 1u) & 0x7F) + 5504) = 5;
LABEL_22:
      ExReleaseRundownProtection_0(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v8 = 0;
      v26 = CmUnloadKeyEx(v18);
      goto LABEL_23;
    }
    if ( v46 )
    {
LABEL_51:
      if ( !v25 || v33 )
        goto LABEL_22;
      v26 = CmSnapshotRMTxArray(v25, &v38, &v42);
      if ( v26 < 0 )
        goto LABEL_66;
      v29 = v38;
      CmpLogTransactionAborted(v18, 9u, v28, v38);
      CmpUnlockRegistry();
      if ( v29 )
      {
        UNLOCK_HIVE_LOAD();
        v4 = 0LL;
        v36 = 0;
        v26 = CmpRollbackTransactionArray(v29, v42, v35, &v39);
        if ( v26 < 0 )
          goto LABEL_66;
        if ( v35[0] == 1 )
        {
          CmObliterateRMTxArray(v25);
          goto LABEL_64;
        }
        v7 = v46;
      }
      else
      {
        if ( v34 )
        {
          LOBYTE(v30) = 1;
          CmShutdownCmRM(v25, v30);
          v33 = 1;
        }
        else
        {
          v24 = (void *)CmCloseRmHandle(v25, 0LL);
          v4 = (void *)CmCloseTmHandle(v31);
          v34 = 1;
        }
        UNLOCK_HIVE_LOAD();
        if ( v24 )
          ZwClose(v24);
        v7 = v46;
        if ( v4 )
        {
          ZwClose(v4);
          v4 = 0LL;
LABEL_64:
          v7 = v46;
        }
        else
        {
          v4 = 0LL;
        }
      }
    }
    else
    {
      *(_DWORD *)(v18 + 4) |= 0x40000u;
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      _InterlockedIncrement(&CmpActiveHiveRundownCount);
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v20 + 2776));
      _InterlockedExchange64((volatile __int64 *)(v20 + 2776), 1LL);
      v7 = 1;
      v4 = 0LL;
      v46 = 1;
      *(_DWORD *)(v20 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 5500), 1u) & 0x7F) + 5504) = 3;
    }
  }
  v26 = -1073741790;
LABEL_66:
  v8 = 1;
LABEL_23:
  if ( v46 )
  {
    if ( v26 < 0 )
    {
      *(_DWORD *)(v18 + 4) &= ~0x40000u;
      _InterlockedExchange64((volatile __int64 *)(v20 + 2776), 0LL);
      *(_DWORD *)(v20 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 5500), 1u) & 0x7F) + 5504) = 4;
    }
    if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
    {
      _InterlockedOr(v32, 0);
      if ( CmpActiveHiveRundownEvent )
        ExfUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL);
    }
  }
LABEL_24:
  if ( (v36 & 2) != 0 )
    CmpUnlockRegistry();
  if ( (v36 & 4) != 0 )
    UNLOCK_HIVE_LOAD();
  if ( CmpEnableLazyFlushTimerInitialized && (CmpHoldLazyFlush & 1) != 0 && KeCancelTimer(&CmpEnableLazyFlushTimer) )
    CmpEnableLazyFlush(1);
  CmpSignalDeferredPosts(v40);
  v11 = CmPostCallbackNotification(0x23u, (__int64)v37, v26, (__int64)v44, v41);
LABEL_31:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  ObfDereferenceObject(v37);
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v8 )
    goto LABEL_41;
  return v11;
}
