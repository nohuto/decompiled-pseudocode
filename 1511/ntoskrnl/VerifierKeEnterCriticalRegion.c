/*
 * XREFs of VerifierKeEnterCriticalRegion @ 0x1406C5EF8
 * Callers:
 *     <none>
 * Callees:
 *     KeEnterCriticalRegion @ 0x140042B40 (KeEnterCriticalRegion.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 */

void VerifierKeEnterCriticalRegion()
{
  unsigned __int8 CurrentIrql; // al

  if ( (MmVerifierData & 2) != 0 && (MmVerifierData & 0x20000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 1u )
      VerifierBugCheckIfAppropriate(0xC4u, 0x11AuLL, CurrentIrql, 0LL, 0LL);
  }
  pXdvKeEnterCriticalRegion();
  ViKeLogCriticalRegionStackTrace();
}
