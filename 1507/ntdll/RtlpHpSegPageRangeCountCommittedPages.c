/*
 * XREFs of RtlpHpSegPageRangeCountCommittedPages @ 0x180036758
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x180036344 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeSplit @ 0x1800366C4 (RtlpHpSegPageRangeSplit.c)
 *     RtlpHpSegReportSegment @ 0x1800F15CC (RtlpHpSegReportSegment.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegPageRangeCountCommittedPages(__int64 a1, int a2)
{
  __int64 result; // rax
  _BYTE *v3; // r8

  result = 0LL;
  if ( a2 )
  {
    v3 = (_BYTE *)(a1 + 24);
    do
    {
      if ( (*v3 & 2) != 0 )
        result = (unsigned int)(result + 1);
      v3 += 32;
      --a2;
    }
    while ( a2 );
  }
  return result;
}
