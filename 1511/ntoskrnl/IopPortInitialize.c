/*
 * XREFs of IopPortInitialize @ 0x1405286EC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1405295C4 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopPortInitialize(__int64 a1, int a2)
{
  qword_1402FA018 = (__int64)&IopPortFindSuitableRange;
  qword_1402FA020 = (__int64)IopPortAddAllocation;
  qword_1402FA028 = (__int64)IopPortBacktrackAllocation;
  qword_1402F9F98 = (__int64)&IopGenericUnpackRequirement;
  qword_1402F9FA0 = (__int64)IopGenericPackResource;
  qword_1402F9FA8 = (__int64)IopGenericUnpackResource;
  qword_1402F9FB0 = (__int64)IopGenericScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootPortArbiter, a2, 1, (unsigned int)L"RootPort");
}
