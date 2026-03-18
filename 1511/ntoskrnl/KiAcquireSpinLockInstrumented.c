/*
 * XREFs of KiAcquireSpinLockInstrumented @ 0x1401C4B24
 * Callers:
 *     KiTimer2Expiration @ 0x1400332A0 (KiTimer2Expiration.c)
 *     KeSetTimer2 @ 0x140034600 (KeSetTimer2.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopQueueThreadIrp @ 0x140043B00 (IopQueueThreadIrp.c)
 *     KiInsertQueueDpc @ 0x140043D50 (KiInsertQueueDpc.c)
 *     KiExecuteAllDpcs @ 0x140044870 (KiExecuteAllDpcs.c)
 *     PpmCheckSnapAllUtility @ 0x140045F00 (PpmCheckSnapAllUtility.c)
 *     PpmIdleExecuteTransition @ 0x1400474D0 (PpmIdleExecuteTransition.c)
 *     PpmUpdatePerformanceFeedback @ 0x140049800 (PpmUpdatePerformanceFeedback.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     IopDequeueIrpFromThread @ 0x14007E560 (IopDequeueIrpFromThread.c)
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     IopQueueIrpToFileObject @ 0x14008F8D0 (IopQueueIrpToFileObject.c)
 *     KiCallInterruptServiceRoutine @ 0x1400F6730 (KiCallInterruptServiceRoutine.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140038DE0 (KxWaitForSpinLockAndAcquire.c)
 *     PerfLogSpinLockAcquire @ 0x14021086C (PerfLogSpinLockAcquire.c)
 */

void __fastcall KiAcquireSpinLockInstrumented(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v4; // r9d
  int v5; // edi
  char v6; // si
  unsigned __int64 v7; // rax
  unsigned int InterruptCount; // r14d
  unsigned int v9; // ebp
  int v10; // eax
  unsigned __int64 v11; // rax
  unsigned int v12; // [rsp+58h] [rbp+10h]

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  v5 = (int)a1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v6 = 1;
    v7 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    a2 = (unsigned __int64)HIDWORD(v7) << 32;
    v9 = v7;
  }
  else
  {
    v9 = v12;
    v6 = 0;
    InterruptCount = v12;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  if ( _interlockedbittestandset64(a1, 0LL) )
  {
    v10 = KxWaitForSpinLockAndAcquire(a1, a2, a3);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v4 = v10;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v10;
  }
  if ( v6 )
  {
    v11 = __rdtsc();
    PerfLogSpinLockAcquire(v5, v11, v11 - v9, v4, InterruptCount, 0);
  }
}
