/*
 * XREFs of IopDmaInitialize @ 0x14052877C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1405295C4 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopDmaInitialize(__int64 a1, int a2)
{
  qword_1402F9E38 = (__int64)IopIrqUnpackRequirement;
  qword_1402F9E40 = (__int64)IopDmaPackResource;
  qword_1402F9E48 = (__int64)IopDmaUnpackResource;
  qword_1402F9E50 = (__int64)IopDmaScoreRequirement;
  qword_1402F9ED0 = (__int64)IopDmaOverrideConflict;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootDmaArbiter, a2, 4, (unsigned int)L"RootDMA");
}
