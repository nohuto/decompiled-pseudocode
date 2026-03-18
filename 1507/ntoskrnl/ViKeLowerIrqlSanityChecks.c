/*
 * XREFs of ViKeLowerIrqlSanityChecks @ 0x140749CA0
 * Callers:
 *     VerifierKeReleaseQueuedSpinLock @ 0x1407421E4 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierKeLowerIrql @ 0x14074846C (VerifierKeLowerIrql.c)
 *     VerifierKeReleaseInStackQueuedSpinLock @ 0x140748584 (VerifierKeReleaseInStackQueuedSpinLock.c)
 *     VerifierKeReleaseInStackQueuedSpinLockNoReboot @ 0x14074877C (VerifierKeReleaseInStackQueuedSpinLockNoReboot.c)
 *     VerifierKeReleaseSpinLock @ 0x1407489FC (VerifierKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLock @ 0x140748C30 (VerifierPortKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLockNoXdv @ 0x140749904 (VerifierPortKeReleaseSpinLockNoXdv.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
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
