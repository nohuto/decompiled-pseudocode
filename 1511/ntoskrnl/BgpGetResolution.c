/*
 * XREFs of BgpGetResolution @ 0x1400F4494
 * Callers:
 *     LogFwReport @ 0x1406D9AC4 (LogFwReport.c)
 *     GxpReadFrameBufferPixels @ 0x1406D9D7C (GxpReadFrameBufferPixels.c)
 *     BgpTxtCreateRegion @ 0x1406DAC94 (BgpTxtCreateRegion.c)
 *     BgpConsoleInitialize @ 0x1406DC398 (BgpConsoleInitialize.c)
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
