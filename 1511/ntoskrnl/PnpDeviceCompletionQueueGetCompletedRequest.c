/*
 * XREFs of PnpDeviceCompletionQueueGetCompletedRequest @ 0x140125C38
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1404589E4 (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 */

__int64 PnpDeviceCompletionQueueGetCompletedRequest()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  __int64 v2; // rdx

  KeWaitForSingleObject(&byte_1402FA3C8, Executive, 0, 0, 0LL);
  v0 = KeAcquireSpinLockRaiseToDpc(&qword_1402FA3E8);
  v1 = qword_1402FA3B8;
  v2 = *(_QWORD *)qword_1402FA3B8;
  if ( *(__int64 **)(qword_1402FA3B8 + 8) != &qword_1402FA3B8 || *(_QWORD *)(v2 + 8) != qword_1402FA3B8 )
    __fastfail(3u);
  qword_1402FA3B8 = *(_QWORD *)qword_1402FA3B8;
  *(_QWORD *)(v2 + 8) = &qword_1402FA3B8;
  KeReleaseSpinLock(&qword_1402FA3E8, v0);
  return v1;
}
