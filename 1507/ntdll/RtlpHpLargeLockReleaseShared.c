/*
 * XREFs of RtlpHpLargeLockReleaseShared @ 0x180058594
 * Callers:
 *     RtlpHpLargeAllocSetExtraPresent @ 0x180002498 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAllocSize @ 0x180058520 (RtlpHpLargeAllocSize.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 */

void __fastcall RtlpHpLargeLockReleaseShared(_RTL_SRWLOCK *a1, char a2)
{
  if ( (a2 & 1) == 0 )
    RtlReleaseSRWLockShared(a1 + 6);
}
