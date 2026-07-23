/*
 * XREFs of NtUnloadKeyEx @ 0x1403E3100
 * Callers:
 *     <none>
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14002CDD0 (ExIsResourceAcquiredSharedLite.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 *     KeCancelTimer @ 0x1400C1310 (KeCancelTimer.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     CmpEnableLazyFlush @ 0x140132070 (CmpEnableLazyFlush.c)
 *     CmpLogTransactionAborted @ 0x140135C24 (CmpLogTransactionAborted.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x140159E30 (ExfUnblockPushLock.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpSignalDeferredPosts @ 0x1403E3810 (CmpSignalDeferredPosts.c)
 *     CmpSearchForOpenSubKeys @ 0x1403E3C04 (CmpSearchForOpenSubKeys.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x1403E40D4 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpFlushNotify @ 0x1403E435C (CmpFlushNotify.c)
 *     ObReferenceObjectByNameEx @ 0x1403E4434 (ObReferenceObjectByNameEx.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403FA6A4 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FA714 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1403FA774 (LOCK_HIVE_LOAD.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     CmpDelayCloseWorker @ 0x1404245C0 (CmpDelayCloseWorker.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmPostCallbackNotification @ 0x140438360 (CmPostCallbackNotification.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     CmpCleanupParseContext @ 0x14046353C (CmpCleanupParseContext.c)
 *     CmShutdownCmRM @ 0x1404BCE9C (CmShutdownCmRM.c)
 *     CmSnapshotRMTxArray @ 0x1404CD238 (CmSnapshotRMTxArray.c)
 *     CmCloseRmHandle @ 0x1404D1FC8 (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x1404D1FE8 (CmCloseTmHandle.c)
 *     CmpReportNotify @ 0x1404F7C30 (CmpReportNotify.c)
 *     CmUnloadKeyEx @ 0x140515DB8 (CmUnloadKeyEx.c)
 *     CmObliterateRMTxArray @ 0x1406032B4 (CmObliterateRMTxArray.c)
 *     CmpRollbackTransactionArray @ 0x1406051FC (CmpRollbackTransactionArray.c)
 */

NTSTATUS __stdcall NtUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  void *v2; // r15
  int v4; // ebx
  PVOID v5; // r13
  char v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // r14
  KPROCESSOR_MODE PreviousMode; // di
  int v13; // edx
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
  __int64 v27; // rcx
  ULONG_PTR v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  void *v33; // r12
  __int64 v34; // r14
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // ebx
  PVOID v39; // rcx
  __int64 v41; // r8
  unsigned int v42; // ebx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  signed __int32 v48[8]; // [rsp+0h] [rbp-100h] BYREF
  char v49; // [rsp+40h] [rbp-C0h]
  char v50; // [rsp+41h] [rbp-BFh]
  char v51; // [rsp+42h] [rbp-BEh]
  char v52; // [rsp+43h] [rbp-BDh]
  _BYTE v53[4]; // [rsp+44h] [rbp-BCh] BYREF
  int v54; // [rsp+48h] [rbp-B8h]
  PVOID v55; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v56; // [rsp+58h] [rbp-A8h] BYREF
  int v57; // [rsp+5Ch] [rbp-A4h] BYREF
  _QWORD v58[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v59[2]; // [rsp+70h] [rbp-90h] BYREF
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  __int64 v61; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v62[5]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v63[60]; // [rsp+C0h] [rbp-40h] BYREF

  v2 = 0LL;
  v4 = (int)TargetKey;
  v55 = 0LL;
  v52 = 0;
  v51 = 0;
  v5 = 0LL;
  memset(v62, 0, sizeof(v62));
  v57 = 0;
  v49 = 0;
  v6 = 0;
  memset(v63, 0, 0xE8uLL);
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
  v63[6] = 4;
  v63[0] = 5;
  v15 = ObReferenceObjectByNameEx(v4, v13, 0, (_DWORD)CmKeyObjectType, PreviousMode, (__int64)v63, (__int64)&v55);
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
    v59[1] = v59;
    v59[0] = v59;
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
    {
      v62[0] = v55;
      LOBYTE(v16) = 1;
      v62[1] = v5;
      v15 = CmpCallCallBacks(34, (unsigned int)v62, v16, 35, (__int64)v55, (__int64)v59);
    }
    if ( v15 < 0 )
    {
      if ( v15 == -1073740541 )
        v15 = 0;
      goto LABEL_31;
    }
    v58[1] = v58;
    v58[0] = v58;
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
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v45, v46, v47);
            goto LABEL_34;
          }
          v11 = 1;
          v54 = 6;
          v50 = 1;
          LOCK_HIVE_LOAD();
          LOBYTE(v27) = 1;
          CmpLockRegistryFreezeAware(v27);
          v28 = *((_QWORD *)v55 + 1);
          v29 = *(_QWORD *)(v28 + 24);
          if ( (*(_DWORD *)(v28 + 4) & 0x80u) != 0 )
          {
            v38 = -1073741790;
            goto LABEL_23;
          }
          if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v55, 0LL) )
          {
            v38 = (*((_BYTE *)v55 + 48) & 1) != 0 ? -1073740763 : -1073741444;
            goto LABEL_23;
          }
          if ( (*(_DWORD *)(v28 + 4) & 0x40000) != 0 && !v6 )
          {
            v38 = -1073740763;
            goto LABEL_24;
          }
          CmpReportNotify(v28, *(_QWORD *)(v28 + 24), *(_DWORD *)(v28 + 32), 0, 4, (__int64)v58);
          LOBYTE(v30) = 1;
          CmpFlushNotify(v55, v30, v58);
          v32 = *(_QWORD *)(v28 + 24);
          v33 = 0LL;
          v34 = *(_QWORD *)(v29 + 5400);
          if ( (*(_DWORD *)(v32 + 5360) & 4) != 0
            || v32 == CmpMasterHive
            || *(_DWORD *)(*(_QWORD *)(v32 + 64) + 36LL) != *(_DWORD *)(v28 + 32) )
          {
            v38 = (*(_BYTE *)(v29 + 5360) & 4) != 0 ? -1073741790 : -1073741811;
LABEL_62:
            v11 = v50;
LABEL_23:
            if ( v49 )
            {
              if ( v38 < 0 )
              {
                *(_DWORD *)(v28 + 4) &= ~0x40000u;
                _InterlockedExchange64((volatile __int64 *)(v29 + 2776), 0LL);
                *(_DWORD *)(v29
                          + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 5500), 1u) & 0x7F)
                          + 5504) = 4;
              }
              if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
              {
                _InterlockedOr(v48, 0);
                if ( CmpActiveHiveRundownEvent )
                  ExfUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL);
              }
            }
