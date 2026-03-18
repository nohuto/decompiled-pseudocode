/*
 * XREFs of RtlRandomEx @ 0x1403CBDAC
 * Callers:
 *     CcUnmapInactiveViews @ 0x140138B9C (CcUnmapInactiveViews.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1401A98F4 (CcGetRandomVacbArrayWithReference.c)
 *     IopInitializeInMemoryDumpData @ 0x1401B9788 (IopInitializeInMemoryDumpData.c)
 *     MmCreateProcessAddressSpace @ 0x1403CB7AC (MmCreateProcessAddressSpace.c)
 * Callees:
 *     ExGenRandom @ 0x14002D854 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandomEx(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
