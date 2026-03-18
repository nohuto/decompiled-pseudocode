/*
 * XREFs of VerifierKeReleaseSemaphore @ 0x1406C64A4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
LONG __stdcall VerifierKeReleaseSemaphore(PRKSEMAPHORE Semaphore, KPRIORITY Increment, LONG Adjustment, BOOLEAN Wait)
{
  return pXdvKeReleaseSemaphore(Semaphore, Increment, Adjustment, Wait);
}
