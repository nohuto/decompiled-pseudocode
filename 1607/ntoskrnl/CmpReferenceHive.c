/*
 * XREFs of CmpReferenceHive @ 0x14002CDA0
 * Callers:
 *     CmpBlockHiveWrites @ 0x1403E141C (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x1403E16A4 (CmpBlockTwoHiveWrites.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x1403E42D4 (CmpLockHashEntryByIndexExclusive.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1403FA840 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpGetNextHive @ 0x1403FB738 (CmpGetNextHive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x140436860 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockHashEntryExclusive @ 0x140436960 (CmpLockHashEntryExclusive.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmpGetLastHive @ 0x1404BFFDC (CmpGetLastHive.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1404C9290 (CmpTryToLockHashEntryExclusive.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1404E9B30 (CmpLockHashEntrySharedByKcb.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1404F7984 (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockHashEntryShared @ 0x14051888C (CmpLockHashEntryShared.c)
 *     CmpTryToLockHashEntryByIndexExclusive @ 0x140603D38 (CmpTryToLockHashEntryByIndexExclusive.c)
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
