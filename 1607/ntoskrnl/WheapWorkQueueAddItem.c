/*
 * XREFs of WheapWorkQueueAddItem @ 0x1402312A0
 * Callers:
 *     WheapReportBootError @ 0x14022FFBC (WheapReportBootError.c)
 *     WheapReportPersistedErrorRecord @ 0x140230074 (WheapReportPersistedErrorRecord.c)
 *     WheaReportHwError @ 0x1402301D4 (WheaReportHwError.c)
 * Callees:
 *     ExInterlockedInsertTailList @ 0x14008C0E0 (ExInterlockedInsertTailList.c)
 *     KiInsertQueueDpc @ 0x1400D82C0 (KiInsertQueueDpc.c)
 */

void __fastcall WheapWorkQueueAddItem(__int64 a1, struct _LIST_ENTRY *a2)
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
