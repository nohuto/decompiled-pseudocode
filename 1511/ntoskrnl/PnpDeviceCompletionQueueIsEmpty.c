/*
 * XREFs of PnpDeviceCompletionQueueIsEmpty @ 0x14009985C
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1404589E4 (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

_BOOL8 PnpDeviceCompletionQueueIsEmpty()
{
  BOOL v0; // ebx
  KIRQL v1; // al

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_1402FA3E8);
  if ( (__int64 *)PnpDeviceCompletionQueue == &PnpDeviceCompletionQueue )
    v0 = qword_1402FA3B8 == (_QWORD)&qword_1402FA3B8;
  KeReleaseSpinLock(&qword_1402FA3E8, v1);
  return v0;
}
