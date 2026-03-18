/*
 * XREFs of PopGetPolicyWorker @ 0x1400D042C
 * Callers:
 *     PopCheckForIdleness @ 0x1400D024C (PopCheckForIdleness.c)
 *     PopSetNotificationWork @ 0x1400D0780 (PopSetNotificationWork.c)
 *     PoNotifySystemTimeSet @ 0x14015A6C4 (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x14023AB98 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x14023AC50 (PopCoalesingTimerDpcCallback.c)
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     PopExecutePowerAction @ 0x1405654E8 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x140566108 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x1405699EC (PopPolicyWorkerActionPromote.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall PopGetPolicyWorker(int a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

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
  PopWorkerPending |= a1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PopWorkerSpinLock, retaddr);
  else
    _InterlockedAnd64(&PopWorkerSpinLock, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
