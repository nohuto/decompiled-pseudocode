/*
 * XREFs of ViKeLowerIrqlSanityChecks @ 0x1406C6F78
 * Callers:
 *     VerifierKeReleaseQueuedSpinLock @ 0x1406C09EC (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierKeLowerIrql @ 0x1406C6104 (VerifierKeLowerIrql.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x1406C6208 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     ViKeReleaseSpinLockCommon @ 0x1406C714C (ViKeReleaseSpinLockCommon.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 */

char *__fastcall ViKeLowerIrqlSanityChecks(unsigned __int8 a1, unsigned __int8 a2)
{
  if ( (MmVerifierData & 2) != 0 )
  {
    if ( a1 < a2 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x31uLL, a1, a2, 0LL);
    if ( a1 >= 2u && a2 < 2u && KeGetCurrentPrcb()->DpcRoutineActive )
      VerifierBugCheckIfAppropriate(0xC4u, 0x31uLL, a1, a2, 1LL);
    if ( a2 > 0xFu )
      VerifierBugCheckIfAppropriate(0xC4u, 0x31uLL, a1, a2, 0LL);
  }
  return VfKeIrqlTransitionReserveLogEntry(a1, a2);
}
