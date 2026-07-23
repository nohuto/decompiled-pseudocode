/*
 * XREFs of WheapWorkQueueAddItem @ 0x1402310CC
 * Callers:
 *     WheapReportBootError @ 0x14022FDE8 (WheapReportBootError.c)
 *     WheapReportPersistedErrorRecord @ 0x14022FEA0 (WheapReportPersistedErrorRecord.c)
 *     WheaReportHwError @ 0x140230000 (WheaReportHwError.c)
 * Callees:
 *     ExInterlockedInsertTailList @ 0x14008B840 (ExInterlockedInsertTailList.c)
 *     KiInsertQueueDpc @ 0x1400D6160 (KiInsertQueueDpc.c)
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
