/*
 * XREFs of ExpSaAllocatorAllocate @ 0x14012CE14
 * Callers:
 *     ExpAllocateFannedOutPushLock @ 0x14012CC3C (ExpAllocateFannedOutPushLock.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14012CFA4 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14012D1DC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorOptimizeList @ 0x14012EA70 (ExpSaAllocatorOptimizeList.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpSaAllocatorAllocate(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned int v2; // r13d
  char v3; // r12
  __int64 Memory; // rdi
  __int64 v6; // rbp
  __int64 *v7; // r15
  __int64 *i; // r14
  __int64 v10; // r13
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned int AbEntrySummary; // edx
  __int64 v20; // rcx
  __int64 v21; // r14
  struct _KPROCESS *Process; // rax
  unsigned __int64 v23; // rcx
  int v24; // eax
  __int16 v25; // ax
  __int64 *v26; // rcx

  v2 = a2;
  v3 = 0;
  Memory = -1LL;
  v6 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)BugCheckParameter2, v6, BugCheckParameter2);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v7 = (__int64 *)(BugCheckParameter2 + 8);
  while ( 2 )
  {
    for ( i = (__int64 *)*v7; i != v7; i = (__int64 *)*i )
    {
      Memory = ExpSaPageGroupAllocateMemory(i, v2);
      if ( Memory != -1 )
      {
        if ( !*((_DWORD *)i + 9) )
          _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 64), 2u);
        goto LABEL_11;
      }
    }
    v10 = *v7;
    v11 = v3 == 0;
    v3 = 1;
    if ( v11 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      if ( !KiAbEnabled )
      {
        v21 = 0LL;
LABEL_48:
        if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v21, BugCheckParameter2);
        if ( v21 )
          *(_BYTE *)(v21 + 26) |= 1u;
        goto LABEL_18;
      }
      CurrentThread = KeGetCurrentThread();
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
        KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
      --CurrentThread->SpecialApcDisable;
      if ( !CurrentThread->AbEntrySummary )
      {
        if ( !CurrentThread->AbOrphanedEntrySummary )
        {
          v21 = 0LL;
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
          goto LABEL_40;
        }
        AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
        CurrentThread->AbOrphanedEntrySummary = 0;
        CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
      }
      AbEntrySummary = CurrentThread->AbEntrySummary;
      _BitScanForward((unsigned int *)&v20, AbEntrySummary);
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v20);
      v16 = 96 * v20;
      v21 = (__int64)CurrentThread->LockEntries + v16;
      if ( v21 )
      {
        if ( BugCheckParameter2 + 0x70000000000LL > 0x7FFFFFFFFFLL
          || (Process = CurrentThread->ApcState.Process, (v23 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
          || Process == PsInitialSystemProcess )
        {
          v24 = -1;
        }
        else
        {
          v24 = *(_DWORD *)(v23 + 8);
        }
        *(_DWORD *)(v21 + 40) = v24;
        v16 = 0x7FFFFFFFFFFFFFFCLL;
        *(_QWORD *)(v21 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_43:
        v25 = CurrentThread->SpecialApcDisable + 1;
        CurrentThread->SpecialApcDisable = v25;
        if ( !v25
          && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v16);
        }
        goto LABEL_48;
      }
LABEL_40:
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
      goto LABEL_43;
    }
LABEL_18:
    if ( v10 != *v7 )
    {
      v2 = a2;
      continue;
    }
    break;
  }
  v12 = *(unsigned int *)(BugCheckParameter2 + 64);
  LOBYTE(v12) = v12 & 1;
  v13 = ExpSaPageGroupDescriptorAllocate(BugCheckParameter2, v12);
  v14 = v13;
  if ( v13 )
  {
    Memory = ExpSaPageGroupAllocateMemory(v13, a2);
    if ( *(_DWORD *)(v14 + 36) )
    {
      *(_DWORD *)(v14 + 40) = 0;
      v15 = *v7;
      *(_QWORD *)v14 = *v7;
      *(_QWORD *)(v14 + 8) = v7;
      if ( *(__int64 **)(v15 + 8) != v7 )
        __fastfail(3u);
      *(_QWORD *)(v15 + 8) = v14;
      *v7 = v14;
    }
    else
    {
      *(_DWORD *)(v14 + 40) = 1;
      v26 = *(__int64 **)(BugCheckParameter2 + 32);
      *(_QWORD *)v14 = BugCheckParameter2 + 24;
      *(_QWORD *)(v14 + 8) = v26;
      if ( *v26 != BugCheckParameter2 + 24 )
        __fastfail(3u);
      *v26 = v14;
      *(_QWORD *)(BugCheckParameter2 + 32) = v14;
    }
LABEL_11:
    if ( (*(_DWORD *)(BugCheckParameter2 + 64) & 2) != 0 )
    {
      if ( !v3 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
      {
LABEL_13:
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
        goto LABEL_15;
      }
      v3 = 1;
      ExpSaAllocatorOptimizeList(BugCheckParameter2);
    }
    if ( !v3 )
      goto LABEL_13;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
LABEL_15:
  KeAbPostRelease(BugCheckParameter2);
  return Memory;
}
