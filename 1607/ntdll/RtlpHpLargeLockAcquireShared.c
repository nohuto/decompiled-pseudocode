/*
 * XREFs of RtlpHpLargeLockAcquireShared @ 0x180050BD4
 * Callers:
 *     RtlpHpLargeAllocSetExtraPresent @ 0x18004F510 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAllocSize @ 0x18004F564 (RtlpHpLargeAllocSize.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180042640 (RtlAcquireSRWLockShared.c)
 */

void __fastcall RtlpHpLargeLockAcquireShared(_RTL_SRWLOCK *a1, char a2)
{
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockShared(a1 + 6);
}
