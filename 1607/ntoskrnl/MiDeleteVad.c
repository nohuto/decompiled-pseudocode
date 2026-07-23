/*
 * XREFs of MiDeleteVad @ 0x140028450
 * Callers:
 *     MiFreeVadRange @ 0x140026E34 (MiFreeVadRange.c)
 *     MiUnmapVad @ 0x14042DDC0 (MiUnmapVad.c)
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14045DCCC (MmCleanProcessAddressSpace.c)
 *     MiDeleteTebRange @ 0x1404B2EE8 (MiDeleteTebRange.c)
 *     MiMapViewOfPhysicalSection @ 0x140573180 (MiMapViewOfPhysicalSection.c)
 *     MiCreateEnclave @ 0x14065F014 (MiCreateEnclave.c)
 *     MiDeleteAllPartialCloneVads @ 0x140663140 (MiDeleteAllPartialCloneVads.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmIsSessionAddress @ 0x1400137C0 (MmIsSessionAddress.c)
 *     MiMakeSystemAddressValid @ 0x14001592C (MiMakeSystemAddressValid.c)
 *     MiDecrementSubsections @ 0x1400222F4 (MiDecrementSubsections.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     MiEmptyPageAccessLog @ 0x1400271C0 (MiEmptyPageAccessLog.c)
 *     MiCheckControlArea @ 0x140027A60 (MiCheckControlArea.c)
 *     RtlAvlRemoveNode @ 0x140028080 (RtlAvlRemoveNode.c)
 *     MiFinishVadDeletion @ 0x140029160 (MiFinishVadDeletion.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14002BAD0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14002EA80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MiDereferenceControlArea @ 0x1400B32FC (MiDereferenceControlArea.c)
 *     MiLockAddressSpaceToo @ 0x1400C446C (MiLockAddressSpaceToo.c)
 *     KeAbPostReleaseEx @ 0x1400C455C (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MiDereferenceExtendInfo @ 0x14010F008 (MiDereferenceExtendInfo.c)
 *     MiDeletePhysmemVad @ 0x140111B20 (MiDeletePhysmemVad.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x140159BBC (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
 *     MiDeletePageTablesForPhysicalRange @ 0x1401EFDC8 (MiDeletePageTablesForPhysicalRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1401F2898 (MiPreUnlockWorkingSetExclusive.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 *     MiFreeLargePages @ 0x1401F535C (MiFreeLargePages.c)
 *     MiUnmapLargeUserPages @ 0x1401F590C (MiUnmapLargeUserPages.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DCC8 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiRemoveSharedCommitNode @ 0x14042D940 (MiRemoveSharedCommitNode.c)
 *     MiAweViewRemover @ 0x14065C234 (MiAweViewRemover.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x14065C778 (MiRemoveUserPhysicalPagesVad.c)
 *     MiDeleteEnclavePages @ 0x14065F3EC (MiDeleteEnclavePages.c)
 *     MiDereferencePerSessionProtos @ 0x140661DDC (MiDereferencePerSessionProtos.c)
 */

