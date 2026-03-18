/*
 * XREFs of IopIrqInitialize @ 0x1405287EC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1405295C4 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopIrqInitialize(__int64 a1, int a2)
{
  qword_1402F9CD8 = (__int64)IopIrqUnpackRequirement;
  qword_1402F9CE0 = (__int64)IopIrqPackResource;
  qword_1402F9CE8 = (__int64)IopIrqUnpackResource;
  qword_1402F9CF0 = (__int64)IopIrqScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootIrqArbiter, a2, 2, (unsigned int)L"RootIRQ");
}
