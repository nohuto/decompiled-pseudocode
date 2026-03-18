/*
 * XREFs of IopMemInitialize @ 0x1405A153C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14059BE90 (ArbInitializeArbiterInstance.c)
 *     RtlAddRange @ 0x1405A0000 (RtlAddRange.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1405A114C (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1405A134C (ArbAddMmConfigRangeAsBootReserved.c)
 */

NTSTATUS __fastcall IopMemInitialize(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  __int64 v3; // [rsp+20h] [rbp-28h]

  qword_14034A578 = (__int64)IopGenericUnpackRequirement;
  qword_14034A580 = (__int64)IopGenericPackResource;
  qword_14034A588 = (__int64)IopGenericUnpackResource;
  qword_14034A590 = (__int64)IopGenericScoreRequirement;
  qword_14034A5F8 = (__int64)IopMemFindSuitableRange;
  qword_14034A5C8 = (__int64)IopMemQueryConflict;
  result = ArbInitializeArbiterInstance(
             (__int64)&IopRootMemArbiter,
             a2,
             3,
             (__int64)L"RootMemory",
             v3,
             (__int64)IopGenericTranslateOrdering);
  if ( result >= 0 )
  {
    result = RtlAddRange(RangeList, 0LL, 0xFFFuLL, 0, 0, 0LL, 0LL);
    if ( result >= 0 )
    {
      result = ArbAddInaccessibleAllocationRange((__int64)&IopRootMemArbiter, RangeList);
      if ( result >= 0 )
        return ArbAddMmConfigRangeAsBootReserved((__int64)&IopRootMemArbiter, RangeList);
    }
  }
  return result;
}
