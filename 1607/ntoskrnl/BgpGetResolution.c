/*
 * XREFs of BgpGetResolution @ 0x1400B3A5C
 * Callers:
 *     LogFwReport @ 0x1407259A0 (LogFwReport.c)
 *     GxpReadFrameBufferPixels @ 0x140725D4C (GxpReadFrameBufferPixels.c)
 *     BgpTxtCreateRegion @ 0x140726BC4 (BgpTxtCreateRegion.c)
 *     BgpConsoleInitialize @ 0x140728460 (BgpConsoleInitialize.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall BgpGetResolution(_DWORD *a1)
{
  *a1 = DWORD2(BgInternal);
  a1[1] = DWORD1(BgInternal);
  a1[2] = HIDWORD(BgInternal);
  return a1;
}
