/*
 * XREFs of VerifierMmGetPhysicalMemoryRanges @ 0x1406C0AC0
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
