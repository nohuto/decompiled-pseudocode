/*
 * XREFs of BgSetFrameBufferAccessCounter @ 0x1406D9000
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14011BC4C (BgkNotifyDisplayOwnershipChange.c)
 *     BgkSetVirtualFrameBuffer @ 0x14014215C (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall BgSetFrameBufferAccessCounter(__int64 a1)
{
  qword_1402D4CE0 = a1;
}