__int64 __fastcall MiDeleteVad(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // r13
  unsigned __int64 v5; // rcx
  _KPROCESS *Process; // r12
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  __int64 v10; // rdi
  bool v11; // zf
  void *v12; // rcx
  LONG *p_Blink; // rbx
  __int64 CurrentIrql; // r14
  unsigned int v15; // edi
  signed __int32 v16; // edx
  signed __int32 v17; // eax
  __int64 v18; // r8
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // r8d
  __int64 *v22; // rax
  __int64 v23; // rdi
  int v24; // r8d
  LONG *v25; // rbx
  _SLIST_ENTRY *v26; // rcx
  int v27; // ecx
  struct _KTHREAD *v28; // rbx
  unsigned __int64 v29; // rsi
  int v30; // r14d
  __int64 v31; // rdi
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned int AbEntrySummary; // edx
  __int64 v34; // rcx
  int SessionId; // eax
  struct _KTHREAD *v36; // rbx
  unsigned __int8 v37; // al
  unsigned int v38; // edx
  __int64 v39; // rcx
  int v40; // eax
  __int64 SharedVm; // rbx
  KIRQL v42; // al
  unsigned __int64 v43; // rcx
  int *v44; // rsi
  __int64 v45; // r15
  __int64 v46; // r14
  unsigned __int64 v47; // r11
  int v48; // edx
  unsigned __int64 v49; // rcx
  unsigned __int64 *v50; // r8
  unsigned int v51; // ebx
  char *v52; // rdi
  __int64 v53; // rax
  KIRQL v54; // r9
  __int64 v55; // r10
  unsigned int *v56; // r15
  PVOID v57; // rax
  __int64 i; // rax
  unsigned __int64 j; // rsi
  _QWORD **v60; // rdi
  PVOID v61; // rax
  _QWORD *k; // rax
  PVOID *m; // rdi
  int v64; // eax
  LONG *v65; // rcx
  __int64 v66; // rcx
  __int16 v67; // ax
  __int64 v68; // rax
  unsigned __int64 v69; // rcx
  unsigned int v70; // eax
  _QWORD *v71; // r12
  unsigned __int16 *v72; // rcx
  struct _KTHREAD *v73; // rax
  struct _KTHREAD *v74; // r14
  ULONG_PTR v75; // r15
  unsigned __int8 v76; // al
  unsigned int v77; // edx
  __int64 v78; // rcx
  int v79; // eax
  __int16 v80; // ax
  __int64 v81; // rcx
  _QWORD *v82; // rax
  struct _KTHREAD *v83; // r14
  __int16 v84; // ax
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 result; // rax
  unsigned __int8 v88; // di
  signed __int32 v89; // edx
  signed __int32 v90; // eax
  BOOL v91; // [rsp+30h] [rbp-99h]
  BOOL v92; // [rsp+34h] [rbp-95h]
  BOOL v93; // [rsp+38h] [rbp-91h]
  BOOL v94; // [rsp+3Ch] [rbp-8Dh]
  __int64 v95; // [rsp+40h] [rbp-89h]
  __int64 v96; // [rsp+50h] [rbp-79h]
  int v97; // [rsp+58h] [rbp-71h] BYREF
  int v98; // [rsp+5Ch] [rbp-6Dh]
  int v99; // [rsp+60h] [rbp-69h] BYREF
  __int64 v100; // [rsp+68h] [rbp-61h]
  __int64 v101; // [rsp+70h] [rbp-59h]
  PVOID P; // [rsp+78h] [rbp-51h]
  unsigned __int64 v103; // [rsp+80h] [rbp-49h]
  struct _KTHREAD *v104; // [rsp+88h] [rbp-41h]
  unsigned __int16 *v105; // [rsp+90h] [rbp-39h]
  __int64 v106; // [rsp+98h] [rbp-31h] BYREF
  __int64 v107; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v108; // [rsp+A8h] [rbp-21h] BYREF
  unsigned __int64 v109; // [rsp+B0h] [rbp-19h]
  __int64 v110; // [rsp+B8h] [rbp-11h]
  __int64 v111; // [rsp+C0h] [rbp-9h]
  int v112; // [rsp+C8h] [rbp-1h]
  int v113; // [rsp+CCh] [rbp+3h]
  int v114; // [rsp+D0h] [rbp+7h]
  char v115; // [rsp+D8h] [rbp+Fh] BYREF
  char v116; // [rsp+E8h] [rbp+1Fh] BYREF
  void *retaddr; // [rsp+128h] [rbp+5Fh]

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  P = (PVOID)a1;
  v5 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  Process = CurrentThread->ApcState.Process;
  v8 = (unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32;
  v109 = 0LL;
  v110 = 0LL;
  v111 = 0LL;
  v9 = *(unsigned int *)(a1 + 24) | v5;
  v108 = 0LL;
  v10 = ((*(unsigned int *)(a1 + 28) | v8) << 12) | 0xFFF;
  v107 = 0LL;
  v11 = (*(_DWORD *)(a1 + 48) & 0x8000) == 0;
  v104 = CurrentThread;
  v105 = &Process[1].IdealNode[12];
  v106 = 0LL;
  v101 = 0LL;
  v93 = 0;
  v94 = 0;
  v92 = 0;
  v91 = 0;
  v98 = 0;
  v96 = 0LL;
  v103 = v9 << 12;
  v100 = v10;
  if ( v11 )
  {
    v12 = *(void **)(a1 + 128);
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x746C6644u);
  }
  if ( (*(_BYTE *)(a1 + 48) & 7) == 3 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x40000) != 0 )
    {
      MiDeleteEnclavePages(a1);
    }
    else
    {
      MiAweViewRemover(Process, a1);
      MiRemoveUserPhysicalPagesVad(a1);
    }
  }
  --CurrentThread->SpecialApcDisable;
  --CurrentThread->SpecialApcDisable;
  p_Blink = &dword_140327CC0;
  if ( ((__int64)Process[2].Header.WaitListHead.Flink & 7) != 2 )
    p_Blink = (LONG *)&Process[2].Header.WaitListHead.Blink;
  CurrentIrql = KeGetCurrentIrql();
  v95 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(p_Blink, (unsigned __int8)CurrentIrql);
  }
  else
  {
    v15 = 0;
    if ( _interlockedbittestandset(p_Blink, 0x1Fu) )
      v15 = ExpWaitForSpinLockExclusiveAndAcquire(p_Blink, (unsigned __int8)CurrentIrql);
    v16 = *p_Blink;
    while ( (v16 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v16 & 0x40000000) == 0 )
      {
        v17 = _InterlockedCompareExchange(p_Blink, v16 | 0x40000000, v16);
        v11 = v16 == v17;
        v16 = v17;
        if ( !v11 )
          continue;
      }
      if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v15);
      v16 = *p_Blink;
    }
    LODWORD(v10) = v100;
  }
  p_Blink[1] = 0;
  *(_DWORD *)(a1 + 48) |= 0x80000u;
  v18 = 1LL;
  v19 = *(unsigned int *)(a1 + 48);
  v20 = *(_DWORD *)(a1 + 48) & 7;
  if ( v20 == 3 )
  {
    MiDeletePageTablesForPhysicalRange(a1, v19, 1LL);
    goto LABEL_59;
  }
  if ( (v19 & 0x8000) != 0 )
  {
    if ( v20 != 1 )
    {
      if ( (a2 & 0x40000000) == 0 )
      {
        if ( v20 == 5 )
          v101 = MiUnmapLargeUserPages(a1, v19, 1LL);
        v21 = 0;
        if ( (*(_BYTE *)(a1 + 48) & 7) == 6 )
          v21 = 8;
        MiDeleteVirtualAddresses(v103, v10, v21, (unsigned __int8)CurrentIrql, (__int64)&v108);
      }
      goto LABEL_59;
    }
    goto LABEL_35;
  }
  if ( v20 == 1 )
  {
LABEL_35:
    v22 = *(__int64 **)(a1 + 72);
    if ( v22 )
      v96 = *v22;
    MiDeletePhysmemVad(a1, v19, 1LL);
    goto LABEL_59;
  }
  v23 = **(_QWORD **)(a1 + 72);
  v96 = v23;
  if ( v20 != 2 )
  {
    if ( *(_QWORD *)(v23 + 64) )
    {
      v92 = ((((unsigned __int8)v19 >> 3) - 4) & 0xFFFFFFFD) == 0;
      MiGetProtoPteAddress(
        a1,
        *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32),
        1LL,
        &v106);
      MiGetProtoPteAddress(
        a1,
        *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
        1LL,
        &v107);
    }
    goto LABEL_41;
  }
  if ( (*(_BYTE *)(a1 + 67) & 1) == 0 )
  {
LABEL_41:
    if ( (*(_BYTE *)(a1 + 48) & 7) == 7 )
    {
      v101 = MiUnmapLargeUserPages(a1, v19, v18);
    }
    else
    {
      v24 = 2;
      if ( a2 < 0 )
        v24 = 3;
      if ( (a2 & 1) != 0 )
        v24 |= 4u;
      MiDeleteVirtualAddresses(v103, v100, v24, (unsigned __int8)CurrentIrql, (__int64)&v108);
      v25 = &dword_140327CC0;
      if ( ((__int64)Process[2].Header.WaitListHead.Flink & 7) != 2 )
        v25 = (LONG *)&Process[2].Header.WaitListHead.Blink;
      v26 = (_SLIST_ENTRY *)*((_QWORD *)v25 + 5);
      if ( v26 )
      {
        MiEmptyPageAccessLog(v26);
        *((_QWORD *)v25 + 5) = 0LL;
      }
    }
    v27 = *(_DWORD *)(a1 + 48) & 7;
    v93 = *(__int64 *)(a1 + 120) < 0;
    if ( v27 == 2 )
      v94 = (*(_DWORD *)(v23 + 56) & 0x4000000) != 0;
    if ( *(_QWORD *)(a1 + 72) )
      v91 = v27 != 1;
    goto LABEL_59;
  }
  if ( (a2 & 0x40000000) == 0 )
    v101 = MiUnmapLargeUserPages(a1, v19, 1LL);
  v91 = 1;
  v98 = 1;
