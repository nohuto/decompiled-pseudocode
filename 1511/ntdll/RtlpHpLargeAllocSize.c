/*
 * XREFs of RtlpHpLargeAllocSize @ 0x18005A418
 * Callers:
 *     RtlpHpExtrasGet @ 0x180019CBC (RtlpHpExtrasGet.c)
 *     RtlpHpReallocComputeSizes @ 0x18001B074 (RtlpHpReallocComputeSizes.c)
 *     RtlpHpSizeHeap @ 0x18001BDD0 (RtlpHpSizeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1800214A0 (RtlpFreeHeapInternal.c)
 *     RtlpHpSizeHeapInternal @ 0x18005CAC8 (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     RtlpHpLargeLockReleaseShared @ 0x18005A48C (RtlpHpLargeLockReleaseShared.c)
 *     RtlpHpLargeAllocSizeInternal @ 0x18005A4AC (RtlpHpLargeAllocSizeInternal.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18005A7FC (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockAcquireShared @ 0x18005AAAC (RtlpHpLargeLockAcquireShared.c)
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
