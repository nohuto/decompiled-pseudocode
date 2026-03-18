/*
 * XREFs of MiDeleteVad @ 0x14008B8E0
 * Callers:
 *     MiFreeVadRange @ 0x1400F1340 (MiFreeVadRange.c)
 *     MmCleanProcessAddressSpace @ 0x1404B2FA4 (MmCleanProcessAddressSpace.c)
 *     MiUnmapVad @ 0x1404B7570 (MiUnmapVad.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 *     MmDeleteTeb @ 0x14053E174 (MmDeleteTeb.c)
 *     MiMapViewOfPhysicalSection @ 0x1405B2C58 (MiMapViewOfPhysicalSection.c)
 *     MiDeleteAllPartialCloneVads @ 0x1406AA5D0 (MiDeleteAllPartialCloneVads.c)
 * Callees:
 *     MiDereferenceControlArea @ 0x140025CDC (MiDereferenceControlArea.c)
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     MmIsSessionAddress @ 0x14004ED20 (MmIsSessionAddress.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     MiDecrementSubsections @ 0x140054288 (MiDecrementSubsections.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiCheckControlArea @ 0x14008B090 (MiCheckControlArea.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14008B640 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiFinishVadDeletion @ 0x14008C870 (MiFinishVadDeletion.c)
 *     RtlAvlRemoveNode @ 0x14008CBF0 (RtlAvlRemoveNode.c)
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 *     MiAgeWorkingSet @ 0x140095760 (MiAgeWorkingSet.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 *     MiEmptyPageAccessLog @ 0x1400D71E0 (MiEmptyPageAccessLog.c)
 *     MiLockAddressSpaceToo @ 0x1400F13C4 (MiLockAddressSpaceToo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeAbPostReleaseEx @ 0x1400F49CC (KeAbPostReleaseEx.c)
 *     MiReduceWs @ 0x14012F17C (MiReduceWs.c)
 *     MiDereferenceExtendInfo @ 0x140133614 (MiDereferenceExtendInfo.c)
 *     MiDeletePhysmemVad @ 0x140138DDC (MiDeletePhysmemVad.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14017E7A0 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiDereferencePerSessionProtos @ 0x14021BF98 (MiDereferencePerSessionProtos.c)
 *     MiDeletePageTablesForPhysicalRange @ 0x1402244DC (MiDeletePageTablesForPhysicalRange.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiFreeLargePages @ 0x14022F190 (MiFreeLargePages.c)
 *     MiUnmapLargeUserPages @ 0x14022FBF4 (MiUnmapLargeUserPages.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiRemoveSharedCommitNode @ 0x1404B7A60 (MiRemoveSharedCommitNode.c)
 *     MiAweViewRemover @ 0x1406A5CE0 (MiAweViewRemover.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x1406A6148 (MiRemoveUserPhysicalPagesVad.c)
 *     MiFreeLargePageView @ 0x1406AA134 (MiFreeLargePageView.c)
 */

