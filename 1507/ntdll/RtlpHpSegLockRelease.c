/*
 * XREFs of RtlpHpSegLockRelease @ 0x18003931C
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x1800364A4 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18003795C (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpHeapUnlock @ 0x1800599EC (RtlpHpHeapUnlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpHpSegLockRelease(__int64 a1, char a2)
{
  signed __int64 result; // rax

  if ( (a2 & 1) == 0 )
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 88));
  return result;
}
