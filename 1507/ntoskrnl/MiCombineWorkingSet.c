/*
 * XREFs of MiCombineWorkingSet @ 0x140227B38
 * Callers:
 *     MiCombineIdenticalPages @ 0x1406A89D0 (MiCombineIdenticalPages.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     KeShouldYieldProcessor @ 0x14010B540 (KeShouldYieldProcessor.c)
 *     MiComputeHash64 @ 0x140163B48 (MiComputeHash64.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiCombineCandidate @ 0x140227894 (MiCombineCandidate.c)
 *     MiMapArbitraryPage @ 0x14022AC30 (MiMapArbitraryPage.c)
 *     MiPerformCombineScan @ 0x14022AED0 (MiPerformCombineScan.c)
 *     MiReleaseArbitraryPage @ 0x14022B07C (MiReleaseArbitraryPage.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiProcessCrcList @ 0x1406A8BBC (MiProcessCrcList.c)
 */

__int64 __fastcall MiCombineWorkingSet(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r13
  unsigned __int8 CurrentIrql; // si
  unsigned int v10; // ebx
  signed __int32 i; // edx
  __int64 v12; // rbp
  SIZE_T v13; // rbp
  unsigned __int64 *PoolWithTag; // rax
  unsigned __int64 *v15; // r12
  unsigned __int64 *v16; // rbp
  unsigned __int64 *v17; // r14
  unsigned __int64 v18; // r15
  unsigned int v19; // ebx
  signed __int32 j; // edx
  unsigned __int64 v21; // rax
  __int64 v22; // rsi
  unsigned __int64 v23; // rsi
  __int64 v24; // r9
  __int64 *v25; // rcx
  __int64 PteShadow; // rbx
  unsigned __int64 v27; // r15
  __int64 v28; // r15
  __int64 v29; // r13
  unsigned __int64 v30; // r8
  __int64 v31; // r13
  __int64 *v32; // rsi
  __int64 v33; // rcx
  int v34; // ebx
  unsigned int v35; // ebx
  signed __int32 k; // edx
  unsigned __int64 v37; // rax
  unsigned __int8 v39; // [rsp+40h] [rbp-88h]
  unsigned __int64 v40; // [rsp+48h] [rbp-80h]
  __int64 v41; // [rsp+50h] [rbp-78h]
  __int64 v42; // [rsp+58h] [rbp-70h]
  unsigned __int64 v43; // [rsp+60h] [rbp-68h]
  __int64 v44; // [rsp+68h] [rbp-60h] BYREF
  __int64 v45; // [rsp+70h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-50h]
  unsigned int v51; // [rsp+F0h] [rbp+28h]

  v6 = a1;
  v7 = *a1;
  v45 = *a1;
  if ( (*(_BYTE *)(a5 + 216) & 7) != 0 )
    v8 = 0LL;
  else
    v8 = a5 - 1272;
  CurrentThread = KeGetCurrentThread();
  v41 = v8;
  v51 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 1600) + 146LL);
  CurrentIrql = KeGetCurrentIrql();
  v39 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a5);
  }
  else
  {
    v10 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)a5, 0x1Fu) )
      v10 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)a5);
    for ( i = *(_DWORD *)a5; (*(_DWORD *)a5 & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)a5 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange((volatile signed __int32 *)a5, i | 0x40000000, i);
      if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v10);
    }
    v6 = a1;
  }
  if ( v8
    && ((*(_DWORD *)(v8 + 772) & 0xC00u) < 0xC00
     || *(_QWORD *)(a5 + 8)
     || (PEPROCESS)v8 == PsInitialSystemProcess && *(_DWORD *)(v7 + 1048)) )
  {
    goto LABEL_101;
  }
  v12 = *(_QWORD *)(a5 + 128);
  if ( !v12 )
    goto LABEL_101;
  v13 = (32 * v12 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  while ( 1 )
  {
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x6D75534Du);
    v15 = PoolWithTag;
    if ( PoolWithTag )
      break;
    v13 >>= 1;
    if ( v13 < 0x10000 )
      goto LABEL_101;
  }
  v16 = (unsigned __int64 *)((char *)PoolWithTag + (v13 & 0xFFFFFFFFFFFFFFE0uLL));
  v42 = *(_QWORD *)(a5 + 184);
  v17 = PoolWithTag;
  v18 = *(_QWORD *)(v42 + 8);
  v43 = *(_QWORD *)(v42 + 16);
  v40 = v18;
  if ( v18 > v43 )
    goto LABEL_100;
  while ( 1 )
  {
    if ( (v18 & 0x1F) == 0 && (*(_DWORD *)a5 & 0x40000000) != 0 || KeShouldYieldProcessor() )
    {
      MiUnlockWorkingSetExclusive(a5, CurrentIrql);
      MiProcessCrcList(v6, v15, ((char *)v17 - (char *)v15) >> 5, v51, a3, a2, a4);
      v17 = v15;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a5);
      }
      else
      {
        v19 = 0;
        if ( _interlockedbittestandset((volatile signed __int32 *)a5, 0x1Fu) )
          v19 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)a5);
        for ( j = *(_DWORD *)a5; (*(_DWORD *)a5 & 0xBFFFFFFF) != 0x80000000; j = *(_DWORD *)a5 )
        {
          if ( (j & 0x40000000) == 0 )
            _InterlockedCompareExchange((volatile signed __int32 *)a5, j | 0x40000000, j);
          if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v19);
        }
        v6 = a1;
      }
      v39 = CurrentIrql;
      v21 = *(_QWORD *)(v42 + 8);
      v43 = *(_QWORD *)(v42 + 16);
      if ( v18 < v21 )
        v18 = v21 - 1;
      else
        --v18;
      if ( (*(_DWORD *)(v8 + 772) & 0xC00u) < 0xC00
        || *(_QWORD *)(a5 + 8)
        || (PEPROCESS)v8 == PsInitialSystemProcess && *(_DWORD *)(v45 + 1048) )
      {
        goto LABEL_101;
      }
      goto LABEL_96;
    }
    v22 = *(_QWORD *)(v18 * *(unsigned int *)(v42 + 64) + *(_QWORD *)(v42 + 496));
    if ( (v22 & 1) != 0 )
    {
      v23 = (v22 & 0x800000000000LL) != 0 ? v22 | 0xFFFF000000000000uLL : v22 & 0xFFFFFFFFFFFFLL;
      if ( v23 + 0x98000000000LL > 0x7FFFFFFFFFLL )
        break;
    }
    CurrentIrql = v39;
