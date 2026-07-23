/*
 * XREFs of IopMemInitialize @ 0x14055B5C0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140555B88 (ArbInitializeArbiterInstance.c)
 *     RtlAddRange @ 0x14055A080 (RtlAddRange.c)
 *     ArbAddInaccessibleAllocationRange @ 0x14055B1C4 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x14055B3D0 (ArbAddMmConfigRangeAsBootReserved.c)
 */

NTSTATUS __fastcall IopMemInitialize(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  __int64 v3; // [rsp+20h] [rbp-28h]

  qword_14031F638 = (__int64)IopGenericUnpackRequirement;
  qword_14031F640 = (__int64)IopGenericPackResource;
  qword_14031F648 = (__int64)IopGenericUnpackResource;
  qword_14031F650 = (__int64)IopGenericScoreRequirement;
  qword_14031F6B8 = (__int64)IopMemFindSuitableRange;
  qword_14031F688 = (__int64)IopMemQueryConflict;
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
