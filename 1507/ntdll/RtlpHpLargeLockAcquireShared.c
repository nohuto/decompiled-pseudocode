/*
 * XREFs of RtlpHpLargeLockAcquireShared @ 0x180058A70
 * Callers:
 *     RtlpHpLargeAllocSetExtraPresent @ 0x180002498 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAllocSize @ 0x180058520 (RtlpHpLargeAllocSize.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 */

void __fastcall RtlpHpLargeLockAcquireShared(_RTL_SRWLOCK *a1, char a2)
{
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockShared(a1 + 6);
}