LABEL_24:
            if ( (v54 & 2) != 0 )
              CmpUnlockRegistry();
            if ( (v54 & 4) != 0 )
              UNLOCK_HIVE_LOAD();
            if ( CmpEnableLazyFlushTimerInitialized
              && (CmpHoldLazyFlush & 1) != 0
              && KeCancelTimer(&CmpEnableLazyFlushTimer) )
            {
              CmpEnableLazyFlush(1);
            }
            CmpSignalDeferredPosts(v58);
            v15 = CmPostCallbackNotification(35, (_DWORD)v55, v38, (unsigned int)v62, (__int64)v59);
LABEL_31:
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v14, v16, v17);
            ObfDereferenceObject(v55);
            if ( v5 )
            {
              v39 = v5;
              goto LABEL_33;
            }
            goto LABEL_34;
          }
          if ( *(_DWORD *)v28 == 2 )
            break;
          if ( (unsigned int)CmpSearchForOpenSubKeys(v28, 0LL, v31, 0LL) || *(_DWORD *)v28 != 2 )
          {
            *(_DWORD *)(v29 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 5500), 1u) & 0x7F) + 5504) = 5;
LABEL_22:
            ExReleaseRundownProtection(&CmpShutdownRundown);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v35, v36, v37);
            v11 = 0;
            v38 = CmUnloadKeyEx(v28);
            goto LABEL_23;
          }
          if ( v49 )
            break;
          *(_DWORD *)(v28 + 4) |= 0x40000u;
          CmpUnlockRegistry();
          UNLOCK_HIVE_LOAD();
          _InterlockedIncrement(&CmpActiveHiveRundownCount);
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v29 + 2776));
          _InterlockedExchange64((volatile __int64 *)(v29 + 2776), 1LL);
          v6 = 1;
          v2 = 0LL;
          v49 = 1;
          *(_DWORD *)(v29 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 5500), 1u) & 0x7F) + 5504) = 3;
        }
        if ( !v34 || v52 )
          goto LABEL_22;
        v38 = CmSnapshotRMTxArray(v34, &v56, &v61);
        if ( v38 < 0 )
          goto LABEL_62;
        v42 = v56;
        CmpLogTransactionAborted(v28, 9u, v41, v56);
        CmpUnlockRegistry();
        if ( v42 )
          break;
        if ( v51 )
        {
          LOBYTE(v43) = 1;
          CmShutdownCmRM(v34, v43);
          v52 = 1;
        }
        else
        {
          v2 = (void *)CmCloseRmHandle(v34, 0LL);
          v33 = (void *)CmCloseTmHandle(v44);
          v51 = 1;
        }
        UNLOCK_HIVE_LOAD();
        if ( v2 )
          ZwClose(v2);
        v2 = 0LL;
        if ( v33 )
          ZwClose(v33);
LABEL_41:
        v6 = v49;
      }
      UNLOCK_HIVE_LOAD();
      v2 = 0LL;
      v54 = 0;
      v38 = CmpRollbackTransactionArray(v42, v61, v53, &v57);
      if ( v38 < 0 )
        goto LABEL_62;
      v6 = v49;
      if ( v53[0] == 1 )
      {
        CmObliterateRMTxArray(v34);
        goto LABEL_41;
      }
    }
  }
  v39 = v55;
LABEL_33:
  ObfDereferenceObject(v39);
LABEL_34:
  CmpCleanupParseContext(v63, 0LL);
  if ( v11 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    goto LABEL_75;
  }
  return v15;
}
