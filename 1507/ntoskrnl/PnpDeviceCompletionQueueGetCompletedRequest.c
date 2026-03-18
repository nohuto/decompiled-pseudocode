/*
 * XREFs of PnpDeviceCompletionQueueGetCompletedRequest @ 0x140158D00
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1404E1C98 (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 PnpDeviceCompletionQueueGetCompletedRequest()
{
  unsigned __int8 CurrentIrql; // di
  __int64 v1; // rbx
  __int64 v2; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  KeWaitForSingleObject(&byte_14034A848, Executive, 0, 0, 0LL);
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
  v1 = qword_14034A838;
  v2 = *(_QWORD *)qword_14034A838;
  if ( *(__int64 **)(qword_14034A838 + 8) != &qword_14034A838 || *(_QWORD *)(v2 + 8) != qword_14034A838 )
    __fastfail(3u);
  qword_14034A838 = *(_QWORD *)qword_14034A838;
  *(_QWORD *)(v2 + 8) = &qword_14034A838;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&qword_14034A868, retaddr);
  else
    _InterlockedAnd64(&qword_14034A868, 0LL);
  __writecr8(CurrentIrql);
  return v1;
}
