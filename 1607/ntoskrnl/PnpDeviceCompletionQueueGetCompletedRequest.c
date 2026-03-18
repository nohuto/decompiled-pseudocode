/*
 * XREFs of PnpDeviceCompletionQueueGetCompletedRequest @ 0x1401309AC
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1403F47CC (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 PnpDeviceCompletionQueueGetCompletedRequest()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  __int64 v2; // rdx

  KeWaitForSingleObject(&byte_14031F8E8, Executive, 0, 0, 0LL);
  v0 = KeAcquireSpinLockRaiseToDpc(&qword_14031F908);
  v1 = qword_14031F8D8;
  v2 = *(_QWORD *)qword_14031F8D8;
  if ( *(__int64 **)(qword_14031F8D8 + 8) != &qword_14031F8D8 || *(_QWORD *)(v2 + 8) != qword_14031F8D8 )
    __fastfail(3u);
  qword_14031F8D8 = *(_QWORD *)qword_14031F8D8;
  *(_QWORD *)(v2 + 8) = &qword_14031F8D8;
  KeReleaseSpinLock(&qword_14031F908, v0);
  return v1;
}
