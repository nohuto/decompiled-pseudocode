/*
 * XREFs of RtlpHpSegFreeRangeCompare @ 0x18003EC74
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x18003E91C (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x18003EA7C (RtlpHpSegPageRangeAllocate.c)
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
