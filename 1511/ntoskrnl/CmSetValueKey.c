/*
 * XREFs of CmSetValueKey @ 0x1403F36C0
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403A6F68 (ExpTimeRefreshWork.c)
 *     NtSetValueKey @ 0x1403F2FD0 (NtSetValueKey.c)
 *     CmpSyncNextBackupHive @ 0x1405E57D8 (CmpSyncNextBackupHive.c)
 *     ExReArmFastCache @ 0x14066869C (ExReArmFastCache.c)
 *     sub_140668B98 @ 0x140668B98 (sub_140668B98.c)
 *     sub_140669FD4 @ 0x140669FD4 (sub_140669FD4.c)
 *     sub_140785A2C @ 0x140785A2C (sub_140785A2C.c)
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
 *     CmpAddValueToListEx @ 0x1403D86A0 (CmpAddValueToListEx.c)
 *     CmpFreeValue @ 0x1403D8900 (CmpFreeValue.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     CmpSetValueKeyExisting @ 0x1403DA0F4 (CmpSetValueKeyExisting.c)
 *     CmpLockIXLockExclusive @ 0x1403DDE20 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1403DE050 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1403DE734 (CmpRundownUnitOfWork.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1403F3E7C (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x1403F4074 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpFindNameInList @ 0x1403F40B0 (CmpFindNameInList.c)
 *     CmpSetValueKeyNew @ 0x1403F43A0 (CmpSetValueKeyNew.c)
 *     CmpAddValueKeyNew @ 0x1403F448C (CmpAddValueKeyNew.c)
 *     CmpReportNotify @ 0x1403F4FC4 (CmpReportNotify.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpLockKcbExclusive @ 0x1403F9950 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbValueCache @ 0x1403F9C74 (CmpCleanUpKcbValueCache.c)
 *     CmpReferenceKeyControlBlock @ 0x1403FA9B0 (CmpReferenceKeyControlBlock.c)
 *     CmRmIsKCBDeleted @ 0x1403FE220 (CmRmIsKCBDeleted.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 *     CmpSignalDeferredPosts @ 0x1404218C4 (CmpSignalDeferredPosts.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140423B38 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpLockKcbShared @ 0x140423B90 (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     RtlIsSandboxedToken @ 0x140478894 (RtlIsSandboxedToken.c)
 *     CmpAllocateUnitOfWork @ 0x1404B5CE4 (CmpAllocateUnitOfWork.c)
 *     CmpCloneKCBValueListForTrans @ 0x1404BD8D4 (CmpCloneKCBValueListForTrans.c)
 *     CmpUpgradeKcbLockToExclusive @ 0x1404C66EC (CmpUpgradeKcbLockToExclusive.c)
 *     CmpParseCacheAddSymbolicLink @ 0x14054488C (CmpParseCacheAddSymbolicLink.c)
 *     CmpSnapshotKCBSecurity @ 0x1405E35F4 (CmpSnapshotKCBSecurity.c)
 *     CmpRollbackTransactionArray @ 0x1405E5C08 (CmpRollbackTransactionArray.c)
 *     CmpGetValueForAudit @ 0x1405E9330 (CmpGetValueForAudit.c)
 *     CmpSnapshotTxOwnerArray @ 0x1405EC1D0 (CmpSnapshotTxOwnerArray.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14064DE24 (SeAdtRegistryValueChangedAuditAlarm.c)
 */

