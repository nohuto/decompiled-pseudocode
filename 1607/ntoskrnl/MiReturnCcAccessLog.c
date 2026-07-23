/*
 * XREFs of MiReturnCcAccessLog @ 0x1400CC664
 * Callers:
 *     MiCheckAndProcessCcAccessLog @ 0x1400886A4 (MiCheckAndProcessCcAccessLog.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400CBB40 (MiTrimOrAgeWorkingSet.c)
 *     MmPrefetchForCacheManager @ 0x14042B4AC (MmPrefetchForCacheManager.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnCcAccessLog(signed __int64 ListEntry, int a2)
{
  PSLIST_ENTRY v2; // r8

  v2 = (PSLIST_ENTRY)ListEntry;
  if ( a2 )
    *(_QWORD *)(ListEntry + 32) = *(_QWORD *)(ListEntry + 24);
  if ( !qword_1403271C0 )
    v2 = (PSLIST_ENTRY)(-(__int64)(_InterlockedCompareExchange64(&qword_1403271C0, ListEntry, 0LL) != 0) & ListEntry);
  if ( v2 )
  {
    if ( v2[2].Next == (_SLIST_ENTRY *)(&v2[4].Next + 1) )
      MmFreeAccessPfnBuffer((__int64)v2, 1);
    else
      MiQueuePageAccessLog(v2);
  }
}
