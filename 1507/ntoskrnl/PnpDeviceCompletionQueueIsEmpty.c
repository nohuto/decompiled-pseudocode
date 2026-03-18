/*
 * XREFs of PnpDeviceCompletionQueueIsEmpty @ 0x1400CFCFC
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1404E1C98 (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 PnpDeviceCompletionQueueIsEmpty()
{
  unsigned int v0; // ebx
  unsigned __int8 CurrentIrql; // di
  void *retaddr; // [rsp+28h] [rbp+0h]

  v0 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&qword_14034A868);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14034A868, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_14034A868);
  }
  if ( (__int64 *)PnpDeviceCompletionQueue == &PnpDeviceCompletionQueue
    && (__int64 *)qword_14034A838 == &qword_14034A838 )
  {
    v0 = 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&qword_14034A868, retaddr);
  else
    _InterlockedAnd64(&qword_14034A868, 0LL);
  __writecr8(CurrentIrql);
  return v0;
}
