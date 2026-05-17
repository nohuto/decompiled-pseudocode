/*
 * XREFs of RtlpHpSegPageRangeCountCommittedPages @ 0x180058E40
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x180058A98 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeSplit @ 0x180058DAC (RtlpHpSegPageRangeSplit.c)
 *     RtlpHpSegReportSegment @ 0x180059E98 (RtlpHpSegReportSegment.c)
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
