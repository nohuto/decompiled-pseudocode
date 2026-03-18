/*
 * XREFs of CcDereferenceSharedCacheMapFileObject @ 0x1400CFCF4
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
 *     <none>
 */

void __fastcall CcDereferenceSharedCacheMapFileObject(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 96));
  v2 = *(_QWORD *)(a1 + 96);
  if ( (a2 ^ v2) >= 0xF )
  {
LABEL_4:
    ObDereferenceObjectDeferDelete((PVOID)a2);
  }
  else
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 96), v2 + 1, v2);
      if ( v3 == v2 )
        break;
      if ( (a2 ^ v2) >= 0xF )
        goto LABEL_4;
    }
  }
}
