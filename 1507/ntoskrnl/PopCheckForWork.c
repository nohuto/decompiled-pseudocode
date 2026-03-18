/*
 * XREFs of PopCheckForWork @ 0x1400D01A4
 * Callers:
 *     PoRegisterDeviceForIdleDetection @ 0x1400075E0 (PoRegisterDeviceForIdleDetection.c)
 *     PopCheckForIdleness @ 0x1400D024C (PopCheckForIdleness.c)
 *     PopSetNotificationWork @ 0x1400D0780 (PopSetNotificationWork.c)
 *     PoNotifySystemTimeSet @ 0x14015A6C4 (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x14023AB98 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x14023AC50 (PopCoalesingTimerDpcCallback.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

struct _KTHREAD *PopCheckForWork()
{
  struct _KTHREAD *result; // rax
  unsigned __int8 CurrentIrql; // bl
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = (struct _KTHREAD *)(unsigned int)PopWorkerStatus;
  if ( (PopWorkerStatus & PopWorkerPending) != 0 )
  {
    result = KeGetCurrentThread();
    if ( (struct _KTHREAD *)PopPolicyLockThread != result )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(&PopWorkerSpinLock);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)&PopWorkerSpinLock, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PopWorkerSpinLock);
      }
      if ( PopWorkerStatus < 0 )
      {
        PopWorkerStatus &= ~0x80000000;
        ExQueueWorkItem(&PopPolicyWorker, DelayedWorkQueue);
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(&PopWorkerSpinLock, retaddr);
      else
        _InterlockedAnd64(&PopWorkerSpinLock, 0LL);
      result = (struct _KTHREAD *)CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
