/*
 * XREFs of RtlpHpSegFreeRangeCompare @ 0x1800366A8
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x180036344 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1800364A4 (RtlpHpSegPageRangeAllocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegFreeRangeCompare(unsigned __int16 a1, __int64 a2)
{
  if ( a1 < *(_WORD *)(a2 + 26) )
    return 0xFFFFFFFFLL;
  else
    return a1 > *(_WORD *)(a2 + 26);
}
