/*
 * XREFs of RtlpHpSegLockAcquire @ 0x18003BB7C
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x18003EA7C (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18003ED4C (RtlpHpSegPageRangeCoalesce.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpHpSegLockAcquire(_RTL_SRWLOCK *a1, char a2)
{
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 11);
}
