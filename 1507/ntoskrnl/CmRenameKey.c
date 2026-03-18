/*
 * XREFs of CmRenameKey @ 0x140654994
 * Callers:
 *     NtRenameKey @ 0x140650A88 (NtRenameKey.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140427A00 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpReportNotify @ 0x140429FE8 (CmpReportNotify.c)
 *     CmpLockIXLockExclusive @ 0x140447FF0 (CmpLockIXLockExclusive.c)
 *     CmpRundownUnitOfWork @ 0x1404482CC (CmpRundownUnitOfWork.c)
 *     CmpLockRegistryExclusive @ 0x140448470 (CmpLockRegistryExclusive.c)
 *     CmpCleanUpSubKeyInfo @ 0x140448E64 (CmpCleanUpSubKeyInfo.c)
 *     EnlistKeyBodyWithKCB @ 0x140449DEC (EnlistKeyBodyWithKCB.c)
 *     CmpRemoveSubKey @ 0x14044A21C (CmpRemoveSubKey.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     HvAllocateCell @ 0x14049FC48 (HvAllocateCell.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     CmpCopyName @ 0x1404A1054 (CmpCopyName.c)
 *     CmpNameSize @ 0x1404A109C (CmpNameSize.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmRmIsKCBDeleted @ 0x1404C69A0 (CmRmIsKCBDeleted.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404C87E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1404CA940 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1404CB3D0 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x1404CB480 (CmpCreateKeyControlBlock.c)
 *     CmpReferenceKeyControlBlock @ 0x1404CBD60 (CmpReferenceKeyControlBlock.c)
 *     CmpGetNameControlBlock @ 0x1404CBDC0 (CmpGetNameControlBlock.c)
 *     CmpSearchForOpenSubKeys @ 0x1404ED9B4 (CmpSearchForOpenSubKeys.c)
 *     CmpSearchAddTrans @ 0x1404F0F50 (CmpSearchAddTrans.c)
 *     CmAddLogForAction @ 0x1404F1E20 (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1404F3314 (CmpAllocateUnitOfWork.c)
 *     CmpRemoveKeyHash @ 0x14052B5B0 (CmpRemoveKeyHash.c)
 *     CmpAddSubKeyEx @ 0x1405335D0 (CmpAddSubKeyEx.c)
 *     CmpMarkIndexDirty @ 0x1405451A8 (CmpMarkIndexDirty.c)
 *     CmpComputeKcbConvKey @ 0x140656A24 (CmpComputeKcbConvKey.c)
 *     CmpInsertKeyHash @ 0x140656E58 (CmpInsertKeyHash.c)
 *     DelistKeyBodyFromKCB @ 0x1406570A0 (DelistKeyBodyFromKCB.c)
 *     CmpCheckKeyAccess @ 0x140659298 (CmpCheckKeyAccess.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140659598 (CmpDoAccessCheckOnSubtree.c)
 *     CmpDuplicateIndex @ 0x14065AFC8 (CmpDuplicateIndex.c)
 *     CmpUpdateParentForEachSon @ 0x14065B4C4 (CmpUpdateParentForEachSon.c)
 *     CmpRollbackTransactionArray @ 0x14065CCEC (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x140664768 (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmRenameKey(signed __int64 a1, __m128i *a2, char a3)
{
  char v3; // bl
  __int64 v4; // r12
  ULONG_PTR v5; // rdi
  __int64 v6; // r13
  char v7; // r15
  unsigned __int64 v8; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v10; // ax
  struct _KTHREAD *v11; // rax
  unsigned __int64 v12; // rtt
  char *v13; // r14
  ULONG_PTR v14; // rsi
  __int64 v15; // r9
  int v16; // ebx
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  int v21; // r8d
  int v22; // r9d
  unsigned int v23; // ebx
  ULONG_PTR v24; // rcx
  __int64 v25; // rax
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  __int64 v29; // r14
  _QWORD *v30; // r14
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  char *v34; // r13
  __int64 v35; // rax
  _QWORD *v36; // rdx
  char *v37; // rcx
  struct _KTHREAD *v38; // rax
  struct _KTHREAD *v39; // r15
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rbx
  char *v43; // rbx
  char **v44; // rax
  signed __int32 v45; // eax
  struct _KTHREAD *v46; // rcx
  __int16 v47; // ax
  _QWORD *v48; // r12
  _QWORD *v49; // rcx
  _QWORD *v50; // rax
  struct _KTHREAD *v51; // rax
  struct _KTHREAD *v52; // r15
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // r14
  char **v56; // rax
  signed __int32 v57; // eax
  struct _KTHREAD *v58; // rcx
  __int16 v59; // ax
  __int64 v60; // rax
  __int64 v61; // r15
  __int64 v62; // rax
  int v63; // r15d
  unsigned int v64; // ebx
  _WORD *v65; // rbx
  int v66; // r14d
  unsigned int v67; // r14d
  __int64 v68; // rbx
  _BYTE *v69; // rcx
  unsigned __int16 v70; // ax
  unsigned int v71; // r12d
  __int64 v72; // rbx
  int v73; // eax
  __int64 v74; // rdx
  _WORD *v75; // r14
  unsigned int v76; // r15d
  __int64 v77; // r8
  __int64 v78; // r9
  PVOID v79; // rdi
  PVOID v80; // rdi
  char *v81; // rdi
  unsigned __int64 v82; // rtt
  struct _KTHREAD *v83; // rcx
  __int16 v84; // ax
  char *NameControlBlock; // rax
  _WORD *v86; // r14
  unsigned int v87; // r15d
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rcx
  int v93; // r14d
  __int64 v94; // rcx
  char v95; // r8
  void *v96; // rcx
  ULONG_PTR v97; // r14
  _QWORD *UnitOfWork; // rax
  char *v99; // r12
  _QWORD *v100; // rcx
  _QWORD *v101; // rdx
  struct _KTHREAD *v102; // rax
  struct _KTHREAD *v103; // r14
  __int64 v104; // r9
  __int64 v105; // rax
  __int64 v106; // rbx
  char *v107; // rax
  char **v108; // rcx
  signed __int32 v109; // eax
  struct _KTHREAD *v110; // rcx
  __int16 v111; // ax
  ULONG_PTR v112; // r14
  char *v113; // rbx
  _QWORD *v114; // rcx
  _QWORD *v115; // rax
  ULONG v116; // edx
  __int64 v117; // rdx
  unsigned __int64 v118; // rtt
  struct _KTHREAD *v119; // rcx
  __int16 v120; // ax
  char v121; // [rsp+28h] [rbp-99h]
  __int64 v122; // [rsp+48h] [rbp-79h]
  int v123; // [rsp+50h] [rbp-71h]
  unsigned int v124; // [rsp+54h] [rbp-6Dh] BYREF
  int v125; // [rsp+58h] [rbp-69h] BYREF
  unsigned int BugCheckParameter3; // [rsp+5Ch] [rbp-65h]
  unsigned int BugCheckParameter3_4; // [rsp+60h] [rbp-61h]
  int v128; // [rsp+64h] [rbp-5Dh] BYREF
  int v129; // [rsp+68h] [rbp-59h] BYREF
  int v130; // [rsp+6Ch] [rbp-55h] BYREF
  ULONG_PTR v131; // [rsp+70h] [rbp-51h]
  char *v132; // [rsp+78h] [rbp-49h] BYREF
  __int64 v133; // [rsp+80h] [rbp-41h] BYREF
  PVOID v134; // [rsp+88h] [rbp-39h]
  int v135; // [rsp+90h] [rbp-31h] BYREF
  PVOID P; // [rsp+98h] [rbp-29h]
  __int64 v137; // [rsp+A0h] [rbp-21h]
  unsigned int v138; // [rsp+A8h] [rbp-19h] BYREF
  PVOID v139; // [rsp+B0h] [rbp-11h]
  char *KeyControlBlock; // [rsp+B8h] [rbp-9h]
  __int64 v141; // [rsp+C0h] [rbp-1h] BYREF
  PVOID v142; // [rsp+C8h] [rbp+7h]
  char v146; // [rsp+140h] [rbp+7Fh] BYREF

  v3 = a3;
  v122 = 0LL;
  v129 = -1;
  v4 = a1;
  v128 = -1;
  v5 = 0LL;
  LODWORD(v131) = -1;
  v6 = 0LL;
  BugCheckParameter3_4 = -1;
  v7 = 0;
  v135 = -1;
  v125 = -1;
  v141 = 0LL;
  v139 = 0LL;
  P = 0LL;
  v142 = 0LL;
  v134 = 0LL;
  KeyControlBlock = 0LL;
  v130 = 0;
  while ( 1 )
  {
    if ( v7 )
    {
      _m_prefetchw(&CmpShutdownRundown);
      v8 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v8 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpShutdownRundown,
                   (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                   CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      CurrentThread = KeGetCurrentThread();
      v10 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v10;
      if ( !v10
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    _m_prefetchw(&CmpShutdownRundown);
    v12 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v12 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
      && !ExfAcquireRundownProtection(&CmpShutdownRundown) )
    {
      break;
    }
    v7 = 1;
    v132 = 0LL;
    v13 = 0LL;
    v14 = *(_QWORD *)(v4 + 8);
    if ( CmRmIsKCBDeleted(v14, 0LL) )
      goto LABEL_177;
    v15 = *(_QWORD *)(v4 + 56);
    if ( v15 || *(_QWORD *)(v4 + 64) )
    {
      v16 = CmpSearchAddTrans(v4, 0LL, 0LL, v15, *(__int128 **)(v4 + 64), 0, &v132);
      if ( v16 < 0 )
        goto LABEL_179;
      v13 = v132;
      v3 = a3;
    }
    if ( CmRmIsKCBDeleted(v14, (__int64)v13) )
    {
LABEL_177:
      v16 = (*(_BYTE *)(v4 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_176;
    }
    v5 = *(_QWORD *)(v14 + 32);
    LODWORD(v17) = *(_DWORD *)(v14 + 40) >> 31;
    BugCheckParameter3 = *(_DWORD *)(v14 + 40);
    v123 = v17;
    if ( v5 == CmpMasterHive
      || (v18 = *(_QWORD *)(v14 + 72), v19 = 0LL, !v18)
      || (v20 = *(_QWORD *)(v18 + 32), v20 == CmpMasterHive) )
    {
      v16 = -1073741790;
LABEL_176:
      v29 = 0LL;
      goto LABEL_180;
    }
    if ( v13 && !CmpEnableTransactedRename )
    {
      v16 = -1073741822;
      v29 = 0LL;
      goto LABEL_180;
    }
    LOBYTE(v19) = v3;
    v16 = CmpCheckKeyAccess(v20, *(unsigned int *)(v18 + 40), v19, 4LL);
    if ( v16 < 0 || (LOBYTE(v21) = a3, v16 = CmpDoAccessCheckOnSubtree(v5, BugCheckParameter3, v21, v22, v121), v16 < 0) )
    {
LABEL_179:
      v29 = 0LL;
LABEL_180:
      _m_prefetchw(&CmpShutdownRundown);
      v118 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v118 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CmpShutdownRundown,
                     (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                     CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v119 = KeGetCurrentThread();
      v120 = v119->KernelApcDisable + 1;
      v119->KernelApcDisable = v120;
      if ( !v120
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v119->ApcState.ApcListHead[0].Flink != &v119->152
        && !v119->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( v29 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v129);
      if ( v6 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v128);
      return (unsigned int)v16;
    }
    v23 = BugCheckParameter3;
    CmpReportNotify(v14, v5, BugCheckParameter3, (__int64)v13, 1, 0LL);
    if ( v13 )
    {
      v30 = (_QWORD *)(v14 + 200);
      if ( (_QWORD *)*v30 != v30 )
      {
        v16 = -1072103423;
        v29 = 0LL;
        goto LABEL_180;
      }
      P = CmpAllocateUnitOfWork();
      if ( P && (v134 = CmpAllocateUnitOfWork()) != 0LL )
      {
        v34 = (char *)P;
        v35 = *(_QWORD *)(v14 + 72) + 200LL;
        v36 = *(_QWORD **)(*(_QWORD *)(v14 + 72) + 208LL);
        v37 = (char *)P + 32;
        *((_QWORD *)P + 4) = v35;
        *((_QWORD *)v37 + 1) = v36;
        if ( *v36 != v35 )
          __fastfail(3u);
        *v36 = v37;
        *(_QWORD *)(v35 + 8) = v37;
        CmpReferenceKeyControlBlock(*(_QWORD *)(v14 + 72));
        *((_QWORD *)v34 + 6) = *(_QWORD *)(v14 + 72);
        v38 = KeGetCurrentThread();
        --v38->KernelApcDisable;
        v39 = KeGetCurrentThread();
        v41 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, v40);
        v42 = v41;
        if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0) )
          ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v41);
        if ( v42 )
          *(_BYTE *)(v42 + 26) |= 1u;
        qword_14034D768 = (__int64)v39;
        v43 = v132 + 16;
        v44 = (char **)*((_QWORD *)v132 + 3);
        *(_QWORD *)v34 = v132 + 16;
        *((_QWORD *)v34 + 1) = v44;
        if ( *v44 != v43 )
          __fastfail(3u);
        *v44 = v34;
        *((_QWORD *)v43 + 1) = v34;
        qword_14034D768 = 0LL;
        v45 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
        if ( v45 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v45);
        KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
        v46 = KeGetCurrentThread();
        v47 = v46->KernelApcDisable + 1;
        v46->KernelApcDisable = v47;
        if ( !v47
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v46->ApcState.ApcListHead[0].Flink != &v46->152
          && !v46->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v48 = v134;
        *((_QWORD *)v34 + 7) = v132;
        v49 = *(_QWORD **)(v14 + 208);
        v50 = v48 + 4;
        v48[4] = v30;
        v48[5] = v49;
        if ( (_QWORD *)*v49 != v30 )
          __fastfail(3u);
        *v49 = v50;
        *(_QWORD *)(v14 + 208) = v50;
        CmpReferenceKeyControlBlock(v14);
        v48[6] = v14;
        v51 = KeGetCurrentThread();
        --v51->KernelApcDisable;
        v52 = KeGetCurrentThread();
        v54 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, v53);
        v55 = v54;
        if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0) )
          ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v54);
        if ( v55 )
          *(_BYTE *)(v55 + 26) |= 1u;
        qword_14034D768 = (__int64)v52;
        v56 = (char **)*((_QWORD *)v43 + 1);
        *v48 = v43;
        v48[1] = v56;
        if ( *v56 != v43 )
          __fastfail(3u);
        *v56 = (char *)v48;
        *((_QWORD *)v43 + 1) = v48;
        qword_14034D768 = 0LL;
        v57 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
        if ( v57 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v57);
        KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
        v58 = KeGetCurrentThread();
        v59 = v58->KernelApcDisable + 1;
        v58->KernelApcDisable = v59;
        if ( !v59
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v58->ApcState.ApcListHead[0].Flink != &v58->152
          && !v58->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v13 = v132;
        v48[7] = v132;
        if ( !CmpLockIXLockExclusive(*(_QWORD *)(v14 + 72) + 240LL, v34, 0)
          || !CmpLockIXLockExclusive(*(_QWORD *)(v14 + 72) + 256LL, v34, 1)
          || !CmpLockIXLockExclusive(v14 + 240, v48, 0)
          || !CmpLockIXLockExclusive(v14 + 256, v48, 1) )
        {
          v16 = -1072103423;
          goto LABEL_124;
        }
        LODWORD(v17) = 1;
        v123 = 1;
        v23 = BugCheckParameter3;
LABEL_76:
        v60 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(v5, v23, &v129);
        v122 = v60;
        v61 = v60;
        if ( !v60 )
        {
          v16 = -1073741670;
          goto LABEL_123;
        }
        CmpUpdateKeyNodeAccessBits(v5, v60, v23);
        v62 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(v5, *(unsigned int *)(v61 + 16), &v128);
        v6 = v62;
        if ( !v62 )
        {
          v16 = -1073741670;
LABEL_115:
          if ( v61 )
            (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v129);
          if ( v6 )
            (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v128);
          if ( (_DWORD)v131 != -1 )
            HvFreeCell(v5, (unsigned int)v131, v32, v33);
          if ( v139 )
            *(_QWORD *)(v14 + 80) = v139;
LABEL_123:
          v48 = v134;
LABEL_124:
          v79 = P;
          if ( P )
          {
            CmpRundownUnitOfWork(P, v31, v32, v33);
            ExFreePoolWithTag(v79, 0x77554D43u);
          }
          v80 = v142;
          if ( v142 )
          {
            CmpRundownUnitOfWork(v142, v31, v32, v33);
            ExFreePoolWithTag(v80, 0x77554D43u);
          }
          if ( v48 )
          {
            CmpRundownUnitOfWork(v48, v31, v32, v33);
            ExFreePoolWithTag(v48, 0x77554D43u);
          }
          v81 = KeyControlBlock;
          if ( KeyControlBlock )
          {
            CmpDereferenceKeyControlBlockWithLock((ULONG_PTR)KeyControlBlock, 1LL, v32, v33);
            CmpUnlockKcb(v81);
          }
          _m_prefetchw(&CmpShutdownRundown);
          v82 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v82 != _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&CmpShutdownRundown,
                        (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                        CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
            ExfReleaseRundownProtection(&CmpShutdownRundown);
          v83 = KeGetCurrentThread();
          v84 = v83->KernelApcDisable + 1;
          v83->KernelApcDisable = v84;
          if ( !v84
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v83->ApcState.ApcListHead[0].Flink != &v83->152
            && !v83->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          return (unsigned int)v16;
        }
        CmpUpdateKeyNodeAccessBits(v5, v62, *(_DWORD *)(v61 + 16));
        CmpFindSubKeyByNameWithStatus(v5, v6, (unsigned __int16 *)a2, &v138);
        if ( v138 != -1 )
        {
          v16 = -1073741535;
          goto LABEL_115;
        }
        v63 = (unsigned __int16)CmpNameSize((unsigned __int16 *)a2);
        if ( !v13 )
        {
          v29 = v122;
          if ( !HvpMarkCellDirty(v5, *(unsigned int *)(v122 + 16), 0, 0LL)
            || !CmpMarkIndexDirty(v5, *(_DWORD *)(v122 + 16), v23)
            || !HvpMarkCellDirty(v5, v23, 0, 0LL)
            || (v64 = *(_DWORD *)(v6 + 4LL * (int)v17 + 28), BugCheckParameter3_4 = v64, v64 == -1)
            || !HvpMarkCellDirty(v5, v64, 0, 0LL) )
          {
            v16 = -1073741443;
            goto LABEL_180;
          }
          v65 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(v5, v64, &v125);
          if ( !v65 )
          {
            v16 = -1073741670;
            goto LABEL_180;
          }
          if ( *v65 == 26994 )
          {
            v66 = 0;
            if ( v65[1] )
            {
              while ( HvpMarkCellDirty(v5, *(unsigned int *)&v65[2 * v66 + 2], 0, 0LL) )
              {
                if ( ++v66 >= (unsigned int)(unsigned __int16)v65[1] )
                  goto LABEL_95;
              }
              (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v125);
              goto LABEL_100;
            }
          }
LABEL_95:
          (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v125);
        }
        LODWORD(v131) = HvAllocateCell(v5, v63 + 76, (unsigned int)v17, (__int64)&v141, &v135);
        v67 = v131;
        if ( (_DWORD)v131 == -1 )
        {
LABEL_100:
          v29 = v122;
          v16 = -1073741443;
          goto LABEL_180;
        }
        v68 = v141;
        v61 = v122;
        v69 = (_BYTE *)(v141 + 76);
        *(_OWORD *)v141 = *(_OWORD *)v122;
        *(_OWORD *)(v68 + 16) = *(_OWORD *)(v122 + 16);
        *(_OWORD *)(v68 + 32) = *(_OWORD *)(v122 + 32);
        *(_OWORD *)(v68 + 48) = *(_OWORD *)(v122 + 48);
        *(_QWORD *)(v68 + 64) = *(_QWORD *)(v122 + 64);
        *(_DWORD *)(v68 + 72) = *(_DWORD *)(v122 + 72);
        v70 = CmpCopyName(v69, (const void **)a2);
        *(_WORD *)(v68 + 72) = v70;
        v71 = a2->m128i_u16[0];
        LODWORD(v137) = v71;
        if ( v70 >= v71 )
          *(_WORD *)(v68 + 2) &= ~0x20u;
        else
          *(_WORD *)(v68 + 2) |= 0x20u;
        v72 = MEMORY[0xFFFFF78000000014];
        *(_QWORD *)(v141 + 4) = MEMORY[0xFFFFF78000000014];
        (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v135);
        if ( v132 )
        {
          (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v128);
          v6 = 0LL;
          (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v129);
          v61 = 0LL;
          v122 = 0LL;
          KeyControlBlock = (char *)CmpCreateKeyControlBlock(v5, v67, *(_QWORD *)(v14 + 72), 0, a2);
          v97 = (ULONG_PTR)KeyControlBlock;
          if ( !KeyControlBlock )
            goto LABEL_104;
          UnitOfWork = CmpAllocateUnitOfWork();
          v142 = UnitOfWork;
          v99 = (char *)UnitOfWork;
          if ( !UnitOfWork )
            goto LABEL_104;
          v100 = UnitOfWork + 4;
          v101 = *(_QWORD **)(v97 + 208);
          UnitOfWork[4] = v97 + 200;
          UnitOfWork[5] = v101;
          if ( *v101 != v97 + 200 )
            __fastfail(3u);
          *v101 = v100;
          *(_QWORD *)(v97 + 208) = v100;
          CmpReferenceKeyControlBlock(v97);
          *((_QWORD *)v99 + 6) = v97;
          v102 = KeGetCurrentThread();
          --v102->KernelApcDisable;
          v103 = KeGetCurrentThread();
          v105 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, v104);
          v106 = v105;
          if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0) )
            ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v105);
          if ( v106 )
            *(_BYTE *)(v106 + 26) |= 1u;
          qword_14034D768 = (__int64)v103;
          v107 = v132 + 16;
          v108 = (char **)*((_QWORD *)v132 + 3);
          *(_QWORD *)v99 = v132 + 16;
          *((_QWORD *)v99 + 1) = v108;
          if ( *v108 != v107 )
            __fastfail(3u);
          *v108 = v99;
          *((_QWORD *)v107 + 1) = v99;
          qword_14034D768 = 0LL;
          v109 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
          if ( v109 )
            ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v109);
          KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
          v110 = KeGetCurrentThread();
          v111 = v110->KernelApcDisable + 1;
          v110->KernelApcDisable = v111;
          if ( !v111
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v110->ApcState.ApcListHead[0].Flink != &v110->152
            && !v110->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          v112 = (ULONG_PTR)KeyControlBlock;
          v113 = v132;
          *((_QWORD *)v99 + 7) = v132;
          CmpLockIXLockExclusive(v112 + 240, v99, 0);
          CmpLockIXLockExclusive(v112 + 256, v99, 1);
          v114 = P;
          v115 = v134;
          *(_QWORD *)(v112 + 232) = v113;
          *((_QWORD *)v99 + 10) = v14;
          v114[10] = v14;
          v115[10] = v112;
          v114[11] = v112;
          *((_DWORD *)v114 + 17) = 10;
          LODWORD(v114) = BugCheckParameter3 >> 31;
          *((_DWORD *)v115 + 17) = 11;
          *((_DWORD *)v99 + 18) = (_DWORD)v114;
          *((_DWORD *)v99 + 17) = 12;
          v16 = CmAddLogForAction((__int64)v115, v116);
          if ( v16 >= 0 )
          {
            LOBYTE(v31) = 1;
            CmpDereferenceKeyControlBlockWithLock(v14, v31, v32, v33);
            LOBYTE(v117) = 1;
            DelistKeyBodyFromKCB(a1, v117);
            *(_QWORD *)(a1 + 8) = v112;
            EnlistKeyBodyWithKCB(a1, 2);
            CmpUnlockKcb((char *)v112);
            v29 = 0LL;
LABEL_172:
            v16 = 0;
            goto LABEL_180;
          }
        }
        else
        {
          v73 = CmpDuplicateIndex(v5);
          *(_DWORD *)(v6 + 4LL * v123 + 28) = v73;
          if ( v73 != -1 )
          {
            if ( CmpAddSubKeyEx(v5, *(_DWORD *)(v122 + 16), v131, 0) )
            {
              if ( CmpRemoveSubKey(v5, *(_DWORD *)(v122 + 16), BugCheckParameter3) )
              {
                v139 = *(PVOID *)(v14 + 80);
                NameControlBlock = CmpGetNameControlBlock((unsigned __int16 *)a2, &v146);
                *(_QWORD *)(v14 + 80) = NameControlBlock;
                if ( NameControlBlock )
                {
                  if ( (unsigned __int8)CmpUpdateParentForEachSon(v5) )
                  {
                    v86 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(
                                     v5,
                                     BugCheckParameter3_4,
                                     &v125);
                    if ( v86 )
                    {
                      if ( *v86 == 26994 )
                      {
                        v87 = 0;
                        if ( v86[1] )
                        {
                          do
                            HvFreeCell(v5, *(unsigned int *)&v86[2 * v87++ + 2], v32, v33);
                          while ( v87 < (unsigned __int16)v86[1] );
                          v71 = v137;
                        }
                      }
                      (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v125);
                      HvFreeCell(v5, BugCheckParameter3_4, v88, v89);
                      HvFreeCell(v5, BugCheckParameter3, v90, v91);
                      v92 = *(_QWORD *)(v14 + 72);
                      *(_DWORD *)(v14 + 40) = v131;
                      *(_QWORD *)(v14 + 168) = v72;
                      CmpCleanUpSubKeyInfo(v92);
                      if ( (unsigned __int16)*(_DWORD *)(v6 + 52) < v71 )
                      {
                        *(_WORD *)(v6 + 52) = v71;
                        *(_WORD *)(*(_QWORD *)(v14 + 72) + 176LL) = v71;
                      }
                      v93 = CmpComputeKcbConvKey(v14);
                      if ( v93 != *(_DWORD *)(v14 + 16) )
                      {
                        CmpRemoveKeyHash(*(_QWORD *)(v14 + 32), (_DWORD *)(v14 + 16));
                        v94 = *(_QWORD *)(v14 + 32);
                        *(_DWORD *)(v14 + 16) = v93;
                        CmpInsertKeyHash(v94, v14 + 16, 0LL);
                      }
                      (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v128);
                      v6 = 0LL;
                      (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v129);
                      v29 = 0LL;
                      CmpSearchForOpenSubKeys(v14, 3, v95, 0LL);
                      CmpDereferenceNameControlBlockWithLock((char *)v139);
                      v96 = *(void **)(v14 + 192);
                      if ( (unsigned __int64)v96 >= 2 )
                        ExFreePoolWithTag(v96, 0x624E4D43u);
                      *(_QWORD *)(v14 + 192) = v146 == 1;
                      goto LABEL_172;
                    }
                  }
                }
              }
            }
          }
LABEL_104:
          v16 = -1073741670;
        }
        LODWORD(v17) = v123;
      }
      else
      {
        v16 = -1073741670;
        v61 = 0LL;
      }
      if ( BugCheckParameter3_4 != -1 )
      {
        v17 = (int)v17;
        v137 = v17;
        v74 = *(unsigned int *)(v6 + 4LL * (int)v17 + 28);
        if ( (_DWORD)v74 != -1 )
        {
          v75 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(v5 + 8))(v5, v74, &v125);
          if ( v75 )
          {
            if ( *v75 == 26994 )
            {
              v76 = 0;
              if ( v75[1] )
              {
                do
                  HvFreeCell(v5, *(unsigned int *)&v75[2 * v76++ + 2], v32, v33);
                while ( v76 < (unsigned __int16)v75[1] );
                v17 = v137;
              }
            }
            (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v125);
            HvFreeCell(v5, *(unsigned int *)(v6 + 4 * v17 + 28), v77, v78);
          }
        }
        v31 = BugCheckParameter3_4;
        v61 = v122;
        *(_DWORD *)(v6 + 4 * v17 + 28) = BugCheckParameter3_4;
      }
      goto LABEL_115;
    }
    v24 = v14 + 240;
    if ( !*(_DWORD *)(v14 + 240) )
    {
      v24 = v14 + 256;
      if ( !*(_DWORD *)(v14 + 256) )
      {
        v25 = *(_QWORD *)(v14 + 72);
        v24 = v25 + 240;
        if ( !*(_DWORD *)(v25 + 240) )
        {
          v24 = v25 + 256;
          if ( !*(_DWORD *)(v25 + 256) )
            goto LABEL_76;
        }
      }
    }
    v16 = CmpSnapshotTxOwnerArray(v24, &v124, &v133);
    if ( v16 < 0
      || (CmpUnlockRegistry(),
          v16 = CmpRollbackTransactionArray(v124, v133, 0LL, &v130),
          CmpLockRegistryExclusive(),
          v16 < 0) )
    {
      v29 = 0LL;
      goto LABEL_180;
    }
    v3 = a3;
    v4 = a1;
  }
  v26 = KeGetCurrentThread();
  v27 = v26->KernelApcDisable + 1;
  v26->KernelApcDisable = v27;
  if ( !v27
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
    && !v26->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return 3221225865LL;
}
