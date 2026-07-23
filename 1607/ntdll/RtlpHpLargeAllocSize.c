/*
 * XREFs of RtlpHpLargeAllocSize @ 0x18004F564
 * Callers:
 *     RtlpHpExtrasGet @ 0x18002925C (RtlpHpExtrasGet.c)
 *     RtlpHpReallocComputeSizes @ 0x180043A14 (RtlpHpReallocComputeSizes.c)
 *     RtlpHpSizeHeap @ 0x180046360 (RtlpHpSizeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1800480F0 (RtlpFreeHeapInternal.c)
 *     RtlpHpSizeHeapInternal @ 0x1800519DC (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     RtlpHpLargeLockReleaseShared @ 0x18004F5D8 (RtlpHpLargeLockReleaseShared.c)
 *     RtlpHpLargeAllocSizeInternal @ 0x18004F5F8 (RtlpHpLargeAllocSizeInternal.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18004F94C (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockAcquireShared @ 0x180050BD4 (RtlpHpLargeLockAcquireShared.c)
 */

__int64 __fastcall RtlpHpLargeAllocSize(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 Metadata; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx

  RtlpHpLargeLockAcquireShared(a1, a3);
  Metadata = RtlpHpLargeAllocGetMetadata(a1);
  if ( Metadata )
    v9 = RtlpHpLargeAllocSizeInternal(v8, Metadata, a4);
  else
    v9 = -1LL;
  RtlpHpLargeLockReleaseShared(a1, a3);
  return v9;
}