LABEL_59:
  v28 = KeGetCurrentThread();
  v29 = (unsigned __int64)&Process[1].Affinity.Bitmap[7];
  v30 = 0;
  if ( KeGetCurrentIrql() >= 2u )
  {
    _interlockedbittestandset((volatile signed __int32 *)&v28->116 + 1, 0xFu);
    v31 = 0LL;
    goto LABEL_74;
  }
  --v28->SpecialApcDisable;
  if ( !v28->AbEntrySummary )
  {
    if ( !v28->AbOrphanedEntrySummary )
    {
      v31 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v28, v29);
      goto LABEL_65;
    }
    AbOrphanedEntrySummary = v28->AbOrphanedEntrySummary;
    v28->AbOrphanedEntrySummary = 0;
    v28->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v28->AbEntrySummary;
  _BitScanForward((unsigned int *)&v34, AbEntrySummary);
  v112 = v34;
  v28->AbEntrySummary = AbEntrySummary & ~(1 << v34);
  v31 = (__int64)&v28->LockEntries[v34];
LABEL_65:
  if ( v31 )
  {
    if ( MmIsSessionAddress(v29) )
      SessionId = MmGetSessionIdEx(v28->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v31 + 40) = SessionId;
    *(_QWORD *)(v31 + 32) = v29 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&v28->116 + 1, 0xFu);
  }
  KiLeaveGuardedRegionUnsafe((__int64)v28);
