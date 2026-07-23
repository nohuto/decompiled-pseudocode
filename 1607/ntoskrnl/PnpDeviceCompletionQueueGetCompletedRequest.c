/*
 * XREFs of PnpDeviceCompletionQueueGetCompletedRequest @ 0x140130F1C
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1403F3690 (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 PnpDeviceCompletionQueueGetCompletedRequest()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  __int64 v2; // rdx

  KeWaitForSingleObject(&byte_14031F908, Executive, 0, 0, 0LL);
  v0 = KeAcquireSpinLockRaiseToDpc(&qword_14031F928);
  v1 = qword_14031F8F8;
  v2 = *(_QWORD *)qword_14031F8F8;
  if ( *(__int64 **)(qword_14031F8F8 + 8) != &qword_14031F8F8 || *(_QWORD *)(v2 + 8) != qword_14031F8F8 )
    __fastfail(3u);
  qword_14031F8F8 = *(_QWORD *)qword_14031F8F8;
  *(_QWORD *)(v2 + 8) = &qword_14031F8F8;
  KeReleaseSpinLock(&qword_14031F928, v0);
  return v1;
}
