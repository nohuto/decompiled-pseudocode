/*
 * XREFs of RtlpHpSegLockAcquire @ 0x180059098
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x180058BE4 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180058E64 (RtlpHpSegPageRangeCoalesce.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpHpSegLockAcquire(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  if ( ((unsigned __int8)a2 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 88, a2, a3, a4);
}
