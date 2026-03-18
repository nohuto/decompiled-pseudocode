/*
 * XREFs of BgpGetBitsPerPixel @ 0x14011C4EC
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x14011C070 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x14011C310 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x14011C384 (GxpWriteFrameBufferPixels.c)
 *     BgpClearScreen @ 0x14021EDD0 (BgpClearScreen.c)
 *     LogFwReport @ 0x1406D9AC4 (LogFwReport.c)
 *     BgpGxReadRectangle @ 0x1406D9D10 (BgpGxReadRectangle.c)
 *     GxpReadFrameBufferPixels @ 0x1406D9D7C (GxpReadFrameBufferPixels.c)
 *     AnFwDisplayFade @ 0x1406DA060 (AnFwDisplayFade.c)
 *     AnFwpFadeAnimationTimer @ 0x1406DAF40 (AnFwpFadeAnimationTimer.c)
 *     AnFwConfigureProgressResources @ 0x1406DBAD4 (AnFwConfigureProgressResources.c)
 * Callees:
 *     <none>
 */

__int64 BgpGetBitsPerPixel()
{
  __int64 result; // rax

  if ( (_DWORD)xmmword_1402D4B50 == 4 )
    return 24LL;
  result = 1LL;
  if ( (_DWORD)xmmword_1402D4B50 == 5 )
    return 32LL;
  return result;
}
