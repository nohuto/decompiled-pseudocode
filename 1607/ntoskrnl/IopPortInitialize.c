/*
 * XREFs of IopPortInitialize @ 0x1405547EC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140555648 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopPortInitialize(__int64 a1, int a2)
{
  qword_14031F538 = (__int64)&IopPortFindSuitableRange;
  qword_14031F540 = (__int64)IopPortAddAllocation;
  qword_14031F548 = (__int64)IopPortBacktrackAllocation;
  qword_14031F4B8 = (__int64)&IopGenericUnpackRequirement;
  qword_14031F4C0 = (__int64)IopGenericPackResource;
  qword_14031F4C8 = (__int64)IopGenericUnpackResource;
  qword_14031F4D0 = (__int64)IopGenericScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootPortArbiter, a2, 1, (unsigned int)L"RootPort");
}
