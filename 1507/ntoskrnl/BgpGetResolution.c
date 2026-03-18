/*
 * XREFs of BgpGetResolution @ 0x140131B20
 * Callers:
 *     LogFwReport @ 0x14075CB0C (LogFwReport.c)
 *     GxpReadFrameBufferPixels @ 0x14075CDC4 (GxpReadFrameBufferPixels.c)
 *     BgpTxtCreateRegion @ 0x14075DCDC (BgpTxtCreateRegion.c)
 *     BgpConsoleInitialize @ 0x14075F3E0 (BgpConsoleInitialize.c)
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
