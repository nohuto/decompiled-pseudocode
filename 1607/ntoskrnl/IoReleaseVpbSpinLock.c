/*
 * XREFs of IoReleaseVpbSpinLock @ 0x1400B2DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall IoReleaseVpbSpinLock(KIRQL Irql)
{
  KeReleaseQueuedSpinLock(9uLL, Irql);
}
