/*
 * XREFs of RtlpPerformHeapMaintenance @ 0x1800299F8
 * Callers:
 *     RtlpAllocateHeap @ 0x180025060 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpActivateLowFragmentationHeap @ 0x180029A4C (RtlpActivateLowFragmentationHeap.c)
 *     RtlpInitializeUCRIndex @ 0x1800883E8 (RtlpInitializeUCRIndex.c)
 */

__int64 __fastcall RtlpPerformHeapMaintenance(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 120);
  if ( (v1 & 0x20000000) != 0 )
  {
    *(_DWORD *)(a1 + 120) = v1 & 0xDFFFFFFF;
    if ( (RtlpDisableHeapLookaside & 1) == 0 )
      RtlpActivateLowFragmentationHeap();
  }
  result = *(unsigned int *)(a1 + 120);
  if ( (result & 0x10000000) != 0 )
  {
    *(_DWORD *)(a1 + 120) = result & 0xEFFFFFFF;
    result = RtlpInitializeUCRIndex(a1);
    *(_DWORD *)(a1 + 120) &= ~0x10000000u;
  }
  return result;
}
