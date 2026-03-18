/*
 * XREFs of IopDmaInitialize @ 0x14059B030
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14059BE90 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopDmaInitialize(__int64 a1, int a2)
{
  qword_14034A2B8 = (__int64)IopIrqUnpackRequirement;
  qword_14034A2C0 = (__int64)IopDmaPackResource;
  qword_14034A2C8 = (__int64)IopDmaUnpackResource;
  qword_14034A2D0 = (__int64)IopDmaScoreRequirement;
  qword_14034A350 = (__int64)IopDmaOverrideConflict;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootDmaArbiter, a2, 4, (unsigned int)L"RootDMA");
}
