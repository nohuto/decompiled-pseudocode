/*
 * XREFs of MiCommitExistingVad @ 0x14008E680
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiGetPageProtection @ 0x14003BD40 (MiGetPageProtection.c)
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14005E830 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MiIsAddressValid @ 0x14005E8E0 (MiIsAddressValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14008B5D0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiAgeWorkingSet @ 0x140095760 (MiAgeWorkingSet.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiComputePageCommitment @ 0x14010E9C0 (MiComputePageCommitment.c)
 *     MiReduceWs @ 0x14012F17C (MiReduceWs.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14017E7A0 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MmFlushAllFilesystemPages @ 0x140217008 (MmFlushAllFilesystemPages.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x140223A68 (MI_GET_USED_PTES_HANDLE.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiReturnFullProcessCommitment @ 0x14041AE3C (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x1404BBC10 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1404BBCD0 (MiCommitPageTablesForVad.c)
 */

__int64 __fastcall MiCommitExistingVad(ULONG_PTR a1, unsigned __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  unsigned __int64 v5; // rbp
  ULONG_PTR v6; // rdi
  unsigned int v7; // r12d
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  _KPROCESS *Process; // r14
  __int64 DemandZeroPte; // rbx
  __int64 v14; // r8
  unsigned __int64 v15; // r15
  ULONG_PTR BugCheckParameter4; // r13
  volatile signed __int32 *v17; // rsi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v19; // edi
  signed __int32 i; // edx
  __int64 v21; // rdi
  __int64 result; // rax
  __int64 v23; // rcx
  __int64 *v24; // rax
  __int64 v25; // rax
  ULONG_PTR v26; // r14
  struct _KTHREAD *v27; // rdi
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned int AbEntrySummary; // edx
  __int64 v30; // rcx
  char *v31; // rsi
  int SessionId; // eax
  __int16 v33; // ax
  int v34; // r14d
  volatile signed __int32 *v35; // r15
  int v36; // ebp
  __int64 v37; // rsi
  _KPROCESS *v38; // rcx
  unsigned int v39; // edi
  unsigned __int32 v40; // edx
  unsigned __int64 v41; // r15
  __int64 v42; // r11
  unsigned int v43; // ebp
  _KPROCESS *v44; // r15
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  unsigned __int64 v48; // r10
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned int v52; // ebx
  volatile signed __int32 *v53; // rsi
  int v54; // eax
  ULONG_PTR v55; // rdi
  unsigned int v56; // edi
  signed __int32 j; // eax
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  char v61; // al
  __int16 *VmPartition; // rax
  unsigned __int8 v63; // bl
  char v64; // al
  __int64 v65; // r8
  __int16 v66; // ax
  unsigned int v67; // ecx
  __int64 v68; // rdx
  unsigned __int64 v69; // rdx
  int v71; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v72; // [rsp+40h] [rbp-E8h]
  int v73; // [rsp+48h] [rbp-E0h]
  int v74; // [rsp+4Ch] [rbp-DCh]
  __int64 v75; // [rsp+50h] [rbp-D8h]
  __int64 v76; // [rsp+58h] [rbp-D0h]
  unsigned __int8 v77; // [rsp+60h] [rbp-C8h]
  __int64 v78; // [rsp+68h] [rbp-C0h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-B8h]
  __int64 v80; // [rsp+78h] [rbp-B0h] BYREF
  volatile signed __int32 *v81; // [rsp+80h] [rbp-A8h]
  unsigned __int64 v82; // [rsp+88h] [rbp-A0h]
  unsigned __int64 v83; // [rsp+90h] [rbp-98h]
  __int64 v84; // [rsp+98h] [rbp-90h]
  _DWORD *v85; // [rsp+A0h] [rbp-88h]
  int v86; // [rsp+A8h] [rbp-80h]
  unsigned __int64 v87; // [rsp+B0h] [rbp-78h]
  unsigned __int64 v88; // [rsp+B8h] [rbp-70h]
  unsigned __int64 v89; // [rsp+C0h] [rbp-68h]
  __int64 v90; // [rsp+C8h] [rbp-60h]
  void *retaddr; // [rsp+128h] [rbp+0h]

  v5 = a2;
  v85 = a5;
  v6 = a1;
  v72 = a2;
  if ( a4 >= 0x800 )
    goto LABEL_2;
  if ( (a4 & 0xF) != 0 )
  {
    if ( (a4 & 0xF0) != 0 )
    {
      v7 = -1;
      goto LABEL_27;
    }
    v7 = MmUserProtectionToMask1[a4 & 0xF];
  }
  else
  {
    if ( !((unsigned __int8)a4 >> 4) )
    {
      v7 = -1;
      goto LABEL_27;
    }
    v7 = MmUserProtectionToMask2[(unsigned __int8)a4 >> 4];
  }
  if ( v7 == -1 )
  {
    v7 = -1;
    goto LABEL_27;
  }
  if ( (a4 & 0x700) != 0 )
  {
    if ( (a4 & 0x100) != 0 )
    {
      if ( v7 == 24 || (a4 & 0x600) != 0 )
        goto LABEL_2;
      v7 |= 0x10u;
    }
    if ( (a4 & 0x200) == 0 )
      goto LABEL_21;
    if ( v7 != 24 && (a4 & 0x400) == 0 )
    {
      v7 |= 8u;
LABEL_21:
      if ( (a4 & 0x400) != 0 )
      {
        if ( v7 == 24 )
        {
          v7 = -1;
        }
        else if ( (v7 & 2) != 0 )
        {
          v7 = -1;
        }
        else
        {
          v7 |= 0x18u;
        }
      }
      goto LABEL_27;
    }
LABEL_2:
    v7 = -1;
  }
LABEL_27:
  v8 = *(_DWORD *)(a1 + 48);
  v9 = (*(_DWORD *)(v6 + 48) >> 3) & 0x1F;
  if ( v7 == 24 )
    goto LABEL_43;
  if ( v9 == 24 )
  {
    if ( (v8 & 0x8000) == 0 )
      v9 = (*(unsigned __int16 *)(*(_QWORD *)(v6 + 72) + 32LL) >> 1) & 0x1F;
    if ( v9 == 24 )
      LOBYTE(v9) = 0;
  }
  v10 = v9 & 0x18;
  if ( v10 )
  {
    if ( v10 != 16 )
    {
      if ( v10 == 8 )
      {
        v7 = v7 & 0xFFFFFFE7 | 8;
      }
      else if ( v10 == 24 )
      {
        v7 |= 0x18u;
      }
      goto LABEL_43;
    }
LABEL_42:
    v7 &= ~8u;
    goto LABEL_43;
  }
  v11 = v7 & 0x18;
  if ( v11 == 24 )
  {
    v7 &= 0xFFFFFFE7;
    goto LABEL_43;
  }
  if ( v11 == 8 )
    goto LABEL_42;
LABEL_43:
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v76 = (__int64)Process;
  if ( *(int *)(v6 + 52) >= 0 )
    v82 = 0LL;
  else
    v82 = 8 * ((*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32)) & 0xFFFFFFFFFLL)
        - 0x98000000000LL;
  DemandZeroPte = MiMakeDemandZeroPte(v7);
  v15 = (v5 + v14 - 1) | 0xFFF;
  BugCheckParameter4 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v83 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v84 = ((__int64)(((v15 >> 9) & 0x7FFFFFFFF8LL) - ((v5 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1;
  if ( (int)MiChargeFullProcessCommitment(Process, v84) < 0 )
  {
    v17 = (volatile signed __int32 *)&Process[1].IdealNode[8];
    v73 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&Process[1].IdealNode[8]);
    }
    else
    {
      v19 = 0;
      if ( _interlockedbittestandset(v17, 0x1Fu) )
        v19 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)&Process[1].IdealNode[8]);
      for ( i = *v17; (*v17 & 0xBFFFFFFF) != 0x80000000; i = *v17 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedCompareExchange(v17, i | 0x40000000, i);
        if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v19);
      }
      LODWORD(v6) = a1;
    }
    v21 = MiComputePageCommitment((unsigned int)v72 & 0xFFFFF000, v15, v6, CurrentIrql, 0LL);
    MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[8], CurrentIrql);
    v78 = v84 - v21;
    if ( v84 != v21 )
    {
      result = MiChargeFullProcessCommitment(Process, v84 - v21);
      if ( (int)result < 0 )
        return result;
    }
    v5 = v72;
    v6 = a1;
  }
  else
  {
    v73 = 1;
    v78 = ((__int64)(((v15 >> 9) & 0x7FFFFFFFF8LL) - ((v5 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1;
  }
  v23 = *(unsigned int *)(v6 + 48);
  v74 = 0;
  if ( (v23 & 0x8000) == 0 )
  {
    if ( (unsigned __int8)v23 >> 3 != 24 )
      goto LABEL_99;
    v24 = *(__int64 **)(v6 + 72);
    if ( !v24 )
      goto LABEL_99;
    LOBYTE(v23) = v23 & 7;
    if ( (_BYTE)v23 == 1 )
      goto LABEL_99;
    v25 = *v24;
    if ( *(_QWORD *)(v25 + 64) || (*(_DWORD *)(v25 + 56) & 0x1000) == 0 )
      goto LABEL_99;
LABEL_73:
    v74 = 1;
    --CurrentThread->SpecialApcDisable;
    v26 = (ULONG_PTR)&Process[1].Affinity.Bitmap[8];
    if ( !KiAbEnabled )
    {
      v31 = 0LL;
      goto LABEL_91;
    }
    v27 = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v27, v26, KeGetCurrentIrql(), 0LL);
    --v27->SpecialApcDisable;
    if ( !v27->AbEntrySummary )
    {
      if ( !v27->AbOrphanedEntrySummary )
      {
        v31 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        {
          EtwTraceAutoBoostEntryExhaustion(v27, v26);
          _interlockedbittestandset((volatile signed __int32 *)&v27->116 + 1, 0xFu);
LABEL_86:
          v33 = v27->SpecialApcDisable + 1;
          v27->SpecialApcDisable = v33;
          if ( !v33 && ($CD287064E7C9F7953DE243E927CFCB99 *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
            KiCheckForKernelApcDelivery(v23);
          v6 = a1;
LABEL_91:
          if ( _interlockedbittestandset64((volatile signed __int32 *)v26, 0LL) )
            ExfAcquirePushLockExclusiveEx(v26, v31, v26);
          if ( v31 )
            v31[26] |= 1u;
          if ( (int)MiCommitPageTablesForVad(v6, v5, v15) < 0 )
          {
            UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, v76);
            if ( v78 )
              MiReturnFullProcessCommitment(v76);
            return 3221225773LL;
          }
          goto LABEL_99;
        }
LABEL_79:
        _interlockedbittestandset((volatile signed __int32 *)&v27->116 + 1, 0xFu);
        goto LABEL_86;
      }
      AbOrphanedEntrySummary = v27->AbOrphanedEntrySummary;
      v27->AbOrphanedEntrySummary = 0;
      v27->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = v27->AbEntrySummary;
    _BitScanForward((unsigned int *)&v30, AbEntrySummary);
    v86 = v30;
    v27->AbEntrySummary = AbEntrySummary & ~(1 << v30);
    v23 = 96 * v30;
    v31 = (char *)v27->LockEntries + v23;
    if ( v31 )
    {
      if ( v26 + 0x70000000000LL > 0x7FFFFFFFFFLL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx(v27->ApcState.Process);
      *((_DWORD *)v31 + 10) = SessionId;
      v23 = 0x7FFFFFFFFFFFFFFCLL;
      *((_QWORD *)v31 + 4) = v26 & 0x7FFFFFFFFFFFFFFCLL;
      goto LABEL_86;
    }
    goto LABEL_79;
  }
  if ( *(int *)(v6 + 52) >= 0 && (v23 & 7) == 0 )
    goto LABEL_73;
LABEL_99:
  v34 = 0;
  v35 = (volatile signed __int32 *)(v76 + 1272);
  v71 = 0;
  v81 = (volatile signed __int32 *)(v76 + 1272);
  v36 = 0;
  v75 = 0LL;
  v37 = 0LL;
  v77 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v76 + 1272);
  }
  else
  {
    v39 = 0;
    if ( _interlockedbittestandset(v35, 0x1Fu) )
      v39 = ExpWaitForSpinLockExclusiveAndAcquire(v35);
    v40 = *v35;
    v38 = (_KPROCESS *)*(unsigned int *)v35;
    LODWORD(v38) = (unsigned int)v38 & 0xBFFFFFFF;
    if ( (_DWORD)v38 != 0x80000000 )
    {
      do
      {
        if ( (v40 & 0x40000000) == 0 )
        {
          v38 = (_KPROCESS *)v40;
          LODWORD(v38) = v40 | 0x40000000;
          _InterlockedCompareExchange(v35, v40 | 0x40000000, v40);
        }
        if ( (++v39 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v39);
        v40 = *v35;
      }
      while ( (*v35 & 0xBFFFFFFF) != 0x80000000 );
    }
    v6 = a1;
  }
  if ( BugCheckParameter4 <= v83 )
  {
    v41 = v72;
    v42 = 0x90482413000LL;
    while ( 1 )
    {
      if ( !v36 || (BugCheckParameter4 & 0xFFF) == 0 )
      {
        if ( (_WORD)v34 )
        {
          MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v37, (unsigned __int16)v34);
          v71 = 0;
        }
        v43 = (*(_DWORD *)(v6 + 48) >> 8) & 0x3F;
        v44 = KeGetCurrentThread()->ApcState.Process;
        while ( 1 )
        {
          if ( (unsigned __int64)(((__int64)BugCheckParameter4 >> 47) + 1) <= 1 )
          {
            v87 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v88 = ((v87 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v89 = ((v88 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            LODWORD(v45) = 4;
            v90 = ((v89 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            while ( 1 )
            {
              v45 = (unsigned int)(v45 - 1);
              v46 = *(_QWORD *)*(&v87 + v45);
              if ( (v46 & 1) == 0 )
                goto LABEL_150;
              if ( (unsigned int)v45 <= 1 && (v46 & 0x80u) != 0LL )
                break;
              if ( !(_DWORD)v45 )
                goto LABEL_125;
            }
            if ( (_DWORD)v45 )
              break;
          }
LABEL_150:
          v53 = (volatile signed __int32 *)&v44[1].IdealNode[8];
          MiUnlockWorkingSetExclusive((__int64)&v44[1].IdealNode[8], v77);
          v54 = MmAccessFault(((unsigned __int64)v43 << 57) | 0x100000000000002LL, BugCheckParameter4);
          v55 = v54;
          if ( v54 < 0 )
          {
            MmFlushAllFilesystemPages(1LL);
            KeBugCheckEx(0x7Au, 1uLL, v55, (ULONG_PTR)v44, BugCheckParameter4);
          }
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&v44[1].IdealNode[8]);
          }
          else
          {
            v56 = 0;
            if ( _interlockedbittestandset(v53, 0x1Fu) )
              v56 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)&v44[1].IdealNode[8]);
            for ( j = *v53; (*v53 & 0xBFFFFFFF) != 0x80000000; j = *v53 )
            {
              if ( (j & 0x40000000) == 0 )
                _InterlockedCompareExchange(v53, j | 0x40000000, j);
              if ( (++v56 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v56);
            }
          }
        }
LABEL_125:
        v41 = v72;
        v34 = v71;
        v37 = MI_GET_USED_PTES_HANDLE(v72);
        v36 = 1;
        v42 = 0x90482413000LL;
      }
      v47 = *(_QWORD *)BugCheckParameter4;
      v48 = v42 + BugCheckParameter4;
      if ( v42 + BugCheckParameter4 <= 0x7F8
        && (unsigned int)MiPteHasShadow(v38, v47)
        && (v47 & 1) != 0
        && ((v47 & 0x20) == 0 || (v47 & 0x42) == 0) )
      {
        v38 = KeGetCurrentThread()->ApcState.Process;
        v49 = *(_QWORD *)&v38[2].ProcessLock;
        if ( v49 )
        {
          v50 = *(_QWORD *)(v49 + 8 * ((BugCheckParameter4 >> 3) & 0x1FF));
          if ( (v50 & 0x20) != 0 )
            v47 |= 0x20uLL;
          if ( (v50 & 0x42) != 0 )
            v47 |= 0x42uLL;
        }
      }
      v80 = v47;
      if ( !v47 )
        break;
      v58 = v47;
      if ( (unsigned __int64)&v80 + v42 <= 0x7F8
        && (unsigned int)MiPteHasShadow(v38, v47)
        && (v47 & 1) != 0
        && ((v47 & 0x20) == 0 || (v47 & 0x42) == 0) )
      {
        v38 = KeGetCurrentThread()->ApcState.Process;
        v59 = *(_QWORD *)&v38[2].ProcessLock;
        if ( v59 )
        {
          v60 = *(_QWORD *)(v59 + 8 * (((unsigned __int64)&v80 >> 3) & 0x1FF));
          if ( (v60 & 0x20) != 0 )
            v58 |= 0x20uLL;
          if ( (v60 & 0x42) != 0 )
            v58 |= 0x42uLL;
        }
      }
      if ( (v58 & 0x3E0) == 0x200
        && (v58 & 1) == 0
        && ((v58 & 0x400) == 0 || (unsigned int)MiIsPrototypePteVadLookup(v58)) )
      {
        v80 = v47 ^ ((unsigned __int16)v47 ^ (unsigned __int16)(32 * v7)) & 0x3E0;
        *(_QWORD *)BugCheckParameter4 = v80;
        if ( v48 > 0x7F8 )
          goto LABEL_188;
        v51 = v47 ^ ((unsigned __int16)v47 ^ (unsigned __int16)(32 * v7)) & 0x3E0;
LABEL_141:
        MiWritePteShadow(BugCheckParameter4, v51);
        v6 = a1;
        goto LABEL_142;
      }
      ++v75;
      if ( *v85 )
        goto LABEL_188;
      if ( (v47 & 1) == 0 && (v47 & 0x400) != 0 && !(unsigned int)MiIsPrototypePteVadLookup(v47) )
      {
        v36 = 0;
        if ( (_WORD)v34 )
        {
          MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v37, (unsigned __int16)v34);
          v34 = 0;
          v71 = 0;
        }
      }
      v6 = a1;
      if ( v7 != (unsigned int)MiGetPageProtection(a1, BugCheckParameter4, v77, 1) )
        *v85 = 1;
LABEL_142:
      v42 = 0x90482413000LL;
LABEL_143:
      v41 += 4096LL;
      BugCheckParameter4 += 8LL;
      v72 = v41;
      if ( BugCheckParameter4 > v83 )
      {
        if ( (_WORD)v34 )
        {
          v52 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v52 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v52);
            }
            while ( (*(_QWORD *)(v37 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) );
          }
          *(_QWORD *)(v37 + 16) ^= ((unsigned int)*(_QWORD *)(v37 + 16) ^ ((unsigned int)*(_QWORD *)(v37 + 16)
                                                                         + ((unsigned __int16)v34 << 16))) & 0x3FF0000;
          _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (unsigned __int16)v34 <= 1u )
            MiIsAddressValid(*(_QWORD *)(v37 + 8) | 0x8000000000000000uLL);
          v35 = v81;
        }
        else
        {
          v35 = v81;
        }
        goto LABEL_196;
      }
    }
    if ( BugCheckParameter4 <= v82 )
      ++v75;
    LOWORD(v34) = v34 + 1;
    *(_QWORD *)BugCheckParameter4 = DemandZeroPte;
    v71 = v34;
    if ( v48 > 0x7F8 )
    {
LABEL_188:
      v6 = a1;
      goto LABEL_143;
    }
    v51 = DemandZeroPte;
    goto LABEL_141;
  }
LABEL_196:
  v61 = *((_BYTE *)v35 + 219);
  if ( (v61 & 0x10) != 0 )
  {
    *((_BYTE *)v35 + 219) = v61 & 0xEF;
    VmPartition = MiGetVmPartition((__int64)v35);
    v63 = v77;
    MiAgeWorkingSet(v35, v77, 1LL, *(unsigned __int16 *)(*((_QWORD *)VmPartition + 657) + 2358LL));
  }
  else
  {
    v63 = v77;
  }
  v64 = *((_BYTE *)v35 + 219);
  if ( (v64 & 0x20) != 0 )
  {
    v65 = *((_QWORD *)v35 + 17);
    *((_BYTE *)v35 + 219) = v64 & 0xDF;
    MiReduceWs(v35, v63, v65);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v35, retaddr);
  else
    *v35 = 0;
  __writecr8(v63);
  if ( v74 == 1 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v76 + 880), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v76 + 880);
    KeAbPostRelease(v76 + 880);
    v66 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v66;
    if ( !v66
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery(CurrentThread);
    }
  }
  if ( v73 == 1 )
  {
    if ( v75 )
      MiReturnFullProcessCommitment(v76);
    v78 = v84 - v75;
  }
  v67 = *(_DWORD *)(a1 + 52);
  v68 = v67;
  LODWORD(v68) = v67 & 0x7FFFFFFF;
  v69 = v78 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31) | v68);
  *(_BYTE *)(a1 + 34) = v69 >> 31;
  *(_DWORD *)(a1 + 52) = v67 ^ (v69 ^ v67) & 0x7FFFFFFF;
  return 0LL;
}
