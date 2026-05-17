/*
 * XREFs of RtlpHpLargeAllocSize @ 0x18004F574
 * Callers:
 *     RtlpHpExtrasGet @ 0x18002926C (RtlpHpExtrasGet.c)
 *     RtlpHpReallocComputeSizes @ 0x180043A24 (RtlpHpReallocComputeSizes.c)
 *     RtlpHpSizeHeap @ 0x180046370 (RtlpHpSizeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180048100 (RtlpFreeHeapInternal.c)
 *     RtlpHpSizeHeapInternal @ 0x1800519EC (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     RtlpHpLargeLockReleaseShared @ 0x18004F5E8 (RtlpHpLargeLockReleaseShared.c)
 *     RtlpHpLargeAllocSizeInternal @ 0x18004F608 (RtlpHpLargeAllocSizeInternal.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18004F95C (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockAcquireShared @ 0x180050BE4 (RtlpHpLargeLockAcquireShared.c)
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
