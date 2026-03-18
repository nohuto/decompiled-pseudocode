/*
 * XREFs of PnpDeviceCompletionQueueIsEmpty @ 0x140009768
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1403F47CC (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 */

_BOOL8 PnpDeviceCompletionQueueIsEmpty()
{
  BOOL v0; // ebx
  KIRQL v1; // al

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_14031F908);
  if ( (__int64 *)PnpDeviceCompletionQueue == &PnpDeviceCompletionQueue )
    v0 = qword_14031F8D8 == (_QWORD)&qword_14031F8D8;
  KeReleaseSpinLock(&qword_14031F908, v1);
  return v0;
}
