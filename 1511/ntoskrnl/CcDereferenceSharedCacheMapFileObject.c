/*
 * XREFs of CcDereferenceSharedCacheMapFileObject @ 0x14000D4AC
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
    ObDereferenceObjectDeferDeleteWithTag((PVOID)a2, 0x746C6644u);
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
