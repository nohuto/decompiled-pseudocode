/*
 * XREFs of RtlpHpLargeLockReleaseShared @ 0x180058594
 * Callers:
 *     RtlpHpLargeAllocSetExtraPresent @ 0x180002498 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAllocSize @ 0x180058520 (RtlpHpLargeAllocSize.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 */

unsigned __int64 __fastcall RtlpHpLargeLockReleaseShared(__int64 a1, char a2)
{
  unsigned __int64 result; // rax

  if ( (a2 & 1) == 0 )
    return RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 48));
  return result;
}
