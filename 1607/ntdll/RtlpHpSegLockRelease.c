/*
 * XREFs of RtlpHpSegLockRelease @ 0x18003BB6C
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x18003EA8C (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18003ED5C (RtlpHpSegPageRangeCoalesce.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpHpSegLockRelease(__int64 a1, char a2)
{
  signed __int64 result; // rax

  if ( (a2 & 1) == 0 )
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 88));
  return result;
}
