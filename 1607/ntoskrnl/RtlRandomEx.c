/*
 * XREFs of RtlRandomEx @ 0x1404E91F8
 * Callers:
 *     CcUnmapInactiveViews @ 0x14014199C (CcUnmapInactiveViews.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1401B2754 (CcGetRandomVacbArrayWithReference.c)
 *     IopInitializeInMemoryDumpData @ 0x1401C75E4 (IopInitializeInMemoryDumpData.c)
 *     MmCreateProcessAddressSpace @ 0x1405261BC (MmCreateProcessAddressSpace.c)
 *     PspInitPhase2 @ 0x1407B5F0C (PspInitPhase2.c)
 * Callees:
 *     ExGenRandom @ 0x1400F0494 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandomEx(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
