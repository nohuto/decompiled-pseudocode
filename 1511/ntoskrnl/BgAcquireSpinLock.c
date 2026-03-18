/*
 * XREFs of BgAcquireSpinLock @ 0x1406DCAC8
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14014215C (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void BgAcquireSpinLock(void)
{
  BgpFwAcquireLock();
}
