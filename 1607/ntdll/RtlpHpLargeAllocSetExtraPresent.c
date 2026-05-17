/*
 * XREFs of RtlpHpLargeAllocSetExtraPresent @ 0x18004F520
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180022DF0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpExtrasSetPresent @ 0x18005173C (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     RtlpHpLargeLockReleaseShared @ 0x18004F5E8 (RtlpHpLargeLockReleaseShared.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18004F95C (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockAcquireShared @ 0x180050BE4 (RtlpHpLargeLockAcquireShared.c)
 */

__int64 __fastcall RtlpHpLargeAllocSetExtraPresent(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 Metadata; // rbx
  __int64 result; // rax

  RtlpHpLargeLockAcquireShared(a1, a3);
  Metadata = RtlpHpLargeAllocGetMetadata(a1);
  result = RtlpHpLargeLockReleaseShared(a1, a3);
  *(_QWORD *)(Metadata + 32) |= 1uLL;
  return result;
}
