/*
 * XREFs of RtlpHpLargeAllocSize @ 0x180058520
 * Callers:
 *     RtlpHpSizeHeap @ 0x18002A810 (RtlpHpSizeHeap.c)
 *     RtlpHpSizeHeapInternal @ 0x180037E74 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpExtrasGet @ 0x1800582D4 (RtlpHpExtrasGet.c)
 * Callees:
 *     RtlpHpLargeLockReleaseShared @ 0x180058594 (RtlpHpLargeLockReleaseShared.c)
 *     RtlpHpLargeAllocSizeInternal @ 0x1800585B4 (RtlpHpLargeAllocSizeInternal.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x1800588CC (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockAcquireShared @ 0x180058A70 (RtlpHpLargeLockAcquireShared.c)
 */

__int64 __fastcall RtlpHpLargeAllocSize(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 Metadata; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx

  RtlpHpLargeLockAcquireShared(a1, a3);
  Metadata = RtlpHpLargeAllocGetMetadata(a1, a2);
  if ( Metadata )
    v10 = RtlpHpLargeAllocSizeInternal(v9, Metadata, a4);
  else
    v10 = -1LL;
  RtlpHpLargeLockReleaseShared(a1, a3);
  return v10;
}
