/*
 * XREFs of VerifierKeTestSpinLock @ 0x1407422D8
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
