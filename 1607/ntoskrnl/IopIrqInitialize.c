/*
 * XREFs of IopIrqInitialize @ 0x140554E2C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140555B88 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopIrqInitialize(__int64 a1, int a2)
{
  qword_14031F218 = (__int64)IopIrqUnpackRequirement;
  qword_14031F220 = (__int64)IopIrqPackResource;
  qword_14031F228 = (__int64)IopIrqUnpackResource;
  qword_14031F230 = (__int64)IopIrqScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootIrqArbiter, a2, 2, (unsigned int)L"RootIRQ");
}
