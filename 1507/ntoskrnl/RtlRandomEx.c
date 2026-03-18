/*
 * XREFs of RtlRandomEx @ 0x1404A2FFC
 * Callers:
 *     CcUnmapInactiveViews @ 0x140167FCC (CcUnmapInactiveViews.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1401DE088 (CcGetRandomVacbArrayWithReference.c)
 *     IopInitializeInMemoryDumpData @ 0x1401F4A70 (IopInitializeInMemoryDumpData.c)
 *     MmCreateProcessAddressSpace @ 0x1404A2834 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     ExGenRandom @ 0x140020AD0 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandomEx(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
