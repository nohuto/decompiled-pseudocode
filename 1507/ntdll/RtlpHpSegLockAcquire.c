/*
 * XREFs of RtlpHpSegLockAcquire @ 0x1800392FC
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x1800364A4 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18003795C (RtlpHpSegPageRangeCoalesce.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpHpSegLockAcquire(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  if ( ((unsigned __int8)a2 & 1) == 0 )
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 88), a2, a3, a4);
}
