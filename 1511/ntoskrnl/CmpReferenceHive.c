/*
 * XREFs of CmpReferenceHive @ 0x140041E80
 * Callers:
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1403DB1AC (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpGetLastHive @ 0x1403DB2F4 (CmpGetLastHive.c)
 *     CmpBlockHiveWrites @ 0x1403DC244 (CmpBlockHiveWrites.c)
 *     CmpGetNextHive @ 0x1403DC94C (CmpGetNextHive.c)
 *     CmpBlockTwoHiveWrites @ 0x1403DE0D8 (CmpBlockTwoHiveWrites.c)
 *     CmpLockHashEntryShared @ 0x1403DEB28 (CmpLockHashEntryShared.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1403F54E0 (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockHashEntryExclusive @ 0x1403F9DF0 (CmpLockHashEntryExclusive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1403FB6B0 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 *     CmpBuildHashStackAndLookupCache @ 0x140408290 (CmpBuildHashStackAndLookupCache.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x140499A7C (CmpLockHashEntryByIndexExclusive.c)
 *     CmpLockHashEntryByIndexShared @ 0x1405E6524 (CmpLockHashEntryByIndexShared.c)
 *     CmpTryToLockHashEntryByIndexExclusive @ 0x1405E65C4 (CmpTryToLockHashEntryByIndexExclusive.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpReferenceHive(__int64 a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  _m_prefetchw((const void *)(a1 + 5496));
  v1 = *(_DWORD *)(a1 + 5496);
  if ( !v1 )
    return 0;
  while ( 1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 5496), v1 + 1, v1);
    if ( v2 == v1 )
      break;
    if ( !v1 )
      return 0;
  }
  return 1;
}
