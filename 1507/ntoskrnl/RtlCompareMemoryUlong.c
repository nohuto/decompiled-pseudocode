/*
 * XREFs of RtlCompareMemoryUlong @ 0x14018BB20
 * Callers:
 *     MiZeroLargePage @ 0x1400FC2EC (MiZeroLargePage.c)
 *     RtlpCreateSplitBlock @ 0x14010968C (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x140109E94 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAllocateHeap @ 0x14010A2D0 (RtlpAllocateHeap.c)
 *     RtlScrubMemory @ 0x14024B380 (RtlScrubMemory.c)
 *     IopTrackLink @ 0x14040C918 (IopTrackLink.c)
 *     MiSwitchToPfns @ 0x1407C4AD4 (MiSwitchToPfns.c)
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
