/*
 * XREFs of VerifierKeLeaveCriticalRegion @ 0x1407120E0
 * Callers:
 *     <none>
 * Callees:
 *     ViKeLogCriticalRegionStackTrace @ 0x140223758 (ViKeLogCriticalRegionStackTrace.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 */

__int64 VerifierKeLeaveCriticalRegion()
{
  unsigned __int8 CurrentIrql; // al

  if ( (MmVerifierData & 2) != 0 && (MmVerifierData & 0x20000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 1u )
      VerifierBugCheckIfAppropriate(0xC4u, 0x11BuLL, CurrentIrql, 0LL, 0LL);
  }
  if ( KeGetCurrentThread()->KernelApcDisable >= 1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x3EuLL, 0LL, 0LL, 0LL);
  ViKeLogCriticalRegionStackTrace();
  return pXdvKeLeaveCriticalRegion();
}
