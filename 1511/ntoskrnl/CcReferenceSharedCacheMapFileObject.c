/*
 * XREFs of CcReferenceSharedCacheMapFileObject @ 0x14000D4E4
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14000D140 (CcDeleteSharedCacheMap.c)
 *     CcGetDirtyPages @ 0x14003B4D0 (CcGetDirtyPages.c)
 *     CcWriteBehindInternal @ 0x1400B0530 (CcWriteBehindInternal.c)
 *     CcIsFatalWriteError @ 0x1400E4250 (CcIsFatalWriteError.c)
 *     CcPurgeAndClearCacheSection @ 0x1400E7B9C (CcPurgeAndClearCacheSection.c)
 *     CcPerfLogFlushCache @ 0x140123350 (CcPerfLogFlushCache.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140123444 (CcPerfLogWorkItemEnqueue.c)
 *     CcPerfLogFlushSection @ 0x140123608 (CcPerfLogFlushSection.c)
 *     CcUnpinRepinnedBcb @ 0x1401A9140 (CcUnpinRepinnedBcb.c)
 *     CcUnmapVacb @ 0x14047B6A0 (CcUnmapVacb.c)
 * Callees:
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x14000D50C (CcSlowReferenceSharedCacheMapFileObject.c)
 *     ObFastReferenceObject @ 0x140043350 (ObFastReferenceObject.c)
 */

__int64 __fastcall CcReferenceSharedCacheMapFileObject(__int64 a1)
{
  __int64 result; // rax

  result = ObFastReferenceObject(a1 + 96);
  if ( !result )
    return CcSlowReferenceSharedCacheMapFileObject(a1);
  return result;
}
