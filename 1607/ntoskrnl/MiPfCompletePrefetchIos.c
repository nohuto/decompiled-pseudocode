/*
 * XREFs of MiPfCompletePrefetchIos @ 0x140023494
 * Callers:
 *     MmWaitForCacheManagerPrefetch @ 0x140022050 (MmWaitForCacheManagerPrefetch.c)
 *     MiPrefetchVirtualMemory @ 0x1400BDB30 (MiPrefetchVirtualMemory.c)
 *     MmPrefetchPagesEx @ 0x14042AFAC (MmPrefetchPagesEx.c)
 *     MiPrefetchControlArea @ 0x14050A6B4 (MiPrefetchControlArea.c)
 * Callees:
 *     MiPfCompleteInPageSupport @ 0x140023538 (MiPfCompleteInPageSupport.c)
 *     MiPfCoalesceAndIssueIOs @ 0x1400A8D54 (MiPfCoalesceAndIssueIOs.c)
 *     MiPfCompleteCoalescedIo @ 0x140126130 (MiPfCompleteCoalescedIo.c)
 */

__int64 __fastcall MiPfCompletePrefetchIos(ULONG_PTR *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  ULONG_PTR v6; // rcx
  ULONG_PTR v7; // rax
  unsigned int v8; // eax

  v3 = 0;
  if ( a2 )
    MiPfCoalesceAndIssueIOs(a2, a1, 0LL);
  while ( 1 )
  {
    v6 = *a1;
    if ( (ULONG_PTR *)*a1 == a1 )
      break;
    v7 = *(_QWORD *)v6;
    if ( *(ULONG_PTR **)(v6 + 8) != a1 || *(_QWORD *)(v7 + 8) != v6 )
      __fastfail(3u);
    *a1 = v7;
    *(_QWORD *)(v7 + 8) = a1;
    if ( (*(_BYTE *)(v6 + 191) & 0x40) != 0 )
      v8 = MiPfCompleteCoalescedIo(v6);
    else
      v8 = MiPfCompleteInPageSupport(v6, a3);
    if ( ((v8 + 0x80000000) & 0x80000000) == 0 && v8 != -1073740748 )
      v3 = v8;
  }
  return v3;
}
