/*
 * XREFs of CmDeleteKey @ 0x1403DAB34
 * Callers:
 *     NtDeleteKey @ 0x1403DA844 (NtDeleteKey.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpLogTransactionAborted @ 0x1401AA55C (CmpLogTransactionAborted.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmAddLogForAction @ 0x1403D5EAC (CmAddLogForAction.c)
 *     CmpSearchAddTrans @ 0x1403D6DD0 (CmpSearchAddTrans.c)
 *     CmpFreeKeyByCell @ 0x1403D84C4 (CmpFreeKeyByCell.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1403DA798 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmGetVisibleSubkeyCount @ 0x1403DB0B4 (CmGetVisibleSubkeyCount.c)
 *     CmpLockTwoKcbsExclusive @ 0x1403DB140 (CmpLockTwoKcbsExclusive.c)
 *     CmpMarkKcbDeletedAndCache @ 0x1403DB284 (CmpMarkKcbDeletedAndCache.c)
 *     CmpLockIXLockExclusive @ 0x1403DDE20 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1403DE050 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1403DE734 (CmpRundownUnitOfWork.c)
 *     CmpCleanUpSubKeyInfo @ 0x1403DF288 (CmpCleanUpSubKeyInfo.c)
 *     CmpReportNotify @ 0x1403F4FC4 (CmpReportNotify.c)
 *     CmpLockHashEntryExclusive @ 0x1403F9DF0 (CmpLockHashEntryExclusive.c)
 *     CmpReferenceKeyControlBlock @ 0x1403FA9B0 (CmpReferenceKeyControlBlock.c)
 *     CmpUnlockHashEntry @ 0x1403FB980 (CmpUnlockHashEntry.c)
 *     CmpUnlockTwoKcbs @ 0x1403FDDA0 (CmpUnlockTwoKcbs.c)
 *     CmRmIsKCBDeleted @ 0x1403FE220 (CmRmIsKCBDeleted.c)
 *     CmpSignalDeferredPosts @ 0x1404218C4 (CmpSignalDeferredPosts.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140423B38 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpAllocateUnitOfWork @ 0x1404B5CE4 (CmpAllocateUnitOfWork.c)
 *     CmpRemoveFromDelayedDeref @ 0x1404BAD8C (CmpRemoveFromDelayedDeref.c)
 *     CmpRollbackTransactionArray @ 0x1405E5C08 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x1405EC1D0 (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmDeleteKey(__int64 a1)
{
  char *UnitOfWork; // r12
  char *v2; // r15
  __int64 v3; // rsi
  __int64 v4; // rbx
  char i; // al
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  ULONG_PTR v11; // rdi
  char *v12; // rsi
  ULONG_PTR v13; // r14
  unsigned int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // r13
  char *v17; // rax
  __int64 v18; // rax
  ULONG_PTR v19; // rcx
  int v20; // esi
  __int64 v21; // rax
  char *v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rdx
  struct _KTHREAD *v26; // rax
  char *v27; // rsi
  char **v28; // rax
  char *v29; // rcx
  _QWORD *v30; // rdx
  struct _KTHREAD *v31; // rax
  char **v32; // rax
  ULONG v33; // edx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // [rsp+40h] [rbp-38h] BYREF
  int v40; // [rsp+44h] [rbp-34h] BYREF
  unsigned int v41; // [rsp+48h] [rbp-30h]
  unsigned int v42; // [rsp+4Ch] [rbp-2Ch]
  char *v43; // [rsp+50h] [rbp-28h] BYREF
  __int64 v44; // [rsp+58h] [rbp-20h] BYREF
  _QWORD v45[3]; // [rsp+60h] [rbp-18h] BYREF
  char v47; // [rsp+D0h] [rbp+58h]
  int v48; // [rsp+D8h] [rbp+60h] BYREF

  v48 = -1;
  v43 = 0LL;
  UnitOfWork = 0LL;
  v40 = 0;
  v45[1] = v45;
  v2 = 0LL;
  v47 = 1;
  v45[0] = v45;
  v3 = a1;
  v4 = MEMORY[0xFFFFF78000000014];
  for ( i = 0; ; i = 1 )
  {
    if ( i )
    {
      ExReleaseRundownProtection_0(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
      break;
    CmpLockRegistry(v8, v7, v9, v10);
    v11 = *(_QWORD *)(v3 + 8);
    if ( !*(_QWORD *)(v11 + 72) )
    {
      CmpUnlockRegistry();
      return 3221225761LL;
    }
    CmpLockHashEntryExclusive(*(_QWORD *)(v11 + 32), *(unsigned int *)(v11 + 16));
    CmpLockTwoKcbsExclusive(*(_QWORD *)(v11 + 72), v11);
    if ( *(_QWORD *)(v3 + 56) || *(_QWORD *)(v3 + 64) )
    {
      if ( (unsigned __int8)CmRmIsKCBDeleted(v11, 0LL) == 1 )
      {
LABEL_64:
        v20 = 0;
        goto LABEL_30;
      }
      v20 = CmpSearchAddTrans(v3, 0LL, 0LL, *(_QWORD *)(v3 + 56), *(__int128 **)(v3 + 64), 0, &v43);
      if ( v20 < 0 )
        goto LABEL_30;
      if ( (*(_DWORD *)(*(_QWORD *)(v11 + 32) + 144LL) & 2) != 0 )
      {
        v20 = -1072103423;
        goto LABEL_30;
      }
    }
    v12 = v43;
    if ( (unsigned __int8)CmRmIsKCBDeleted(v11, v43) == 1 )
      goto LABEL_64;
    v13 = *(_QWORD *)(v11 + 32);
    v41 = *(_DWORD *)(v11 + 40);
    v14 = v41;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v13 + 2848), 1u);
    v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v13 + 8))(v13, v14, &v48);
    v16 = v15;
    if ( !v15 )
    {
      v20 = -1073741670;
LABEL_29:
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v11 + 32) + 2848LL));
LABEL_30:
      CmpUnlockTwoKcbs(*(PVOID *)(v11 + 72), (PVOID)v11);
      CmpUnlockHashEntry(*(_QWORD *)(v11 + 32), *(unsigned int *)(v11 + 16));
      CmpUnlockRegistry();
      CmpSignalDeferredPosts(v45);
      ExReleaseRundownProtection_0(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return (unsigned int)v20;
    }
    CmpUpdateKeyNodeAccessBits(v13, v15, v41);
    v42 = *(_DWORD *)(v16 + 16);
    v17 = *(char **)(v11 + 232);
    if ( v17 && v17 != v12 || (v18 = *(_QWORD *)(v11 + 72)) == 0 )
    {
      v20 = -1073741535;
      goto LABEL_26;
    }
    if ( v12 )
    {
      UnitOfWork = (char *)CmpAllocateUnitOfWork();
      if ( !UnitOfWork || (v2 = (char *)CmpAllocateUnitOfWork()) == 0LL )
      {
        v20 = -1073741670;
        goto LABEL_47;
      }
      v23 = UnitOfWork + 32;
      v24 = *(_QWORD *)(v11 + 72) + 200LL;
      v25 = *(_QWORD **)(*(_QWORD *)(v11 + 72) + 208LL);
      *((_QWORD *)UnitOfWork + 4) = v24;
      *((_QWORD *)UnitOfWork + 5) = v25;
      if ( *v25 != v24 )
        __fastfail(3u);
      *v25 = v23;
      *(_QWORD *)(v24 + 8) = v23;
      CmpReferenceKeyControlBlock(*(_QWORD *)(v11 + 72));
      *((_QWORD *)UnitOfWork + 6) = *(_QWORD *)(v11 + 72);
      v26 = KeGetCurrentThread();
      --v26->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v27 = v43 + 16;
      v28 = (char **)*((_QWORD *)v43 + 3);
      *(_QWORD *)UnitOfWork = v43 + 16;
      *((_QWORD *)UnitOfWork + 1) = v28;
      if ( *v28 != v27 )
        __fastfail(3u);
      *v28 = UnitOfWork;
      *((_QWORD *)v27 + 1) = UnitOfWork;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v29 = v2 + 32;
      *((_QWORD *)UnitOfWork + 7) = v43;
      v30 = *(_QWORD **)(v11 + 208);
      *((_QWORD *)v2 + 4) = v11 + 200;
      *((_QWORD *)v2 + 5) = v30;
      if ( *v30 != v11 + 200 )
        __fastfail(3u);
      *v30 = v29;
      *(_QWORD *)(v11 + 208) = v29;
      CmpReferenceKeyControlBlock(v11);
      *((_QWORD *)v2 + 6) = v11;
      v31 = KeGetCurrentThread();
      --v31->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v32 = (char **)*((_QWORD *)v27 + 1);
      *(_QWORD *)v2 = v27;
      *((_QWORD *)v2 + 1) = v32;
      if ( *v32 != v27 )
        __fastfail(3u);
      *v32 = v2;
      *((_QWORD *)v27 + 1) = v2;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v12 = v43;
      *((_QWORD *)v2 + 7) = v43;
      if ( !(unsigned __int8)CmpLockIXLockIntent(*(_QWORD *)(v11 + 72) + 240LL, UnitOfWork)
        || !(unsigned __int8)CmpLockIXLockExclusive(v11 + 240, v2, 0LL)
        || !(unsigned __int8)CmpLockIXLockExclusive(v11 + 256, v2, 1LL) )
      {
        v20 = -1072103423;
        goto LABEL_47;
      }
LABEL_18:
      if ( (unsigned int)CmGetVisibleSubkeyCount(v11, v16, v12) || (*(_BYTE *)(v16 + 2) & 8) != 0 )
      {
        (*(void (__fastcall **)(ULONG_PTR, int *))(v13 + 16))(v13, &v48);
        v16 = 0LL;
        v20 = -1073741535;
      }
      else
      {
        (*(void (__fastcall **)(ULONG_PTR, int *))(v13 + 16))(v13, &v48);
        v16 = 0LL;
        if ( v12 )
        {
          *((_DWORD *)UnitOfWork + 17) = 3;
          *((_QWORD *)UnitOfWork + 10) = v11;
          *((_DWORD *)v2 + 17) = 2;
          ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v11 + 32) + 2848LL));
          v47 = 0;
          v20 = CmAddLogForAction((__int64)v2, v33);
          CmpReportNotify(v11, *(_QWORD *)(v11 + 32), *(_DWORD *)(v11 + 40), (_DWORD)v43, 1, (__int64)v45);
        }
        else
        {
          CmpReportNotify(v11, v13, v41, 0, 1, (__int64)v45);
          v20 = CmpFreeKeyByCell(v13, v41, 1);
          if ( v20 < 0 )
          {
LABEL_47:
            if ( UnitOfWork )
            {
              CmpRundownUnitOfWork((ULONG_PTR)UnitOfWork);
              ExFreePoolWithTag(UnitOfWork, 0x77554D43u);
            }
            if ( v2 )
            {
              CmpRundownUnitOfWork((ULONG_PTR)v2);
              ExFreePoolWithTag(v2, 0x77554D43u);
            }
LABEL_26:
            if ( v16 )
              (*(void (__fastcall **)(ULONG_PTR, int *))(v13 + 16))(v13, &v48);
            if ( !v47 )
              goto LABEL_30;
            goto LABEL_29;
          }
          CmpFlushNotifiesOnKeyBodyList(v11, 0LL, 0);
          CmpCleanUpSubKeyInfo(*(_QWORD *)(v11 + 72));
          v21 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v13 + 8))(v13, v42, &v48);
          v16 = v21;
          if ( v21 )
          {
            CmpUpdateKeyNodeAccessBits(v13, v21, v42);
            *(_WORD *)(*(_QWORD *)(v11 + 72) + 176LL) = *(_WORD *)(v16 + 52);
            *(_QWORD *)(v16 + 4) = v4;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL) + 168LL) = v4;
            (*(void (__fastcall **)(ULONG_PTR, int *))(v13 + 16))(v13, &v48);
            v16 = 0LL;
          }
          CmpMarkKcbDeletedAndCache(v11);
          *(_DWORD *)(v11 + 40) = -1;
        }
      }
      if ( v20 >= 0 )
        goto LABEL_26;
      goto LABEL_47;
    }
    v19 = v18 + 240;
    if ( *(int *)(v18 + 240) >= 0 )
    {
      v19 = v11 + 240;
      if ( !*(_DWORD *)(v11 + 240) )
      {
        v19 = v11 + 256;
        if ( !*(_DWORD *)(v11 + 256) )
        {
          if ( (*(_DWORD *)(v11 + 8) & 1) != 0 )
            CmpRemoveFromDelayedDeref(v11);
          goto LABEL_18;
        }
      }
    }
    v20 = CmpSnapshotTxOwnerArray(v19, &v39, &v44);
    if ( v20 < 0 )
      goto LABEL_26;
    CmpLogTransactionAborted(v11, 5u, v34, v39);
    (*(void (__fastcall **)(ULONG_PTR, int *))(v13 + 16))(v13, &v48);
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v11 + 32) + 2848LL));
    CmpUnlockTwoKcbs(*(PVOID *)(v11 + 72), (PVOID)v11);
    CmpUnlockHashEntry(*(_QWORD *)(v11 + 32), *(unsigned int *)(v11 + 16));
    CmpUnlockRegistry();
    v20 = CmpRollbackTransactionArray(v39, v44, 0LL, &v40);
    if ( v20 < 0 )
    {
      CmpLockRegistry(v36, v35, v37, v38);
      CmpLockHashEntryExclusive(*(_QWORD *)(v11 + 32), *(unsigned int *)(v11 + 16));
      CmpLockTwoKcbsExclusive(*(_QWORD *)(v11 + 72), v11);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v11 + 32) + 2848LL), 1u);
      goto LABEL_29;
    }
    v3 = a1;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 3221225865LL;
}
