/*
 * XREFs of IopIrqInitialize @ 0x14059B0A0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14059BE90 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopIrqInitialize(__int64 a1, int a2)
{
  qword_14034A158 = (__int64)IopIrqUnpackRequirement;
  qword_14034A160 = (__int64)IopIrqPackResource;
  qword_14034A168 = (__int64)IopIrqUnpackResource;
  qword_14034A170 = (__int64)IopIrqScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootIrqArbiter, a2, 2, (unsigned int)L"RootIRQ");
}
