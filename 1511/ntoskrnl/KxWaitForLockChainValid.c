/*
 * XREFs of KxWaitForLockChainValid @ 0x1400C6540
 * Callers:
 *     MiInsertInSystemSpace @ 0x14000A670 (MiInsertInSystemSpace.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 *     ExFreeLargePool @ 0x1400892D0 (ExFreeLargePool.c)
 *     MiProcessWorkingSets @ 0x1400A53A0 (MiProcessWorkingSets.c)
 *     MiReleaseSystemCacheView @ 0x1400AE7E8 (MiReleaseSystemCacheView.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1400C5340 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400C54A0 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400C59E0 (ExpWorkerFactoryCheckCreate.c)
 *     NtSetInformationWorkerFactory @ 0x1400C5D50 (NtSetInformationWorkerFactory.c)
 *     MiZeroPageThread @ 0x1401307A0 (MiZeroPageThread.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401C49A4 (KiReleaseQueuedSpinLockInstrumented.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KxWaitForLockChainValid(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 result; // rax

  v4 = 0;
  do
  {
    if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v4, a2, a3);
    result = *a1;
  }
  while ( !*a1 );
  return result;
}
