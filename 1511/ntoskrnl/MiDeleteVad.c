/*
 * XREFs of MiDeleteVad @ 0x14006AE10
 * Callers:
 *     MiFreeVadRange @ 0x1400D5DC0 (MiFreeVadRange.c)
 *     MmCleanProcessAddressSpace @ 0x1403E7980 (MmCleanProcessAddressSpace.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     MiUnmapVad @ 0x14041B2F0 (MiUnmapVad.c)
 *     MiDeleteTebRange @ 0x1404A9390 (MiDeleteTebRange.c)
 *     MiMapViewOfPhysicalSection @ 0x14053B280 (MiMapViewOfPhysicalSection.c)
 *     MiCreateEnclave @ 0x1406297C0 (MiCreateEnclave.c)
 *     MiDeleteAllPartialCloneVads @ 0x14062CB58 (MiDeleteAllPartialCloneVads.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14000A380 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostReleaseEx @ 0x1400317E4 (KeAbPostReleaseEx.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmIsSessionAddress @ 0x1400431C0 (MmIsSessionAddress.c)
 *     MiGetProtoPteAddress @ 0x14004B0A0 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x140061118 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     RtlAvlRemoveNode @ 0x14006BDC0 (RtlAvlRemoveNode.c)
 *     MiClearVadBits @ 0x14006D200 (MiClearVadBits.c)
 *     MiCheckControlArea @ 0x14006D900 (MiCheckControlArea.c)
 *     MiEmptyPageAccessLog @ 0x14006DE20 (MiEmptyPageAccessLog.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     MiDecrementSubsections @ 0x1400A8B80 (MiDecrementSubsections.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiMakeSystemAddressValid @ 0x1400B82F0 (MiMakeSystemAddressValid.c)
 *     MiLockAddressSpaceToo @ 0x1400D5E5C (MiLockAddressSpaceToo.c)
 *     KeSignalGate @ 0x1400E9410 (KeSignalGate.c)
 *     MiDereferenceControlArea @ 0x1400EF460 (MiDereferenceControlArea.c)
 *     MiDereferenceExtendInfo @ 0x14010384C (MiDereferenceExtendInfo.c)
 *     MiDeletePhysmemVad @ 0x1401061CC (MiDeletePhysmemVad.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeletePageTablesForPhysicalRange @ 0x1401DF250 (MiDeletePageTablesForPhysicalRange.c)
 *     MiFreeLargePages @ 0x1401E1EA8 (MiFreeLargePages.c)
 *     MiUnmapLargeUserPages @ 0x1401E27F0 (MiUnmapLargeUserPages.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiReturnPageTablePageCommitment @ 0x140415AD0 (MiReturnPageTablePageCommitment.c)
 *     MiRemoveVadCharges @ 0x14041AF70 (MiRemoveVadCharges.c)
 *     MiReturnVadQuota @ 0x14041B250 (MiReturnVadQuota.c)
 *     MiRemoveSharedCommitNode @ 0x14041B910 (MiRemoveSharedCommitNode.c)
 *     MiAweViewRemover @ 0x140626990 (MiAweViewRemover.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x140626F34 (MiRemoveUserPhysicalPagesVad.c)
 *     MiDeleteEnclavePages @ 0x140629B8C (MiDeleteEnclavePages.c)
 *     MiFreeLargePageView @ 0x14062B874 (MiFreeLargePageView.c)
 *     MiDereferencePerSessionProtos @ 0x14062C01C (MiDereferencePerSessionProtos.c)
 */

