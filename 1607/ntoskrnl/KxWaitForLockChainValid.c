/*
 * XREFs of KxWaitForLockChainValid @ 0x1400F7370
 * Callers:
 *     ExFreeLargePool @ 0x140010760 (ExFreeLargePool.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E490 (NtWaitForWorkViaWorkerFactory.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiProcessWorkingSets @ 0x1400CB4E0 (MiProcessWorkingSets.c)
 *     IopDeleteIoCompletionInternal @ 0x1400F4808 (IopDeleteIoCompletionInternal.c)
 *     NtSetInformationWorkerFactory @ 0x1400F5A50 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1400F6740 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400F68B0 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400F6D70 (ExpWorkerFactoryCheckCreate.c)
 *     MiInsertInSystemSpace @ 0x1400FD020 (MiInsertInSystemSpace.c)
 *     MiUnlinkSessionList @ 0x140126E54 (MiUnlinkSessionList.c)
 *     MiZeroPageThread @ 0x14013A1B0 (MiZeroPageThread.c)
 *     MiAddExpansionNonPagedPool @ 0x1401436D4 (MiAddExpansionNonPagedPool.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401D3988 (KiReleaseQueuedSpinLockInstrumented.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
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
