/*
 * XREFs of RtlpHpLargeLockReleaseShared @ 0x18005A48C
 * Callers:
 *     RtlpHpLargeAllocSetExtraPresent @ 0x18005A3C4 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAllocSize @ 0x18005A418 (RtlpHpLargeAllocSize.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 */

unsigned __int64 __fastcall RtlpHpLargeLockReleaseShared(__int64 a1, char a2)
{
  unsigned __int64 result; // rax

  if ( (a2 & 1) == 0 )
    return RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 48));
  return result;
}
