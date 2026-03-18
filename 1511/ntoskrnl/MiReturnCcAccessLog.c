/*
 * XREFs of MiReturnCcAccessLog @ 0x1400A6FC0
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1400A59F0 (MiTrimOrAgeWorkingSet.c)
 *     MmPrefetchForCacheManager @ 0x1404D9A0C (MmPrefetchForCacheManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReturnCcAccessLog(signed __int64 ListEntry, __int64 a2)
{
  PSLIST_ENTRY v2; // r8
  __int64 result; // rax

  v2 = (PSLIST_ENTRY)ListEntry;
  if ( (_DWORD)a2 )
  {
    result = *(_QWORD *)(ListEntry + 24);
    *(_QWORD *)(ListEntry + 32) = result;
  }
  if ( !qword_1402FED80 )
  {
    result = -_InterlockedCompareExchange64(&qword_1402FED80, ListEntry, 0LL);
    v2 = (PSLIST_ENTRY)(-(__int64)(result != 0) & ListEntry);
  }
  if ( v2 )
  {
    if ( v2[2].Next == (_SLIST_ENTRY *)(&v2[4].Next + 1) )
    {
      LOBYTE(a2) = 1;
      return MmFreeAccessPfnBuffer(v2, a2);
    }
    else
    {
      return MiQueuePageAccessLog(v2);
    }
  }
  return result;
}
