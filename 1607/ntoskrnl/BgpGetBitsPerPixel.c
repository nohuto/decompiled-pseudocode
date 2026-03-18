/*
 * XREFs of BgpGetBitsPerPixel @ 0x140127790
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x140127284 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x140127524 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x140127598 (GxpWriteFrameBufferPixels.c)
 *     BgpGxProcessQrCodeBitmap @ 0x14014BEC4 (BgpGxProcessQrCodeBitmap.c)
 *     BgpClearScreen @ 0x1402393E0 (BgpClearScreen.c)
 *     BgpGxIsRectangleValid @ 0x140239824 (BgpGxIsRectangleValid.c)
 *     LogFwReport @ 0x1407259A0 (LogFwReport.c)
 *     BgpGxReadRectangle @ 0x140725CE0 (BgpGxReadRectangle.c)
 *     GxpReadFrameBufferPixels @ 0x140725D4C (GxpReadFrameBufferPixels.c)
 *     AnFwDisplayFade @ 0x14072664C (AnFwDisplayFade.c)
 *     AnFwpFadeAnimationTimer @ 0x140726E84 (AnFwpFadeAnimationTimer.c)
 *     AnFwConfigureProgressResources @ 0x140727B18 (AnFwConfigureProgressResources.c)
 * Callees:
 *     <none>
 */

__int64 BgpGetBitsPerPixel()
{
  __int64 result; // rax

  if ( (_DWORD)xmmword_1402F9F30 == 4 )
    return 24LL;
  result = 1LL;
  if ( (_DWORD)xmmword_1402F9F30 == 5 )
    return 32LL;
  return result;
}
