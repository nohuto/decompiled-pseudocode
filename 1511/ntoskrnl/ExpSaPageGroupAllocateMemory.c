/*
 * XREFs of ExpSaPageGroupAllocateMemory @ 0x14012CFA4
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x14012CE14 (ExpSaAllocatorAllocate.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     RtlFindClearBitsAndSetEx @ 0x1400B480C (RtlFindClearBitsAndSetEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpSaPageGroupAllocateMemory(__int64 a1, unsigned int a2)
{
  __int64 v2; // r14
  unsigned __int64 v3; // r15
  ULONG_PTR v4; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int AbEntrySummary; // edx
  __int64 v7; // rcx
  __int64 v8; // rbp
  int v9; // eax
  __int16 v10; // ax
  unsigned __int64 ClearBitsAndSet; // rax
  __int64 v12; // rdi
  struct _KPROCESS *Process; // rax
  unsigned __int64 v15; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al

  v2 = a1;
  v3 = a2;
  if ( *(_DWORD *)(a1 + 36) < a2 )
    return -1LL;
  v4 = a1 + 24;
  if ( KiAbEnabled )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a1 + 24, KeGetCurrentIrql(), 0LL);
    --CurrentThread->SpecialApcDisable;
    if ( !CurrentThread->AbEntrySummary )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        v8 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, a1 + 24);
        goto LABEL_29;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = CurrentThread->AbEntrySummary;
    _BitScanForward((unsigned int *)&v7, AbEntrySummary);
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
    a1 = 96 * v7;
    v8 = (__int64)CurrentThread->LockEntries + a1;
    if ( v8 )
    {
      if ( v4 + 0x70000000000LL > 0x7FFFFFFFFFLL
        || (Process = CurrentThread->ApcState.Process, (v15 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
        || Process == PsInitialSystemProcess )
      {
        v9 = -1;
      }
      else
      {
        v9 = *(_DWORD *)(v15 + 8);
      }
      *(_DWORD *)(v8 + 40) = v9;
      a1 = 0x7FFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v8 + 32) = v4 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_9:
      v10 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v10;
      if ( !v10
        && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(a1);
      }
      goto LABEL_12;
    }
LABEL_29:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_9;
  }
  v8 = 0LL;
LABEL_12:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v4, v8, v4);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  if ( *(_DWORD *)(v2 + 36) < (unsigned int)v3
    || (ClearBitsAndSet = RtlFindClearBitsAndSetEx((unsigned __int64 *)(v2 + 48), v3, *(unsigned int *)(v2 + 44)),
        ClearBitsAndSet == -1LL) )
  {
    v12 = -1LL;
  }
  else
  {
    *(_DWORD *)(v2 + 36) -= v3;
    *(_DWORD *)(v2 + 44) = v3 + ClearBitsAndSet;
    v12 = 16 * (ClearBitsAndSet & 0x1FF | ((*(_DWORD *)(v2 + 32) & 0x3FFFFu) << 9));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease(v4);
  return v12;
}
