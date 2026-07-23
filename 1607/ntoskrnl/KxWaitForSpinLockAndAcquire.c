/*
 * XREFs of KxWaitForSpinLockAndAcquire @ 0x1400D6100
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14000BE60 (KiCallInterruptServiceRoutine.c)
 *     IopDequeueIrpFromThread @ 0x14002D960 (IopDequeueIrpFromThread.c)
 *     IopQueueThreadIrp @ 0x14002DCF0 (IopQueueThreadIrp.c)
 *     IopQueueIrpToFileObject @ 0x1400304E0 (IopQueueIrpToFileObject.c)
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x1400543C0 (IopCompleteRequest.c)
 *     KiExecuteAllDpcs @ 0x140058E00 (KiExecuteAllDpcs.c)
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KeIntSteerSnapPerf @ 0x1400D4990 (KeIntSteerSnapPerf.c)
 *     PpmParkSteerInterrupts @ 0x1400D58E0 (PpmParkSteerInterrupts.c)
 *     KiInsertQueueDpc @ 0x1400D6160 (KiInsertQueueDpc.c)
 *     PpmCheckSnapAllUtility @ 0x1400D6CA0 (PpmCheckSnapAllUtility.c)
 *     PpmIdleExecuteTransition @ 0x1400D83E0 (PpmIdleExecuteTransition.c)
 *     PpmUpdatePerformanceFeedback @ 0x1400D9860 (PpmUpdatePerformanceFeedback.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401D3B08 (KiAcquireSpinLockInstrumented.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
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
