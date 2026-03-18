/*
 * XREFs of IopBusNumberInitialize @ 0x14052884C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1405295C4 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopBusNumberInitialize(__int64 a1, int a2)
{
  qword_1402F9B78 = (__int64)IopBusNumberUnpackRequirement;
  qword_1402F9B80 = (__int64)IopBusNumberPackResource;
  qword_1402F9B88 = (__int64)IopBusNumberUnpackResource;
  qword_1402F9B90 = (__int64)IopBusNumberScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootBusNumberArbiter, a2, 6, (unsigned int)L"RootBusNumber");
}
