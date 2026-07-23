/*
 * XREFs of RtlCompareMemoryUlong @ 0x1800AA730
 * Callers:
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180027780 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x180049360 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x18004B49C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x18004BEF0 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x18004C460 (RtlpGrowBlockInPlace.c)
 *     RtlpValidateHeapSegment @ 0x1800FB6A0 (RtlpValidateHeapSegment.c)
 * Callees:
 *     <none>
 */

SIZE_T __cdecl RtlCompareMemoryUlong(PVOID Source, SIZE_T Length, ULONG Pattern)
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
