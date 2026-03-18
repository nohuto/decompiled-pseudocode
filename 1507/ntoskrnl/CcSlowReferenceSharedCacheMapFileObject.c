/*
 * XREFs of CcSlowReferenceSharedCacheMapFileObject @ 0x1400854E0
 * Callers:
 *     CcFlushCachePriv @ 0x140040060 (CcFlushCachePriv.c)
 *     CcWriteBehindInternal @ 0x1400414C0 (CcWriteBehindInternal.c)
 *     CcPurgeAndClearCacheSection @ 0x140078F1C (CcPurgeAndClearCacheSection.c)
 *     CcUnmapAndPurge @ 0x1400865D8 (CcUnmapAndPurge.c)
 *     CcGetDirtyPages @ 0x1400F1FE0 (CcGetDirtyPages.c)
 *     CcPerfLogWorkItemEnqueue @ 0x14011E480 (CcPerfLogWorkItemEnqueue.c)
 *     CcPerfLogFlushCache @ 0x140126F18 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1401288B4 (CcPerfLogFlushSection.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14012FB7C (CcNotifyOfMappedWriteComplete.c)
 *     CcUnpinRepinnedBcb @ 0x1401DD4E8 (CcUnpinRepinnedBcb.c)
 *     CcUnmapVacb @ 0x1404B2D44 (CcUnmapVacb.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall CcSlowReferenceSharedCacheMapFileObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rbx

  v5 = KeAbPreAcquire((ULONG_PTR)&CcChangeSharedCacheMapFileLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&CcChangeSharedCacheMapFileLock, v5, &CcChangeSharedCacheMapFileLock);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  v6 = ObFastReferenceObjectLocked(a1 + 96);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&CcChangeSharedCacheMapFileLock);
  KeAbPostRelease((ULONG_PTR)&CcChangeSharedCacheMapFileLock);
  return v6;
}
