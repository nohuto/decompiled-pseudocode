/*
 * XREFs of SmpKeyedStoreEntryGet @ 0x1400926A8
 * Callers:
 *     SmStoreExistsForProcess @ 0x140092678 (SmStoreExistsForProcess.c)
 *     SmpKeyedStoreSetVaRanges @ 0x1400F6008 (SmpKeyedStoreSetVaRanges.c)
 *     SmpKeyedStoreReference @ 0x14010F104 (SmpKeyedStoreReference.c)
 *     SmpProcessQueryStoreStats @ 0x140207720 (SmpProcessQueryStoreStats.c)
 *     SmSwapStore @ 0x1403B5BA4 (SmSwapStore.c)
 *     PspProcessDelete @ 0x1403E3968 (PspProcessDelete.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1404AD068 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmpKeyedStoreCreate @ 0x1404D1574 (SmpKeyedStoreCreate.c)
 *     SmStoreCompressionStop @ 0x140517730 (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x14051779C (SmStoreCompressionStart.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmpKeyedStoreEntryGet(__int64 BugCheckParameter2, _QWORD *a2, int a3, int a4)
{
  int v4; // r13d
  ULONG_PTR v5; // rdi
  char v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // r14
  unsigned __int64 v11; // r15
  int v12; // r10d
  __int64 v13; // r11
  __int64 v14; // r9
  struct _KTHREAD *v16; // rsi
  unsigned int AbEntrySummary; // edx
  __int64 v18; // rcx
  __int64 v19; // r14
  int v20; // eax
  __int16 v21; // ax
  struct _KPROCESS *Process; // rax
  unsigned __int64 v23; // rcx
  unsigned int v24; // r8d
  __int64 v25; // rcx
  __int64 v26; // rdx
  _QWORD *v27; // rdx
  unsigned __int64 v28; // r14
  unsigned __int64 *PoolWithTag; // r9
  unsigned __int64 *v30; // r8
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // rcx
  __int64 v33; // r11
  unsigned int v34; // r8d
  __int64 v35; // r13
  _QWORD *v36; // r10
  __int64 v37; // rdx
  void *v38; // rcx
  int v39; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v41; // [rsp+38h] [rbp-48h]
  __int64 v42; // [rsp+40h] [rbp-40h]
  __int64 v43; // [rsp+68h] [rbp-18h]
  _QWORD *v44; // [rsp+C8h] [rbp+48h]

  v44 = a2;
  v4 = a3;
  v5 = BugCheckParameter2;
  v6 = -1;
  if ( a4 )
    goto LABEL_7;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a3 <= 0 )
  {
    v8 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)v5, v8, v5);
    a2 = v44;
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    goto LABEL_7;
  }
  if ( KiAbEnabled )
  {
    v16 = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v16, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
    --v16->SpecialApcDisable;
    if ( !v16->AbEntrySummary )
    {
      if ( !v16->AbOrphanedEntrySummary )
      {
        v19 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v16, BugCheckParameter2);
        goto LABEL_64;
      }
      AbOrphanedEntrySummary = v16->AbOrphanedEntrySummary;
      v16->AbOrphanedEntrySummary = 0;
      v16->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = v16->AbEntrySummary;
    _BitScanForward((unsigned int *)&v18, AbEntrySummary);
    v16->AbEntrySummary = AbEntrySummary & ~(1 << v18);
    BugCheckParameter2 = 96 * v18;
    v19 = (__int64)v16->LockEntries + BugCheckParameter2;
    if ( v19 )
    {
      if ( v5 + 0x70000000000LL > 0x7FFFFFFFFFLL
        || (Process = v16->ApcState.Process, (v23 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
        || Process == PsInitialSystemProcess )
      {
        v20 = -1;
      }
      else
      {
        v20 = *(_DWORD *)(v23 + 8);
      }
      *(_DWORD *)(v19 + 40) = v20;
      BugCheckParameter2 = 0x7FFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v19 + 32) = v5 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_36:
      v21 = v16->SpecialApcDisable + 1;
      v16->SpecialApcDisable = v21;
      if ( !v21 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
        KiCheckForKernelApcDelivery(BugCheckParameter2);
      goto LABEL_39;
    }
LABEL_64:
    _interlockedbittestandset((volatile signed __int32 *)&v16->116 + 1, 0xFu);
    goto LABEL_36;
  }
  v19 = 0LL;
LABEL_39:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v5, v19, v5);
  a2 = v44;
  if ( v19 )
    *(_BYTE *)(v19 + 26) |= 1u;
LABEL_7:
  if ( !v4 )
  {
    v9 = *(_QWORD *)(v5 + 24);
    if ( v9 && *(_QWORD *)(v9 + 8) == *a2 )
      goto LABEL_20;
    if ( *a2 == *(_QWORD *)(v5 + 32) )
    {
      v9 = 0LL;
      goto LABEL_20;
    }
  }
  v10 = *a2;
  v11 = v5 + 8;
  v12 = *(_DWORD *)(v5 + 12) >> 5;
  v13 = -1LL << (*(_BYTE *)(v5 + 12) & 0x1F);
  v14 = v13 & *a2;
  if ( v12 )
  {
    v9 = *(_QWORD *)(v5 + 16)
       + 8LL
       * ((37
         * (BYTE6(v14)
          + 37
          * (BYTE5(v14)
           + 37
           * (BYTE4(v14)
            + 37 * (BYTE3(v14) + 37 * (BYTE2(v14) + 37 * (BYTE1(v14) + 37 * ((unsigned __int8)v14 + 11623883)))))))
         + HIBYTE(v14)) & (unsigned int)(v12 - 1));
    while ( 1 )
    {
      v9 = *(_QWORD *)v9;
      if ( (v9 & 1) != 0 )
        break;
      if ( v14 == (v13 & *(_QWORD *)(v9 + 8)) )
        goto LABEL_15;
    }
    v9 = 0LL;
LABEL_15:
    if ( v9 )
    {
      if ( v4 == 2 )
      {
        v43 = *(_QWORD *)(v9 + 8) & (-1LL << (*(_DWORD *)(v5 + 12) & 0x1F));
        v27 = (_QWORD *)(*(_QWORD *)(v5 + 16)
                       + 8LL
                       * ((37
                         * (BYTE6(v43)
                          + 37
                          * (BYTE5(v43)
                           + 37
                           * (BYTE4(v43)
                            + 37
                            * (BYTE3(v43)
                             + 37 * (BYTE2(v43) + 37 * (BYTE1(v43) + 37 * ((unsigned __int8)v43 + 11623883)))))))
                         + HIBYTE(v43)) & (unsigned int)((*(_DWORD *)(v5 + 12) >> 5) - 1)));
        if ( (*(_QWORD *)v9 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
          v27 = (_QWORD *)(*(_QWORD *)(v5 + 16)
                         + 8LL
                         * ((37
                           * (BYTE6(v43)
                            + 37
                            * (BYTE5(v43)
                             + 37
                             * (BYTE4(v43)
                              + 37
                              * (BYTE3(v43)
                               + 37 * (BYTE2(v43) + 37 * (BYTE1(v43) + 37 * ((unsigned __int8)v43 + 11623883)))))))
                           + HIBYTE(v43)) & (unsigned int)((*(_DWORD *)(v5 + 12) >> 5) - 1)));
        while ( (*v27 & 1) == 0 )
        {
          if ( *v27 == v9 )
          {
            *v27 = *(_QWORD *)v9;
            --*(_DWORD *)v11;
            *(_QWORD *)v9 |= 0x8000000000000002uLL;
            break;
          }
          v27 = (_QWORD *)*v27;
        }
        if ( *(_QWORD *)(v5 + 24) == v9 )
          *(_QWORD *)(v5 + 24) = 0LL;
      }
      else
      {
        *(_QWORD *)(v5 + 24) = v9;
      }
      goto LABEL_20;
    }
    a2 = v44;
  }
  if ( v4 != 1 )
  {
    *(_QWORD *)(v5 + 32) = v10;
LABEL_19:
    v9 = 0LL;
    goto LABEL_20;
  }
  v9 = (__int64)(a2 - 1);
  if ( *(_DWORD *)v11 >= (unsigned int)(2 * (*(_DWORD *)(v5 + 12) >> 5)) )
  {
    v28 = 2 * ((unsigned __int64)*(unsigned int *)(v5 + 12) >> 5);
    if ( v28 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v28 < 4 )
        v28 = 4LL;
      PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)v28, 0x54486D73u);
      if ( PoolWithTag )
      {
        if ( (((_DWORD)v28 - 1) & (unsigned int)v28) != 0 )
        {
          do
          {
            ++v6;
            LODWORD(v28) = (unsigned int)v28 >> 1;
          }
          while ( (_DWORD)v28 );
          v28 = (unsigned int)(1 << v6);
        }
        v30 = PoolWithTag;
        v31 = 0LL;
        if ( (unsigned int)v28 > 0x4000000 )
          v28 = 0x4000000LL;
        v32 = (8 * v28 + 7) >> 3;
        if ( PoolWithTag > &PoolWithTag[v28] )
          v32 = 0LL;
        if ( v32 )
        {
          do
          {
            ++v31;
            *v30++ = v11 | 1;
          }
          while ( v31 < v32 );
        }
        v33 = -1LL << (*(_BYTE *)(v5 + 12) & 0x1F);
        v34 = 0;
        if ( (*(_DWORD *)(v5 + 12) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v35 = *(_QWORD *)(v5 + 16);
            while ( 1 )
            {
              v36 = *(_QWORD **)(v35 + 8LL * v34);
              if ( ((unsigned __int8)v36 & 1) != 0 )
                break;
              *(_QWORD *)(v35 + 8LL * v34) = *v36;
              v41 = v33 & v36[1];
              v37 = (37
                   * (BYTE6(v41)
                    + 37
                    * (BYTE5(v41)
                     + 37
                     * (BYTE4(v41)
                      + 37
                      * (BYTE3(v41) + 37 * (BYTE2(v41) + 37 * (BYTE1(v41) + 37 * ((unsigned __int8)v41 + 11623883)))))))
                   + HIBYTE(v41)) & (unsigned int)(v28 - 1);
              *v36 = PoolWithTag[v37];
              PoolWithTag[v37] = (unsigned __int64)v36;
            }
            ++v34;
          }
          while ( v34 < *(_DWORD *)(v5 + 12) >> 5 );
          v4 = a3;
        }
        v38 = *(void **)(v5 + 16);
        v39 = (32 * v28) | *(_DWORD *)(v5 + 12) & 0x1F;
        *(_QWORD *)(v5 + 16) = PoolWithTag;
        *(_DWORD *)(v5 + 12) = v39;
        if ( v38 )
          ExFreePoolWithTag(v38, 0);
      }
      else if ( (*(_DWORD *)(v5 + 12) & 0xFFFFFFE0) == 0 )
      {
        goto LABEL_19;
      }
    }
  }
  v24 = *(_DWORD *)(v5 + 12);
  v42 = *(_QWORD *)(v9 + 8) & (-1LL << (v24 & 0x1F));
  v25 = *(_QWORD *)(v5 + 16);
  v26 = (37
       * (BYTE6(v42)
        + 37
        * (BYTE5(v42)
         + 37
         * (BYTE4(v42)
          + 37 * (BYTE3(v42) + 37 * (BYTE2(v42) + 37 * (BYTE1(v42) + 37 * ((unsigned __int8)v42 + 11623883)))))))
       + HIBYTE(v42)) & ((v24 >> 5) - 1);
  *(_QWORD *)v9 = *(_QWORD *)(v25 + 8 * v26);
  *(_QWORD *)(v25 + 8 * v26) = v9;
  ++*(_DWORD *)v11;
  if ( *(_QWORD *)(v5 + 32) == *v44 )
    *(_QWORD *)(v5 + 32) = 0LL;
LABEL_20:
  if ( !a4 )
  {
    if ( v4 > 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v5);
    }
    else if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared((signed __int64 *)v5);
    }
    KeAbPostRelease(v5);
    KeLeaveCriticalRegion();
  }
  return v9;
}
