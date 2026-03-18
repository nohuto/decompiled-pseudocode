/*
 * XREFs of PfSnInitializePrefetchHeader @ 0x140458D84
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1404567D0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     memset @ 0x140195A80 (memset.c)
 */

void __fastcall PfSnInitializePrefetchHeader(__int64 a1)
{
  memset((void *)a1, 0, 0xF0uLL);
  *(_QWORD *)(a1 + 144) = a1 + 136;
  *(_QWORD *)(a1 + 136) = a1 + 136;
  *(_QWORD *)(a1 + 160) = a1 + 152;
  *(_QWORD *)(a1 + 152) = a1 + 152;
  memset((void *)(a1 + 8), 0, 0x78uLL);
  *(_QWORD *)(a1 + 56) = a1 + 8;
  *(_QWORD *)(a1 + 48) = PfpPrefetchSharedConflictNotify;
  KeInitializeEvent((PRKEVENT)(a1 + 96), NotificationEvent, 0);
  *(_QWORD *)(a1 + 40) = a1;
  *(_DWORD *)(a1 + 68) = 250;
  *(_DWORD *)(a1 + 64) = 15;
}