void __fastcall MiDeleteVad(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // r13
  _KPROCESS *Process; // r14
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  bool v10; // zf
  void *v11; // rcx
  int v12; // edi
  int v13; // ecx
  __int64 v14; // rcx
  __int16 *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  volatile signed __int32 *v18; // r12
  unsigned __int8 CurrentIrql; // bl
  unsigned int v20; // ebx
  signed __int32 i; // edx
  int v22; // edx
  int v23; // ecx
  int v24; // r14d
  __int64 v25; // rcx
  ULONG_PTR v26; // rsi
  struct _KTHREAD *v27; // rbx
  char *v28; // rdi
  struct _KTHREAD *v29; // rbx
  unsigned __int8 v30; // r9
  int v31; // r8d
  __int64 *v32; // rax
  int v33; // r8d
  void *v34; // rcx
  int v35; // ecx
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned int AbEntrySummary; // edx
  __int64 v38; // rcx
  int SessionId; // eax
  __int16 v40; // ax
  unsigned __int8 v41; // al
  unsigned int v42; // edx
  __int64 v43; // rcx
  int v44; // eax
  __int16 v45; // ax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int16 v49; // ax
  __int16 v50; // ax
  __int64 v51; // rdi
  unsigned __int8 v52; // di
  unsigned int v53; // ebx
  signed __int32 j; // edx
  unsigned __int64 v55; // rax
  __int64 *v56; // rsi
  __int64 v57; // r12
  __int64 v58; // r14
  __int64 v59; // r11
  unsigned __int64 *v60; // rdx
  _KPROCESS *v61; // rcx
  unsigned __int64 v62; // rax
  unsigned int v63; // ebx
  unsigned __int64 *v64; // rdi
  unsigned __int64 v65; // r10
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // rax
  unsigned int *v69; // r15
  PVOID v70; // rax
  __int64 k; // rax
  unsigned __int64 m; // rsi
  _QWORD **v73; // rdi
  PVOID v74; // rax
  _QWORD *n; // rax
  PVOID *ii; // rdi
  int v77; // eax
  char v78; // al
  __int16 *VmPartition; // rax
  unsigned __int8 v80; // bl
  char v81; // al
  __int64 v82; // r8
  __int16 v83; // ax
  __int64 v84; // rax
  unsigned __int64 v85; // rcx
  unsigned int v86; // eax
  __int64 v87; // rcx
  _QWORD *v88; // r12
  __int64 v89; // r14
  struct _KTHREAD *v90; // rax
  ULONG_PTR v91; // r15
  struct _KTHREAD *v92; // r14
  unsigned __int8 v93; // al
  unsigned int v94; // edx
  __int64 v95; // rcx
  int v96; // eax
  __int16 v97; // ax
  __int64 v98; // rcx
  _QWORD *v99; // rax
  struct _KTHREAD *v100; // r14
  __int64 v101; // rcx
  __int16 v102; // ax
  __int64 v103; // rdx
  unsigned __int64 v104; // rbx
  __int16 *v105; // rdi
  __int64 v106; // rbx
  volatile signed __int32 *v107; // rdi
  unsigned __int8 v108; // si
  unsigned int v109; // ebx
  signed __int32 jj; // edx
  __int64 v111; // [rsp+30h] [rbp-99h]
  unsigned __int8 v112; // [rsp+38h] [rbp-91h]
  BOOL v113; // [rsp+40h] [rbp-89h]
  __int64 v114; // [rsp+48h] [rbp-81h]
  BOOL v115; // [rsp+50h] [rbp-79h]
  BOOL v116; // [rsp+54h] [rbp-75h]
  BOOL v117; // [rsp+58h] [rbp-71h]
  __int64 v118; // [rsp+60h] [rbp-69h]
  int v119; // [rsp+68h] [rbp-61h]
  __int64 v120; // [rsp+70h] [rbp-59h]
  __int64 v121; // [rsp+70h] [rbp-59h]
  __int64 v122; // [rsp+78h] [rbp-51h] BYREF
  __int64 v123; // [rsp+80h] [rbp-49h]
  unsigned __int64 v124; // [rsp+88h] [rbp-41h]
  PVOID P; // [rsp+90h] [rbp-39h]
  __int64 v126; // [rsp+98h] [rbp-31h] BYREF
  unsigned __int64 v127; // [rsp+A0h] [rbp-29h]
  __int64 v128; // [rsp+A8h] [rbp-21h]
  __int64 v129; // [rsp+B0h] [rbp-19h]
  __int64 v130; // [rsp+B8h] [rbp-11h] BYREF
  __int64 v131; // [rsp+C0h] [rbp-9h] BYREF
  int v132; // [rsp+C8h] [rbp-1h]
  int v133; // [rsp+CCh] [rbp+3h]
  int v134; // [rsp+D0h] [rbp+7h]
  char v135; // [rsp+D8h] [rbp+Fh] BYREF
  char v136; // [rsp+E8h] [rbp+1Fh] BYREF
  void *retaddr; // [rsp+128h] [rbp+5Fh]

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  P = (PVOID)a1;
  v126 = 0LL;
  v127 = 0LL;
  Process = CurrentThread->ApcState.Process;
  v7 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  v128 = 0LL;
  v129 = 0LL;
  v8 = (*(unsigned int *)(a1 + 24) | v7) << 12;
  v9 = ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF;
  v131 = 0LL;
  v10 = (*(_DWORD *)(a1 + 48) & 0x8000) == 0;
  v120 = (__int64)CurrentThread;
  v111 = (__int64)Process;
  v130 = 0LL;
  v118 = 0LL;
  v115 = 0;
  v116 = 0;
  v117 = 0;
  v113 = 0;
  v119 = 0;
  v114 = 0LL;
  v124 = v8;
  v123 = v9;
  if ( v10 )
  {
    v11 = *(void **)(a1 + 128);
    if ( v11 )
      ObfDereferenceObjectWithTag(v11, 0x746C6644u);
  }
  v12 = a2 & 0x40000000;
  if ( (a2 & 0x40000000) != 0 )
  {
    v13 = *(_DWORD *)(a1 + 48);
    if ( (v13 & 0x8000) != 0 )
    {
      if ( (v13 & 7) == 5 )
      {
LABEL_7:
        v14 = MiFreeLargePageView(Process, a1, 1LL);
        v127 = v14;
        goto LABEL_11;
      }
    }
    else if ( (*(_BYTE *)(a1 + 67) & 1) != 0 && (v13 & 7) == 2 )
    {
      goto LABEL_7;
    }
    v14 = v127;
LABEL_11:
    if ( v14 )
    {
      v15 = MiPartitionIdToPointer(WORD2(Process[1].SecurePid));
      MiReturnCommit(v15, v16);
      v17 = *(unsigned int *)(a1 + 52);
      LODWORD(v17) = v17 & 0x7FFFFFFF;
      v127 = v17 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
    }
  }
  if ( (*(_BYTE *)(a1 + 48) & 7) == 3 )
  {
    MiAweViewRemover(Process, a1);
    MiRemoveUserPhysicalPagesVad(a1);
  }
  --CurrentThread->SpecialApcDisable;
  --CurrentThread->SpecialApcDisable;
  v18 = (volatile signed __int32 *)&Process[1].IdealNode[8];
  CurrentIrql = KeGetCurrentIrql();
  v112 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&Process[1].IdealNode[8]);
  }
  else
  {
    v20 = 0;
    if ( _interlockedbittestandset(v18, 0x1Fu) )
      v20 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)&Process[1].IdealNode[8]);
    for ( i = *v18; (*v18 & 0xBFFFFFFF) != 0x80000000; i = *v18 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v18, i | 0x40000000, i);
      if ( (++v20 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v20);
    }
    CurrentIrql = v112;
  }
  *(_DWORD *)(a1 + 48) |= 0x80000000;
  v22 = *(_DWORD *)(a1 + 48);
  v23 = v22 & 7;
  if ( v23 == 3 )
  {
    MiDeletePageTablesForPhysicalRange(a1);
    goto LABEL_30;
  }
  if ( (v22 & 0x8000) != 0 )
  {
    if ( v23 != 1 )
    {
      if ( !v12 )
      {
        if ( v23 == 5 )
          v118 = MiUnmapLargeUserPages(a1);
        v31 = 0;
        if ( (*(_BYTE *)(a1 + 48) & 7) == 6 )
          v31 = 8;
        MiDeleteVirtualAddresses(v124, v123, v31, CurrentIrql, (__int64)&v126);
      }
      goto LABEL_30;
    }
    goto LABEL_53;
  }
  if ( v23 == 1 )
  {
LABEL_53:
    v32 = *(__int64 **)(a1 + 72);
    if ( v32 )
      v114 = *v32;
    MiDeletePhysmemVad(a1);
    goto LABEL_30;
  }
  v114 = **(_QWORD **)(a1 + 72);
  if ( v23 != 2 )
  {
    if ( *(_QWORD *)(**(_QWORD **)(a1 + 72) + 64LL) )
    {
      v117 = ((((unsigned __int8)v22 >> 3) - 4) & 0xFFFFFFFD) == 0;
      MiGetProtoPteAddress(
        a1,
        *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32),
        1LL,
        &v130);
      MiGetProtoPteAddress(
        a1,
        *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
        1LL,
        &v131);
    }
    goto LABEL_63;
  }
  if ( (*(_BYTE *)(a1 + 67) & 1) == 0 )
  {
LABEL_63:
    if ( (*(_BYTE *)(a1 + 48) & 7) == 7 )
    {
      v118 = MiUnmapLargeUserPages(a1);
    }
    else
    {
      v33 = 2;
      if ( a2 < 0 )
        v33 = 3;
      if ( (a2 & 1) != 0 )
        v33 |= 4u;
      MiDeleteVirtualAddresses(v124, v123, v33, CurrentIrql, (__int64)&v126);
      v34 = *(void **)&Process[1].IdealNode[16];
      if ( v34 )
      {
        MiEmptyPageAccessLog(v34);
        *(_QWORD *)&Process[1].IdealNode[16] = 0LL;
      }
    }
    v115 = *(__int64 *)(a1 + 120) < 0;
    v35 = *(_DWORD *)(a1 + 48) & 7;
    if ( v35 == 2 )
      v116 = (*(_DWORD *)(v114 + 56) & 0x4000000) != 0;
    if ( *(_QWORD *)(a1 + 72) )
      v113 = v35 != 1;
    goto LABEL_30;
  }
  if ( !v12 )
    v118 = MiUnmapLargeUserPages(a1);
  v113 = 1;
  v119 = 1;
