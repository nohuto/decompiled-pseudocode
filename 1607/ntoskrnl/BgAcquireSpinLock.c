/*
 * XREFs of BgAcquireSpinLock @ 0x140728BB4
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14014BFA4 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall BgAcquireSpinLock()
{
  BgpFwAcquireLock();
}
