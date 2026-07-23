/*
 * XREFs of RtlpHpLargeLockReleaseShared @ 0x18004F5D8
 * Callers:
 *     RtlpHpLargeAllocSetExtraPresent @ 0x18004F510 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAllocSize @ 0x18004F564 (RtlpHpLargeAllocSize.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180042560 (RtlReleaseSRWLockShared.c)
 */

void __fastcall RtlpHpLargeLockReleaseShared(_RTL_SRWLOCK *a1, char a2)
{
  if ( (a2 & 1) == 0 )
    RtlReleaseSRWLockShared(a1 + 6);
}