__int64 __fastcall CmSetValueKey(
        __int64 a1,
        const UNICODE_STRING *a2,
        unsigned int a3,
        void *a4,
        size_t a5,
        __int64 a6,
        char a7)
{
  char v7; // r13
  __int64 v8; // r14
  int v9; // esi
  char v10; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  ULONG_PTR v17; // rdi
  __int64 v18; // rcx
  char *v19; // r13
  int v20; // eax
  int ValueForAudit; // r14d
  int v22; // ecx
  int v23; // r8d
  ULONG_PTR v25; // r15
  unsigned int v26; // r12d
  __int64 v27; // rax
  __int64 v28; // rsi
  _DWORD *v29; // rdx
  char v30; // r14
  unsigned int v31; // r12d
  int v32; // eax
  unsigned int v33; // r12d
  unsigned int Length; // eax
  __int64 v35; // rcx
  _QWORD *UnitOfWork; // rax
  char *v37; // r14
  _QWORD *v38; // rcx
  _QWORD *v39; // rdx
  struct _KTHREAD *v40; // rax
  char *v41; // rax
  char **v42; // rcx
  int v43; // eax
  _DWORD *v44; // rcx
  ULONG v45; // edx
  unsigned int v46; // eax
  __int64 v47; // r8
  unsigned int v48; // ebx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r8
  PVOID v54; // rbx
  ULONG_PTR v55; // rdx
  __int64 *v56; // rbx
  __int64 v57; // rcx
  char v58; // al
  char v59; // al
  PVOID v60; // rbx
  void *Src; // [rsp+20h] [rbp-A1h]
  size_t Size; // [rsp+28h] [rbp-99h]
  int v63[2]; // [rsp+30h] [rbp-91h]
  unsigned int v64; // [rsp+30h] [rbp-91h]
  char v65; // [rsp+40h] [rbp-81h]
  char v66; // [rsp+41h] [rbp-80h]
  char v67[2]; // [rsp+42h] [rbp-7Fh] BYREF
  unsigned int v68; // [rsp+44h] [rbp-7Dh] BYREF
  unsigned int v69; // [rsp+48h] [rbp-79h] BYREF
  unsigned int v70; // [rsp+4Ch] [rbp-75h] BYREF
  int v71; // [rsp+50h] [rbp-71h]
  char *v72; // [rsp+58h] [rbp-69h] BYREF
  int v73; // [rsp+60h] [rbp-61h] BYREF
  int v74; // [rsp+64h] [rbp-5Dh] BYREF
  int v75; // [rsp+68h] [rbp-59h] BYREF
  PVOID P; // [rsp+70h] [rbp-51h]
  __int64 v77; // [rsp+78h] [rbp-49h] BYREF
  _DWORD *v78; // [rsp+80h] [rbp-41h]
  PVOID v79; // [rsp+88h] [rbp-39h] BYREF
  _QWORD v80[2]; // [rsp+90h] [rbp-31h] BYREF
  int v81; // [rsp+A0h] [rbp-21h] BYREF
  __int128 v82; // [rsp+A4h] [rbp-1Dh]
  _QWORD v83[9]; // [rsp+B4h] [rbp-Dh] BYREF

  v7 = 0;
  v73 = -1;
  v8 = a1;
  v75 = -1;
  v69 = 0;
  v82 = 0uLL;
  v9 = 0;
  v10 = 0;
  memset(v83, 0, 12);
  v78 = 0LL;
  v72 = 0LL;
  P = 0LL;
  v80[1] = v80;
  v80[0] = v80;
  v67[0] = 0;
  v65 = 0;
  v81 = 0;
  v79 = 0LL;
  v71 = 0;
  v74 = 0;
  while ( 2 )
  {
    if ( v10 )
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
    v16 = MEMORY[0xFFFFF78000000014];
    v10 = 1;
    CmpLockRegistry(v13, v12, v14, v15);
    v17 = *(_QWORD *)(v8 + 8);
    if ( *(_QWORD *)(v8 + 56) || *(_QWORD *)(v8 + 64) )
    {
      CmpLockKcbExclusive(*(_QWORD *)(v8 + 8));
      v9 = 1;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v17 + 32) + 2848LL), 1u);
      v7 = 1;
      v65 = 1;
    }
    else
    {
      v18 = *(_QWORD *)(v8 + 8);
      if ( v9 == 1 )
        CmpLockKcbExclusive(v18);
      else
        CmpLockKcbShared(v18);
    }
    if ( !*(_QWORD *)(v8 + 56) && !*(_QWORD *)(v8 + 64) )
    {
      v19 = v72;
      goto LABEL_12;
    }
    if ( (unsigned __int8)CmRmIsKCBDeleted(v17, 0LL) == 1 )
    {
      v59 = *(_BYTE *)(v8 + 48) & 1;
      ValueForAudit = -1073741444;
      if ( v59 )
        ValueForAudit = -1073740763;
    }
    else
    {
      ValueForAudit = CmpSearchAddTrans(v8, 0LL, 0LL, *(_QWORD *)(v8 + 56), *(__int128 **)(v8 + 64), 0, &v72);
      if ( ValueForAudit >= 0 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v17 + 32) + 144LL) & 2) != 0 )
        {
          ValueForAudit = -1072103423;
        }
        else
        {
          UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
          P = UnitOfWork;
          v37 = (char *)UnitOfWork;
          if ( !UnitOfWork )
          {
            ValueForAudit = -1073741670;
            goto LABEL_112;
          }
          v38 = UnitOfWork + 4;
          v39 = *(_QWORD **)(v17 + 208);
          UnitOfWork[4] = v17 + 200;
          UnitOfWork[5] = v39;
          if ( *v39 != v17 + 200 )
            __fastfail(3u);
          *v39 = v38;
          *(_QWORD *)(v17 + 208) = v38;
          CmpReferenceKeyControlBlock(v17);
          *((_QWORD *)v37 + 6) = v17;
          v40 = KeGetCurrentThread();
          --v40->KernelApcDisable;
          ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
          v41 = v72 + 16;
          v42 = (char **)*((_QWORD *)v72 + 3);
          *(_QWORD *)v37 = v72 + 16;
          *((_QWORD *)v37 + 1) = v42;
          if ( *v42 != v41 )
            __fastfail(3u);
          *v42 = v37;
          *((_QWORD *)v41 + 1) = v37;
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          v19 = v72;
          *((_QWORD *)v37 + 7) = v72;
          if ( CmpLockIXLockIntent((unsigned int *)(v17 + 240), (__int64)v37)
            && CmpLockIXLockExclusive(v17 + 256, (__int64)v37, 1) )
          {
            if ( (unsigned __int8)CmpCloneKCBValueListForTrans(v17, v19, v67) )
            {
              v8 = a1;
              while ( 1 )
              {
LABEL_12:
                if ( (unsigned __int8)CmRmIsKCBDeleted(v17, v19) == 1 )
                {
                  v58 = *(_BYTE *)(v8 + 48) & 1;
                  ValueForAudit = -1073741444;
                  if ( v58 )
                    ValueForAudit = -1073740763;
                  goto LABEL_109;
                }
                if ( !v19 )
                {
                  if ( *(int *)(v17 + 240) < 0 )
                  {
                    ValueForAudit = CmpSnapshotTxOwnerArray(v17 + 240, &v68, &v77);
                    if ( ValueForAudit < 0 )
                      goto LABEL_109;
                    v48 = v68;
                    CmpLogTransactionAborted(v17, 1u, v53, v68);
                    v7 = v65;
                    if ( v65 )
                      goto LABEL_101;
                    goto LABEL_102;
                  }
                  if ( *(_DWORD *)(v17 + 256) )
                    break;
                }
                if ( (*(_BYTE *)(v17 + 186) & 0x10) != 0
                  && (a3 != 6
                   || (a5 & 1) != 0
                   || (unsigned int)a5 > 0xFFFF
                   || !a2
                   || !RtlEqualUnicodeString(&CmSymbolicLinkValueName, a2, 1u)
                   || (unsigned __int8)RtlIsSandboxedToken(0LL)) )
                {
                  ValueForAudit = -1073741790;
                  goto LABEL_109;
                }
                if ( v9 )
                {
                  v25 = *(_QWORD *)(v17 + 32);
                  v26 = *(_DWORD *)(v17 + 40);
                  if ( !v65 )
                    ExAcquireResourceSharedLite(*(PERESOURCE *)(v25 + 2848), 1u);
                  v27 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v25 + 8))(v25, v26, &v73);
                  v28 = v27;
                  if ( !v27 )
                  {
                    v7 = v65;
                    if ( !v65 )
                      ExReleaseResourceLite(*(PERESOURCE *)(v25 + 2848));
                    ValueForAudit = -1073741670;
                    goto LABEL_110;
                  }
                  CmpUpdateKeyNodeAccessBits(v25, v27, v26);
                  if ( !v65 )
                    ExReleaseResourceLite(*(PERESOURCE *)(v25 + 2848));
                  if ( v19 )
                    v29 = (_DWORD *)(v17 + 272);
                  else
                    v29 = (_DWORD *)(v28 + 36);
                  v30 = 0;
                  v66 = 0;
                  if ( !*v29 )
                  {
                    v68 = 0;
                    goto LABEL_36;
                  }
                  if ( !(unsigned __int8)CmpFindNameInList(
                                           v25,
                                           (_DWORD)v29,
                                           (_DWORD)a2,
                                           0,
                                           (__int64)&v70,
                                           (__int64)&v69) )
                  {
                    ValueForAudit = -1073741670;
                    goto LABEL_53;
                  }
                  if ( v69 == -1 )
                    goto LABEL_35;
                  if ( !v19 )
                  {
                    v78 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v25 + 8))(v25, v69, &v75);
                    if ( !v78 )
                    {
                      ValueForAudit = -1073741670;
                      goto LABEL_53;
                    }
                  }
                  v30 = 1;
                  v66 = 1;
LABEL_35:
                  v68 = v70;
LABEL_36:
                  if ( !v19 && !(unsigned __int8)HvpMarkCellDirty(v25, v26) )
                  {
                    ValueForAudit = -1073741443;
                    goto LABEL_53;
                  }
                  if ( a7 != 1 )
                    goto LABEL_39;
                  ValueForAudit = CmpSnapshotKCBSecurity(v17, v19, 859917635LL, &v79);
                  if ( ValueForAudit < 0 )
                  {
LABEL_53:
                    (*(void (__fastcall **)(ULONG_PTR, int *))(v25 + 16))(v25, &v73);
                    if ( v78 )
                      (*(void (__fastcall **)(ULONG_PTR, int *))(v25 + 16))(v25, &v75);
                    v7 = v65;
                    goto LABEL_56;
                  }
                  v30 = v66;
                  if ( v66 )
                  {
                    ValueForAudit = CmpGetValueForAudit(v25, v69, &v81, 876694851LL);
                    if ( ValueForAudit >= 0 )
                    {
                      v30 = v66;
                      v71 = 1;
                      goto LABEL_39;
                    }
                    goto LABEL_53;
                  }
                  v71 = 0;
LABEL_39:
                  v31 = v26 >> 31;
                  if ( v19 )
                  {
                    LODWORD(Src) = a5;
                    v43 = CmpAddValueKeyNew(v25, (size_t)Src, 1);
                    v70 = v43;
                    if ( v43 == -1 )
                    {
                      ValueForAudit = -1073741670;
                      goto LABEL_53;
                    }
                    ValueForAudit = CmpAddValueToListEx(
                                      v25,
                                      v43,
                                      *(_DWORD *)(v17 + 272),
                                      1u,
                                      (unsigned int *)(v17 + 272),
                                      1);
                    if ( ValueForAudit < 0 )
                    {
                      CmpFreeValue(v25, v70);
                      goto LABEL_53;
                    }
                    if ( v66 )
                    {
                      CmpRemoveValueFromList(v25, v68, (unsigned int *)(v17 + 272));
                      v44 = P;
                      v46 = v69;
                      *((_DWORD *)P + 17) = 5;
                      v44[20] = v46;
                    }
                    else
                    {
                      v44 = P;
                      *((_DWORD *)P + 17) = 4;
                    }
                    v44[21] = v70;
                    v44[18] = v31;
                    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v17 + 32) + 2848LL));
                    v65 = 0;
                    v32 = CmAddLogForAction((__int64)P, v45);
