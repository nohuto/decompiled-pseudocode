/*
 * XREFs of RtlpHpCalculateAllocSize @ 0x180043B98
 * Callers:
 *     RtlpHpReallocComputeSizes @ 0x180043A14 (RtlpHpReallocComputeSizes.c)
 *     RtlpHpAllocateHeap @ 0x1800507C8 (RtlpHpAllocateHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpCalculateAllocSize(unsigned __int64 a1, int a2)
{
  if ( (a2 & 0x10000000) != 0 )
    a1 += 16LL;
  if ( (a2 & 0x20000F08) != 0 )
    a1 = ((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  if ( !a1 )
    return 1LL;
  return a1;
}
