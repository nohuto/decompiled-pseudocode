/*
 * XREFs of IoReleaseVpbSpinLock @ 0x1400B0D2C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall IoReleaseVpbSpinLock(KIRQL Irql)
{
  KeReleaseQueuedSpinLock(9uLL, Irql);
}
