/*
 * XREFs of CmDeleteValueKey @ 0x1403D4B80
 * Callers:
 *     NtDeleteValueKey @ 0x1403D4700 (NtDeleteValueKey.c)
 *     sub_140669FD4 @ 0x140669FD4 (sub_140669FD4.c)
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
 *     CmpRemoveValueFromList @ 0x1403D7848 (CmpRemoveValueFromList.c)
 *     CmpFreeValue @ 0x1403D8900 (CmpFreeValue.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     CmpMarkValueDataDirty @ 0x1403DA5C0 (CmpMarkValueDataDirty.c)
 *     CmpLockIXLockExclusive @ 0x1403DDE20 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1403DE050 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1403DE734 (CmpRundownUnitOfWork.c)
 *     CmpFindNameInList @ 0x1403F40B0 (CmpFindNameInList.c)
 *     CmpReportNotify @ 0x1403F4FC4 (CmpReportNotify.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpLockKcbExclusive @ 0x1403F9950 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbValueCache @ 0x1403F9C74 (CmpCleanUpKcbValueCache.c)
 *     CmpReferenceKeyControlBlock @ 0x1403FA9B0 (CmpReferenceKeyControlBlock.c)
 *     CmRmIsKCBDeleted @ 0x1403FE220 (CmRmIsKCBDeleted.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpSignalDeferredPosts @ 0x1404218C4 (CmpSignalDeferredPosts.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140423B38 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpAllocateUnitOfWork @ 0x1404B5CE4 (CmpAllocateUnitOfWork.c)
 *     CmpCloneKCBValueListForTrans @ 0x1404BD8D4 (CmpCloneKCBValueListForTrans.c)
 *     CmpSnapshotKCBSecurity @ 0x1405E35F4 (CmpSnapshotKCBSecurity.c)
 *     CmpRollbackTransactionArray @ 0x1405E5C08 (CmpRollbackTransactionArray.c)
 *     CmpGetValueForAudit @ 0x1405E9330 (CmpGetValueForAudit.c)
 *     CmpSnapshotTxOwnerArray @ 0x1405EC1D0 (CmpSnapshotTxOwnerArray.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14064DE24 (SeAdtRegistryValueChangedAuditAlarm.c)
 */

