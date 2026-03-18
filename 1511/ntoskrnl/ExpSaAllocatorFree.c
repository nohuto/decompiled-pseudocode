/*
 * XREFs of ExpSaAllocatorFree @ 0x14012E754
 * Callers:
 *     ExpCleanupAutoExpandPushLock @ 0x1400E1ABC (ExpCleanupAutoExpandPushLock.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExpSaPageGroupFreeMemory @ 0x14012E86C (ExpSaPageGroupFreeMemory.c)
 *     ExpSaAllocatorOptimizeList @ 0x14012EA70 (ExpSaAllocatorOptimizeList.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall ExpSaAllocatorFree(__int64 BugCheckParameter2, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rdi
  char v7; // r12
  __int64 v8; // rbp
  int v9; // eax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned int AbEntrySummary; // edx
  __int64 v13; // rcx
  __int64 v14; // r15
  struct _KPROCESS *Process; // rax
  unsigned __int64 v16; // rcx
  int v17; // eax
  __int16 v18; // ax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned __int64 **v21; // rcx

  v6 = BugCheckParameter2;
  if ( *(_DWORD *)(a2 + 40) != 1 )
  {
    v7 = 0;
    v8 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)v6, v8, v6);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    goto LABEL_6;
  }
  v7 = 1;
  if ( KiAbEnabled )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
    --CurrentThread->SpecialApcDisable;
    if ( !CurrentThread->AbEntrySummary )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        v14 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
        goto LABEL_32;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = CurrentThread->AbEntrySummary;
    _BitScanForward((unsigned int *)&v13, AbEntrySummary);
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v13);
    BugCheckParameter2 = 96 * v13;
    v14 = (__int64)CurrentThread->LockEntries + BugCheckParameter2;
    if ( v14 )
    {
      if ( (unsigned __int64)(v6 + 0x70000000000LL) > 0x7FFFFFFFFFLL
        || (Process = CurrentThread->ApcState.Process, (v16 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
        || Process == PsInitialSystemProcess )
      {
        v17 = -1;
      }
      else
      {
        v17 = *(_DWORD *)(v16 + 8);
      }
      *(_DWORD *)(v14 + 40) = v17;
      BugCheckParameter2 = 0x7FFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v14 + 32) = v6 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_35:
      v18 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v18;
      if ( !v18
        && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(BugCheckParameter2);
      }
      goto LABEL_39;
    }
LABEL_32:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_35;
  }
  v14 = 0LL;
LABEL_39:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v6, v14, v6);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  *(_DWORD *)(a2 + 40) = 0;
  v19 = *(_QWORD *)a2;
  v20 = *(_QWORD **)(a2 + 8);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v20 != a2 )
    __fastfail(3u);
  *v20 = v19;
  *(_QWORD *)(v19 + 8) = v20;
  v21 = *(unsigned __int64 ***)(v6 + 16);
  *(_QWORD *)a2 = v6 + 8;
  *(_QWORD *)(a2 + 8) = v21;
  if ( *v21 != (unsigned __int64 *)(v6 + 8) )
    __fastfail(3u);
  *v21 = (unsigned __int64 *)a2;
  *(_QWORD *)(v6 + 16) = a2;
LABEL_6:
  if ( (unsigned __int8)ExpSaPageGroupFreeMemory(a2, a3, a4) )
  {
    _m_prefetchw((const void *)(v6 + 64));
    LOBYTE(v9) = _InterlockedOr((volatile signed __int32 *)(v6 + 64), 2u) | 2;
  }
  else
  {
    v9 = *(_DWORD *)(v6 + 64);
  }
  if ( (v9 & 2) != 0 )
  {
    if ( v7 || _InterlockedCompareExchange64((volatile signed __int64 *)v6, 1LL, 17LL) == 17 )
      goto LABEL_16;
    v7 = 0;
  }
  if ( !v7 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v6);
    goto LABEL_12;
  }
LABEL_16:
  ExpSaAllocatorOptimizeList(v6);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
LABEL_12:
  KeAbPostRelease(v6);
}
