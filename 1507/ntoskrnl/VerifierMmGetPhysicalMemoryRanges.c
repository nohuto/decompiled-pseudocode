/*
 * XREFs of VerifierMmGetPhysicalMemoryRanges @ 0x140742300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PPHYSICAL_MEMORY_RANGE VerifierMmGetPhysicalMemoryRanges(void)
{
  return pXdvMmGetPhysicalMemoryRanges();
}
