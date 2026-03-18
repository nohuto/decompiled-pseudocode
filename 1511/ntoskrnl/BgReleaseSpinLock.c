/*
 * XREFs of BgReleaseSpinLock @ 0x1406DCAC0
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14014215C (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void BgReleaseSpinLock(void)
{
  BgpFwReleaseLock();
}