void __fastcall MiDeleteVad(__int64 a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v5; // rcx
  _KPROCESS *Process; // r12
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  bool v11; // zf
  void *v12; // rcx
  __int64 v13; // rdx
  int v14; // edi
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // r8
  __int64 v19; // rcx
  volatile signed __int32 *v20; // r15
  __int64 CurrentIrql; // r12
  unsigned int v22; // ebx
  __int64 v23; // rdx
  unsigned __int32 v24; // eax
  int v25; // edx
  int v26; // ecx
  __int64 v27; // r8
  int v28; // r15d
  __int64 v29; // rcx
  ULONG_PTR v30; // rsi
  struct _KTHREAD *v31; // rbx
  ULONG_PTR v32; // rdi
  struct _KTHREAD *v33; // rbx
  int v34; // r8d
  __int64 *v35; // rax
  __int64 v36; // r15
  int v37; // r8d
  void *v38; // rcx
  int v39; // ecx
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned int AbEntrySummary; // edx
  __int64 v42; // rcx
  int SessionId; // eax
  unsigned __int8 v44; // al
  unsigned int v45; // edx
  __int64 v46; // rcx
  int v47; // eax
  unsigned __int64 v48; // rax
  int *v49; // r15
  __int64 v50; // r12
  int v51; // ecx
  unsigned __int64 v52; // rax
  unsigned __int64 *v53; // rdx
  unsigned int v54; // edi
  char *v55; // rsi
  __int64 v56; // rbx
  __int64 v57; // rax
  unsigned int *v58; // r14
  PVOID v59; // rax
  unsigned __int64 j; // rsi
  unsigned __int64 i; // rax
  unsigned __int64 k; // rdi
  PVOID v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // r8
  int v66; // eax
  __int64 v67; // rcx
  __int16 v68; // ax
  __int64 v69; // rax
  unsigned __int64 v70; // rcx
  unsigned int v71; // eax
  char *v72; // r12
  char *v73; // rcx
  struct _KTHREAD *v74; // rax
  unsigned __int64 *v75; // r15
  __int64 v76; // rax
  __int64 v77; // r13
  __int64 v78; // rcx
  char **v79; // rax
  struct _KTHREAD *v80; // r13
  __int64 v81; // rcx
  __int16 v82; // ax
  struct _KTHREAD *v83; // r13
  unsigned int v84; // r12d
  _KPROCESS *v85; // r15
  __int64 v86; // rax
  unsigned __int64 v87; // rdi
  __int64 v88; // r8
  __int64 v89; // rax
  unsigned int v90; // ecx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int16 v93; // ax
  _QWORD *v94; // rdi
  __int64 **v95; // r15
  volatile signed __int32 *v96; // rsi
  unsigned __int8 v97; // r12
  signed __int32 v98; // edx
  signed __int32 v99; // eax
  __int64 *v100; // rcx
  __int64 *v101; // rdx
  int v102; // r12d
  struct _KTHREAD *v103; // rsi
  __int64 v104; // rcx
  __int64 v105; // r8
  __int16 v106; // ax
  _QWORD *v107; // rbx
  unsigned __int64 v108; // rbx
  __int64 v109; // rdi
  unsigned __int8 v110; // di
  __int64 v111; // rsi
  signed __int32 v112; // edx
  signed __int32 v113; // eax
  __int64 v114; // [rsp+20h] [rbp-A9h]
  BOOL v115; // [rsp+40h] [rbp-89h]
  unsigned __int64 v116; // [rsp+48h] [rbp-81h]
  BOOL v117; // [rsp+50h] [rbp-79h]
  BOOL v118; // [rsp+54h] [rbp-75h]
  BOOL v119; // [rsp+58h] [rbp-71h]
  unsigned __int64 v120; // [rsp+60h] [rbp-69h]
  __int64 v121; // [rsp+68h] [rbp-61h]
  __int64 v122; // [rsp+70h] [rbp-59h]
  __int64 v123; // [rsp+78h] [rbp-51h]
  int v124; // [rsp+80h] [rbp-49h] BYREF
  int v125; // [rsp+84h] [rbp-45h] BYREF
  int v126; // [rsp+88h] [rbp-41h] BYREF
  int v127; // [rsp+8Ch] [rbp-3Dh]
  __int64 v128; // [rsp+90h] [rbp-39h]
  struct _KTHREAD *v129; // [rsp+98h] [rbp-31h]
  PVOID P; // [rsp+A0h] [rbp-29h]
  __int64 v131; // [rsp+A8h] [rbp-21h] BYREF
  unsigned __int64 v132; // [rsp+B0h] [rbp-19h]
  __int64 v133; // [rsp+B8h] [rbp-11h]
  __int64 v134; // [rsp+C0h] [rbp-9h]
  __int64 v135; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v136; // [rsp+D0h] [rbp+7h] BYREF
  int v137; // [rsp+D8h] [rbp+Fh]
  int v138; // [rsp+DCh] [rbp+13h]
  char v139; // [rsp+E0h] [rbp+17h] BYREF
  char v140; // [rsp+F0h] [rbp+27h] BYREF

  CurrentThread = KeGetCurrentThread();
  P = (PVOID)a1;
  v5 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  Process = CurrentThread->ApcState.Process;
  v8 = (unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32;
  v132 = 0LL;
  v133 = 0LL;
  v134 = 0LL;
  v9 = *(unsigned int *)(a1 + 24) | v5;
  v131 = 0LL;
  v10 = ((*(unsigned int *)(a1 + 28) | v8) << 12) | 0xFFF;
  v136 = 0LL;
  v11 = (*(_DWORD *)(a1 + 48) & 0x8000) == 0;
  v129 = CurrentThread;
  v122 = (__int64)Process;
  v135 = 0LL;
  v123 = 0LL;
  v118 = 0;
  v117 = 0;
  v119 = 0;
  v115 = 0;
  v127 = 0;
  v121 = 0LL;
  v120 = v9 << 12;
  v116 = v10;
  if ( v11 )
  {
    v12 = *(void **)(a1 + 128);
    if ( v12 )
      ObfDereferenceObject(v12);
  }
  v13 = 1LL;
  v14 = a2 & 0x40000000;
  if ( (a2 & 0x40000000) != 0 )
  {
    v15 = *(_DWORD *)(a1 + 48);
    if ( (v15 & 0x8000) != 0 )
    {
      if ( (v15 & 7) == 5 )
      {
LABEL_7:
        v16 = MiFreeLargePageView(Process, a1, 1LL);
        v132 = v16;
        goto LABEL_11;
      }
    }
    else if ( (*(_BYTE *)(a1 + 67) & 1) != 0 && (v15 & 7) == 2 )
    {
      goto LABEL_7;
    }
    v16 = v132;
LABEL_11:
    if ( v16 )
    {
      v17 = MiPartitionIdToPointer(LOWORD(Process[2].Header.SignalState));
      MiReturnCommit(v17, v18);
      v19 = *(unsigned int *)(a1 + 52);
      LODWORD(v19) = v19 & 0x7FFFFFFF;
      v132 = ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31) | v19;
    }
  }
  if ( (*(_BYTE *)(a1 + 48) & 7) == 3 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x40000) != 0 )
    {
      MiDeleteEnclavePages(a1, v13);
    }
    else
    {
      MiAweViewRemover(Process, a1);
      MiRemoveUserPhysicalPagesVad(a1);
    }
  }
  --CurrentThread->SpecialApcDisable;
  --CurrentThread->SpecialApcDisable;
  v20 = (volatile signed __int32 *)&Process[1].IdealNode[12];
  CurrentIrql = KeGetCurrentIrql();
  v128 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v20, (unsigned __int8)CurrentIrql);
  }
  else
  {
    v22 = 0;
    if ( _interlockedbittestandset(v20, 0x1Fu) )
      v22 = ExpWaitForSpinLockExclusiveAndAcquire(v20, (unsigned __int8)CurrentIrql, a3);
    v23 = *(unsigned int *)v20;
    if ( (*v20 & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v23 & 0x40000000) == 0 )
        {
          v24 = _InterlockedCompareExchange(v20, v23 | 0x40000000, v23);
          v11 = (_DWORD)v23 == v24;
          v23 = v24;
          if ( !v11 )
            continue;
        }
        if ( (++v22 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v22, v23, a3);
        v23 = *(unsigned int *)v20;
      }
      while ( (v23 & 0xBFFFFFFF) != 0x80000000 );
    }
    v10 = v116;
  }
  *(_DWORD *)(a1 + 48) |= 0x80000u;
  v25 = *(_DWORD *)(a1 + 48);
  v26 = v25 & 7;
  if ( v26 == 3 )
  {
    MiDeletePageTablesForPhysicalRange(a1);
LABEL_33:
    v27 = 1LL;
    goto LABEL_34;
  }
  if ( (v25 & 0x8000) != 0 )
  {
    if ( v26 != 1 )
    {
      if ( !v14 )
      {
        if ( v26 == 5 )
          v123 = MiUnmapLargeUserPages(a1);
        v34 = 0;
        if ( (*(_BYTE *)(a1 + 48) & 7) == 6 )
          v34 = 8;
        MiDeleteVirtualAddresses(v120, v10, v34, CurrentIrql, (__int64)&v131);
      }
      goto LABEL_33;
    }
LABEL_57:
    v35 = *(__int64 **)(a1 + 72);
    if ( v35 )
      v121 = *v35;
    MiDeletePhysmemVad(a1);
    goto LABEL_33;
  }
  if ( v26 == 1 )
    goto LABEL_57;
  v36 = **(_QWORD **)(a1 + 72);
  v121 = v36;
  if ( v26 != 2 )
  {
    if ( *(_QWORD *)(v36 + 64) )
    {
      v119 = ((((unsigned __int8)v25 >> 3) - 4) & 0xFFFFFFFD) == 0;
      MiGetProtoPteAddress(
        a1,
        *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32),
        1u,
        &v135);
      MiGetProtoPteAddress(
        a1,
        *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
        1u,
        &v136);
    }
    goto LABEL_63;
  }
  if ( (*(_BYTE *)(a1 + 67) & 1) == 0 )
  {
LABEL_63:
    if ( (*(_BYTE *)(a1 + 48) & 7) == 7 )
    {
      v123 = MiUnmapLargeUserPages(a1);
    }
    else
    {
      v37 = 2;
      if ( a2 < 0 )
        v37 = 3;
      if ( (a2 & 1) != 0 )
        v37 |= 4u;
      MiDeleteVirtualAddresses(v120, v10, v37, CurrentIrql, (__int64)&v131);
      v38 = *(void **)(v122 + 1296);
      if ( v38 )
      {
        MiEmptyPageAccessLog(v38);
        *(_QWORD *)(v122 + 1296) = 0LL;
      }
    }
    v27 = 1LL;
    v118 = *(__int64 *)(a1 + 120) < 0;
    v39 = *(_DWORD *)(a1 + 48) & 7;
    if ( v39 == 2 )
      v117 = (*(_DWORD *)(v36 + 56) & 0x4000000) != 0;
    if ( *(_QWORD *)(a1 + 72) )
      v115 = v39 != 1;
    goto LABEL_34;
  }
  if ( !v14 )
    v123 = MiUnmapLargeUserPages(a1);
  v27 = 1LL;
  v115 = 1;
  v127 = 1;
