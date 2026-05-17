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

signed __int64 __fastcall RtlpHpLargeLockRelease(__int64 a1, char a2)
{
  signed __int64 result; // rax

  if ( (a2 & 1) == 0 )
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 48));
  return result;
}
