/*
 * XREFs of KxWaitForLockChainValid @ 0x1400F9530
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
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401D3B5C (KiReleaseQueuedSpinLockInstrumented.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1401BAE68 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KxWaitForLockChainValid(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 result; // rax

  v2 = 0;
  do
  {
    if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v2);
    result = *a1;
  }
  while ( !*a1 );
  return result;
}
