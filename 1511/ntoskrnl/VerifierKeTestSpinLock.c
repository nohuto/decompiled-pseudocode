/*
 * XREFs of VerifierKeTestSpinLock @ 0x1406C0A98
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierKeTestSpinLock(PKSPIN_LOCK SpinLock)
{
  return pXdvKeTestSpinLock(SpinLock);
}
