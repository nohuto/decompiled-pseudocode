/*
 * XREFs of VerifierIoReleaseCancelSpinLock @ 0x1406C080C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierIoReleaseCancelSpinLock(KIRQL Irql)
{
  pXdvIoReleaseCancelSpinLock(Irql);
}
