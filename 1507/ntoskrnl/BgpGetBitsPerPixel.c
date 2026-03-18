/*
 * XREFs of BgpGetBitsPerPixel @ 0x14015076C
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x140150300 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x1401505A0 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x140150614 (GxpWriteFrameBufferPixels.c)
 *     BgpClearScreen @ 0x14026E1F8 (BgpClearScreen.c)
 *     LogFwReport @ 0x14075CB0C (LogFwReport.c)
 *     BgpGxReadRectangle @ 0x14075CD58 (BgpGxReadRectangle.c)
 *     GxpReadFrameBufferPixels @ 0x14075CDC4 (GxpReadFrameBufferPixels.c)
 *     AnFwDisplayFade @ 0x14075D0A8 (AnFwDisplayFade.c)
 *     AnFwpFadeAnimationTimer @ 0x14075DF88 (AnFwpFadeAnimationTimer.c)
 *     AnFwConfigureProgressResources @ 0x14075EB1C (AnFwConfigureProgressResources.c)
 * Callees:
 *     <none>
 */

__int64 BgpGetBitsPerPixel()
{
  __int64 result; // rax

  if ( (_DWORD)xmmword_140323C90 == 4 )
    return 24LL;
  result = 1LL;
  if ( (_DWORD)xmmword_140323C90 == 5 )
    return 32LL;
  return result;
}
