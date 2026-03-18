/*
 * XREFs of CmSetLastWriteTimeKey @ 0x1405E0744
 * Callers:
 *     NtSetInformationKey @ 0x140424400 (NtSetInformationKey.c)
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
 *     CmpLockIXLockExclusive @ 0x1403DDE20 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1403DE050 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1403DE734 (CmpRundownUnitOfWork.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpLockKcbExclusive @ 0x1403F9950 (CmpLockKcbExclusive.c)
 *     CmpReferenceKeyControlBlock @ 0x1403FA9B0 (CmpReferenceKeyControlBlock.c)
 *     CmRmIsKCBDeleted @ 0x1403FE220 (CmRmIsKCBDeleted.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140423B38 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpAllocateUnitOfWork @ 0x1404B5CE4 (CmpAllocateUnitOfWork.c)
 *     CmpRollbackTransactionArray @ 0x1405E5C08 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x1405EC1D0 (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmSetLastWriteTimeKey(__int64 a1, _QWORD *a2)
{
  int v2; // ebx
  __int64 v3; // rsi
  char v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdi
  char *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // r8
  ULONG_PTR v12; // r14
  unsigned int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // r15
  _QWORD *UnitOfWork; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  struct _KTHREAD *v19; // rax
  char *v20; // rax
  __int64 *v21; // rcx
  ULONG v22; // edx
  int v24; // [rsp+40h] [rbp-20h] BYREF
  char *v25; // [rsp+48h] [rbp-18h] BYREF
  __int64 v26; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v27; // [rsp+B0h] [rbp+50h] BYREF
  int v28; // [rsp+B8h] [rbp+58h] BYREF

  v24 = -1;
  v2 = 0;
  v25 = 0LL;
  v3 = 0LL;
  v28 = 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 )
    {
      ExReleaseRundownProtection_0(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
      break;
    v5 = 1;
    CmpLockRegistry();
    v8 = *(_QWORD *)(a1 + 8);
    CmpLockKcbExclusive(v8);
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      if ( CmRmIsKCBDeleted(v8, 0LL) )
        goto LABEL_38;
      v2 = CmpSearchAddTrans(a1, 0LL, 0LL, *(_QWORD *)(a1 + 56), *(__int128 **)(a1 + 64), 0, &v25);
      if ( v2 < 0 )
        goto LABEL_39;
      if ( (*(_DWORD *)(*(_QWORD *)(v8 + 32) + 144LL) & 2) != 0 )
      {
        v2 = -1072103423;
        goto LABEL_39;
      }
    }
    v9 = v25;
    if ( CmRmIsKCBDeleted(v8, (__int64)v25) )
    {
LABEL_38:
      v2 = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_39;
    }
    if ( v9 )
    {
      UnitOfWork = CmpAllocateUnitOfWork();
      v3 = (__int64)UnitOfWork;
      if ( !UnitOfWork )
      {
        v2 = -1073741670;
        goto LABEL_39;
      }
      v17 = UnitOfWork + 4;
      v18 = *(_QWORD **)(v8 + 208);
      UnitOfWork[4] = v8 + 200;
      UnitOfWork[5] = v18;
      if ( *v18 != v8 + 200 )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v8 + 208) = v17;
      CmpReferenceKeyControlBlock((signed __int32 *)v8);
      *(_QWORD *)(v3 + 48) = v8;
      v19 = KeGetCurrentThread();
      --v19->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v20 = v25 + 16;
      v21 = (__int64 *)*((_QWORD *)v25 + 3);
      *(_QWORD *)v3 = v25 + 16;
      *(_QWORD *)(v3 + 8) = v21;
      if ( (char *)*v21 != v20 )
        __fastfail(3u);
      *v21 = v3;
      *((_QWORD *)v20 + 1) = v3;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      *(_QWORD *)(v3 + 56) = v25;
      if ( CmpLockIXLockIntent((unsigned int *)(v8 + 240), v3) && CmpLockIXLockExclusive(v8 + 256, v3, 1) )
      {
        *(_DWORD *)(v3 + 68) = 8;
        *(_QWORD *)(v3 + 80) = *a2;
        v2 = CmAddLogForAction(v3, v22);
LABEL_32:
        if ( v2 >= 0 )
          goto LABEL_39;
      }
      else
      {
        v2 = -1072103423;
      }
      if ( v3 )
      {
        CmpRundownUnitOfWork((_QWORD *)v3);
        ExFreePoolWithTag((PVOID)v3, 0x77554D43u);
      }
      goto LABEL_39;
    }
    v10 = v8 + 240;
    if ( *(int *)(v8 + 240) >= 0 )
    {
      v10 = v8 + 256;
      if ( !*(_DWORD *)(v8 + 256) )
      {
        v12 = *(_QWORD *)(v8 + 32);
        v13 = *(_DWORD *)(v8 + 40);
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v12 + 2848), 1u);
        if ( HvpMarkCellDirty(v12, v13, 0) )
        {
          v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v12 + 8))(v12, v13, &v24);
          v15 = v14;
          if ( v14 )
          {
            CmpUpdateKeyNodeAccessBits(v12, v14, v13);
            *(_QWORD *)(v15 + 4) = *a2;
            (*(void (__fastcall **)(ULONG_PTR, int *))(v12 + 16))(v12, &v24);
            *(_QWORD *)(v8 + 168) = *a2;
          }
          else
          {
            v2 = -1073741670;
          }
        }
        else
        {
          v2 = -1073741443;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v12 + 2848));
        goto LABEL_32;
      }
    }
    v2 = CmpSnapshotTxOwnerArray(v10, &v27, &v26);
    if ( v2 < 0 )
      goto LABEL_39;
    CmpLogTransactionAborted(v8, 2u, v11, v27);
    CmpUnlockKcb((char *)v8);
    CmpUnlockRegistry();
    v2 = CmpRollbackTransactionArray(v27, v26, 0LL, &v28);
    if ( v2 < 0 )
    {
      CmpLockRegistry();
      CmpLockKcbExclusive(v8);
LABEL_39:
      CmpUnlockKcb((char *)v8);
      CmpUnlockRegistry();
      ExReleaseRundownProtection_0(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return (unsigned int)v2;
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 3221225865LL;
}
