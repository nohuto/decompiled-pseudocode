/*
 * XREFs of MiCommitExistingVad @ 0x1400629D0
 * Callers:
 *     MiCreatePebOrTeb @ 0x1403F2500 (MiCreatePebOrTeb.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14000A380 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14001EC70 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiAgeWorkingSet @ 0x140058F90 (MiAgeWorkingSet.c)
 *     MiGetPageProtection @ 0x14005F320 (MiGetPageProtection.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400610B0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiIsAddressValid @ 0x1400795B0 (MiIsAddressValid.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     MiComputePageCommitment @ 0x1400D66E0 (MiComputePageCommitment.c)
 *     MiReduceWs @ 0x1400F12BC (MiReduceWs.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MmFlushAllFilesystemPages @ 0x1401D5180 (MmFlushAllFilesystemPages.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x1401DEC20 (MI_GET_USED_PTES_HANDLE.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021422C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiReturnFullProcessCommitment @ 0x1403E7B98 (MiReturnFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x140415350 (MiCommitPageTablesForVad.c)
 *     MiChargeFullProcessCommitment @ 0x14041AAC0 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiCommitExistingVad(ULONG_PTR a1, unsigned __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  unsigned __int64 v5; // rbp
  ULONG_PTR v6; // rbx
  unsigned int v7; // r13d
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 Process; // rsi
  int v13; // r15d
  unsigned __int64 BugCheckParameter4; // r14
  __int64 v15; // rdi
  __int64 v16; // rbp
  KIRQL v17; // si
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 result; // rax
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rax
  ULONG_PTR v24; // r14
  struct _KTHREAD *v25; // rbx
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned int AbEntrySummary; // edx
  __int64 v28; // rcx
  __int64 v29; // rsi
  struct _KPROCESS *v30; // rax
  unsigned __int64 v31; // rcx
  int v32; // eax
  __int16 v33; // ax
  int v34; // r15d
  volatile signed __int32 *v35; // r8
  int v36; // ebp
  __int64 v37; // rsi
  __int64 CurrentIrql; // rcx
  __int64 v39; // rdx
  unsigned int v40; // ebx
  unsigned int v41; // eax
  bool v42; // zf
  unsigned __int32 v43; // eax
  unsigned int v44; // ebp
  ULONG_PTR v45; // r8
  __int64 v46; // rax
  __int64 v47; // rcx
  ULONG_PTR v48; // rbx
  __int64 v49; // rdx
  volatile LONG *v50; // rbx
  int v51; // eax
  ULONG_PTR v52; // rsi
  unsigned __int64 v53; // rax
  ULONG_PTR v54; // rbx
  __int64 v55; // rbx
  char v56; // al
  __int64 v57; // rcx
  __int64 VmPartition; // rax
  unsigned __int8 v59; // di
  char v60; // al
  __int64 v61; // r8
  struct _KTHREAD *v62; // rcx
  __int16 v63; // ax
  unsigned int v64; // ecx
  __int64 v65; // rax
  unsigned __int64 v66; // rdx
  int v68; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v69; // [rsp+40h] [rbp-E8h]
  __int64 v70; // [rsp+48h] [rbp-E0h]
  __int64 v71; // [rsp+50h] [rbp-D8h]
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp-D0h] BYREF
  int v73; // [rsp+60h] [rbp-C8h]
  int v74; // [rsp+64h] [rbp-C4h]
  __int64 v75; // [rsp+68h] [rbp-C0h]
  __int64 v76; // [rsp+70h] [rbp-B8h]
  __int64 v77; // [rsp+78h] [rbp-B0h]
  __int64 v78; // [rsp+80h] [rbp-A8h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-A0h]
  unsigned __int64 v80; // [rsp+90h] [rbp-98h]
  int v81; // [rsp+98h] [rbp-90h] BYREF
  unsigned __int64 v82; // [rsp+A0h] [rbp-88h]
  _DWORD *v83; // [rsp+A8h] [rbp-80h]
  int v84; // [rsp+B0h] [rbp-78h]
  unsigned __int64 v85; // [rsp+B8h] [rbp-70h]
  unsigned __int64 v86; // [rsp+C0h] [rbp-68h]
  unsigned __int64 v87; // [rsp+C8h] [rbp-60h]
  __int64 v88; // [rsp+D0h] [rbp-58h]
  void *retaddr; // [rsp+128h] [rbp+0h]

  v5 = a2;
  v83 = a5;
  v6 = a1;
  v69 = a2;
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
  Process = (__int64)CurrentThread->ApcState.Process;
  v70 = Process;
  if ( *(int *)(v6 + 52) >= 0 )
    v82 = 0LL;
  else
    v82 = 8 * ((*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32)) & 0xFFFFFFFFFLL)
        - 0x98000000000LL;
  v13 = (a2 + a3 - 1) | 0xFFF;
  BugCheckParameter4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v75 = BugCheckParameter4;
  v80 = ((((a2 + a3 - 1) | 0xFFF) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v15 = 32LL * (v7 & 0x1F);
  v78 = ((__int64)(v80 - BugCheckParameter4) >> 3) + 1;
  if ( (int)MiChargeFullProcessCommitment(Process, v78) < 0 )
  {
    v16 = Process + 1280;
    v73 = 0;
    v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(Process + 1280));
    v18 = MiComputePageCommitment((unsigned int)v69 & 0xFFFFF000, v13, v6, v17, 0LL);
    MiUnlockWorkingSetExclusive(v16, v17, v19);
    Process = v70;
    v77 = v78 - v18;
    if ( v78 != v18 )
    {
      result = MiChargeFullProcessCommitment(v70, v78 - v18);
      if ( (int)result < 0 )
        return result;
    }
    v5 = v69;
    v6 = a1;
  }
  else
  {
    v77 = v78;
    v73 = 1;
  }
  v21 = *(unsigned int *)(v6 + 48);
  v74 = 0;
  if ( (v21 & 0x8000) != 0 )
  {
    if ( *(int *)(v6 + 52) < 0 || (v21 & 7) != 0 )
      goto LABEL_89;
  }
  else
  {
    if ( (unsigned __int8)v21 >> 3 != 24 )
      goto LABEL_89;
    v22 = *(__int64 **)(v6 + 72);
    if ( !v22 )
      goto LABEL_89;
    LOBYTE(v21) = v21 & 7;
    if ( (_BYTE)v21 == 1 )
      goto LABEL_89;
    v23 = *v22;
    if ( *(_QWORD *)(v23 + 64) || (*(_DWORD *)(v23 + 56) & 0x1000) == 0 )
      goto LABEL_89;
  }
  v74 = 1;
  --CurrentThread->SpecialApcDisable;
  v24 = Process + 880;
  if ( KiAbEnabled )
  {
    v25 = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v25, Process + 880, KeGetCurrentIrql(), 0LL);
    --v25->SpecialApcDisable;
    if ( !v25->AbEntrySummary )
    {
      if ( !v25->AbOrphanedEntrySummary )
      {
        v29 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        {
          EtwTraceAutoBoostEntryExhaustion(v25, v24);
          _interlockedbittestandset((volatile signed __int32 *)&v25->116 + 1, 0xFu);
LABEL_75:
          v33 = v25->SpecialApcDisable + 1;
          v25->SpecialApcDisable = v33;
          if ( !v33 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
            KiCheckForKernelApcDelivery(v21);
          v6 = a1;
          goto LABEL_80;
        }
LABEL_66:
        _interlockedbittestandset((volatile signed __int32 *)&v25->116 + 1, 0xFu);
        goto LABEL_75;
      }
      AbOrphanedEntrySummary = v25->AbOrphanedEntrySummary;
      v25->AbOrphanedEntrySummary = 0;
      v25->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = v25->AbEntrySummary;
    _BitScanForward((unsigned int *)&v28, AbEntrySummary);
    v84 = v28;
    v25->AbEntrySummary = AbEntrySummary & ~(1 << v28);
    v21 = 96 * v28;
    v29 = (__int64)v25->LockEntries + v21;
    if ( v29 )
    {
      if ( v24 + 0x70000000000LL > 0x7FFFFFFFFFLL
        || (v30 = v25->ApcState.Process, (v31 = v30[1].ActiveProcessors.Bitmap[2]) == 0)
        || v30 == PsInitialSystemProcess )
      {
        v32 = -1;
      }
      else
      {
        v32 = *(_DWORD *)(v31 + 8);
      }
      *(_DWORD *)(v29 + 40) = v32;
      v21 = 0x7FFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v29 + 32) = v24 & 0x7FFFFFFFFFFFFFFCLL;
      goto LABEL_75;
    }
    goto LABEL_66;
  }
  v29 = 0LL;
LABEL_80:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v24, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v24, v29, v24);
  if ( v29 )
    *(_BYTE *)(v29 + 26) |= 1u;
  if ( (int)MiCommitPageTablesForVad(v6, v5) < 0 )
  {
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, v70);
    if ( v77 )
      MiReturnFullProcessCommitment(v70);
    return 3221225773LL;
  }
  BugCheckParameter4 = v75;
LABEL_89:
  v34 = 0;
  v35 = (volatile signed __int32 *)(v70 + 1280);
  v68 = 0;
  v75 = v70 + 1280;
  v36 = 0;
  v71 = 0LL;
  v37 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v76 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v70 + 1280, (unsigned __int8)CurrentIrql);
  }
  else
  {
    v40 = 0;
    if ( _interlockedbittestandset(v35, 0x1Fu) )
    {
      v41 = ExpWaitForSpinLockExclusiveAndAcquire(v35, (unsigned __int8)CurrentIrql, (__int64)v35);
      v35 = (volatile signed __int32 *)v75;
      v40 = v41;
    }
    v39 = *(unsigned int *)v35;
    if ( (*v35 & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v39 & 0x40000000) == 0 )
        {
          v43 = _InterlockedCompareExchange(v35, v39 | 0x40000000, v39);
          v42 = (_DWORD)v39 == v43;
          v39 = v43;
          if ( !v42 )
            continue;
        }
        if ( (++v40 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        {
          _mm_pause();
        }
        else
        {
          HvlNotifyLongSpinWait(v40, v39, v35);
          v35 = (volatile signed __int32 *)v75;
        }
        v39 = *(unsigned int *)v35;
      }
      while ( (v39 & 0xBFFFFFFF) != 0x80000000 );
    }
    v6 = a1;
  }
  if ( BugCheckParameter4 <= v80 )
  {
    while ( 1 )
    {
      if ( !v36 || (BugCheckParameter4 & 0xFFF) == 0 )
      {
        if ( (_WORD)v34 )
        {
          MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v37, (unsigned __int16)v34);
          v68 = 0;
        }
        v44 = (*(_DWORD *)(v6 + 48) >> 8) & 0x3F;
        v45 = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
        for ( BugCheckParameter3 = v45; ; v45 = BugCheckParameter3 )
        {
          if ( (unsigned __int64)(((__int64)BugCheckParameter4 >> 47) + 1) <= 1 )
          {
            v85 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v86 = ((v85 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v87 = ((v86 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v88 = ((v87 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            LODWORD(v46) = 4;
            while ( 1 )
            {
              v46 = (unsigned int)(v46 - 1);
              v47 = *(_QWORD *)*(&v85 + v46);
              if ( (v47 & 1) == 0 )
                goto LABEL_131;
              if ( (unsigned int)v46 <= 1 && (v47 & 0x80u) != 0LL )
                break;
              if ( !(_DWORD)v46 )
                goto LABEL_115;
            }
            if ( (_DWORD)v46 )
              break;
          }
LABEL_131:
          v50 = (volatile LONG *)(v45 + 1280);
          MiUnlockWorkingSetExclusive(v45 + 1280, (unsigned __int8)v76, v45);
          v51 = MmAccessFault(((unsigned __int64)v44 << 57) | 0x100000000000002LL, BugCheckParameter4, 0, 0LL);
          v52 = v51;
          if ( v51 < 0 )
          {
            MmFlushAllFilesystemPages(1LL);
            KeBugCheckEx(0x7Au, 1uLL, v52, BugCheckParameter3, BugCheckParameter4);
          }
          ExAcquireSpinLockExclusive(v50);
        }
LABEL_115:
        v34 = v68;
        v37 = MI_GET_USED_PTES_HANDLE(v69);
        v36 = 1;
      }
      BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(BugCheckParameter4);
      v48 = BugCheckParameter3;
      if ( !BugCheckParameter3 )
        break;
      v53 = MI_READ_PTE_LOCK_FREE(&BugCheckParameter3);
      if ( (v53 & 0x3E0) == 0x200 && (v53 & 1) == 0 && ((v53 & 0x400) == 0 || HIDWORD(v53) == 0xFFFFFFFF) )
      {
        v54 = v15 | v48 & 0xFFFFFFFFFFFFFC1FuLL;
        BugCheckParameter3 = v54;
        *(_QWORD *)BugCheckParameter4 = v54;
        if ( !(unsigned int)MiPteInShadowRange(BugCheckParameter4) )
          goto LABEL_122;
        v49 = v54;
        goto LABEL_121;
      }
      ++v71;
      if ( !*v83 )
      {
        if ( (v48 & 1) == 0 && (v48 & 0x400) != 0 && HIDWORD(v48) != 0xFFFFFFFF )
        {
          v36 = 0;
          if ( (_WORD)v34 )
          {
            MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v37, (unsigned __int16)v34);
            v34 = 0;
            v68 = 0;
          }
        }
        v6 = a1;
        if ( v7 != (unsigned int)MiGetPageProtection(a1, BugCheckParameter4, v76, 1) )
          *v83 = 1;
        goto LABEL_123;
      }
LABEL_122:
      v6 = a1;
LABEL_123:
      v69 += 4096LL;
      BugCheckParameter4 += 8LL;
      if ( BugCheckParameter4 > v80 )
      {
        if ( (_WORD)v34 )
        {
          v81 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v81);
            while ( (*(_QWORD *)(v37 + 24) & 0x8000000000000000uLL) != 0 );
          }
          *(_QWORD *)(v37 + 16) ^= ((unsigned int)*(_QWORD *)(v37 + 16) ^ ((unsigned int)*(_QWORD *)(v37 + 16)
                                                                         + ((unsigned __int16)v34 << 14))) & 0xFFC000;
          _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (unsigned __int16)v34 <= 1u )
            MiIsAddressValid(*(_QWORD *)(v37 + 8) | 0x8000000000000000uLL);
        }
        goto LABEL_147;
      }
    }
    if ( BugCheckParameter4 <= v82 )
      ++v71;
    LOWORD(v34) = v34 + 1;
    *(_QWORD *)BugCheckParameter4 = v15;
    v68 = v34;
    if ( !(unsigned int)MiPteInShadowRange(BugCheckParameter4) )
      goto LABEL_122;
    v49 = 32LL * (v7 & 0x1F);
LABEL_121:
    MiWritePteShadow(BugCheckParameter4, v49);
    goto LABEL_122;
  }
LABEL_147:
  v55 = v75;
  v56 = *(_BYTE *)(v75 + 219);
  if ( (v56 & 0x10) != 0 )
  {
    v57 = v75;
    *(_BYTE *)(v75 + 219) = v56 & 0xEF;
    VmPartition = MiGetVmPartition(v57, v39, v35);
    v59 = v76;
    MiAgeWorkingSet(v55, v76, 1, *(unsigned __int16 *)(*(_QWORD *)(VmPartition + 5616) + 2358LL));
  }
  else
  {
    v59 = v76;
  }
  v60 = *(_BYTE *)(v55 + 219);
  if ( (v60 & 0x20) != 0 )
  {
    v61 = *(_QWORD *)(v55 + 136);
    *(_BYTE *)(v55 + 219) = v60 & 0xDF;
    MiReduceWs(v55, v59, v61);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v55, retaddr);
  else
    *(_DWORD *)v55 = 0;
  __writecr8(v59);
  if ( v74 == 1 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v70 + 880), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v70 + 880));
    KeAbPostRelease(v70 + 880);
    v62 = CurrentThread;
    v63 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v63;
    if ( !v63 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v62->ApcState.ApcListHead[0].Flink != &v62->152 )
      KiCheckForKernelApcDelivery((__int64)v62);
  }
  if ( v73 == 1 )
  {
    if ( v71 )
      MiReturnFullProcessCommitment(v70);
    v77 = v78 - v71;
  }
  v64 = *(_DWORD *)(a1 + 52);
  v65 = v64;
  LODWORD(v65) = v64 & 0x7FFFFFFF;
  v66 = (v77 + (v65 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31))) >> 31;
  LODWORD(v65) = v64 ^ (v77 + (v64 & 0x7FFFFFFF | (*(unsigned __int8 *)(a1 + 34) << 31)));
  *(_BYTE *)(a1 + 34) = v66;
  *(_DWORD *)(a1 + 52) = v64 ^ v65 & 0x7FFFFFFF;
  return 0LL;
}
