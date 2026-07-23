/*
 * XREFs of CmRenameKey @ 0x1405FD59C
 * Callers:
 *     NtRenameKey @ 0x1405F9EA4 (NtRenameKey.c)
 * Callees:
 *     CmpDiscardKcb @ 0x14000A96C (CmpDiscardKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14000AA14 (CmpTransEnlistUowInCmTrans.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     CmpTransEnlistUowInKcb @ 0x14010BEB0 (CmpTransEnlistUowInKcb.c)
 *     CmpLogTransactionAborted @ 0x140135C24 (CmpLogTransactionAborted.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpSearchForOpenSubKeys @ 0x1403E3C04 (CmpSearchForOpenSubKeys.c)
 *     CmpRemoveKeyHash @ 0x1403FA7F8 (CmpRemoveKeyHash.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1403FBA4C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockIXLockExclusive @ 0x1403FBAD4 (CmpLockIXLockExclusive.c)
 *     CmpRundownUnitOfWork @ 0x1403FC77C (CmpRundownUnitOfWork.c)
 *     CmpLockRegistryExclusive @ 0x1403FC8A8 (CmpLockRegistryExclusive.c)
 *     CmpRebuildKcbCache @ 0x1403FC920 (CmpRebuildKcbCache.c)
 *     CmpCleanUpSubKeyInfo @ 0x1403FCAE8 (CmpCleanUpSubKeyInfo.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     CmpCopyName @ 0x140400BB4 (CmpCopyName.c)
 *     HvAllocateCell @ 0x140400BFC (HvAllocateCell.c)
 *     CmpNameSize @ 0x1404010E0 (CmpNameSize.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140401990 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpCreateKeyControlBlock @ 0x1404334E0 (CmpCreateKeyControlBlock.c)
 *     CmpFindKcbInHashEntryByName @ 0x140435B44 (CmpFindKcbInHashEntryByName.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140435CE0 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpGetNameControlBlock @ 0x140435E50 (CmpGetNameControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140436A10 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     EnlistKeyBodyWithKCB @ 0x140491474 (EnlistKeyBodyWithKCB.c)
 *     CmpAddSubKeyEx @ 0x14049AE00 (CmpAddSubKeyEx.c)
 *     CmpHashUnicodeComponent @ 0x14049B720 (CmpHashUnicodeComponent.c)
 *     CmpRemoveSubKey @ 0x1404B8258 (CmpRemoveSubKey.c)
 *     CmpMarkIndexDirty @ 0x1404B9C38 (CmpMarkIndexDirty.c)
 *     CmpAllocateUnitOfWork @ 0x1404C1A54 (CmpAllocateUnitOfWork.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1404D35A0 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1404F54C0 (CmpFindSubKeyByNameWithStatus.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     CmpReportNotify @ 0x1404F7C30 (CmpReportNotify.c)
 *     CmpMarkKeyUnbacked @ 0x140518288 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140518304 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpReferenceKeyControlBlock @ 0x140518944 (CmpReferenceKeyControlBlock.c)
 *     CmAddLogForAction @ 0x14051985C (CmAddLogForAction.c)
 *     CmpComputeKcbConvKey @ 0x1405FF60C (CmpComputeKcbConvKey.c)
 *     CmpInsertKeyHash @ 0x1405FF8E4 (CmpInsertKeyHash.c)
 *     DelistKeyBodyFromKCB @ 0x1405FF9CC (DelistKeyBodyFromKCB.c)
 *     CmpCheckKeyAccess @ 0x140601FB0 (CmpCheckKeyAccess.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140602518 (CmpDoAccessCheckOnSubtree.c)
 *     CmpRollbackTransactionArray @ 0x1406051FC (CmpRollbackTransactionArray.c)
 *     CmpDuplicateIndex @ 0x140609E24 (CmpDuplicateIndex.c)
 *     CmpFreeIndexByCell @ 0x14060A00C (CmpFreeIndexByCell.c)
 *     CmpUpdateParentForEachSon @ 0x14060B310 (CmpUpdateParentForEachSon.c)
 *     CmpLogUnsupportedOperation @ 0x14060BDC0 (CmpLogUnsupportedOperation.c)
 *     CmpSnapshotTxOwnerArray @ 0x14060F9F0 (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmRenameKey(__int64 a1, __m128i *a2, char a3)
{
  __int64 v3; // rdi
  char v5; // al
  char v6; // bl
  ULONG_PTR v7; // r14
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG_PTR v16; // rsi
  int v17; // ebx
  __int64 v18; // r8
  unsigned int v19; // r13d
  __int64 v20; // rax
  int v21; // r8d
  int v22; // r9d
  _DWORD *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  _QWORD *v28; // r15
  _QWORD *v29; // r12
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // rax
  unsigned __int16 *v33; // rbx
  __int64 v34; // rbx
  int v35; // eax
  __int64 KcbInHashEntryByName; // r15
  int v37; // r15d
  unsigned int v38; // ebx
  _WORD *v39; // rbx
  int v40; // edi
  __int64 v41; // rbx
  _BYTE *v42; // rcx
  unsigned __int16 v43; // ax
  unsigned int v44; // edi
  __int64 v45; // rbx
  __int64 v46; // r12
  int v47; // eax
  int v48; // edx
  char *NameControlBlock; // rax
  int v50; // r13d
  __int64 v51; // rcx
  int v52; // ebx
  __int64 v53; // rcx
  char v54; // r8
  void *v55; // rcx
  int v56; // eax
  __int64 v57; // r13
  int v58; // edi
  unsigned int v59; // ebx
  __int64 v60; // rax
  ULONG_PTR v61; // r15
  _QWORD *UnitOfWork; // rax
  _QWORD *v63; // r15
  unsigned int v64; // r13d
  __int64 v65; // rdi
  ULONG_PTR v66; // rdx
  PVOID v67; // rdi
  PVOID v68; // rdi
  ULONG_PTR v69; // rdi
  __int64 v70; // rdx
  struct _KTHREAD *v71; // rcx
  __int16 v72; // ax
  ULONG_PTR v74; // rdi
  _QWORD *v75; // rcx
  _QWORD *v76; // rdx
  unsigned int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rdx
  int v80; // [rsp+28h] [rbp-E0h]
  __int64 v81; // [rsp+58h] [rbp-B0h]
  int v82; // [rsp+60h] [rbp-A8h]
  unsigned int v83; // [rsp+64h] [rbp-A4h] BYREF
  int v84; // [rsp+68h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v86; // [rsp+74h] [rbp-94h]
  __int64 v87; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v88[2]; // [rsp+80h] [rbp-88h] BYREF
  _DWORD v89[2]; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v90[2]; // [rsp+90h] [rbp-78h] BYREF
  PVOID P; // [rsp+98h] [rbp-70h]
  _DWORD v92[2]; // [rsp+A0h] [rbp-68h] BYREF
  PVOID v93; // [rsp+A8h] [rbp-60h]
  ULONG_PTR BugCheckParameter4; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v95; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v96; // [rsp+BCh] [rbp-4Ch]
  __int64 v97; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v98; // [rsp+C8h] [rbp-40h] BYREF
  PVOID v99; // [rsp+D0h] [rbp-38h]
  PVOID v100; // [rsp+D8h] [rbp-30h]
  _QWORD v101[2]; // [rsp+E0h] [rbp-28h] BYREF
  int v102; // [rsp+F0h] [rbp-18h]
  _QWORD v103[2]; // [rsp+F8h] [rbp-10h] BYREF
  int v104; // [rsp+108h] [rbp+0h]
  __int64 v108; // [rsp+180h] [rbp+78h]

  v3 = 0LL;
  v88[1] = 0;
  v88[0] = -1;
  v5 = 0;
  v89[0] = -1;
  v6 = a3;
  BugCheckParameter3 = 0xFFFFFFFFLL;
  v7 = 0LL;
  v86 = -1;
  v8 = 0LL;
  v92[0] = -1;
  v90[0] = -1;
  v89[1] = 0;
  v97 = 0LL;
  v92[1] = 0;
  v90[1] = 0;
  v99 = 0LL;
  P = 0LL;
  v100 = 0LL;
  v93 = 0LL;
  BugCheckParameter4 = 0LL;
  while ( 1 )
  {
    if ( v5 )
    {
      ExReleaseRundownProtection(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
      break;
    v16 = *(_QWORD *)(a1 + 8);
    v98 = 0LL;
    if ( (*(_DWORD *)(*(_QWORD *)(v16 + 24) + 144LL) & 0x100000) != 0 )
    {
      v17 = -1073741790;
      goto LABEL_33;
    }
    if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      v17 = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_33;
    }
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      v17 = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v98);
      if ( v17 < 0 )
        goto LABEL_33;
      v3 = v98;
      v6 = a3;
    }
    if ( CmpIsKeyDeletedForKeyBody(a1, v3) )
    {
      v17 = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_147;
    }
    v19 = *(_DWORD *)(v16 + 32);
    v7 = *(_QWORD *)(v16 + 24);
    v96 = v19;
    v82 = v19 >> 31;
    if ( v7 == CmpMasterHive || (v20 = *(_QWORD *)(v16 + 64)) == 0 || *(_QWORD *)(v20 + 24) == CmpMasterHive )
    {
      v17 = -1073741790;
LABEL_147:
      v3 = 0LL;
      goto LABEL_34;
    }
    if ( *(_WORD *)(v16 + 58) )
    {
      CmpLogUnsupportedOperation(5LL);
      v17 = -1073741822;
      goto LABEL_33;
    }
    if ( v3 && !CmpEnableTransactedRename )
    {
      v17 = -1073741822;
      goto LABEL_147;
    }
    LOBYTE(v18) = v6;
    v17 = CmpCheckKeyAccess(*(_QWORD *)(v20 + 24), *(unsigned int *)(v20 + 32), v18, 4LL);
    if ( v17 < 0 || (LOBYTE(v21) = a3, v17 = CmpDoAccessCheckOnSubtree(v7, v19, v21, v22, v80), v17 < 0) )
    {
      v3 = 0LL;
      goto LABEL_34;
    }
    CmpReportNotify(v16, v7, v19, v3, 1, 0LL);
    if ( v3 )
    {
      if ( *(_QWORD *)(v16 + 200) != v16 + 200 )
      {
        v17 = -1072103423;
        goto LABEL_33;
      }
      P = CmpAllocateUnitOfWork();
      v28 = P;
      if ( P && (v93 = CmpAllocateUnitOfWork()) != 0LL )
      {
        CmpTransEnlistUowInKcb(v28, *(_QWORD *)(v16 + 64));
        v17 = CmpTransEnlistUowInCmTrans(v28, v3);
        if ( v17 < 0 )
          goto LABEL_125;
        v29 = v93;
        CmpTransEnlistUowInKcb(v93, v16);
        v17 = CmpTransEnlistUowInCmTrans(v29, v3);
        if ( v17 < 0 )
          goto LABEL_125;
        if ( !CmpLockIXLockExclusive(*(_QWORD *)(v16 + 64) + 240LL, v28, 0)
          || !CmpLockIXLockExclusive(*(_QWORD *)(v16 + 64) + 256LL, v28, 1)
          || !CmpLockIXLockExclusive(v16 + 240, v29, 0)
          || !CmpLockIXLockExclusive(v16 + 256, v29, 1) )
        {
          v17 = -1072103423;
          goto LABEL_125;
        }
        v82 = 1;
LABEL_51:
        v30 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v7 + 8))(v7, v19, v88);
        v81 = v30;
        v31 = v30;
        if ( !v30 )
        {
          v17 = -1073741670;
          goto LABEL_124;
        }
        CmpUpdateKeyNodeAccessBits(v7, v30, v19);
        v32 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v7 + 8))(v7, *(unsigned int *)(v31 + 16), v89);
        v108 = v32;
        v8 = v32;
        if ( !v32 )
        {
          v17 = -1073741670;
LABEL_116:
          if ( v31 )
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v88);
          if ( v8 )
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v89);
          if ( (_DWORD)BugCheckParameter3 != -1 )
            HvFreeCell(v7, (unsigned int)BugCheckParameter3);
          if ( v99 )
            *(_QWORD *)(v16 + 72) = v99;
LABEL_124:
          v28 = P;
LABEL_125:
          if ( v28 )
          {
            CmpRundownUnitOfWork(v28);
            ExFreePoolWithTag(v28, 0x77554D43u);
          }
          v67 = v100;
          if ( v100 )
          {
            CmpRundownUnitOfWork(v100);
            ExFreePoolWithTag(v67, 0x77554D43u);
          }
          v68 = v93;
          if ( v93 )
          {
            CmpRundownUnitOfWork(v93);
            ExFreePoolWithTag(v68, 0x77554D43u);
          }
          v69 = BugCheckParameter4;
          if ( BugCheckParameter4 )
          {
            CmpMarkKeyUnbacked(v16);
            LOBYTE(v70) = 1;
            CmpDereferenceKeyControlBlockWithLock(v69, v70);
          }
          ExReleaseRundownProtection(&CmpShutdownRundown);
          v71 = KeGetCurrentThread();
          v72 = v71->KernelApcDisable + 1;
          v71->KernelApcDisable = v72;
          if ( !v72
            && ($2B8565053CDC740D4E4887693DD8AC9E *)v71->ApcState.ApcListHead[0].Flink != &v71->152
            && !v71->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery((__int64)v71);
          }
          return (unsigned int)v17;
        }
        CmpUpdateKeyNodeAccessBits(v7, v32, *(_DWORD *)(v31 + 16));
        v33 = (unsigned __int16 *)a2;
        CmpFindSubKeyByNameWithStatus(v7, v8, a2, &v95);
        if ( v95 != -1 )
        {
          v17 = -1073741535;
          goto LABEL_116;
        }
        if ( !v3 )
        {
          v34 = *(_QWORD *)(v16 + 64);
          v35 = CmpHashUnicodeComponent(a2);
          KcbInHashEntryByName = CmpFindKcbInHashEntryByName(v7, v35 + 37 * *(_DWORD *)(v34 + 8), v34, (__int64)a2);
          if ( !KcbInHashEntryByName )
            goto LABEL_61;
          v101[0] = 0LL;
          v101[1] = 0LL;
          v102 = 0;
          CmpEnumerateAllHigherLayerKcbs(
            KcbInHashEntryByName,
            (__int64)CmpForceInvalidatePreCallback,
            (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpForceInvalidatePostCallback,
            (__int64)v101,
            1,
            1);
          v17 = v101[0];
          if ( SLODWORD(v101[0]) >= 0 )
          {
            CmpFlushNotifiesOnKeyBodyList(KcbInHashEntryByName, 8LL, 1);
            CmpDiscardKcb(KcbInHashEntryByName);
LABEL_61:
            v103[0] = 0LL;
            v103[1] = 0LL;
            v104 = 0;
            CmpEnumerateAllHigherLayerKcbs(
              v16,
              (__int64)CmpForceInvalidatePreCallback,
              (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpForceInvalidatePostCallback,
              (__int64)v103,
              1,
              1);
            v17 = v103[0];
            if ( SLODWORD(v103[0]) >= 0 )
            {
              v33 = (unsigned __int16 *)a2;
              goto LABEL_63;
            }
          }
LABEL_82:
          v3 = v81;
LABEL_34:
          ExReleaseRundownProtection(&CmpShutdownRundown);
          v26 = KeGetCurrentThread();
          v27 = v26->KernelApcDisable + 1;
          v26->KernelApcDisable = v27;
          if ( !v27
            && ($2B8565053CDC740D4E4887693DD8AC9E *)v26->ApcState.ApcListHead[0].Flink != &v26->152
            && !v26->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery((__int64)v26);
          }
          if ( v3 )
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v88);
          if ( v8 )
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v89);
          return (unsigned int)v17;
        }
LABEL_63:
        v37 = (unsigned __int16)CmpNameSize(v33);
        if ( !v3 )
        {
          v3 = v81;
          if ( !HvpMarkCellDirty(v7, *(unsigned int *)(v81 + 16), 0)
            || !CmpMarkIndexDirty(v7, *(_DWORD *)(v81 + 16), v19)
            || !HvpMarkCellDirty(v7, v19, 0)
            || (v38 = *(_DWORD *)(v8 + 4LL * v82 + 28), v86 = v38, v38 == -1)
            || !HvpMarkCellDirty(v7, v38, 0) )
          {
            v17 = -1073741443;
            goto LABEL_34;
          }
          v39 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v7 + 8))(v7, v38, v90);
          if ( !v39 )
          {
            v17 = -1073741670;
            goto LABEL_34;
          }
          if ( *v39 == 26994 )
          {
            v40 = 0;
            if ( v39[1] )
            {
              while ( HvpMarkCellDirty(v7, *(unsigned int *)&v39[2 * v40 + 2], 0) )
              {
                if ( ++v40 >= (unsigned int)(unsigned __int16)v39[1] )
                  goto LABEL_76;
              }
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v90);
              goto LABEL_81;
            }
          }
LABEL_76:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v90);
        }
        LODWORD(BugCheckParameter3) = HvAllocateCell(v7, v37 + 76, (unsigned int)v82, (__int64)&v97, (__int64)v92);
        if ( (_DWORD)BugCheckParameter3 == -1 )
        {
LABEL_81:
          v17 = -1073741443;
          goto LABEL_82;
        }
        v41 = v97;
        v31 = v81;
        v42 = (_BYTE *)(v97 + 76);
        *(_OWORD *)v97 = *(_OWORD *)v81;
        *(_OWORD *)(v41 + 16) = *(_OWORD *)(v81 + 16);
        *(_OWORD *)(v41 + 32) = *(_OWORD *)(v81 + 32);
        *(_OWORD *)(v41 + 48) = *(_OWORD *)(v81 + 48);
        *(_QWORD *)(v41 + 64) = *(_QWORD *)(v81 + 64);
        *(_DWORD *)(v41 + 72) = *(_DWORD *)(v81 + 72);
        v43 = CmpCopyName(v42, (const void **)a2);
        *(_WORD *)(v41 + 72) = v43;
        v44 = a2->m128i_u16[0];
        if ( v43 >= v44 )
          *(_WORD *)(v41 + 2) &= ~0x20u;
        else
          *(_WORD *)(v41 + 2) |= 0x20u;
        v45 = MEMORY[0xFFFFF78000000014];
        *(_QWORD *)(v97 + 4) = MEMORY[0xFFFFF78000000014];
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v92);
        v46 = v98;
        if ( !v98 )
        {
          v47 = CmpDuplicateIndex(v7);
          v48 = v82;
          v8 = v108;
          *(_DWORD *)(v108 + 4LL * v82 + 28) = v47;
          if ( v47 == -1 )
          {
            v17 = -1073741670;
            goto LABEL_112;
          }
          if ( CmpAddSubKeyEx(v7, *(unsigned int *)(v81 + 16), BugCheckParameter3, 0) )
          {
            if ( CmpRemoveSubKey(v7, *(unsigned int *)(v81 + 16), v19) )
            {
              v99 = *(PVOID *)(v16 + 72);
              NameControlBlock = CmpGetNameControlBlock((unsigned __int16 *)a2, 0LL, (char *)&v84);
              *(_QWORD *)(v16 + 72) = NameControlBlock;
              if ( NameControlBlock )
              {
                v50 = BugCheckParameter3;
                if ( (unsigned __int8)CmpUpdateParentForEachSon(v7) )
                {
                  CmpFreeIndexByCell(v7, v86);
                  v51 = *(_QWORD *)(v16 + 64);
                  *(_DWORD *)(v16 + 32) = v50;
                  *(_QWORD *)(v16 + 160) = v45;
                  CmpCleanUpSubKeyInfo(v51);
                  if ( (unsigned __int16)*(_DWORD *)(v108 + 52) < v44 )
                  {
                    *(_WORD *)(v108 + 52) = v44;
                    *(_WORD *)(*(_QWORD *)(v16 + 64) + 168LL) = v44;
                  }
                  v52 = CmpComputeKcbConvKey(v16);
                  if ( v52 != *(_DWORD *)(v16 + 8) )
                  {
                    CmpRemoveKeyHash(*(_QWORD *)(v16 + 24), (_DWORD *)(v16 + 8));
                    v53 = *(_QWORD *)(v16 + 24);
                    *(_DWORD *)(v16 + 8) = v52;
                    CmpInsertKeyHash(v53, v16 + 8);
                  }
                  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v89);
                  v17 = 0;
                  v8 = 0LL;
                  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v88);
                  v3 = 0LL;
                  CmpSearchForOpenSubKeys(v16, 3, v54, 0LL);
                  CmpDereferenceNameControlBlockWithLock((int *)v99);
                  if ( *(_QWORD *)(v16 + 288) )
                    _InterlockedOr64((volatile signed __int64 *)(v16 + 288), 1uLL);
                  v55 = *(void **)(v16 + 192);
                  if ( (unsigned __int64)v55 >= 2 )
                    ExFreePoolWithTag(v55, 0x624E4D43u);
                  *(_QWORD *)(v16 + 192) = (_BYTE)v84 == 1;
                  goto LABEL_34;
                }
              }
            }
          }
          v17 = -1073741670;
LABEL_111:
          v48 = v82;
LABEL_112:
          v64 = v86;
          if ( v86 != -1 )
          {
            v65 = v48;
            v66 = *(unsigned int *)(v8 + 4LL * v48 + 28);
            if ( (_DWORD)v66 != -1 )
              CmpFreeIndexByCell(v7, v66);
            *(_DWORD *)(v8 + 4 * v65 + 28) = v64;
          }
          goto LABEL_116;
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v89);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v88);
        v56 = CmpHashUnicodeComponent(a2);
        v57 = *(_QWORD *)(v16 + 64);
        v58 = v56;
        v59 = v56 + 37 * *(_DWORD *)(v57 + 8);
        v60 = CmpFindKcbInHashEntryByName(v7, v59, v57, (__int64)a2);
        v61 = v60;
        if ( v60 )
        {
          if ( !CmpReferenceKeyControlBlock(v60) )
          {
            v17 = -1073741670;
LABEL_104:
            v8 = 0LL;
            v31 = 0LL;
            goto LABEL_111;
          }
          *(_DWORD *)(v61 + 32) = BugCheckParameter3;
          BugCheckParameter4 = v61;
          CmpRebuildKcbCache(v61);
        }
        else
        {
          v17 = CmpCreateKeyControlBlock(
                  v7,
                  BugCheckParameter3,
                  v57,
                  0LL,
                  0,
                  (unsigned __int16 *)a2,
                  v58,
                  v59,
                  &BugCheckParameter4);
          if ( v17 < 0 )
            goto LABEL_104;
        }
        UnitOfWork = CmpAllocateUnitOfWork();
        v100 = UnitOfWork;
        v63 = UnitOfWork;
        if ( !UnitOfWork )
        {
          v17 = -1073741670;
          goto LABEL_109;
        }
        v74 = BugCheckParameter4;
        CmpTransEnlistUowInKcb(UnitOfWork, BugCheckParameter4);
        v17 = CmpTransEnlistUowInCmTrans(v63, v46);
        if ( v17 >= 0 )
        {
          CmpLockIXLockExclusive(v74 + 240, v63, 0);
          CmpLockIXLockExclusive(v74 + 256, v63, 1);
          v75 = P;
          v76 = v93;
          v77 = v96;
          *(_QWORD *)(v74 + 232) = v46;
          v63[11] = v16;
          v75[11] = v16;
          v76[11] = v74;
          v75[12] = v74;
          *((_DWORD *)v75 + 17) = 10;
          *((_DWORD *)v76 + 17) = 11;
          v63[10] = v75;
          *((_DWORD *)v63 + 17) = 12;
          *((_DWORD *)v63 + 18) = v77 >> 31;
          v17 = CmAddLogForAction((__int64)v76, (ULONG)v76);
          if ( v17 >= 0 )
          {
            LOBYTE(v78) = 1;
            CmpDereferenceKeyControlBlockWithLock(v16, v78);
            LOBYTE(v79) = 1;
            DelistKeyBodyFromKCB(a1, v79);
            *(_QWORD *)(a1 + 8) = v74;
            EnlistKeyBodyWithKCB(a1, 2);
            v8 = 0LL;
            v17 = 0;
LABEL_33:
            v3 = 0LL;
            goto LABEL_34;
          }
        }
LABEL_109:
        v8 = 0LL;
      }
      else
      {
        v17 = -1073741670;
      }
      v31 = 0LL;
      goto LABEL_111;
    }
    v23 = (_DWORD *)(v16 + 240);
    if ( !*(_DWORD *)(v16 + 240) )
    {
      v23 = (_DWORD *)(v16 + 256);
      if ( !*(_DWORD *)(v16 + 256) )
      {
        v25 = *(_QWORD *)(v16 + 64);
        if ( *(_DWORD *)(v25 + 240) )
        {
          v23 = (_DWORD *)(v25 + 240);
        }
        else
        {
          v23 = (_DWORD *)(v25 + 256);
          if ( !*v23 )
            goto LABEL_51;
        }
      }
    }
    v3 = 0LL;
    v17 = CmpSnapshotTxOwnerArray(v23, &v83, &v87);
    if ( v17 < 0 )
      goto LABEL_34;
    CmpLogTransactionAborted(v16, 4u, v24, v83);
    CmpUnlockRegistry();
    v17 = CmpRollbackTransactionArray(v83, v87, 0LL, (char *)&BugCheckParameter3 + 4);
    CmpLockRegistryExclusive();
    if ( v17 < 0 )
      goto LABEL_34;
    v5 = 1;
    v6 = a3;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
  return 3221225865LL;
}
