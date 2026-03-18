/*
 * XREFs of KiReleaseQueuedSpinLockInstrumented @ 0x1401C49A4
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
 * Callees:
 *     KxWaitForLockChainValid @ 0x1400C6540 (KxWaitForLockChainValid.c)
 */

__int64 __fastcall KiReleaseQueuedSpinLockInstrumented(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  volatile signed __int64 *v7; // rdx

  v5 = __rdtsc();
  _m_prefetchw(a1);
  v6 = *a1;
  if ( *a1 )
    goto LABEL_4;
  v7 = (volatile signed __int64 *)a1[1];
  if ( a1 != (_QWORD *)_InterlockedCompareExchange64(v7, 0LL, (signed __int64)a1) )
  {
    v6 = KxWaitForLockChainValid(a1, (__int64)v7, a3);
LABEL_4:
    *a1 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v6 + 8), 1uLL);
  }
  return PerfLogSpinLockRelease(a1[1], a2, v5);
}
