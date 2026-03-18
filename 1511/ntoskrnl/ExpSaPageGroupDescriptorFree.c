/*
 * XREFs of ExpSaPageGroupDescriptorFree @ 0x14012EAF4
 * Callers:
 *     ExpSaAllocatorOptimizeList @ 0x14012EA70 (ExpSaAllocatorOptimizeList.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14009CFE0 (KeQueryMaximumProcessorCountEx.c)
 *     ExpSaBinaryArrayRemove @ 0x14012ED34 (ExpSaBinaryArrayRemove.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpSaPageGroupDescriptorFree(unsigned int *a1)
{
  __int64 v2; // rcx
  __int64 MaximumProcessorCount; // r12
  __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned int AbEntrySummary; // edx
  __int64 v8; // rcx
  __int64 v9; // r14
  struct _KPROCESS *Process; // rax
  unsigned __int64 v11; // rcx
  int v12; // eax
  __int16 v13; // ax
  __int64 v15; // r14
  __int64 v16; // rdx
  unsigned int v17; // ecx
  void *v18; // rdi

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v4 = 0LL;
  if ( !KiAbEnabled )
  {
    v9 = 0LL;
    goto LABEL_15;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(
      0x192u,
      (ULONG_PTR)CurrentThread,
      (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock,
      KeGetCurrentIrql(),
      0LL);
  --CurrentThread->SpecialApcDisable;
  if ( !CurrentThread->AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v9 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, &ExSaPageGroupDescriptorArrayLock);
      goto LABEL_27;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v8, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v8);
  v2 = 96 * v8;
  v9 = (__int64)CurrentThread->LockEntries + v2;
  if ( !v9 )
  {
LABEL_27:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_12;
  }
  if ( (unsigned __int64)(&ExSaPageGroupDescriptorArrayLock + 0xE000000000LL) > 0x7FFFFFFFFFLL
    || (Process = CurrentThread->ApcState.Process, (v11 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
    || Process == PsInitialSystemProcess )
  {
    v12 = -1;
  }
  else
  {
    v12 = *(_DWORD *)(v11 + 8);
  }
  *(_DWORD *)(v9 + 40) = v12;
  v2 = 0x7FFFFFFFFFFFFFFCLL;
  *(_QWORD *)(v9 + 32) = (unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL;
LABEL_12:
  v13 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v13;
  if ( !v13 && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v2);
LABEL_15:
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExSaPageGroupDescriptorArrayLock, v9, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( (_DWORD)MaximumProcessorCount )
  {
    v15 = MaximumProcessorCount;
    do
    {
      v16 = a1[8];
      _BitScanReverse(&v17, v16);
      v18 = *(void **)(*(_QWORD *)(*(_QWORD *)(v4 + ExSaPageArrays) + 8LL * (v17 - 2))
                     + 8LL * ((unsigned int)v16 ^ (1 << v17))
                     + 8);
      ExpSaBinaryArrayRemove(*(_QWORD *)(v4 + ExSaPageArrays), v16);
      ExFreePoolWithTag(v18, 0);
      v4 += 8LL;
      --v15;
    }
    while ( v15 );
  }
  ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, a1[8]);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock);
  KeAbPostRelease((ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
  ExFreePoolWithTag(a1, 0);
}
