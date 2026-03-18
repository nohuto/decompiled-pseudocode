/*
 * XREFs of IoReleaseVpbSpinLock @ 0x140130670
 * Callers:
 *     VerifierIoReleaseVpbSpinLock @ 0x140742008 (VerifierIoReleaseVpbSpinLock.c)
 * Callees:
 *     <none>
 */

void __stdcall IoReleaseVpbSpinLock(KIRQL Irql)
{
  KeReleaseQueuedSpinLock(9uLL, Irql);
}
