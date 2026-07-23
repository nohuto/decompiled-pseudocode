/*
 * XREFs of IopDmaInitialize @ 0x140554DBC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140555B88 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopDmaInitialize(__int64 a1, int a2)
{
  qword_14031F378 = (__int64)IopIrqUnpackRequirement;
  qword_14031F380 = (__int64)IopDmaPackResource;
  qword_14031F388 = (__int64)IopDmaUnpackResource;
  qword_14031F390 = (__int64)IopDmaScoreRequirement;
  qword_14031F410 = (__int64)IopDmaOverrideConflict;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootDmaArbiter, a2, 4, (unsigned int)L"RootDMA");
}