LABEL_74:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v29, 0LL) )
  {
LABEL_95:
    if ( v31 )
      KeAbPostReleaseEx(v29);
    MiUnlockWorkingSetExclusive(v105, v95);
    KiLeaveGuardedRegionUnsafe((__int64)v104);
    if ( !v30 )
    {
      KiLeaveGuardedRegionUnsafe((__int64)v104);
      MiLockAddressSpaceToo(Process, a1);
    }
    LOCK_PAGE_TABLE_COMMITMENT(v104, Process);
    SharedVm = MiGetSharedVm(v105);
    v42 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    LOBYTE(v95) = v42;
    goto LABEL_100;
  }
  if ( v31 )
    *(_BYTE *)(v31 + 26) |= 1u;
  v30 = 1;
  LOBYTE(v104[1].Queue) |= 1u;
  v36 = KeGetCurrentThread();
  v29 = (unsigned __int64)&Process[1].Affinity.Bitmap[8];
  if ( KeGetCurrentIrql() >= 2u )
  {
    _interlockedbittestandset((volatile signed __int32 *)&v36->116 + 1, 0xFu);
    v31 = 0LL;
    goto LABEL_92;
  }
  --v36->SpecialApcDisable;
  if ( !v36->AbEntrySummary )
  {
    if ( !v36->AbOrphanedEntrySummary )
    {
      v31 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v36, v29);
      goto LABEL_83;
    }
    v37 = v36->AbOrphanedEntrySummary;
    v36->AbOrphanedEntrySummary = 0;
    v36->AbEntrySummary |= v37;
  }
  v38 = v36->AbEntrySummary;
  _BitScanForward((unsigned int *)&v39, v38);
  v113 = v39;
  v36->AbEntrySummary = v38 & ~(1 << v39);
  v31 = (__int64)&v36->LockEntries[v39];
LABEL_83:
  if ( v31 )
  {
    if ( MmIsSessionAddress(v29) )
      v40 = MmGetSessionIdEx(v36->ApcState.Process);
    else
      v40 = -1;
    *(_DWORD *)(v31 + 40) = v40;
    *(_QWORD *)(v31 + 32) = v29 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&v36->116 + 1, 0xFu);
  }
  KiLeaveGuardedRegionUnsafe((__int64)v36);
LABEL_92:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v29, 0LL) )
    goto LABEL_95;
  if ( v31 )
    *(_BYTE *)(v31 + 26) |= 1u;
