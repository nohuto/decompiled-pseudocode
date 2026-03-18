/*
 * XREFs of RtlInvertRangeList @ 0x140558168
 * Callers:
 *     ArbInitializeRangeList @ 0x1406E4E60 (ArbInitializeRangeList.c)
 * Callees:
 *     RtlInvertRangeListEx @ 0x14055929C (RtlInvertRangeListEx.c)
 */

NTSTATUS __stdcall RtlInvertRangeList(PRTL_RANGE_LIST InvertedRangeList, PRTL_RANGE_LIST RangeList)
{
  return RtlInvertRangeListEx(InvertedRangeList, 0LL);
}
