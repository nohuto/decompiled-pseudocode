/*
 * XREFs of IopDmaInitialize @ 0x14055487C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140555648 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopDmaInitialize(__int64 a1, int a2)
{
  qword_14031F358 = (__int64)IopIrqUnpackRequirement;
  qword_14031F360 = (__int64)IopDmaPackResource;
  qword_14031F368 = (__int64)IopDmaUnpackResource;
  qword_14031F370 = (__int64)IopDmaScoreRequirement;
  qword_14031F3F0 = (__int64)IopDmaOverrideConflict;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootDmaArbiter, a2, 4, (unsigned int)L"RootDMA");
}
