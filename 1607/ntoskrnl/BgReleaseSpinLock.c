/*
 * XREFs of BgReleaseSpinLock @ 0x140728BAC
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14014BA34 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void BgReleaseSpinLock(void)
{
  BgpFwReleaseLock();
}
