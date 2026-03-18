/*
 * XREFs of IoReleaseVpbSpinLock @ 0x1400F1CD0
 * Callers:
 *     VerifierIoReleaseVpbSpinLock @ 0x1406C0814 (VerifierIoReleaseVpbSpinLock.c)
 * Callees:
 *     <none>
 */

void __stdcall IoReleaseVpbSpinLock(KIRQL Irql)
{
  KeReleaseQueuedSpinLock(9uLL, Irql);
}