LABEL_34:
  v28 = 0;
  v29 = v122;
  v30 = v122 + 872;
  if ( !KiAbEnabled )
  {
LABEL_37:
    v32 = 0LL;
    goto LABEL_38;
  }
  v31 = KeGetCurrentThread();
  if ( KeGetCurrentIrql() >= 2u )
  {
    _interlockedbittestandset((volatile signed __int32 *)&v31->116 + 1, 0xFu);
    goto LABEL_37;
  }
  --v31->SpecialApcDisable;
  if ( !v31->AbEntrySummary )
  {
    if ( !v31->AbOrphanedEntrySummary )
    {
      v32 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v31, v30);
      goto LABEL_83;
    }
    AbOrphanedEntrySummary = v31->AbOrphanedEntrySummary;
    v31->AbOrphanedEntrySummary = 0;
    v31->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v31->AbEntrySummary;
  _BitScanForward((unsigned int *)&v42, AbEntrySummary);
  v138 = v42;
  v31->AbEntrySummary = AbEntrySummary & ~(1 << v42);
  v32 = (ULONG_PTR)&v31->LockEntries[v42];
LABEL_83:
  if ( v32 )
  {
    if ( MmIsSessionAddress(v30) )
      SessionId = MmGetSessionIdEx(v31->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v32 + 40) = SessionId;
    *(_QWORD *)(v32 + 32) = v30 & 0x7FFFFFFFFFFFFFFCLL;
    KiLeaveGuardedRegionUnsafe((__int64)v31);
    v29 = v122;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&v31->116 + 1, 0xFu);
    KiLeaveGuardedRegionUnsafe((__int64)v31);
    v29 = v122;
  }
