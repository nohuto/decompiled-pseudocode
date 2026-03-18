/*
 * XREFs of IopBusNumberInitialize @ 0x14059B100
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14059BE90 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopBusNumberInitialize(__int64 a1, int a2)
{
  qword_140349FF8 = (__int64)IopBusNumberUnpackRequirement;
  qword_14034A000 = (__int64)IopBusNumberPackResource;
  qword_14034A008 = (__int64)IopBusNumberUnpackResource;
  qword_14034A010 = (__int64)IopBusNumberScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootBusNumberArbiter, a2, 6, (unsigned int)L"RootBusNumber");
}
