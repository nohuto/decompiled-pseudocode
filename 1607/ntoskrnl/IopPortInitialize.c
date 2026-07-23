/*
 * XREFs of IopPortInitialize @ 0x140554D2C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140555B88 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopPortInitialize(__int64 a1, int a2)
{
  qword_14031F558 = (__int64)&IopPortFindSuitableRange;
  qword_14031F560 = (__int64)IopPortAddAllocation;
  qword_14031F568 = (__int64)IopPortBacktrackAllocation;
  qword_14031F4D8 = (__int64)&IopGenericUnpackRequirement;
  qword_14031F4E0 = (__int64)IopGenericPackResource;
  qword_14031F4E8 = (__int64)IopGenericUnpackResource;
  qword_14031F4F0 = (__int64)IopGenericScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootPortArbiter, a2, 1, (unsigned int)L"RootPort");
}
