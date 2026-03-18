/*
 * XREFs of BgpGxRectangleDestroy @ 0x1407276C0
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x140127284 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x140127524 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x140127598 (GxpWriteFrameBufferPixels.c)
 *     BgpGxConvertRectangle @ 0x140127DB4 (BgpGxConvertRectangle.c)
 *     BgpGxProcessQrCodeBitmap @ 0x14014BEC4 (BgpGxProcessQrCodeBitmap.c)
 *     BgpGxParseBitmap @ 0x140725B84 (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x140725CE0 (BgpGxReadRectangle.c)
 *     AnFwDisplayFade @ 0x14072664C (AnFwDisplayFade.c)
 *     BgpTxtCreateRegion @ 0x140726BC4 (BgpTxtCreateRegion.c)
 *     AnFwFadeCompletion @ 0x140726D9C (AnFwFadeCompletion.c)
 *     TxtpDestroyCacheEntry @ 0x1407276A0 (TxtpDestroyCacheEntry.c)
 *     BgpTxtDestroyRegion @ 0x140728928 (BgpTxtDestroyRegion.c)
 *     BgpGxBlendRectangle @ 0x14072AD60 (BgpGxBlendRectangle.c)
 *     BgpGxDrawBitmapImage @ 0x14072B044 (BgpGxDrawBitmapImage.c)
 *     BgpTxtDisplayString @ 0x14072B0B0 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14012968C (BgpFwFreeMemory.c)
 */

__int64 __fastcall BgpGxRectangleDestroy(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
    BgpFwFreeMemory(a1);
  return 0LL;
}