LABEL_30:
  v24 = 0;
  v25 = v111;
  v26 = v111 + 872;
  if ( !KiAbEnabled )
  {
LABEL_33:
    v28 = 0LL;
    goto LABEL_34;
  }
  v27 = KeGetCurrentThread();
  if ( KeGetCurrentIrql() >= 2u )
  {
    _interlockedbittestandset((volatile signed __int32 *)&v27->116 + 1, 0xFu);
    goto LABEL_33;
  }
  --v27->SpecialApcDisable;
  if ( !v27->AbEntrySummary )
  {
    if ( !v27->AbOrphanedEntrySummary )
    {
      v28 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v27, v26);
      goto LABEL_79;
    }
    AbOrphanedEntrySummary = v27->AbOrphanedEntrySummary;
    v27->AbOrphanedEntrySummary = 0;
    v27->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v27->AbEntrySummary;
  _BitScanForward((unsigned int *)&v38, AbEntrySummary);
  v134 = v38;
  v27->AbEntrySummary = AbEntrySummary & ~(1 << v38);
  v25 = 96 * v38;
  v28 = (char *)v27->LockEntries + v25;
LABEL_79:
  if ( v28 )
  {
    if ( MmIsSessionAddress(v26) )
      SessionId = MmGetSessionIdEx(v27->ApcState.Process);
    else
      SessionId = -1;
    *((_DWORD *)v28 + 10) = SessionId;
    v25 = 0x7FFFFFFFFFFFFFFCLL;
    *((_QWORD *)v28 + 4) = v26 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&v27->116 + 1, 0xFu);
  }
  v40 = v27->SpecialApcDisable + 1;
  v27->SpecialApcDisable = v40;
  if ( !v40 && ($CD287064E7C9F7953DE243E927CFCB99 *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
    KiCheckForKernelApcDelivery(v25);
  v25 = v111;
LABEL_34:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v26, 0LL) )
  {
LABEL_106:
    if ( v28 )
      KeAbPostReleaseEx(v26);
    MiUnlockWorkingSetExclusive((__int64)v18, v112);
    v49 = *(_WORD *)(v120 + 486) + 1;
    *(_WORD *)(v120 + 486) = v49;
    if ( !v49 && *(_QWORD *)(v120 + 152) != v120 + 152 )
      KiCheckForKernelApcDelivery(v46);
    if ( v24 )
    {
      v51 = v111;
    }
    else
    {
      v50 = *(_WORD *)(v120 + 486) + 1;
      *(_WORD *)(v120 + 486) = v50;
      if ( !v50 && *(_QWORD *)(v120 + 152) != v120 + 152 )
        KiCheckForKernelApcDelivery(v46);
      v51 = v111;
      MiLockAddressSpaceToo(v111, a1);
    }
    LOCK_PAGE_TABLE_COMMITMENT(v120, v51, v47, v48);
    v52 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v18);
    }
    else
    {
      v53 = 0;
      if ( _interlockedbittestandset(v18, 0x1Fu) )
        v53 = ExpWaitForSpinLockExclusiveAndAcquire(v18);
      for ( j = *v18; (*v18 & 0xBFFFFFFF) != 0x80000000; j = *v18 )
      {
        if ( (j & 0x40000000) == 0 )
          _InterlockedCompareExchange(v18, j | 0x40000000, j);
        if ( (++v53 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v53);
      }
    }
    v30 = v52;
    v112 = v52;
    goto LABEL_130;
  }
  if ( v28 )
    v28[26] |= 1u;
  v26 = v25 + 880;
  v24 = 1;
  *(_BYTE *)(v120 + 1732) |= 1u;
  if ( !KiAbEnabled )
    goto LABEL_40;
  v29 = KeGetCurrentThread();
  if ( KeGetCurrentIrql() >= 2u )
  {
    _interlockedbittestandset((volatile signed __int32 *)&v29->116 + 1, 0xFu);
LABEL_40:
    v28 = 0LL;
    goto LABEL_41;
  }
  --v29->SpecialApcDisable;
  if ( !v29->AbEntrySummary )
  {
    if ( !v29->AbOrphanedEntrySummary )
    {
      v28 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v29, v25 + 880);
      goto LABEL_95;
    }
    v41 = v29->AbOrphanedEntrySummary;
    v29->AbOrphanedEntrySummary = 0;
    v29->AbEntrySummary |= v41;
  }
  v42 = v29->AbEntrySummary;
  _BitScanForward((unsigned int *)&v43, v42);
  v132 = v43;
  v29->AbEntrySummary = v42 & ~(1 << v43);
  v25 = 96 * v43;
  v28 = (char *)v29->LockEntries + v25;
