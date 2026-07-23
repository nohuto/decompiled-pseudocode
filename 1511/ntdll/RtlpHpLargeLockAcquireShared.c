/*
 * XREFs of RtlpHpLargeLockAcquireShared @ 0x18005AAAC
 * Callers:
 *     RtlpHpLargeAllocSetExtraPresent @ 0x18005A3C4 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAllocSize @ 0x18005A418 (RtlpHpLargeAllocSize.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 */

void __fastcall RtlpHpLargeLockAcquireShared(_RTL_SRWLOCK *a1, char a2)
{
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockShared(a1 + 6);
}
