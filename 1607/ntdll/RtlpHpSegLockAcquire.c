/*
 * XREFs of RtlpHpSegLockAcquire @ 0x18003BB8C
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x18003EA8C (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18003ED5C (RtlpHpSegPageRangeCoalesce.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpHpSegLockAcquire(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  if ( ((unsigned __int8)a2 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 88, a2, a3, a4);
}