__int64 __fastcall CmDeleteValueKey(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 v4; // r13
  _QWORD *v5; // r15
  char v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  ULONG_PTR v13; // rsi
  ULONG_PTR v14; // r14
  unsigned int v15; // edi
  ULONG_PTR v16; // rcx
  __int64 v17; // r12
  __int64 v18; // rax
  int ValueForAudit; // edi
  _DWORD *v20; // rax
  unsigned int v21; // r13d
  int v22; // ecx
  int v23; // r8d
  _DWORD *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 UnitOfWork; // rax
  __int64 v29; // rcx
  __int64 *v30; // rdx
  struct _KTHREAD *v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rcx
  ULONG_PTR v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  PVOID v40; // rbx
  int v41; // ebx
  char v42; // [rsp+48h] [rbp-69h] BYREF
  char v43; // [rsp+49h] [rbp-68h]
  unsigned int v44; // [rsp+4Ch] [rbp-65h] BYREF
  int v45; // [rsp+50h] [rbp-61h] BYREF
  _DWORD *v46; // [rsp+58h] [rbp-59h] BYREF
  int v47; // [rsp+60h] [rbp-51h] BYREF
  int v48; // [rsp+64h] [rbp-4Dh] BYREF
  __int64 v49; // [rsp+68h] [rbp-49h]
  unsigned int BugCheckParameter3; // [rsp+70h] [rbp-41h] BYREF
  unsigned int BugCheckParameter3_4; // [rsp+74h] [rbp-3Dh]
  __int64 v52; // [rsp+78h] [rbp-39h] BYREF
  unsigned int v53; // [rsp+80h] [rbp-31h] BYREF
  PVOID v54; // [rsp+88h] [rbp-29h] BYREF
  _QWORD v55[2]; // [rsp+90h] [rbp-21h] BYREF
  int v56; // [rsp+A0h] [rbp-11h] BYREF
  __int128 P; // [rsp+A4h] [rbp-Dh]
  __int64 v58; // [rsp+B4h] [rbp+3h]
  int v59; // [rsp+BCh] [rbp+Bh]

  v43 = 1;
  v49 = 0LL;
  v47 = -1;
  v4 = a1;
  v45 = -1;
  v5 = 0LL;
  v52 = 0LL;
  P = 0uLL;
  v6 = 0;
  v58 = 0LL;
  v59 = 0;
  v55[1] = v55;
  v55[0] = v55;
  v42 = 0;
  v56 = 0;
  v54 = 0LL;
  v48 = 0;
  do
  {
    if ( v6 )
    {
      ExReleaseRundownProtection_0(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return 3221225865LL;
    }
    v6 = 1;
    v12 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry(v9, v8, v10, v11);
    v13 = *(_QWORD *)(v4 + 8);
    CmpLockKcbExclusive(v13);
    if ( (*(_DWORD *)(v13 + 4) & 0x20000) != 0 )
    {
      v41 = (*(_BYTE *)(v4 + 48) & 1) != 0 ? 0x2A9 : 0;
      CmpUnlockKcb((PVOID)v13);
      CmpUnlockRegistry();
      ExReleaseRundownProtection_0(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return (unsigned int)(v41 - 1073741444);
    }
    v14 = *(_QWORD *)(v13 + 32);
    v15 = *(_DWORD *)(v13 + 40);
    BugCheckParameter3_4 = v15;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v14 + 2848), 1u);
    if ( *(_QWORD *)(v4 + 56) || *(_QWORD *)(v4 + 64) )
    {
      if ( (unsigned __int8)CmRmIsKCBDeleted(v13, 0LL) == 1 )
      {
        ValueForAudit = (*(_BYTE *)(v4 + 48) & 1) != 0 ? -1073740763 : -1073741444;
        goto LABEL_26;
      }
      ValueForAudit = CmpSearchAddTrans(v4, 0, 0, *(_QWORD *)(v4 + 56), *(_QWORD *)(v4 + 64), 0, (__int64)&v52);
      if ( ValueForAudit < 0 )
        goto LABEL_26;
      if ( (*(_DWORD *)(*(_QWORD *)(v13 + 32) + 144LL) & 2) != 0 )
      {
        ValueForAudit = -1072103423;
        goto LABEL_26;
      }
      UnitOfWork = CmpAllocateUnitOfWork();
      v5 = (_QWORD *)UnitOfWork;
      if ( !UnitOfWork )
      {
        ValueForAudit = -1073741670;
        goto LABEL_26;
      }
      v29 = UnitOfWork + 32;
      v30 = *(__int64 **)(v13 + 208);
      *(_QWORD *)(UnitOfWork + 32) = v13 + 200;
      *(_QWORD *)(UnitOfWork + 40) = v30;
      if ( *v30 != v13 + 200 )
        __fastfail(3u);
      *v30 = v29;
      *(_QWORD *)(v13 + 208) = v29;
      CmpReferenceKeyControlBlock(v13);
      v5[6] = v13;
      v31 = KeGetCurrentThread();
      --v31->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v32 = v52 + 16;
      v33 = *(_QWORD **)(v52 + 24);
      *v5 = v52 + 16;
      v5[1] = v33;
      if ( *v33 != v32 )
        __fastfail(3u);
      *v33 = v5;
      *(_QWORD *)(v32 + 8) = v5;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v17 = v52;
      v5[7] = v52;
      if ( !(unsigned __int8)CmpLockIXLockIntent(v13 + 240, v5)
        || !(unsigned __int8)CmpLockIXLockExclusive(v13 + 256, v5, 1LL) )
      {
        ValueForAudit = -1072103423;
        goto LABEL_19;
      }
      if ( !(unsigned __int8)CmpCloneKCBValueListForTrans(v13, v17, &v42) )
      {
LABEL_69:
        ValueForAudit = -1073741670;
        goto LABEL_22;
      }
      v15 = BugCheckParameter3_4;
LABEL_11:
      if ( (unsigned __int8)CmRmIsKCBDeleted(v13, v17) == 1 )
      {
        ValueForAudit = (*(_BYTE *)(v4 + 48) & 1) != 0 ? -1073740763 : -1073741444;
        goto LABEL_22;
      }
      v18 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v14 + 8))(v14, v15, &v47);
      v49 = v18;
      if ( v18 )
      {
        CmpUpdateKeyNodeAccessBits(v14, v18, v15);
        ValueForAudit = -1073741772;
        if ( v17 )
          v20 = (_DWORD *)(v13 + 272);
        else
          v20 = (_DWORD *)(v49 + 36);
        BugCheckParameter3 = -1;
        v46 = v20;
        if ( *v20 )
        {
          if ( (unsigned __int8)CmpFindNameInList(v14, (_DWORD)v20, a2, 0, (__int64)&v53, (__int64)&BugCheckParameter3) )
          {
            v21 = BugCheckParameter3;
            if ( BugCheckParameter3 == -1 )
              goto LABEL_18;
            if ( a4 == 1 )
            {
              ValueForAudit = CmpGetValueForAudit(v14, BugCheckParameter3, &v56, 826363203LL);
              if ( ValueForAudit < 0 )
                goto LABEL_18;
              ValueForAudit = CmpSnapshotKCBSecurity(v13, v17, 843140419LL, &v54);
              if ( ValueForAudit < 0 )
                goto LABEL_18;
            }
            if ( !v17 )
            {
              if ( (unsigned __int8)HvpMarkCellDirty(v14, BugCheckParameter3_4)
                && (unsigned __int8)HvpMarkCellDirty(v14, *(unsigned int *)(v49 + 40))
                && (unsigned __int8)HvpMarkCellDirty(v14, v21) )
              {
                if ( !(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v14 + 8))(v14, v21, &v45) )
                  goto LABEL_75;
                if ( (unsigned __int8)CmpMarkValueDataDirty(v14) )
                {
                  (*(void (__fastcall **)(ULONG_PTR, int *))(v14 + 16))(v14, &v45);
                  goto LABEL_37;
                }
                (*(void (__fastcall **)(ULONG_PTR, int *))(v14 + 16))(v14, &v45);
              }
              ValueForAudit = -1073741443;
              goto LABEL_18;
            }
            *((_DWORD *)v5 + 17) = 6;
            *((_DWORD *)v5 + 20) = v21;
LABEL_37:
            v25 = v46;
            if ( (int)CmpRemoveValueFromList(v14, v53, v46) >= 0 )
            {
              if ( v17 )
              {
                ExReleaseResourceLite(*(PERESOURCE *)(v14 + 2848));
                v43 = 0;
                ValueForAudit = CmAddLogForAction(v5);
                if ( ValueForAudit < 0 )
                  goto LABEL_18;
                goto LABEL_43;
              }
              if ( (unsigned __int8)CmpFreeValue(v14, v21) )
              {
                v26 = v49;
                *(_QWORD *)(v49 + 4) = v12;
                *(_QWORD *)(v13 + 168) = v12;
                if ( !*(_DWORD *)(v26 + 36) )
                {
                  *(_QWORD *)(v26 + 60) = 0LL;
                  *(_WORD *)(v13 + 178) = 0;
                  *(_DWORD *)(v13 + 180) = 0;
                }
                CmpCleanUpKcbValueCache(v13);
                *(_DWORD *)(v13 + 96) = *v25;
                v27 = (unsigned int)v25[1];
                ValueForAudit = 0;
                *(_QWORD *)(v13 + 104) = v27;
LABEL_43:
                CmpReportNotify(v13, *(_QWORD *)(v13 + 32), *(_DWORD *)(v13 + 40), v17, 4, (__int64)v55);
LABEL_18:
                v4 = a1;
                goto LABEL_19;
              }
            }
LABEL_75:
            ValueForAudit = -1073741670;
            goto LABEL_18;
          }
          ValueForAudit = -1073741670;
        }
LABEL_19:
        if ( v49 )
          (*(void (__fastcall **)(ULONG_PTR, int *))(v14 + 16))(v14, &v47);
        goto LABEL_21;
      }
      goto LABEL_69;
    }
    v16 = v13 + 240;
    if ( *(int *)(v13 + 240) >= 0 )
    {
      v16 = v13 + 256;
      if ( !*(_DWORD *)(v13 + 256) )
      {
        v17 = v52;
        goto LABEL_11;
      }
    }
    ValueForAudit = CmpSnapshotTxOwnerArray(v16, &v44, &v46);
    if ( ValueForAudit < 0 )
      goto LABEL_26;
    CmpLogTransactionAborted(v13, 0, v35, v44);
    ExReleaseResourceLite(*(PERESOURCE *)(v14 + 2848));
    CmpUnlockKcb((PVOID)v13);
    CmpUnlockRegistry();
    ValueForAudit = CmpRollbackTransactionArray(v44, v46, 0LL, &v48);
  }
  while ( ValueForAudit >= 0 );
  CmpLockRegistry(v37, v36, v38, v39);
  CmpLockKcbExclusive(v13);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v14 + 2848), 1u);
