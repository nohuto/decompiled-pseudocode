/*
 * XREFs of RtlpPerformHeapMaintenance @ 0x1800299E8
 * Callers:
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpActivateLowFragmentationHeap @ 0x180029A3C (RtlpActivateLowFragmentationHeap.c)
 *     RtlpInitializeUCRIndex @ 0x1800883D8 (RtlpInitializeUCRIndex.c)
 */

__int64 __fastcall RtlpPerformHeapMaintenance(_DWORD *a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = a1[30];
  if ( (v1 & 0x20000000) != 0 )
  {
    a1[30] = v1 & 0xDFFFFFFF;
    if ( (RtlpDisableHeapLookaside & 1) == 0 )
      RtlpActivateLowFragmentationHeap(a1);
  }
  result = (unsigned int)a1[30];
  if ( (result & 0x10000000) != 0 )
  {
    a1[30] = result & 0xEFFFFFFF;
    result = RtlpInitializeUCRIndex(a1);
    a1[30] &= ~0x10000000u;
  }
  return result;
}
