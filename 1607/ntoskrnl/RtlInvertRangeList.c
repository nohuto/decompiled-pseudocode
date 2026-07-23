/*
 * XREFs of RtlInvertRangeList @ 0x1405586A8
 * Callers:
 *     ArbInitializeRangeList @ 0x1406E4F98 (ArbInitializeRangeList.c)
 * Callees:
 *     RtlInvertRangeListEx @ 0x1405597DC (RtlInvertRangeListEx.c)
 */

NTSTATUS __stdcall RtlInvertRangeList(PRTL_RANGE_LIST InvertedRangeList, PRTL_RANGE_LIST RangeList)
{
  return RtlInvertRangeListEx(InvertedRangeList, 0LL);
}
