/*
 * XREFs of RtlCompareMemoryUlong @ 0x14015C040
 * Callers:
 *     RtlpCreateSplitBlock @ 0x1400D320C (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x1400D3A30 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAllocateHeap @ 0x1400D3E80 (RtlpAllocateHeap.c)
 *     MiFreeUnusedPfnPages @ 0x1401322A8 (MiFreeUnusedPfnPages.c)
 *     RtlScrubMemory @ 0x1401FC4F0 (RtlScrubMemory.c)
 *     IopTrackLink @ 0x1404BC4A8 (IopTrackLink.c)
 *     MiSwitchToPfns @ 0x140746514 (MiSwitchToPfns.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall RtlCompareMemoryUlong(PVOID Source, SIZE_T Length, ULONG Pattern)
{
  bool v4; // zf
  SIZE_T v5; // rdx
  SIZE_T v6; // rcx

  v5 = Length >> 2;
  v4 = v5 == 0;
  if ( v5 )
  {
    v6 = v5;
    do
    {
      if ( !v6 )
        break;
      v4 = *(_DWORD *)Source == Pattern;
      Source = (char *)Source + 4;
      --v6;
    }
    while ( v4 );
    if ( !v4 )
      v5 -= v6 + 1;
  }
  return 4 * v5;
}