LABEL_43:
                    v33 = v69;
                  }
                  else
                  {
                    if ( !v30 )
                    {
                      if ( a3 == 6 && (*(_DWORD *)(v17 + 4) & 0x7FE00000) == 0x600000 )
                      {
                        ValueForAudit = CmpParseCacheAddSymbolicLink(v17);
                        if ( ValueForAudit < 0 )
                          goto LABEL_53;
                      }
                      v63[0] = a5;
                      v32 = CmpSetValueKeyNew(v25, a3, (__int64)a4, *(size_t *)v63, v31);
                      goto LABEL_43;
                    }
                    v64 = v31;
                    v33 = v69;
                    LODWORD(Size) = a5;
                    v32 = CmpSetValueKeyExisting(v25, v69, v78, a3, a4, Size, v64);
                  }
                  ValueForAudit = v32;
                  if ( v32 >= 0 )
                  {
                    if ( !v19 )
                    {
                      Length = a2->Length;
                      if ( *(_DWORD *)(v28 + 60) < Length )
                      {
                        *(_DWORD *)(v28 + 60) = Length;
                        *(_WORD *)(v17 + 178) = a2->Length;
                      }
                      if ( *(_DWORD *)(v28 + 64) < (unsigned int)a5 )
                      {
                        *(_DWORD *)(v28 + 64) = a5;
                        *(_DWORD *)(v17 + 180) = a5;
                      }
                      *(_QWORD *)(v28 + 4) = v16;
                      *(_QWORD *)(v17 + 168) = v16;
                      if ( v66 && (v35 = *(_QWORD *)(v17 + 104), (v35 & 1) != 0) && v35 != 0xFFFFFFFFLL )
                      {
                        v56 = (__int64 *)((v35 & 0xFFFFFFFFFFFFFFFEuLL) + 8 + 8LL * v68);
                        v57 = *v56;
                        if ( (*v56 & 1) != 0 && v57 != 0xFFFFFFFFLL )
                          ExFreePoolWithTag((PVOID)(v57 & 0xFFFFFFFFFFFFFFFEuLL), 0);
                        *v56 = v33;
                      }
                      else
                      {
                        CmpCleanUpKcbValueCache(v17);
                        *(_DWORD *)(v17 + 96) = *(_DWORD *)(v28 + 36);
                        *(_QWORD *)(v17 + 104) = *(unsigned int *)(v28 + 40);
                      }
                    }
                    CmpReportNotify(v17, *(_QWORD *)(v17 + 32), *(_DWORD *)(v17 + 40), (_DWORD)v19, 4, (__int64)v80);
                  }
                  goto LABEL_53;
                }
                v20 = CmpCompareNewValueDataAgainstKCBCache(v17, a2, a3, a4, a5);
                if ( v20 == 1 )
                {
                  CmpUpgradeKcbLockToExclusive(v17);
                }
                else
                {
                  if ( !v20 )
                  {
                    v7 = v65;
                    ValueForAudit = 0;
                    goto LABEL_21;
                  }
                  if ( *(struct _KTHREAD **)(v17 + 56) == KeGetCurrentThread()
                    || (unsigned __int8)CmpTryConvertKcbLockSharedToExclusive(v17) )
                  {
                    v9 = 1;
                    ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v17 + 32) + 2848LL), 1u);
                    v19 = v72;
                    v65 = 1;
                  }
                  else
                  {
                    CmpUpgradeKcbLockToExclusive(v17);
                    v19 = v72;
                  }
                }
              }
              ValueForAudit = CmpSnapshotTxOwnerArray(v17 + 256, &v68, &v77);
              if ( ValueForAudit < 0 )
                goto LABEL_109;
              v48 = v68;
              CmpLogTransactionAborted(v17, 1u, v47, v68);
              v7 = v65;
              if ( v65 )
              {
LABEL_101:
                ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v17 + 32) + 2848LL));
                v7 = 0;
                v65 = 0;
              }
