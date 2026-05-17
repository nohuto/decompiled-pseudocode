/*
 * XREFs of RtlpHpLargeAllocSetExtraPresent @ 0x18005A3C4
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180025610 (RtlpAllocateHeapInternal.c)
 *     RtlpHpExtrasSetPresent @ 0x18005C9DC (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     RtlpHpLargeLockReleaseShared @ 0x18005A48C (RtlpHpLargeLockReleaseShared.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18005A7FC (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockAcquireShared @ 0x18005AAAC (RtlpHpLargeLockAcquireShared.c)
 */

__int64 __fastcall RtlpHpLargeAllocSetExtraPresent(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 Metadata; // rbx
  __int64 result; // rax

  RtlpHpLargeLockAcquireShared(a1, a3);
  Metadata = RtlpHpLargeAllocGetMetadata(a1, a2);
  result = RtlpHpLargeLockReleaseShared(a1, a3);
  *(_QWORD *)(Metadata + 32) |= 1uLL;
  return result;
}
