/*
 * XREFs of PfpPrefetchSharedInitialize @ 0x1404F48B4
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1403ECF84 (PfpPrefetchRequestPerform.c)
 *     PfSnAsyncPrefetchWorker @ 0x1404F4AF8 (PfSnAsyncPrefetchWorker.c)
 *     PfpQueryFileExtentsRequest @ 0x140669118 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DEA0 (KeInitializeEvent.c)
 *     memset @ 0x1401715C0 (memset.c)
 */

void __fastcall PfpPrefetchSharedInitialize(__int64 a1)
{
  memset((void *)a1, 0, 0x90uLL);
  *(_QWORD *)(a1 + 48) = a1;
  *(_QWORD *)(a1 + 40) = PfpPrefetchSharedConflictNotifyStart;
  KeInitializeEvent((PRKEVENT)(a1 + 88), NotificationEvent, 0);
  *(_QWORD *)(a1 + 120) = 1LL;
}
