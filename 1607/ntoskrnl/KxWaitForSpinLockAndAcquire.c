/*
 * XREFs of KxWaitForSpinLockAndAcquire @ 0x1400D8260
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14000C2E0 (KiCallInterruptServiceRoutine.c)
 *     IopDequeueIrpFromThread @ 0x14002DDE0 (IopDequeueIrpFromThread.c)
 *     IopQueueThreadIrp @ 0x14002E170 (IopQueueThreadIrp.c)
 *     IopQueueIrpToFileObject @ 0x140030960 (IopQueueIrpToFileObject.c)
 *     IopfCompleteRequest @ 0x140053570 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140054840 (IopCompleteRequest.c)
 *     KiExecuteAllDpcs @ 0x140059280 (KiExecuteAllDpcs.c)
 *     KxAcquireSpinLock @ 0x140092A60 (KxAcquireSpinLock.c)
 *     KeIntSteerSnapPerf @ 0x1400D6AF0 (KeIntSteerSnapPerf.c)
 *     PpmParkSteerInterrupts @ 0x1400D7A40 (PpmParkSteerInterrupts.c)
 *     KiInsertQueueDpc @ 0x1400D82C0 (KiInsertQueueDpc.c)
 *     PpmCheckSnapAllUtility @ 0x1400D8E00 (PpmCheckSnapAllUtility.c)
 *     PpmIdleExecuteTransition @ 0x1400DA540 (PpmIdleExecuteTransition.c)
 *     PpmUpdatePerformanceFeedback @ 0x1400DB9C0 (PpmUpdatePerformanceFeedback.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401D3CDC (KiAcquireSpinLockInstrumented.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1401BAE68 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KxWaitForSpinLockAndAcquire(volatile signed __int32 *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  do
  {
    if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v2);
  }
  while ( *(_QWORD *)a1 || _interlockedbittestandset64(a1, 0LL) );
  return v2;
}