LABEL_96:
    v40 = ++v18;
    if ( v18 > v43 )
      goto LABEL_97;
  }
  v24 = 0x90482413000LL;
  v25 = (__int64 *)(((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v25;
  if ( (unsigned __int64)(v25 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow((__int64)v25, *v25);
  v44 = PteShadow;
  v27 = PteShadow;
  if ( (unsigned __int64)&v44 + v24 <= 0x7F8 )
    v27 = MiReadPteShadow((__int64)&v44, PteShadow);
  v28 = (v27 >> 12) & 0xFFFFFFFFFLL;
  v29 = 48 * v28 - 0x58000000000LL;
  if ( (*(_QWORD *)(v29 + 40) & 0x200000000000000LL) != 0 )
    goto LABEL_93;
  if ( (!a2 || !*(_DWORD *)(a2 + 4)) && (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 1) == 0 )
  {
    if ( (unsigned int)MiCombineCandidate((__int64)a1, 48 * v28 - 0x58000000000LL) )
    {
      ++*(_QWORD *)(a4 + 16);
      if ( (PteShadow & 0x20) != 0 )
      {
        v31 = a3;
        *v17 = MiComputeHash64(v23 & 0xFFFFFFFFFFFFF000uLL);
LABEL_71:
        v17[2] = 0LL;
        v17[3] = 0LL;
        v17[1] = v28;
        v17 += 4;
        if ( v17 == v16 )
        {
          MiUnlockWorkingSetExclusive(a5, v39);
          v6 = a1;
          MiProcessCrcList(a1, v15, ((char *)v17 - (char *)v15) >> 5, v51, v31, a2, a4);
          v17 = v15;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a5);
          }
          else
          {
            v35 = 0;
            if ( _interlockedbittestandset((volatile signed __int32 *)a5, 0x1Fu) )
              v35 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)a5);
            for ( k = *(_DWORD *)a5; (*(_DWORD *)a5 & 0xBFFFFFFF) != 0x80000000; k = *(_DWORD *)a5 )
            {
              if ( (k & 0x40000000) == 0 )
                _InterlockedCompareExchange((volatile signed __int32 *)a5, k | 0x40000000, k);
              if ( (++v35 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v35);
            }
            v6 = a1;
          }
          v39 = CurrentIrql;
          v37 = *(_QWORD *)(v42 + 8);
          v43 = *(_QWORD *)(v42 + 16);
          if ( v40 < v37 )
            v40 = v37 - 1;
          v8 = v41;
          if ( (*(_DWORD *)(v41 + 772) & 0xC00u) < 0xC00
            || *(_QWORD *)(a5 + 8)
            || (PEPROCESS)v41 == PsInitialSystemProcess && *(_DWORD *)(v45 + 1048) )
          {
            goto LABEL_101;
          }
          goto LABEL_95;
        }
        goto LABEL_93;
      }
      v32 = MiReservePtes((__int64)&qword_14034FC70, 1u, v30);
      if ( !v32 )
        goto LABEL_97;
      v6 = a1;
      *(_QWORD *)(a3 + 64) = v29;
      v31 = a3;
      *(_QWORD *)(a3 + 72) = v32;
      if ( !(unsigned int)MiMapArbitraryPage(a1, a3, 0LL, 0LL) )
      {
        MiReleasePtes((__int64)&qword_14034FC70, v32, 1u);
LABEL_94:
        v8 = v41;
        CurrentIrql = v39;
LABEL_95:
        v18 = v40;
        goto LABEL_96;
      }
      v34 = MiPerformCombineScan(v33, a3, v17);
      MiReleaseArbitraryPage(a3);
      MiReleasePtes((__int64)&qword_14034FC70, v32, 1u);
      if ( v34 == 1 )
        goto LABEL_71;
    }
LABEL_93:
    v6 = a1;
    goto LABEL_94;
  }
LABEL_97:
  if ( v17 == v15 )
  {
    CurrentIrql = v39;
  }
  else
  {
    MiUnlockWorkingSetExclusive(a5, v39);
    CurrentIrql = 17;
    MiProcessCrcList(a1, v15, ((char *)v17 - (char *)v15) >> 5, v51, a3, a2, a4);
  }
LABEL_100:
  ExFreePoolWithTag(v15, 0);
LABEL_101:
  if ( CurrentIrql != 17 )
    MiUnlockWorkingSetExclusive(a5, CurrentIrql);
  return 0LL;
}
