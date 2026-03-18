/*
 * XREFs of CcReferenceSharedCacheMapFileObject @ 0x1400CFD4C
 * Callers:
 *     CcPerfLogWorkItemEnqueue @ 0x14006B848 (CcPerfLogWorkItemEnqueue.c)
 *     CcPurgeAndClearCacheSection @ 0x14006C840 (CcPurgeAndClearCacheSection.c)
 *     CcIsFatalWriteError @ 0x14008E97C (CcIsFatalWriteError.c)
 *     CcPerfLogFlushCache @ 0x1400AAAE4 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1400AC4F0 (CcPerfLogFlushSection.c)
 *     CcDeleteSharedCacheMap @ 0x1400CCD34 (CcDeleteSharedCacheMap.c)
 *     CcGetDirtyPages @ 0x1400CF5A0 (CcGetDirtyPages.c)
 *     CcWriteBehindInternal @ 0x1400E7F30 (CcWriteBehindInternal.c)
 *     CcUnpinRepinnedBcb @ 0x1401B1E6C (CcUnpinRepinnedBcb.c)
 *     CcUnmapVacb @ 0x14042B660 (CcUnmapVacb.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14000F760 (ObFastReferenceObject.c)
 */

ULONG_PTR __fastcall CcReferenceSharedCacheMapFileObject(__int64 a1)
{
  ULONG_PTR result; // rax

  result = ObFastReferenceObject((signed __int64 *)(a1 + 96));
  if ( !result )
    return CcSlowReferenceSharedCacheMapFileObject(a1);
  return result;
}
