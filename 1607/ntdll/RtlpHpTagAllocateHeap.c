/*
 * XREFs of RtlpHpTagAllocateHeap @ 0x1800871E0
 * Callers:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x180022DE0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpTaggableHeap @ 0x180087254 (RtlpHpTaggableHeap.c)
 *     RtlpHpTagContextGetTag @ 0x1800F7674 (RtlpHpTagContextGetTag.c)
 */

unsigned __int64 __fastcall RtlpHpTagAllocateHeap(_DWORD *BaseAddress, signed __int64 Size, int a3)
{
  unsigned __int16 Tag; // di
  unsigned __int64 result; // rax

  if ( (unsigned int)RtlpHpTaggableHeap() )
    Tag = RtlpHpTagContextGetTag();
  else
    Tag = 0;
  result = RtlpAllocateHeapInternal(BaseAddress, Size, a3, Tag);
  if ( !result )
  {
    if ( Tag )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(qword_180150938 + 8LL * (Tag - 1)) + 32LL),
        -Size);
  }
  return result;
}
