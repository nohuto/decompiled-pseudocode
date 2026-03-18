/*
 * XREFs of IopMemInitialize @ 0x14052EBBC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1405295C4 (ArbInitializeArbiterInstance.c)
 *     RtlAddRange @ 0x14052D680 (RtlAddRange.c)
 *     ArbAddInaccessibleAllocationRange @ 0x14052E7CC (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x14052E9CC (ArbAddMmConfigRangeAsBootReserved.c)
 */

NTSTATUS __fastcall IopMemInitialize(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  __int64 v3; // [rsp+20h] [rbp-28h]

  qword_1402FA0F8 = (__int64)IopGenericUnpackRequirement;
  qword_1402FA100 = (__int64)IopGenericPackResource;
  qword_1402FA108 = (__int64)IopGenericUnpackResource;
  qword_1402FA110 = (__int64)IopGenericScoreRequirement;
  qword_1402FA178 = (__int64)IopMemFindSuitableRange;
  qword_1402FA148 = (__int64)IopMemQueryConflict;
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
