/*
 * XREFs of WheapWorkQueueAddItem @ 0x140267F68
 * Callers:
 *     WheapReportBootError @ 0x1402664B0 (WheapReportBootError.c)
 *     WheapReportPersistedErrorRecord @ 0x140266568 (WheapReportPersistedErrorRecord.c)
 *     WheaReportHwError @ 0x1402666C8 (WheaReportHwError.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 *     ExInterlockedInsertTailList @ 0x140122800 (ExInterlockedInsertTailList.c)
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