LABEL_21:
  if ( ValueForAudit >= 0 )
    goto LABEL_25;
LABEL_22:
  if ( v5 )
  {
    CmpRundownUnitOfWork((ULONG_PTR)v5);
    ExFreePoolWithTag(v5, 0x77554D43u);
  }
  if ( v42 )
  {
    v34 = *(unsigned int *)(v13 + 276);
    if ( (_DWORD)v34 != -1 )
      HvFreeCell(*(_QWORD *)(v13 + 32), v34);
    *(_DWORD *)(v13 + 276) = -1;
    *(_DWORD *)(v13 + 272) = 0;
    *(_QWORD *)(v13 + 280) = 0LL;
  }
LABEL_25:
  if ( !v43 )
    goto LABEL_27;
LABEL_26:
  ExReleaseResourceLite(*(PERESOURCE *)(v14 + 2848));
LABEL_27:
  CmpUnlockKcb((PVOID)v13);
  CmpUnlockRegistry();
  CmpSignalDeferredPosts(v55);
  if ( a4 == 1 )
  {
    v40 = v54;
    if ( ValueForAudit >= 0 )
      SeAdtRegistryValueChangedAuditAlarm(v22, (_DWORD)v54, v23, a2, v4, a3, (__int64)&v56, 2);
    if ( *(_QWORD *)((char *)&P + 4) )
      ExFreePoolWithTag(*(PVOID *)((char *)&P + 4), 0x31414D43u);
    if ( v40 )
      ExFreePoolWithTag(v40, 0x32414D43u);
  }
  ExReleaseRundownProtection_0(&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)ValueForAudit;
}
