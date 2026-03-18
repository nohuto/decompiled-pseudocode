/*
 * XREFs of RtlInvertRangeList @ 0x14052BFF4
 * Callers:
 *     ArbInitializeRangeList @ 0x14069E2A0 (ArbInitializeRangeList.c)
 * Callees:
 *     RtlInvertRangeListEx @ 0x14052CDDC (RtlInvertRangeListEx.c)
 */

NTSTATUS __stdcall RtlInvertRangeList(PRTL_RANGE_LIST InvertedRangeList, PRTL_RANGE_LIST RangeList)
{
  return RtlInvertRangeListEx(InvertedRangeList, 0LL);
}