LABEL_95:
  if ( v28 )
  {
    if ( MmIsSessionAddress(v26) )
      v44 = MmGetSessionIdEx(v29->ApcState.Process);
    else
      v44 = -1;
    *((_DWORD *)v28 + 10) = v44;
    v25 = 0x7FFFFFFFFFFFFFFCLL;
    *((_QWORD *)v28 + 4) = v26 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&v29->116 + 1, 0xFu);
  }
  v45 = v29->SpecialApcDisable + 1;
  v29->SpecialApcDisable = v45;
  if ( !v45 && ($CD287064E7C9F7953DE243E927CFCB99 *)v29->ApcState.ApcListHead[0].Flink != &v29->152 )
    KiCheckForKernelApcDelivery(v25);
LABEL_41:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v26, 0LL) )
    goto LABEL_106;
  v30 = v112;
  if ( v28 )
    v28[26] |= 1u;
LABEL_130:
  v55 = v124;
  v56 = &v122;
  v57 = v123;
  LODWORD(v122) = 0;
  v58 = 2LL;
  v59 = 0x90482413000LL;
  do
  {
    v60 = (unsigned __int64 *)&v136;
    LODWORD(v61) = 3;
    v62 = ((v55 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    do
    {
      *v60-- = v62;
      v62 = ((v62 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v61 = (_KPROCESS *)(unsigned int)((_DWORD)v61 - 1);
    }
    while ( (_DWORD)v61 );
    v63 = 0;
    v64 = (unsigned __int64 *)&v135;
    while ( 1 )
    {
      v65 = *v64;
      v66 = *(_QWORD *)*v64;
      if ( *v64 + v59 <= 0x7F8
        && (unsigned int)MiPteHasShadow(v61, v66)
        && (v66 & 1) != 0
        && ((v66 & 0x20) == 0 || (v66 & 0x42) == 0) )
      {
        v61 = KeGetCurrentThread()->ApcState.Process;
        v67 = *(_QWORD *)&v61[2].ProcessLock;
        if ( v67 )
        {
          v68 = *(_QWORD *)(v67 + 8 * ((v65 >> 3) & 0x1FF));
          if ( (v68 & 0x20) != 0 )
            v66 |= 0x20uLL;
          if ( (v68 & 0x42) != 0 )
            v66 |= 0x42uLL;
        }
      }
      if ( !v66 )
        break;
      if ( (v66 & 1) == 0 && v63 != 2 )
      {
        MiMakeSystemAddressValid((__int64)(v65 << 25) >> 16, 0LL, 0, v30, 1);
        v59 = 0x90482413000LL;
      }
      v30 = v112;
      ++v63;
      ++v64;
      if ( v63 >= 3 )
        goto LABEL_151;
    }
    *(_BYTE *)v56 = 1 << (2 - v63);
LABEL_151:
    v30 = v112;
    v56 = (__int64 *)((char *)v56 + 1);
    v55 = v57;
    --v58;
  }
  while ( v58 );
  v69 = (unsigned int *)P;
  v70 = P;
  if ( *(_QWORD *)P )
  {
    for ( k = *(_QWORD *)(*(_QWORD *)P + 8LL); k; k = *(_QWORD *)(k + 8) )
      ;
  }
  else
  {
    for ( m = *((_QWORD *)P + 2) & 0xFFFFFFFFFFFFFFFCuLL; m; m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL )
    {
      if ( *(PVOID *)(m + 8) == v70 )
        break;
      v70 = (PVOID)m;
    }
  }
  v73 = (_QWORD **)*((_QWORD *)P + 1);
  v74 = P;
  if ( v73 )
  {
    for ( n = *v73; n; n = (_QWORD *)*n )
      ;
  }
  else
  {
    for ( ii = (PVOID *)(*((_QWORD *)P + 2) & 0xFFFFFFFFFFFFFFFCuLL);
          ii;
          ii = (PVOID *)((unsigned __int64)ii[2] & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      if ( *ii == v74 )
        break;
      v74 = ii;
    }
  }
  RtlAvlRemoveNode(v111 + 1544, P);
  if ( *(unsigned int **)(v111 + 1560) == v69 )
    *(_QWORD *)(v111 + 1560) = *(_QWORD *)(v111 + 1544);
  --*(_QWORD *)(v111 + 1568);
  v77 = v69[12] & 7;
  *((_QWORD *)v69 + 2) = -2LL;
  if ( v77 == 5 || v77 == 2 && (*((_BYTE *)v69 + 67) & 1) != 0 )
    --*(_DWORD *)(v111 + 1684);
  v78 = *(_BYTE *)(v111 + 1491);
  if ( (v78 & 0x10) != 0 )
  {
    *(_BYTE *)(v111 + 1491) = v78 & 0xEF;
    VmPartition = MiGetVmPartition(v111 + 1272);
    v80 = v112;
    MiAgeWorkingSet(v111 + 1272, v112, 1LL, *(unsigned __int16 *)(*((_QWORD *)VmPartition + 657) + 2358LL));
  }
  else
  {
    v80 = v112;
  }
  v81 = *(_BYTE *)(v111 + 1491);
  if ( (v81 & 0x20) != 0 )
  {
    v82 = *(_QWORD *)(v111 + 1408);
    *(_BYTE *)(v111 + 1491) = v81 & 0xDF;
    MiReduceWs(v111 + 1272, v80, v82);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v111 + 1272, retaddr);
  else
    *(_DWORD *)(v111 + 1272) = 0;
  __writecr8(v80);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v111 + 880), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v111 + 880);
  KeAbPostRelease(v111 + 880);
  v83 = *(_WORD *)(v120 + 486) + 1;
  *(_WORD *)(v120 + 486) = v83;
  if ( !v83 && *(_QWORD *)(v120 + 152) != v120 + 152 )
    KiCheckForKernelApcDelivery(v120);
  if ( v118 )
  {
    v84 = v69[13];
    LODWORD(v84) = v84 & 0x7FFFFFFF;
    v85 = v84 | ((unsigned __int64)*((unsigned __int8 *)v69 + 34) << 31);
    v127 = v85;
  }
  else
  {
    v85 = v127;
  }
  *(_QWORD *)v69 = v128;
  *((_QWORD *)v69 + 1) = v85;
  if ( v117 )
    _InterlockedDecrement((volatile signed __int32 *)(v114 + 92));
  if ( v115 )
    MiDereferenceExtendInfo(v69, v114);
  if ( v116 )
  {
    v86 = MmGetSessionIdEx((struct _KPROCESS *)v111);
    MiDereferencePerSessionProtos(v114, v86);
  }
  if ( v113 )
  {
    MiRemoveSharedCommitNode(v114, v111, 0LL);
    v88 = v69 + 24;
    v90 = KeGetCurrentThread();
    v121 = **((_QWORD **)v69 + 9);
    v89 = v121;
    --v90->SpecialApcDisable;
    v91 = v121 + 112;
    if ( !KiAbEnabled )
    {
LABEL_212:
      if ( _interlockedbittestandset64((volatile signed __int32 *)v91, 0LL) )
        ExfAcquirePushLockExclusiveEx(v91, v3, v91);
      if ( v3 )
        *(_BYTE *)(v3 + 26) |= 1u;
      if ( (*(_DWORD *)(v89 + 56) & 0x400) == 0 )
      {
        v98 = *v88;
        v99 = (_QWORD *)v88[1];
        if ( *(_QWORD **)(*v88 + 8LL) != v88 || (_QWORD *)*v99 != v88 )
          __fastfail(3u);
        *v99 = v98;
        *(_QWORD *)(v98 + 8) = v99;
      }
      v100 = KeGetCurrentThread();
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v91);
      KeAbPostRelease(v91);
      v102 = v100->SpecialApcDisable + 1;
      v100->SpecialApcDisable = v102;
      if ( !v102 && ($CD287064E7C9F7953DE243E927CFCB99 *)v100->ApcState.ApcListHead[0].Flink != &v100->152 )
        KiCheckForKernelApcDelivery(v101);
      v69 = (unsigned int *)P;
      v3 = 0LL;
      goto LABEL_226;
    }
    v92 = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v92, v91, KeGetCurrentIrql(), 0LL);
    --v92->SpecialApcDisable;
    if ( !v92->AbEntrySummary )
    {
      if ( !v92->AbOrphanedEntrySummary )
      {
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        {
          EtwTraceAutoBoostEntryExhaustion(v92, v91);
          _interlockedbittestandset((volatile signed __int32 *)&v92->116 + 1, 0xFu);
LABEL_208:
          v97 = v92->SpecialApcDisable + 1;
          v92->SpecialApcDisable = v97;
          if ( !v97 && ($CD287064E7C9F7953DE243E927CFCB99 *)v92->ApcState.ApcListHead[0].Flink != &v92->152 )
            KiCheckForKernelApcDelivery(v87);
          v89 = v121;
          goto LABEL_212;
        }
LABEL_201:
        _interlockedbittestandset((volatile signed __int32 *)&v92->116 + 1, 0xFu);
        goto LABEL_208;
      }
      v93 = v92->AbOrphanedEntrySummary;
      v92->AbOrphanedEntrySummary = 0;
      v92->AbEntrySummary |= v93;
    }
    v94 = v92->AbEntrySummary;
    _BitScanForward((unsigned int *)&v95, v94);
    v133 = v95;
    v92->AbEntrySummary = v94 & ~(1 << v95);
    v87 = 96 * v95;
    v3 = (__int64)v92->LockEntries + v87;
    if ( v3 )
    {
      if ( (unsigned __int64)(v121 + 0x70000000070LL) > 0x7FFFFFFFFFLL )
        v96 = -1;
      else
        v96 = MmGetSessionIdEx(v92->ApcState.Process);
      *(_DWORD *)(v3 + 40) = v96;
      v87 = 0x7FFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v3 + 32) = v91 & 0x7FFFFFFFFFFFFFFCLL;
      goto LABEL_208;
    }
    goto LABEL_201;
  }
