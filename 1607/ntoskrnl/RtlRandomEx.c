/*
 * XREFs of RtlRandomEx @ 0x1404CB2E8
 * Callers:
 *     CcUnmapInactiveViews @ 0x140141F0C (CcUnmapInactiveViews.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1401B2638 (CcGetRandomVacbArrayWithReference.c)
 *     IopInitializeInMemoryDumpData @ 0x1401C7484 (IopInitializeInMemoryDumpData.c)
 *     MmCreateProcessAddressSpace @ 0x14050921C (MmCreateProcessAddressSpace.c)
 *     PspInitPhase2 @ 0x1407B5F0C (PspInitPhase2.c)
 * Callees:
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandomEx(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
