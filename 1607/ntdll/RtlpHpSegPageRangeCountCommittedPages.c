/*
 * XREFs of RtlpHpSegPageRangeCountCommittedPages @ 0x18003ED24
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x18003E91C (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeSplit @ 0x18003EC90 (RtlpHpSegPageRangeSplit.c)
 *     RtlpHpSegReportSegment @ 0x180050ED8 (RtlpHpSegReportSegment.c)
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
