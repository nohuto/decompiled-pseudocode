/*
 * XREFs of BgConvertResources @ 0x14072A230
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14014BFA4 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgConvertResources(unsigned int a1)
{
  return BgpGxConvertRectangle(&qword_1402FA018, a1);
}
