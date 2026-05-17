/*
 * XREFs of RtlpHpLargeAllocSetExtraPresent @ 0x180002498
 * Callers:
 *     RtlpHpExtrasSetPresent @ 0x18006A44C (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     RtlpHpLargeLockReleaseShared @ 0x180058594 (RtlpHpLargeLockReleaseShared.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x1800588CC (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockAcquireShared @ 0x180058A70 (RtlpHpLargeLockAcquireShared.c)
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
