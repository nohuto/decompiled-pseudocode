/*
 * XREFs of KiAcquireSpinLockInstrumented @ 0x1401D3CDC
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
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400D8260 (KxWaitForSpinLockAndAcquire.c)
 *     PerfLogSpinLockAcquire @ 0x140228678 (PerfLogSpinLockAcquire.c)
 */

void __fastcall KiAcquireSpinLockInstrumented(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v2; // r9d
  int v3; // edi
  char v4; // si
  unsigned __int64 v5; // rax
  unsigned int InterruptCount; // r14d
  unsigned int v7; // ebp
  int v8; // eax
  unsigned __int64 v9; // rax
  unsigned int v10; // [rsp+58h] [rbp+10h]

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 0;
  v3 = (int)a1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v4 = 1;
    v5 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v7 = v5;
  }
  else
  {
    v7 = v10;
    v4 = 0;
    InterruptCount = v10;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  if ( _interlockedbittestandset64(a1, 0LL) )
  {
    v8 = KxWaitForSpinLockAndAcquire(a1);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v2 = v8;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v8;
  }
  if ( v4 )
  {
    v9 = __rdtsc();
    PerfLogSpinLockAcquire(v3, v9, v9 - v7, v2, InterruptCount, 0);
  }
}
