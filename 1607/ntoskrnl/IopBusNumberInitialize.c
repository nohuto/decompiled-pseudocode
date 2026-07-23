/*
 * XREFs of IopBusNumberInitialize @ 0x140554E8C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140555B88 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopBusNumberInitialize(__int64 a1, int a2)
{
  qword_14031F0B8 = (__int64)IopBusNumberUnpackRequirement;
  qword_14031F0C0 = (__int64)IopBusNumberPackResource;
  qword_14031F0C8 = (__int64)IopBusNumberUnpackResource;
  qword_14031F0D0 = (__int64)IopBusNumberScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootBusNumberArbiter, a2, 6, (unsigned int)L"RootBusNumber");
}
