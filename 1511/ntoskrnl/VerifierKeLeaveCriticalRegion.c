/*
 * XREFs of VerifierKeLeaveCriticalRegion @ 0x1406C6090
 * Callers:
 *     <none>
 * Callees:
 *     ViKeLogCriticalRegionStackTrace @ 0x14020BE70 (ViKeLogCriticalRegionStackTrace.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 */

void VerifierKeLeaveCriticalRegion()
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
  pXdvKeLeaveCriticalRegion();
}