LABEL_102:
              CmpUnlockKcb((PVOID)v17);
              CmpUnlockRegistry();
              ValueForAudit = CmpRollbackTransactionArray(v48, v77, 0LL, &v74);
              if ( ValueForAudit >= 0 )
              {
                v8 = a1;
                continue;
              }
              CmpLockRegistry(v50, v49, v51, v52);
              CmpLockKcbExclusive(v17);
LABEL_56:
              if ( ValueForAudit >= 0 )
                goto LABEL_21;
              break;
            }
            ValueForAudit = -1073741670;
          }
          else
          {
            ValueForAudit = -1072103423;
          }
LABEL_109:
          v7 = v65;
        }
      }
    }
    break;
  }
LABEL_110:
  v54 = P;
  if ( P )
  {
    CmpRundownUnitOfWork(P);
    ExFreePoolWithTag(v54, 0x77554D43u);
  }
LABEL_112:
  if ( v67[0] )
  {
    v55 = *(unsigned int *)(v17 + 276);
    if ( (_DWORD)v55 != -1 )
      HvFreeCell(*(_QWORD *)(v17 + 32), v55);
    *(_DWORD *)(v17 + 276) = -1;
    *(_DWORD *)(v17 + 272) = 0;
    *(_QWORD *)(v17 + 280) = 0LL;
  }
LABEL_21:
  if ( v7 )
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v17 + 32) + 2848LL));
  CmpUnlockKcb((PVOID)v17);
  CmpUnlockRegistry();
  CmpSignalDeferredPosts(v80);
  if ( a7 == 1 )
  {
    v60 = v79;
    if ( ValueForAudit >= 0 && v79 )
    {
      HIDWORD(v82) = a3;
      LODWORD(v83[0]) = a5;
      *(_QWORD *)((char *)v83 + 4) = a4;
      SeAdtRegistryValueChangedAuditAlarm(v22, (_DWORD)v79, v23, (_DWORD)a2, a1, a6, (__int64)&v81, v71);
    }
    if ( *(_QWORD *)((char *)&v82 + 4) )
      ExFreePoolWithTag(*(PVOID *)((char *)&v82 + 4), 0x34414D43u);
    if ( v60 )
      ExFreePoolWithTag(v60, 0x33414D43u);
  }
  ExReleaseRundownProtection_0(&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)ValueForAudit;
}
