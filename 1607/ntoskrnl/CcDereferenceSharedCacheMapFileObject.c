/*
 * XREFs of CcDereferenceSharedCacheMapFileObject @ 0x1400CDB94
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