LABEL_100:
  v43 = v103;
  v44 = &v97;
  v45 = v100;
  v46 = 2LL;
  v97 = 0;
  v47 = 0xFFFFF68000000000uLL;
  do
  {
    v48 = 3;
    v49 = ((v43 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v50 = (unsigned __int64 *)&v116;
    do
    {
      *v50 = v49;
      v49 = v47 + ((v49 >> 9) & 0x7FFFFFFFF8LL);
      --v50;
      --v48;
    }
    while ( v48 );
    v51 = 0;
    v52 = &v115;
    while ( 1 )
    {
      v53 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)v52);
      if ( !v53 )
        break;
      if ( (v53 & 1) == 0 && v51 != 2 )
      {
        MiMakeSystemAddressValid((__int64)((v55 << 25) - (v47 << 25)) >> 16, 0LL, 0, v54, 1);
        v47 = 0xFFFFF68000000000uLL;
      }
      ++v51;
      v52 += 8;
      if ( v51 >= 3 )
        goto LABEL_111;
    }
    *(_BYTE *)v44 = 1 << (2 - v51);
LABEL_111:
    v44 = (int *)((char *)v44 + 1);
    v43 = v45;
    --v46;
  }
  while ( v46 );
  v56 = (unsigned int *)P;
  v57 = P;
  if ( *(_QWORD *)P )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)P + 8LL); i; i = *(_QWORD *)(i + 8) )
      ;
  }
  else
  {
    for ( j = *((_QWORD *)P + 2) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
    {
      if ( *(PVOID *)(j + 8) == v57 )
        break;
      v57 = (PVOID)j;
    }
  }
  v60 = (_QWORD **)*((_QWORD *)P + 1);
  v61 = P;
  if ( v60 )
  {
    for ( k = *v60; k; k = (_QWORD *)*k )
      ;
  }
  else
  {
    for ( m = (PVOID *)(*((_QWORD *)P + 2) & 0xFFFFFFFFFFFFFFFCuLL);
          m;
          m = (PVOID *)((unsigned __int64)m[2] & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      if ( *m == v61 )
        break;
      v61 = m;
    }
  }
  RtlAvlRemoveNode(&Process[2].Affinity.Bitmap[3], (__int64)P);
  if ( (unsigned int *)Process[2].Affinity.Bitmap[5] == v56 )
    Process[2].Affinity.Bitmap[5] = Process[2].Affinity.Bitmap[3];
  --Process[2].Affinity.Bitmap[6];
  v64 = v56[12] & 7;
  *((_QWORD *)v56 + 2) = -2LL;
  if ( v64 == 5 || v64 == 2 && (*((_BYTE *)v56 + 67) & 1) != 0 )
    --HIDWORD(Process[2].ReadyListHead.Flink);
  MiPreUnlockWorkingSetExclusive(&Process[1].IdealNode[12], (unsigned __int8)v95);
  v65 = &dword_140327CC0;
  if ( ((__int64)Process[2].Header.WaitListHead.Flink & 7) != 2 )
    v65 = (LONG *)&Process[2].Header.WaitListHead.Blink;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v65, retaddr);
  else
    *v65 = 0;
  __writecr8((unsigned __int8)v95);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[8], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&Process[1].Affinity.Bitmap[8]);
  KeAbPostRelease((ULONG_PTR)&Process[1].Affinity.Bitmap[8]);
  v66 = (__int64)v104;
  v67 = v104->SpecialApcDisable + 1;
  v104->SpecialApcDisable = v67;
  if ( !v67 && *(_QWORD *)(v66 + 152) != v66 + 152 )
    KiCheckForKernelApcDelivery();
  if ( v101 )
  {
    v68 = v56[13];
    LODWORD(v68) = v68 & 0x7FFFFFFF;
    v69 = v68 | ((unsigned __int64)*((unsigned __int8 *)v56 + 34) << 31);
    v109 = v69;
  }
  else
  {
    v69 = v109;
  }
  *(_QWORD *)v56 = v110;
  *((_QWORD *)v56 + 1) = v69;
  if ( v92 )
    _InterlockedDecrement((volatile signed __int32 *)(v96 + 92));
  if ( v93 )
    MiDereferenceExtendInfo(v56, v96);
  if ( v94 )
  {
    v70 = MmGetSessionIdEx(Process);
    MiDereferencePerSessionProtos(v96, v70);
  }
  if ( v91 )
  {
    MiRemoveSharedCommitNode(v96, Process, 0LL);
    v71 = v56 + 24;
    v73 = KeGetCurrentThread();
    v105 = (unsigned __int16 *)**((_QWORD **)v56 + 9);
    v72 = v105;
    --v73->SpecialApcDisable;
    v74 = KeGetCurrentThread();
    v75 = (ULONG_PTR)(v72 + 52);
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v74, (ULONG_PTR)(v72 + 52), KeGetCurrentIrql(), 0LL);
    --v74->SpecialApcDisable;
    if ( !v74->AbEntrySummary )
    {
      if ( !v74->AbOrphanedEntrySummary )
      {
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        {
          EtwTraceAutoBoostEntryExhaustion(v74, v72 + 52);
          _interlockedbittestandset((volatile signed __int32 *)&v74->116 + 1, 0xFu);
LABEL_165:
          v80 = v74->SpecialApcDisable + 1;
          v74->SpecialApcDisable = v80;
          if ( !v80 && ($2B8565053CDC740D4E4887693DD8AC9E *)v74->ApcState.ApcListHead[0].Flink != &v74->152 )
            KiCheckForKernelApcDelivery();
          if ( _interlockedbittestandset64((volatile signed __int32 *)v75, 0LL) )
            ExfAcquirePushLockExclusiveEx(v75, v3, v75);
          if ( v3 )
            *(_BYTE *)(v3 + 26) |= 1u;
          if ( (*((_DWORD *)v105 + 14) & 0x400) == 0 )
          {
            v81 = *v71;
            v82 = (_QWORD *)v71[1];
            if ( *(_QWORD **)(*v71 + 8LL) != v71 || (_QWORD *)*v82 != v71 )
              __fastfail(3u);
            *v82 = v81;
            *(_QWORD *)(v81 + 8) = v82;
          }
          v83 = KeGetCurrentThread();
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v75, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v75);
          KeAbPostRelease(v75);
          v84 = v83->SpecialApcDisable + 1;
          v83->SpecialApcDisable = v84;
          if ( !v84 && ($2B8565053CDC740D4E4887693DD8AC9E *)v83->ApcState.ApcListHead[0].Flink != &v83->152 )
            KiCheckForKernelApcDelivery();
          v56 = (unsigned int *)P;
          v3 = 0LL;
          goto LABEL_182;
        }
LABEL_157:
        _interlockedbittestandset((volatile signed __int32 *)&v74->116 + 1, 0xFu);
        goto LABEL_165;
      }
      v76 = v74->AbOrphanedEntrySummary;
      v74->AbOrphanedEntrySummary = 0;
      v74->AbEntrySummary |= v76;
    }
    v77 = v74->AbEntrySummary;
    _BitScanForward((unsigned int *)&v78, v77);
    v114 = v78;
    v74->AbEntrySummary = v77 & ~(1 << v78);
    v3 = (__int64)&v74->LockEntries[v78];
    if ( v3 )
    {
      if ( v75 < qword_140326950 || v75 >= qword_140326950 + 0x8000000000LL )
        v79 = -1;
      else
        v79 = MmGetSessionIdEx(v74->ApcState.Process);
      *(_DWORD *)(v3 + 40) = v79;
      *(_QWORD *)(v3 + 32) = v75 & 0x7FFFFFFFFFFFFFFCLL;
      goto LABEL_165;
    }
    goto LABEL_157;
  }
