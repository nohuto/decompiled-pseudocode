/*
 * XREFs of BgSetFrameBufferAccessCounter @ 0x140725008
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1401273D8 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkSetVirtualFrameBuffer @ 0x14014BFA4 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall BgSetFrameBufferAccessCounter(__int64 a1)
{
  qword_1402FA0E0 = a1;
}