LABEL_38:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v30, 0LL) )
  {
LABEL_103:
    if ( v32 )
      KeAbPostReleaseEx(v30, v32);
    MiUnlockWorkingSetExclusive(v122 + 1280, (unsigned __int8)CurrentIrql, v27);
    KiLeaveGuardedRegionUnsafe((__int64)v129);
    if ( !v28 )
    {
      KiLeaveGuardedRegionUnsafe((__int64)v129);
      MiLockAddressSpaceToo(v122, a1);
    }
    LOCK_PAGE_TABLE_COMMITMENT((__int64)v129, v122);
    LOBYTE(v128) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v122 + 1280));
    goto LABEL_108;
  }
  if ( v32 )
    *(_BYTE *)(v32 + 26) |= 1u;
  v30 = v29 + 880;
  v27 = 1LL;
  v28 = 1;
  BYTE4(v129[1].Queue) |= 1u;
  if ( !KiAbEnabled )
    goto LABEL_44;
  v33 = KeGetCurrentThread();
  if ( KeGetCurrentIrql() >= 2u )
  {
    _interlockedbittestandset((volatile signed __int32 *)&v33->116 + 1, 0xFu);
LABEL_44:
    v32 = 0LL;
    goto LABEL_45;
  }
  --v33->SpecialApcDisable;
  if ( !v33->AbEntrySummary )
  {
    if ( !v33->AbOrphanedEntrySummary )
    {
      v32 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v33, v29 + 880);
      goto LABEL_95;
    }
    v44 = v33->AbOrphanedEntrySummary;
    v33->AbOrphanedEntrySummary = 0;
    v33->AbEntrySummary |= v44;
  }
  v45 = v33->AbEntrySummary;
  _BitScanForward((unsigned int *)&v46, v45);
  v137 = v46;
  v33->AbEntrySummary = v45 & ~(1 << v46);
  v32 = (ULONG_PTR)&v33->LockEntries[v46];
