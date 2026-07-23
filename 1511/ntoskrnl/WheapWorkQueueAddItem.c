/*
 * XREFs of WheapWorkQueueAddItem @ 0x14021785C
 * Callers:
 *     WheapReportBootError @ 0x140215E60 (WheapReportBootError.c)
 *     WheapReportPersistedErrorRecord @ 0x140215F18 (WheapReportPersistedErrorRecord.c)
 *     WheaReportHwError @ 0x140216078 (WheaReportHwError.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140043D50 (KiInsertQueueDpc.c)
 *     ExInterlockedInsertTailList @ 0x1400E23E0 (ExInterlockedInsertTailList.c)
 */

void __fastcall WheapWorkQueueAddItem(__int64 a1, _LIST_ENTRY *a2)
{
  ExInterlockedInsertTailList((PLIST_ENTRY)a1, a2, (PKSPIN_LOCK)(a1 + 16));
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 24)) == 1 )
  {
    if ( KeGetCurrentIrql() > 2u )
      KiInsertQueueDpc(a1 + 32, 0LL, 0LL, 0LL, 0);
    else
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 96), DelayedWorkQueue);
  }
}
