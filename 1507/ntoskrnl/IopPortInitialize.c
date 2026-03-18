/*
 * XREFs of IopPortInitialize @ 0x14059AFA0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14059BE90 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopPortInitialize(__int64 a1, int a2)
{
  qword_14034A498 = (__int64)&IopPortFindSuitableRange;
  qword_14034A4A0 = (__int64)IopPortAddAllocation;
  qword_14034A4A8 = (__int64)IopPortBacktrackAllocation;
  qword_14034A418 = (__int64)&IopGenericUnpackRequirement;
  qword_14034A420 = (__int64)IopGenericPackResource;
  qword_14034A428 = (__int64)IopGenericUnpackResource;
  qword_14034A430 = (__int64)IopGenericScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootPortArbiter, a2, 1, (unsigned int)L"RootPort");
}
