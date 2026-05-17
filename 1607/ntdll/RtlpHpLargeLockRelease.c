/*
 * XREFs of RtlpHpLargeLockRelease @ 0x18004F994
 * Callers:
 *     RtlpHpLargeFree @ 0x18004F630 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x18004F77C (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeReAlloc @ 0x180051838 (RtlpHpLargeReAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpHpLargeLockRelease(__int64 a1, char a2)
{
  signed __int64 result; // rax

  if ( (a2 & 1) == 0 )
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 48));
  return result;
}
