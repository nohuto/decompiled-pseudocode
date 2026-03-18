/*
 * XREFs of CmpReferenceHive @ 0x14002D220
 * Callers:
 *     CmpBlockHiveWrites @ 0x1403E141C (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x1403E16A4 (CmpBlockTwoHiveWrites.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1403FB980 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpGetNextHive @ 0x1403FC878 (CmpGetNextHive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x140437990 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockHashEntryExclusive @ 0x140437A90 (CmpLockHashEntryExclusive.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x14049B3B4 (CmpLockHashEntryByIndexExclusive.c)
 *     CmpLockHashEntryShared @ 0x1404A0480 (CmpLockHashEntryShared.c)
 *     CmpGetLastHive @ 0x1404DC9D8 (CmpGetLastHive.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1404E6920 (CmpTryToLockHashEntryExclusive.c)
 *     CmpLockHashEntrySharedByKcb @ 0x140506BA0 (CmpLockHashEntrySharedByKcb.c)
 *     CmpDoQueueLateUnloadWorker @ 0x140514594 (CmpDoQueueLateUnloadWorker.c)
 *     CmpTryToLockHashEntryByIndexExclusive @ 0x140603C84 (CmpTryToLockHashEntryByIndexExclusive.c)
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