LABEL_95:
  if ( v32 )
  {
    if ( MmIsSessionAddress(v30) )
      v47 = MmGetSessionIdEx(v33->ApcState.Process);
    else
      v47 = -1;
    *(_DWORD *)(v32 + 40) = v47;
    *(_QWORD *)(v32 + 32) = v30 & 0x7FFFFFFFFFFFFFFCLL;
    KiLeaveGuardedRegionUnsafe((__int64)v33);
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&v33->116 + 1, 0xFu);
    KiLeaveGuardedRegionUnsafe((__int64)v33);
  }
LABEL_45:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v30, 0LL) )
    goto LABEL_103;
  if ( v32 )
    *(_BYTE *)(v32 + 26) |= 1u;
LABEL_108:
  v48 = v120;
  v49 = &v124;
  v124 = 0;
  v50 = 2LL;
  do
  {
    v51 = 3;
    v52 = ((v48 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v53 = (unsigned __int64 *)&v140;
    do
    {
      *v53-- = v52;
      v52 = ((v52 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v51;
    }
    while ( v51 );
    v54 = 0;
    v55 = &v139;
    while ( 1 )
    {
      v56 = *(_QWORD *)v55;
      v57 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)v55);
      if ( !v57 )
        break;
      if ( (v57 & 1) == 0 && v54 != 2 )
        MiMakeSystemAddressValid(v56 << 25 >> 16, 1);
      ++v54;
      v55 += 8;
      if ( v54 >= 3 )
        goto LABEL_119;
    }
    *(_BYTE *)v49 = 1 << (2 - v54);
LABEL_119:
    v49 = (int *)((char *)v49 + 1);
    v48 = v116;
    --v50;
  }
  while ( v50 );
  v58 = (unsigned int *)P;
  v59 = P;
  j = *(_QWORD *)P;
  if ( *(_QWORD *)P )
  {
    for ( i = *(_QWORD *)(j + 8); i; i = *(_QWORD *)(i + 8) )
      j = i;
  }
  else
  {
    for ( j = *((_QWORD *)P + 2) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
    {
      if ( *(PVOID *)(j + 8) == v59 )
        break;
      v59 = (PVOID)j;
    }
  }
  k = *((_QWORD *)P + 1);
  v63 = P;
  if ( k )
  {
    v64 = *(_QWORD **)k;
    if ( *(_QWORD *)k )
    {
      do
      {
        k = (unsigned __int64)v64;
        v64 = (_QWORD *)*v64;
      }
      while ( v64 );
    }
  }
  else
  {
    for ( k = *((_QWORD *)P + 2) & 0xFFFFFFFFFFFFFFFCuLL; k; k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL )
    {
      if ( *(PVOID *)k == v63 )
        break;
      v63 = (PVOID)k;
    }
  }
  RtlAvlRemoveNode(v122 + 1552, P);
  if ( *(unsigned int **)(v122 + 1568) == v58 )
    *(_QWORD *)(v122 + 1568) = *(_QWORD *)(v122 + 1552);
  --*(_QWORD *)(v122 + 1576);
  v66 = v58[12] & 7;
  *((_QWORD *)v58 + 2) = -2LL;
  if ( v66 == 5 || v66 == 2 && (*((_BYTE *)v58 + 67) & 1) != 0 )
    --*(_DWORD *)(v122 + 1692);
  MiUnlockWorkingSetExclusive(v122 + 1280, (unsigned __int8)v128, v65);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v122 + 880), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v122 + 880));
  KeAbPostRelease(v122 + 880);
  v67 = (__int64)v129;
  v68 = v129->SpecialApcDisable + 1;
  v129->SpecialApcDisable = v68;
  if ( !v68 && *(_QWORD *)(v67 + 152) != v67 + 152 )
    KiCheckForKernelApcDelivery(v67);
  if ( v123 )
  {
    v69 = v58[13];
    LODWORD(v69) = v69 & 0x7FFFFFFF;
    v70 = v69 | ((unsigned __int64)*((unsigned __int8 *)v58 + 34) << 31);
    v132 = v70;
  }
  else
  {
    v70 = v132;
  }
  *(_QWORD *)v58 = v133;
  *((_QWORD *)v58 + 1) = v70;
  if ( v119 )
    _InterlockedDecrement((volatile signed __int32 *)(v121 + 92));
  if ( v118 )
    MiDereferenceExtendInfo(v58, v121);
  if ( v117 )
  {
    v71 = MmGetSessionIdEx((struct _KPROCESS *)v122);
    MiDereferencePerSessionProtos(v121, v71);
  }
  if ( v115 )
  {
    MiRemoveSharedCommitNode(v121, v122, 0LL);
    v72 = (char *)(v58 + 24);
    v74 = KeGetCurrentThread();
    P = (PVOID)**((_QWORD **)v58 + 9);
    v73 = (char *)P;
    --v74->SpecialApcDisable;
    v75 = (unsigned __int64 *)(v73 + 112);
    v76 = KeAbPreAcquire((ULONG_PTR)(v73 + 112), 0LL, 0LL);
    v77 = v76;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v75, 0LL) )
      ExfAcquirePushLockExclusiveEx(v75, v76, (ULONG_PTR)v75);
    if ( v77 )
      *(_BYTE *)(v77 + 26) |= 1u;
    if ( (*((_DWORD *)P + 14) & 0x400) == 0 )
    {
      v78 = *(_QWORD *)v72;
      v79 = (char **)*((_QWORD *)v58 + 13);
      if ( *(char **)(*(_QWORD *)v72 + 8LL) != v72 || *v79 != v72 )
        __fastfail(3u);
      *v79 = (char *)v78;
      *(_QWORD *)(v78 + 8) = v79;
    }
    v80 = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v75, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v75);
    KeAbPostRelease((ULONG_PTR)v75);
    v82 = v80->SpecialApcDisable + 1;
    v80->SpecialApcDisable = v82;
    if ( !v82 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v80->ApcState.ApcListHead[0].Flink != &v80->152 )
      KiCheckForKernelApcDelivery(v81);
  }
  v83 = KeGetCurrentThread();
  v84 = (v58[12] >> 19) & 1;
  v85 = v83->ApcState.Process;
  if ( (v85[2].DirectoryTableBase & 0x2000000) != 0
    || (MiClearVadBits(v120, v116, j, k),
        v86 = v58[13],
        LODWORD(v86) = v86 & 0x7FFFFFFF,
        (v86 | ((unsigned __int64)*((unsigned __int8 *)v58 + 34) << 31)) > 0x7FFFFFFFELL) )
  {
    v87 = v116;
  }
  else
  {
    v114 = k;
    v87 = v116;
    MiReturnPageTablePageCommitment(v120, v116, (_DWORD)v85, j, v114, (__int64)v58, (__int64)&v124);
  }
  v88 = 0LL;
  if ( v84 == 1 && (v58[12] & 0x8000) == 0 )
  {
    v89 = v58[13];
    LODWORD(v89) = v89 & 0x7FFFFFFF;
    if ( (v89 | ((unsigned __int64)*((unsigned __int8 *)v58 + 34) << 31)) < 0x7FFFFFFFELL )
      v88 = v84;
  }
  if ( v87 <= v85[1].ActiveProcessors.Bitmap[18] )
    v85[1].Affinity.Bitmap[1] += v120 - v87 - 1;
  v90 = v58[12];
  if ( (v90 & 7) == 2 && (v90 & 0x10000) != 0 )
    --MEMORY[0xFFFFF580108042B8];
  if ( v84 == 1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)0xFFFFF58010804260LL);
    MiReturnVadQuota(v58, v85, v88);
    MiRemoveVadCharges(v58, v85);
  }
  BYTE4(v83[1].Queue) &= ~1u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v85[1].Affinity.Bitmap[7], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&v85[1].Affinity.Bitmap[7]);
  KeAbPostRelease((ULONG_PTR)&v85[1].Affinity.Bitmap[7]);
  v93 = v83->SpecialApcDisable + 1;
  v83->SpecialApcDisable = v93;
  if ( !v93 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v83->ApcState.ApcListHead[0].Flink != &v83->152 )
    KiCheckForKernelApcDelivery(v91);
  v94 = 0LL;
  if ( v84 == 1 )
  {
    v95 = (__int64 **)(v58 + 14);
    v96 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
    v97 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v96, v97);
    }
    else
    {
      v125 = 0;
      if ( _interlockedbittestandset(v96, 0x1Fu) )
        v125 = ExpWaitForSpinLockExclusiveAndAcquire(v96, v97, v92);
      v98 = *v96;
      while ( (v98 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v98 & 0x40000000) == 0 )
        {
          v99 = _InterlockedCompareExchange(v96, v98 | 0x40000000, v98);
          v11 = v98 == v99;
          v98 = v99;
          if ( !v11 )
            continue;
        }
        KeYieldProcessorEx(&v125);
        v98 = *v96;
      }
    }
    v100 = *v95;
    if ( *v95 )
    {
      do
      {
        v101 = (__int64 *)*v100;
        if ( (v100[1] & 1) != 0 )
        {
          *v100 = (__int64)v94;
          v94 = v100;
          *v95 = v101;
        }
        else
        {
          v95 = (__int64 **)v100;
        }
        v100 = v101;
      }
      while ( v101 );
    }
    MiUnlockWorkingSetExclusive((__int64)v96, v97, v92);
    *((_QWORD *)v58 + 2) = -1LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)0xFFFFF58010804260LL, 0xFFFFFFFF) == 1 )
      KeSetEvent(MEMORY[0xFFFFF58010804270], 0, 0);
    if ( v94 )
      --v83->KernelApcDisable;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v58 + 9, 0xFFFFFFFF) != 1
    || (v102 = 1, (v58[12] & 0x80000) == 0) )
  {
    v102 = 0;
  }
  v103 = KeGetCurrentThread();
  BYTE4(v103[1].Queue) &= ~0x80u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v58 + 5);
  KeAbPostRelease((ULONG_PTR)(v58 + 10));
  v106 = v103->SpecialApcDisable + 1;
  v103->SpecialApcDisable = v106;
  if ( !v106 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v103->ApcState.ApcListHead[0].Flink != &v103->152 )
    KiCheckForKernelApcDelivery(v104);
  if ( v102 == 1 )
    ExFreePoolWithTag(v58, 0);
  if ( v94 )
  {
    do
    {
      v107 = (_QWORD *)*v94;
      KeSignalGate(v94 + 2, 1LL);
      v94 = v107;
    }
    while ( v107 );
    KeLeaveCriticalRegionThread((__int64)v83);
  }
  if ( v123 )
  {
    v108 = MiFreeLargePages(v123);
    if ( v108 )
    {
      v109 = MiPartitionIdToPointer(*(unsigned __int16 *)(v122 + 1460));
      MiReturnCommit(v109, v108);
      if ( (int *)v109 == &MiSystemPartition )
      {
        MiReturnResidentAvailable(v108);
        _InterlockedExchangeAdd64(&qword_1402FF4D8, v108);
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v109 + 5952), v108);
      }
    }
  }
  if ( v127 == 1 )
  {
    MiDereferenceControlArea(v121);
  }
  else if ( v121 )
  {
    v110 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v121 + 72, v110);
      v111 = 0LL;
    }
    else
    {
      v111 = 0LL;
      v126 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)(v121 + 72), 0x1Fu) )
        v126 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v121 + 72), v110, v105);
      v112 = *(_DWORD *)(v121 + 72);
      while ( (v112 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v112 & 0x40000000) == 0 )
        {
          v113 = _InterlockedCompareExchange((volatile signed __int32 *)(v121 + 72), v112 | 0x40000000, v112);
          v11 = v112 == v113;
          v112 = v113;
          if ( !v11 )
            continue;
        }
        KeYieldProcessorEx(&v126);
        v112 = *(_DWORD *)(v121 + 72);
      }
    }
    if ( v135 )
      v111 = MiDecrementSubsections(v135, v136, 1LL);
    --*(_QWORD *)(v121 + 40);
    --*(_QWORD *)(v121 + 48);
    MiCheckControlArea(v121, v110);
    if ( v111 )
      MiReturnSubsectionCharges(v111);
  }
}
