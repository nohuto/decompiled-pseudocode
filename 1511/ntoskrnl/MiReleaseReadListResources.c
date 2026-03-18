/*
 * XREFs of MiReleaseReadListResources @ 0x14047B59C
 * Callers:
 *     MmWaitForCacheManagerPrefetch @ 0x1400FB914 (MmWaitForCacheManagerPrefetch.c)
 *     MiPfPrepareSequentialReadList @ 0x14042CB00 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14042D190 (MiPfPrepareReadList.c)
 *     MiPrefetchControlArea @ 0x1404AF248 (MiPrefetchControlArea.c)
 *     MmPrefetchForCacheManager @ 0x1404D9A0C (MmPrefetchForCacheManager.c)
 *     MmPrefetchPagesEx @ 0x1404D9B80 (MmPrefetchPagesEx.c)
 * Callees:
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400AA5CC (MiRemoveViewsFromSectionWithPfn.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiFreeReadListPages @ 0x14047B620 (MiFreeReadListPages.c)
 */

void __fastcall MiReleaseReadListResources(__int64 a1)
{
  __int64 v1; // rbx
  __int64 **v3; // rbx
  __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi

  v1 = *(_QWORD *)(a1 + 8);
  MiFreeReadListPages(a1);
  if ( (*(_DWORD *)(v1 + 56) & 0x20) == 0 )
  {
    v3 = (__int64 **)(a1 + 24);
    while ( *v3 != (__int64 *)v3 )
    {
      v4 = *v3;
      v5 = **v3;
      if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v5 + 8) != v4 )
        __fastfail(3u);
      *v3 = (__int64 *)v5;
      v6 = 0LL;
      for ( *(_QWORD *)(v5 + 8) = v3; (unsigned int)v6 < *((_DWORD *)v4 + 4); v6 = (unsigned int)(v6 + 1) )
        MiRemoveViewsFromSectionWithPfn(v4[v6 + 3], *(unsigned int *)(v4[v6 + 3] + 44));
      ExFreePoolWithTag(v4, 0);
    }
  }
}
