/*
 * XREFs of RtlInvertRangeList @ 0x14059E950
 * Callers:
 *     ArbInitializeRangeList @ 0x14071E8FC (ArbInitializeRangeList.c)
 * Callees:
 *     RtlInvertRangeListEx @ 0x14059F75C (RtlInvertRangeListEx.c)
 */

NTSTATUS __stdcall RtlInvertRangeList(PRTL_RANGE_LIST InvertedRangeList, PRTL_RANGE_LIST RangeList)
{
  return RtlInvertRangeListEx(InvertedRangeList, 0LL);
}