LABEL_182:
  MiFinishVadDeletion(v56, v100, (__int64)&v97);
  result = v101;
  if ( v101 )
    result = MiFreeLargePages(v101);
  if ( v98 == 1 )
    return MiDereferenceControlArea(v96);
  if ( v96 )
  {
    v88 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v96 + 72, v88);
    }
    else
    {
      v99 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)(v96 + 72), 0x1Fu) )
        v99 = ExpWaitForSpinLockExclusiveAndAcquire(v96 + 72, v88);
      v89 = *(_DWORD *)(v96 + 72);
      while ( (v89 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v89 & 0x40000000) == 0 )
        {
          v90 = _InterlockedCompareExchange((volatile signed __int32 *)(v96 + 72), v89 | 0x40000000, v89);
          v11 = v89 == v90;
          v89 = v90;
          if ( !v11 )
            continue;
        }
        KeYieldProcessorEx(&v99);
        v89 = *(_DWORD *)(v96 + 72);
      }
    }
    if ( v106 )
      v3 = MiDecrementSubsections(v106, v107, 1u);
    --*(_QWORD *)(v96 + 40);
    --*(_QWORD *)(v96 + 48);
    result = MiCheckControlArea(v96, v88, v85, v86);
    if ( v3 )
      return MiReturnSubsectionCharges(v3);
  }
  return result;
}
