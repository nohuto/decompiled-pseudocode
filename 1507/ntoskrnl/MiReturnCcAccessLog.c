/*
 * XREFs of MiReturnCcAccessLog @ 0x140119F80
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140099740 (MiTrimOrAgeWorkingSet.c)
 *     MiCheckAndProcessCcAccessLog @ 0x140119F44 (MiCheckAndProcessCcAccessLog.c)
 *     MmPrefetchForCacheManager @ 0x140477744 (MmPrefetchForCacheManager.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnCcAccessLog(signed __int64 ListEntry, int a2)
{
  PSLIST_ENTRY v2; // r8

  v2 = (PSLIST_ENTRY)ListEntry;
  if ( a2 )
    *(_QWORD *)(ListEntry + 32) = *(_QWORD *)(ListEntry + 24);
  if ( !qword_14034F240 )
    v2 = (PSLIST_ENTRY)(-(__int64)(_InterlockedCompareExchange64(&qword_14034F240, ListEntry, 0LL) != 0) & ListEntry);
  if ( v2 )
  {
    if ( v2[2].Next == (_SLIST_ENTRY *)(&v2[4].Next + 1) )
      MmFreeAccessPfnBuffer((__int64)v2, 1);
    else
      MiQueuePageAccessLog(v2);
  }
}
