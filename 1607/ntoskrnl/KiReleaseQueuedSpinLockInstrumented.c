/*
 * XREFs of KiReleaseQueuedSpinLockInstrumented @ 0x1401D3B5C
 * Callers:
 *     ExFreeLargePool @ 0x140010BE0 (ExFreeLargePool.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     IopfCompleteRequest @ 0x140053570 (IopfCompleteRequest.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E910 (NtWaitForWorkViaWorkerFactory.c)
 *     KxReleaseQueuedSpinLock @ 0x140069570 (KxReleaseQueuedSpinLock.c)
 *     MiProcessWorkingSets @ 0x1400CD640 (MiProcessWorkingSets.c)
 *     IopDeleteIoCompletionInternal @ 0x1400F69B8 (IopDeleteIoCompletionInternal.c)
 *     NtSetInformationWorkerFactory @ 0x1400F7C10 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1400F8900 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400F8A70 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400F8F30 (ExpWorkerFactoryCheckCreate.c)
 *     MiInsertInSystemSpace @ 0x1400FF2A0 (MiInsertInSystemSpace.c)
 *     MiUnlinkSessionList @ 0x1401268E4 (MiUnlinkSessionList.c)
 *     MiZeroPageThread @ 0x140139C40 (MiZeroPageThread.c)
 *     MiAddExpansionNonPagedPool @ 0x140143164 (MiAddExpansionNonPagedPool.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x1400F9530 (KxWaitForLockChainValid.c)
 */

__int64 __fastcall KiReleaseQueuedSpinLockInstrumented(volatile signed __int64 **a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rax

  v4 = __rdtsc();
  _m_prefetchw(a1);
  v5 = (__int64)*a1;
  if ( *a1 )
    goto LABEL_4;
  if ( a1 != (volatile signed __int64 **)_InterlockedCompareExchange64(a1[1], 0LL, (signed __int64)a1) )
  {
    v5 = KxWaitForLockChainValid((__int64 *)a1);
LABEL_4:
    *a1 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v5 + 8), 1uLL);
  }
  return PerfLogSpinLockRelease(a1[1], a2, v4);
}
