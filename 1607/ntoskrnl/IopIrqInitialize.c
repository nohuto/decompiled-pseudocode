/*
 * XREFs of IopIrqInitialize @ 0x1405548EC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140555648 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopIrqInitialize(__int64 a1, int a2)
{
  qword_14031F1F8 = (__int64)IopIrqUnpackRequirement;
  qword_14031F200 = (__int64)IopIrqPackResource;
  qword_14031F208 = (__int64)IopIrqUnpackResource;
  qword_14031F210 = (__int64)IopIrqScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootIrqArbiter, a2, 2, (unsigned int)L"RootIRQ");
}
