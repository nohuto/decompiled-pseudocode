/*
 * XREFs of RtlpHpLargeLockRelease @ 0x18005A5F4
 * Callers:
 *     RtlpHpLargeReAlloc @ 0x180001850 (RtlpHpLargeReAlloc.c)
 *     RtlpHpLargeFree @ 0x18005A4D4 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x18005A614 (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapUnlock @ 0x18005AFDC (RtlpHpHeapUnlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpHpLargeLockRelease(_RTL_SRWLOCK *a1, char a2)
{
  if ( (a2 & 1) == 0 )
    RtlReleaseSRWLockExclusive(a1 + 6);
}
