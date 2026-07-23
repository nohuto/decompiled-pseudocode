/*
 * XREFs of BgGetDisplayContext @ 0x140725000
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14014BFA4 (BgkSetVirtualFrameBuffer.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int128 *BgGetDisplayContext()
{
  return &BgInternal;
}
