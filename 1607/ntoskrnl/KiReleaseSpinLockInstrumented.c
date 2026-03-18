/*
 * XREFs of KiReleaseSpinLockInstrumented @ 0x1401D3D8C
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14000C2E0 (KiCallInterruptServiceRoutine.c)
 *     IopDequeueIrpFromThread @ 0x14002DDE0 (IopDequeueIrpFromThread.c)
 *     IopQueueThreadIrp @ 0x14002E170 (IopQueueThreadIrp.c)
 *     IopQueueIrpToFileObject @ 0x140030960 (IopQueueIrpToFileObject.c)
 *     IopfCompleteRequest @ 0x140053570 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140054840 (IopCompleteRequest.c)
 *     KiExecuteAllDpcs @ 0x140059280 (KiExecuteAllDpcs.c)
 *     KiTimer2Expiration @ 0x14005A0A0 (KiTimer2Expiration.c)
 *     KxReleaseSpinLock @ 0x140095BA0 (KxReleaseSpinLock.c)
 *     KeIntSteerSnapPerf @ 0x1400D6AF0 (KeIntSteerSnapPerf.c)
 *     PpmParkSteerInterrupts @ 0x1400D7A40 (PpmParkSteerInterrupts.c)
 *     KiInsertQueueDpc @ 0x1400D82C0 (KiInsertQueueDpc.c)
 *     PpmCheckSnapAllUtility @ 0x1400D8E00 (PpmCheckSnapAllUtility.c)
 *     PpmIdleExecuteTransition @ 0x1400DA540 (PpmIdleExecuteTransition.c)
 *     PpmUpdatePerformanceFeedback @ 0x1400DB9C0 (PpmUpdatePerformanceFeedback.c)
 *     KdPollBreakIn @ 0x1400DF790 (KdPollBreakIn.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiReleaseSpinLockInstrumented(volatile signed __int64 *a1, __int64 a2)
{
  _InterlockedAnd64(a1, 0LL);
  return PerfLogSpinLockRelease(a1, a2, __rdtsc());
}
