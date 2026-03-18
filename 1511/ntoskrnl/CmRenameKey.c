/*
 * XREFs of CmRenameKey @ 0x1405DF3A4
 * Callers:
 *     NtRenameKey @ 0x1405DC010 (NtRenameKey.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpLogTransactionAborted @ 0x1401AA55C (CmpLogTransactionAborted.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmAddLogForAction @ 0x1403D5EAC (CmAddLogForAction.c)
 *     CmpSearchAddTrans @ 0x1403D6DD0 (CmpSearchAddTrans.c)
 *     CmpMarkIndexDirty @ 0x1403D7904 (CmpMarkIndexDirty.c)
 *     CmpRemoveSubKey @ 0x1403D7AB8 (CmpRemoveSubKey.c)
 *     CmpAddSubKeyEx @ 0x1403D7E1C (CmpAddSubKeyEx.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     CmpLockIXLockExclusive @ 0x1403DDE20 (CmpLockIXLockExclusive.c)
 *     CmpRundownUnitOfWork @ 0x1403DE734 (CmpRundownUnitOfWork.c)
 *     CmpLockRegistryExclusive @ 0x1403DE874 (CmpLockRegistryExclusive.c)
 *     CmpCleanUpSubKeyInfo @ 0x1403DF288 (CmpCleanUpSubKeyInfo.c)
 *     EnlistKeyBodyWithKCB @ 0x1403E0248 (EnlistKeyBodyWithKCB.c)
 *     CmpNameSize @ 0x1403F4458 (CmpNameSize.c)
 *     CmpCopyName @ 0x1403F45B4 (CmpCopyName.c)
 *     HvAllocateCell @ 0x1403F45FC (HvAllocateCell.c)
 *     CmpReportNotify @ 0x1403F4FC4 (CmpReportNotify.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1403F9B10 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x1403FA0D0 (CmpCreateKeyControlBlock.c)
 *     CmpReferenceKeyControlBlock @ 0x1403FA9B0 (CmpReferenceKeyControlBlock.c)
 *     CmpGetNameControlBlock @ 0x1403FAA10 (CmpGetNameControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1403FB7B0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmRmIsKCBDeleted @ 0x1403FE220 (CmRmIsKCBDeleted.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1403FE290 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140423B38 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpSearchForOpenSubKeys @ 0x140499670 (CmpSearchForOpenSubKeys.c)
 *     CmpRemoveKeyHash @ 0x1404B48FC (CmpRemoveKeyHash.c)
 *     CmpAllocateUnitOfWork @ 0x1404B5CE4 (CmpAllocateUnitOfWork.c)
 *     CmpComputeKcbConvKey @ 0x1405E0E78 (CmpComputeKcbConvKey.c)
 *     CmpInsertKeyHash @ 0x1405E115C (CmpInsertKeyHash.c)
 *     DelistKeyBodyFromKCB @ 0x1405E137C (DelistKeyBodyFromKCB.c)
 *     CmpCheckKeyAccess @ 0x1405E2E0C (CmpCheckKeyAccess.c)
 *     CmpDoAccessCheckOnSubtree @ 0x1405E30DC (CmpDoAccessCheckOnSubtree.c)
 *     CmpDuplicateIndex @ 0x1405E3E4C (CmpDuplicateIndex.c)
 *     CmpUpdateParentForEachSon @ 0x1405E457C (CmpUpdateParentForEachSon.c)
 *     CmpRollbackTransactionArray @ 0x1405E5C08 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x1405EC1D0 (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmRenameKey(__int64 a1, UNICODE_STRING *a2, char a3)
{
  char v4; // al
  ULONG_PTR v5; // rdi
  __int64 v6; // r13
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v8; // rsi
  char *v9; // r14
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // r8
  unsigned int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // r9d
  ULONG_PTR v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  _QWORD *v21; // r14
  __int64 v22; // rdx
  char *v23; // r13
  __int64 v24; // rax
  _QWORD *v25; // rdx
  char *v26; // rcx
  struct _KTHREAD *v27; // rax
  char *v28; // rbx
  char **v29; // rax
  _QWORD *v30; // rcx
  char *v31; // r13
  char *v32; // rax
  struct _KTHREAD *v33; // rax
  char **v34; // rax
  PVOID v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  int v39; // r12d
  unsigned int v40; // ebx
  unsigned int v41; // ebx
  _WORD *v42; // rbx
  __int64 v43; // r14
  __int64 v44; // rax
  __int64 v45; // rbx
  _BYTE *v46; // rcx
  unsigned __int16 v47; // ax
  unsigned int Length; // r12d
  __int64 v49; // rbx
  int v50; // eax
  __int64 v51; // r14
  char *NameControlBlock; // rax
  _WORD *v53; // r14
  unsigned int i; // r15d
  __int64 v55; // rcx
  int v56; // r14d
  __int64 v57; // rcx
  char v58; // r8
  void *v59; // rcx
  ULONG_PTR v60; // r8
  ULONG_PTR v61; // r12
  _QWORD *v62; // rax
  char *v63; // rbx
  _QWORD *v64; // rcx
  _QWORD *v65; // rdx
  struct _KTHREAD *v66; // rax
  char *v67; // rax
  char **v68; // rcx
  char *v69; // rbx
  PVOID v70; // rdx
  _QWORD *v71; // rax
  _QWORD *v72; // rdx
  _QWORD *v73; // rcx
  __int64 v74; // rdx
  unsigned int v75; // r15d
  __int64 v76; // r12
  _WORD *v77; // r14
  unsigned int j; // r15d
  PVOID v79; // rdi
  PVOID v80; // rdi
  PVOID v81; // rdi
  char *v82; // rdi
  char v84; // [rsp+28h] [rbp-79h]
  unsigned int v85; // [rsp+48h] [rbp-59h] BYREF
  int v86; // [rsp+4Ch] [rbp-55h]
  unsigned int BugCheckParameter3; // [rsp+50h] [rbp-51h]
  char BugCheckParameter3_4; // [rsp+54h] [rbp-4Dh] BYREF
  int v89; // [rsp+58h] [rbp-49h] BYREF
  int v90; // [rsp+5Ch] [rbp-45h] BYREF
  ULONG_PTR v91; // [rsp+60h] [rbp-41h] BYREF
  unsigned int v92; // [rsp+68h] [rbp-39h]
  int v93; // [rsp+6Ch] [rbp-35h] BYREF
  char *v94; // [rsp+70h] [rbp-31h] BYREF
  __int64 v95; // [rsp+78h] [rbp-29h]
  __int64 v96; // [rsp+80h] [rbp-21h] BYREF
  int v97; // [rsp+88h] [rbp-19h] BYREF
  PVOID v98; // [rsp+90h] [rbp-11h]
  PVOID P; // [rsp+98h] [rbp-9h]
  PVOID UnitOfWork; // [rsp+A0h] [rbp-1h]
  __int64 v101; // [rsp+A8h] [rbp+7h] BYREF
  PVOID v102; // [rsp+B0h] [rbp+Fh]
  unsigned int v103; // [rsp+B8h] [rbp+17h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+C0h] [rbp+1Fh]

  v4 = 0;
  v95 = 0LL;
  v90 = -1;
  v5 = 0LL;
  v6 = 0LL;
  v91 = -1LL;
  BugCheckParameter3 = -1;
  v97 = -1;
  v89 = -1;
  v101 = 0LL;
  v102 = 0LL;
  P = 0LL;
  v98 = 0LL;
  UnitOfWork = 0LL;
  BugCheckParameter4 = 0LL;
  v93 = 0;
  while ( 1 )
  {
    if ( v4 )
    {
      ExReleaseRundownProtection_0(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
      break;
    v8 = *(_QWORD *)(a1 + 8);
    v9 = 0LL;
    v94 = 0LL;
    if ( CmRmIsKCBDeleted(v8, 0LL) )
      goto LABEL_123;
    v10 = *(_QWORD *)(a1 + 56);
    if ( v10 || *(_QWORD *)(a1 + 64) )
    {
      v11 = CmpSearchAddTrans(a1, 0LL, 0LL, v10, *(__int128 **)(a1 + 64), 0, &v94);
      if ( v11 < 0 )
        goto LABEL_124;
      v9 = v94;
    }
    if ( CmRmIsKCBDeleted(v8, (__int64)v9) )
    {
LABEL_123:
      v11 = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_124;
    }
    v13 = *(_DWORD *)(v8 + 40);
    v5 = *(_QWORD *)(v8 + 32);
    v92 = v13;
    v86 = v13 >> 31;
    if ( v5 == CmpMasterHive || (v14 = *(_QWORD *)(v8 + 72)) == 0 || (v15 = *(_QWORD *)(v14 + 32), v15 == CmpMasterHive) )
    {
      v11 = -1073741790;
      goto LABEL_124;
    }
    LOBYTE(v12) = a3;
    v11 = CmpCheckKeyAccess(v15, *(unsigned int *)(v14 + 40), v12, 4LL);
    if ( v11 < 0 )
      goto LABEL_124;
    LOBYTE(v16) = a3;
    v11 = CmpDoAccessCheckOnSubtree(v5, v13, v16, v17, v84);
    if ( v11 < 0 )
      goto LABEL_124;
    CmpReportNotify(v8, v5, v13, (__int64)v9, 1, 0LL);
    if ( v9 )
    {
      v21 = (_QWORD *)(v8 + 200);
      if ( (_QWORD *)*v21 != v21 )
      {
        v11 = -1072103423;
        goto LABEL_124;
      }
      P = CmpAllocateUnitOfWork();
      if ( !P )
        goto LABEL_93;
      UnitOfWork = CmpAllocateUnitOfWork();
      if ( !UnitOfWork )
        goto LABEL_93;
      v23 = (char *)P;
      v24 = *(_QWORD *)(v8 + 72) + 200LL;
      v25 = *(_QWORD **)(*(_QWORD *)(v8 + 72) + 208LL);
      v26 = (char *)P + 32;
      *((_QWORD *)P + 4) = v24;
      *((_QWORD *)v26 + 1) = v25;
      if ( *v25 != v24 )
        __fastfail(3u);
      *v25 = v26;
      *(_QWORD *)(v24 + 8) = v26;
      CmpReferenceKeyControlBlock(*(signed __int32 **)(v8 + 72));
      *((_QWORD *)v23 + 6) = *(_QWORD *)(v8 + 72);
      v27 = KeGetCurrentThread();
      --v27->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v28 = v94 + 16;
      v29 = (char **)*((_QWORD *)v94 + 3);
      *(_QWORD *)v23 = v94 + 16;
      *((_QWORD *)v23 + 1) = v29;
      if ( *v29 != v28 )
        __fastfail(3u);
      *v29 = v23;
      *((_QWORD *)v28 + 1) = v23;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      *((_QWORD *)v23 + 7) = v94;
      v30 = *(_QWORD **)(v8 + 208);
      v31 = (char *)UnitOfWork;
      v32 = (char *)UnitOfWork + 32;
      *((_QWORD *)UnitOfWork + 4) = v21;
      *((_QWORD *)v32 + 1) = v30;
      if ( (_QWORD *)*v30 != v21 )
        __fastfail(3u);
      *v30 = v32;
      *(_QWORD *)(v8 + 208) = v32;
      CmpReferenceKeyControlBlock((signed __int32 *)v8);
      *((_QWORD *)v31 + 6) = v8;
      v33 = KeGetCurrentThread();
      --v33->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v34 = (char **)*((_QWORD *)v28 + 1);
      *(_QWORD *)v31 = v28;
      *((_QWORD *)v31 + 1) = v34;
      if ( *v34 != v28 )
        __fastfail(3u);
      *v34 = v31;
      *((_QWORD *)v28 + 1) = v31;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v9 = v94;
      v35 = P;
      *((_QWORD *)v31 + 7) = v94;
      if ( CmpLockIXLockExclusive(*(_QWORD *)(v8 + 72) + 240LL, (__int64)v35, 0)
        && CmpLockIXLockExclusive(*(_QWORD *)(v8 + 72) + 256LL, (__int64)v35, 1)
        && CmpLockIXLockExclusive(v8 + 240, (__int64)v31, 0)
        && CmpLockIXLockExclusive(v8 + 256, (__int64)v31, 1) )
      {
        v86 = 1;
LABEL_42:
        v36 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(v5, v13, &v90);
        v95 = v36;
        v37 = v36;
        if ( !v36 )
        {
          v11 = -1073741670;
          goto LABEL_112;
        }
        CmpUpdateKeyNodeAccessBits(v5, v36, v13);
        v38 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(v5 + 8))(
                v5,
                *(unsigned int *)(v37 + 16),
                (char *)&v91 + 4);
        v6 = v38;
        if ( !v38 )
        {
          v11 = -1073741670;
          goto LABEL_104;
        }
        CmpUpdateKeyNodeAccessBits(v5, v38, *(_DWORD *)(v37 + 16));
        CmpFindSubKeyByNameWithStatus(v5, v6, a2, &v103);
        if ( v103 != -1 )
        {
          v11 = -1073741535;
          goto LABEL_104;
        }
        v39 = (unsigned __int16)CmpNameSize(&a2->Length);
        if ( v9 )
          goto LABEL_62;
        if ( !HvpMarkCellDirty(v5, *(unsigned int *)(v37 + 16), 0) )
          goto LABEL_50;
        v40 = v92;
        if ( !CmpMarkIndexDirty(v5, *(_DWORD *)(v95 + 16), v92) )
          goto LABEL_50;
        if ( !HvpMarkCellDirty(v5, v40, 0) )
          goto LABEL_50;
        v41 = *(_DWORD *)(v6 + 4LL * v86 + 28);
        BugCheckParameter3 = v41;
        if ( v41 == -1 || !HvpMarkCellDirty(v5, v41, 0) )
          goto LABEL_50;
        v42 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(v5, v41, &v89);
        if ( !v42 )
        {
          v11 = -1073741670;
          goto LABEL_124;
        }
        if ( *v42 == 26994 && v42[1] )
        {
          while ( HvpMarkCellDirty(v5, *(unsigned int *)&v42[2 * (unsigned int)v9 + 2], 0) )
          {
            LODWORD(v9) = (_DWORD)v9 + 1;
            if ( (unsigned int)v9 >= (unsigned __int16)v42[1] )
              goto LABEL_61;
          }
          (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v89);
          goto LABEL_50;
        }
LABEL_61:
        (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v89);
LABEL_62:
        v43 = v86;
        LODWORD(v91) = HvAllocateCell(v5, v39 + 76, (unsigned int)v86, (__int64)&v101, (__int64)&v97);
        if ( (_DWORD)v91 == -1 )
        {
LABEL_50:
          v11 = -1073741443;
          goto LABEL_124;
        }
        v44 = v95;
        v45 = v101;
        v46 = (_BYTE *)(v101 + 76);
        *(_OWORD *)v101 = *(_OWORD *)v95;
        *(_OWORD *)(v45 + 16) = *(_OWORD *)(v44 + 16);
        *(_OWORD *)(v45 + 32) = *(_OWORD *)(v44 + 32);
        *(_OWORD *)(v45 + 48) = *(_OWORD *)(v44 + 48);
        *(_QWORD *)(v45 + 64) = *(_QWORD *)(v44 + 64);
        *(_DWORD *)(v45 + 72) = *(_DWORD *)(v44 + 72);
        v47 = CmpCopyName(v46, (const void **)a2);
        *(_WORD *)(v45 + 72) = v47;
        Length = a2->Length;
        if ( v47 >= Length )
          *(_WORD *)(v45 + 2) &= ~0x20u;
        else
          *(_WORD *)(v45 + 2) |= 0x20u;
        v49 = MEMORY[0xFFFFF78000000014];
        *(_QWORD *)(v101 + 4) = MEMORY[0xFFFFF78000000014];
        (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v97);
        if ( v94 )
        {
          (*(void (__fastcall **)(ULONG_PTR, char *))(v5 + 16))(v5, (char *)&v91 + 4);
          v6 = 0LL;
          (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v90);
          v60 = *(_QWORD *)(v8 + 72);
          v95 = 0LL;
          BugCheckParameter4 = CmpCreateKeyControlBlock(v5, v91, v60, 0, (__m128i *)a2);
          v61 = BugCheckParameter4;
          if ( !BugCheckParameter4 )
            goto LABEL_94;
          v62 = CmpAllocateUnitOfWork();
          v98 = v62;
          v63 = (char *)v62;
          if ( !v62 )
            goto LABEL_94;
          v64 = v62 + 4;
          v65 = *(_QWORD **)(v61 + 208);
          v62[4] = v61 + 200;
          v62[5] = v65;
          if ( *v65 != v61 + 200 )
            __fastfail(3u);
          *v65 = v64;
          *(_QWORD *)(v61 + 208) = v64;
          CmpReferenceKeyControlBlock((signed __int32 *)v61);
          *((_QWORD *)v63 + 6) = v61;
          v66 = KeGetCurrentThread();
          --v66->KernelApcDisable;
          ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
          v67 = v94 + 16;
          v68 = (char **)*((_QWORD *)v94 + 3);
          *(_QWORD *)v63 = v94 + 16;
          *((_QWORD *)v63 + 1) = v68;
          if ( *v68 != v67 )
            __fastfail(3u);
          *v68 = v63;
          *((_QWORD *)v67 + 1) = v63;
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          v69 = v94;
          v70 = v98;
          *((_QWORD *)v98 + 7) = v94;
          CmpLockIXLockExclusive(v61 + 240, (__int64)v70, 0);
          CmpLockIXLockExclusive(v61 + 256, (__int64)v98, 1);
          v71 = P;
          v72 = v98;
          v73 = UnitOfWork;
          *(_QWORD *)(v61 + 232) = v69;
          v72[10] = v8;
          v71[10] = v8;
          v73[10] = v61;
          v71[11] = v61;
          *((_DWORD *)v71 + 17) = 10;
          LODWORD(v71) = v92;
          *((_DWORD *)v73 + 17) = 11;
          *((_DWORD *)v72 + 18) = (unsigned int)v71 >> 31;
          *((_DWORD *)v72 + 17) = 12;
          v11 = CmAddLogForAction((__int64)v73, (ULONG)v72);
          if ( v11 >= 0 )
          {
            LOBYTE(v22) = 1;
            CmpDereferenceKeyControlBlockWithLock(v8, v22);
            LOBYTE(v74) = 1;
            DelistKeyBodyFromKCB(a1, v74);
            *(_QWORD *)(a1 + 8) = v61;
            EnlistKeyBodyWithKCB(a1, 2);
            CmpUnlockKcb((char *)v61);
            v11 = 0;
            goto LABEL_124;
          }
        }
        else
        {
          v50 = CmpDuplicateIndex(v5);
          *(_DWORD *)(v6 + 4 * v43 + 28) = v50;
          if ( v50 != -1 )
          {
            v51 = v95;
            if ( CmpAddSubKeyEx(v5, *(_DWORD *)(v95 + 16), v91, 0) )
            {
              if ( CmpRemoveSubKey(v5, *(_DWORD *)(v51 + 16), v92) )
              {
                v102 = *(PVOID *)(v8 + 80);
                NameControlBlock = CmpGetNameControlBlock(&a2->Length, &BugCheckParameter3_4);
                *(_QWORD *)(v8 + 80) = NameControlBlock;
                if ( NameControlBlock )
                {
                  if ( (unsigned __int8)CmpUpdateParentForEachSon(v5) )
                  {
                    v53 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(
                                     v5,
                                     BugCheckParameter3,
                                     &v89);
                    if ( v53 )
                    {
                      if ( *v53 == 26994 )
                      {
                        for ( i = 0; i < (unsigned __int16)v53[1]; HvFreeCell(v5, *(unsigned int *)&v53[2 * i++ + 2]) )
                          ;
                      }
                      (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v89);
                      HvFreeCell(v5, BugCheckParameter3);
                      HvFreeCell(v5, v92);
                      v55 = *(_QWORD *)(v8 + 72);
                      *(_DWORD *)(v8 + 40) = v91;
                      *(_QWORD *)(v8 + 168) = v49;
                      CmpCleanUpSubKeyInfo(v55);
                      if ( (unsigned __int16)*(_DWORD *)(v6 + 52) < Length )
                      {
                        *(_WORD *)(v6 + 52) = Length;
                        *(_WORD *)(*(_QWORD *)(v8 + 72) + 176LL) = Length;
                      }
                      v56 = CmpComputeKcbConvKey(v8);
                      if ( v56 != *(_DWORD *)(v8 + 16) )
                      {
                        CmpRemoveKeyHash(*(_QWORD *)(v8 + 32), (_DWORD *)(v8 + 16));
                        v57 = *(_QWORD *)(v8 + 32);
                        *(_DWORD *)(v8 + 16) = v56;
                        CmpInsertKeyHash(v57, v8 + 16, 0LL);
                      }
                      (*(void (__fastcall **)(ULONG_PTR, char *))(v5 + 16))(v5, (char *)&v91 + 4);
                      v11 = 0;
                      v6 = 0LL;
                      (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v90);
                      v95 = 0LL;
                      CmpSearchForOpenSubKeys(v8, 3, v58, 0LL);
                      CmpDereferenceNameControlBlockWithLock((int *)v102);
                      v59 = *(void **)(v8 + 192);
                      if ( (unsigned __int64)v59 >= 2 )
                        ExFreePoolWithTag(v59, 0x624E4D43u);
                      *(_QWORD *)(v8 + 192) = BugCheckParameter3_4 == 1;
LABEL_124:
                      ExReleaseRundownProtection_0(&CmpShutdownRundown);
                      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                      if ( v95 )
                        (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v90);
                      if ( v6 )
                        (*(void (__fastcall **)(ULONG_PTR, char *))(v5 + 16))(v5, (char *)&v91 + 4);
                      return (unsigned int)v11;
                    }
                  }
                }
              }
            }
LABEL_93:
            LODWORD(v43) = v86;
          }
LABEL_94:
          v11 = -1073741670;
        }
        v75 = BugCheckParameter3;
        if ( BugCheckParameter3 != -1 )
        {
          v76 = (int)v43;
          v22 = *(unsigned int *)(v6 + 4LL * (int)v43 + 28);
          if ( (_DWORD)v22 != -1 )
          {
            v77 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(v5 + 8))(v5, v22, &v89);
            if ( v77 )
            {
              if ( *v77 == 26994 )
              {
                for ( j = 0; j < (unsigned __int16)v77[1]; HvFreeCell(v5, *(unsigned int *)&v77[2 * j++ + 2]) )
                  ;
                v75 = BugCheckParameter3;
              }
              (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v89);
              HvFreeCell(v5, *(unsigned int *)(v6 + 4 * v76 + 28));
            }
          }
          *(_DWORD *)(v6 + 4 * v76 + 28) = v75;
        }
LABEL_104:
        if ( v95 )
          (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v90);
        if ( v6 )
          (*(void (__fastcall **)(ULONG_PTR, char *))(v5 + 16))(v5, (char *)&v91 + 4);
        if ( (_DWORD)v91 != -1 )
          HvFreeCell(v5, (unsigned int)v91);
        if ( v102 )
          *(_QWORD *)(v8 + 80) = v102;
      }
      else
      {
        v11 = -1072103423;
      }
LABEL_112:
      v79 = P;
      if ( P )
      {
        CmpRundownUnitOfWork(P);
        ExFreePoolWithTag(v79, 0x77554D43u);
      }
      v80 = v98;
      if ( v98 )
      {
        CmpRundownUnitOfWork(v98);
        ExFreePoolWithTag(v80, 0x77554D43u);
      }
      v81 = UnitOfWork;
      if ( UnitOfWork )
      {
        CmpRundownUnitOfWork(UnitOfWork);
        ExFreePoolWithTag(v81, 0x77554D43u);
      }
      v82 = (char *)BugCheckParameter4;
      if ( BugCheckParameter4 )
      {
        LOBYTE(v22) = 1;
        CmpDereferenceKeyControlBlockWithLock(BugCheckParameter4, v22);
        CmpUnlockKcb(v82);
      }
      ExReleaseRundownProtection_0(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return (unsigned int)v11;
    }
    v18 = v8 + 240;
    if ( !*(_DWORD *)(v8 + 240) )
    {
      v18 = v8 + 256;
      if ( !*(_DWORD *)(v8 + 256) )
      {
        v20 = *(_QWORD *)(v8 + 72);
        v18 = v20 + 240;
        if ( !*(_DWORD *)(v20 + 240) )
        {
          v18 = v20 + 256;
          if ( !*(_DWORD *)(v20 + 256) )
            goto LABEL_42;
        }
      }
    }
    v11 = CmpSnapshotTxOwnerArray(v18, &v85, &v96);
    if ( v11 < 0 )
      goto LABEL_124;
    CmpLogTransactionAborted(v8, 4u, v19, v85);
    CmpUnlockRegistry();
    v11 = CmpRollbackTransactionArray(v85, v96, 0LL, &v93);
    CmpLockRegistryExclusive();
    if ( v11 < 0 )
      goto LABEL_124;
    v4 = 1;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 3221225865LL;
}
