/*
 * XREFs of RtlpHpLargeLockRelease @ 0x180058904
 * Callers:
 *     RtlpHpLargeReAlloc @ 0x180058360 (RtlpHpLargeReAlloc.c)
 *     RtlpHpLargeFree @ 0x1800585DC (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x1800586E4 (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapUnlock @ 0x1800599EC (RtlpHpHeapUnlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpHpLargeLockRelease(__int64 a1, char a2)
{
  signed __int64 result; // rax

  if ( (a2 & 1) == 0 )
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 48));
  return result;
}
