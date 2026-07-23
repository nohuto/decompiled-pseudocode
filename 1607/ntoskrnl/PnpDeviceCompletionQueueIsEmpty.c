/*
 * XREFs of PnpDeviceCompletionQueueIsEmpty @ 0x1400092DC
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1403F3690 (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

_BOOL8 PnpDeviceCompletionQueueIsEmpty()
{
  BOOL v0; // ebx
  KIRQL v1; // al

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_14031F928);
  if ( (__int64 *)PnpDeviceCompletionQueue == &PnpDeviceCompletionQueue )
    v0 = qword_14031F8F8 == (_QWORD)&qword_14031F8F8;
  KeReleaseSpinLock(&qword_14031F928, v1);
  return v0;
}
