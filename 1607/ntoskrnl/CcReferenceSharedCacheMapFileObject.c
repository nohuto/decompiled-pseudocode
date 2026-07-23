/*
 * XREFs of CcReferenceSharedCacheMapFileObject @ 0x1400CDBEC
 * Callers:
 *     CcPerfLogWorkItemEnqueue @ 0x14006B3C8 (CcPerfLogWorkItemEnqueue.c)
 *     CcPurgeAndClearCacheSection @ 0x14006C3C0 (CcPurgeAndClearCacheSection.c)
 *     CcIsFatalWriteError @ 0x14008E0DC (CcIsFatalWriteError.c)
 *     CcPerfLogFlushCache @ 0x1400A9064 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1400AAA58 (CcPerfLogFlushSection.c)
 *     CcDeleteSharedCacheMap @ 0x1400CABD4 (CcDeleteSharedCacheMap.c)
 *     CcGetDirtyPages @ 0x1400CD440 (CcGetDirtyPages.c)
 *     CcWriteBehindInternal @ 0x1400E5DD0 (CcWriteBehindInternal.c)
 *     CcUnpinRepinnedBcb @ 0x1401B1D50 (CcUnpinRepinnedBcb.c)
 *     CcUnmapVacb @ 0x14042A530 (CcUnmapVacb.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14000F2E0 (ObFastReferenceObject.c)
 */

ULONG_PTR __fastcall CcReferenceSharedCacheMapFileObject(__int64 a1)
{
  ULONG_PTR result; // rax

  result = ObFastReferenceObject((signed __int64 *)(a1 + 96));
  if ( !result )
    return CcSlowReferenceSharedCacheMapFileObject(a1);
  return result;
}
