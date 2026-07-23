/*
 * XREFs of KiReleaseSpinLockInstrumented @ 0x1401D3BB8
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14000BE60 (KiCallInterruptServiceRoutine.c)
 *     IopDequeueIrpFromThread @ 0x14002D960 (IopDequeueIrpFromThread.c)
 *     IopQueueThreadIrp @ 0x14002DCF0 (IopQueueThreadIrp.c)
 *     IopQueueIrpToFileObject @ 0x1400304E0 (IopQueueIrpToFileObject.c)
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x1400543C0 (IopCompleteRequest.c)
 *     KiExecuteAllDpcs @ 0x140058E00 (KiExecuteAllDpcs.c)
 *     KiTimer2Expiration @ 0x140059C20 (KiTimer2Expiration.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     KeIntSteerSnapPerf @ 0x1400D4990 (KeIntSteerSnapPerf.c)
 *     PpmParkSteerInterrupts @ 0x1400D58E0 (PpmParkSteerInterrupts.c)
 *     KiInsertQueueDpc @ 0x1400D6160 (KiInsertQueueDpc.c)
 *     PpmCheckSnapAllUtility @ 0x1400D6CA0 (PpmCheckSnapAllUtility.c)
 *     PpmIdleExecuteTransition @ 0x1400D83E0 (PpmIdleExecuteTransition.c)
 *     PpmUpdatePerformanceFeedback @ 0x1400D9860 (PpmUpdatePerformanceFeedback.c)
 *     KdPollBreakIn @ 0x1400DD630 (KdPollBreakIn.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiReleaseSpinLockInstrumented(volatile signed __int64 *a1, __int64 a2)
{
  _InterlockedAnd64(a1, 0LL);
  return PerfLogSpinLockRelease(a1, a2, __rdtsc());
}
