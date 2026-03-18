/*
 * XREFs of CmpReferenceHive @ 0x1400506B0
 * Callers:
 *     CmpBlockHiveWrites @ 0x14040760C (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x140407890 (CmpBlockTwoHiveWrites.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1404460B8 (CmpDoQueueLateUnloadWorker.c)
 *     CmpGetNextHive @ 0x140447A6C (CmpGetNextHive.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x140447D3C (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpKcbCacheLookup @ 0x1404993B0 (CmpKcbCacheLookup.c)
 *     CmpBuildHashStackAndLookupCache @ 0x14049A140 (CmpBuildHashStackAndLookupCache.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1404C8A40 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockHashEntryExclusive @ 0x1404CCB90 (CmpLockHashEntryExclusive.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x1404EDE10 (CmpLockHashEntryByIndexExclusive.c)
 *     CmpLockHashEntryShared @ 0x140541620 (CmpLockHashEntryShared.c)
 *     CmpGetLastHive @ 0x140548294 (CmpGetLastHive.c)
 *     CmpLockHashEntryByIndexShared @ 0x14058EA5C (CmpLockHashEntryByIndexShared.c)
 *     CmpTryToLockHashEntryByIndexExclusive @ 0x14065D9C4 (CmpTryToLockHashEntryByIndexExclusive.c)
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