LABEL_226:
  MiFinishVadDeletion(v69, v123, (__int64)&v122);
  if ( v118 )
  {
    v104 = MiFreeLargePages(v118);
    if ( v104 )
    {
      v105 = MiPartitionIdToPointer(*(_WORD *)(v111 + 1452));
      MiReturnCommit(v105, v104);
      if ( v105 == MiSystemPartition )
      {
        MiReturnResidentAvailable(v104);
        _InterlockedExchangeAdd64(&qword_14034F958, v104);
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)v105 + 696, v104);
      }
    }
  }
  if ( v119 == 1 )
  {
    MiDereferenceControlArea(v114, v103);
  }
  else
  {
    v106 = v114;
    if ( v114 )
    {
      v107 = (volatile signed __int32 *)(v114 + 72);
      v108 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v107);
      }
      else
      {
        v109 = 0;
        if ( _interlockedbittestandset(v107, 0x1Fu) )
          v109 = ExpWaitForSpinLockExclusiveAndAcquire(v107);
        for ( jj = *v107; (*v107 & 0xBFFFFFFF) != 0x80000000; jj = *v107 )
        {
          if ( (jj & 0x40000000) == 0 )
            _InterlockedCompareExchange(v107, jj | 0x40000000, jj);
          if ( (++v109 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v109);
        }
        v106 = v114;
      }
      if ( v130 )
        v3 = MiDecrementSubsections(v130, v131, 1u);
      --*(_QWORD *)(v106 + 40);
      --*(_QWORD *)(v106 + 48);
      MiCheckControlArea(v106, v108);
      if ( v3 )
        MiReturnSubsectionCharges(v3);
    }
  }
}
