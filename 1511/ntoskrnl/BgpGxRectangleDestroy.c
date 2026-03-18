/*
 * XREFs of BgpGxRectangleDestroy @ 0x1406DB7A4
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x14011C070 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x14011C310 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x14011C384 (GxpWriteFrameBufferPixels.c)
 *     BgpGxParseBitmap @ 0x1406D9990 (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x1406D9D10 (BgpGxReadRectangle.c)
 *     AnFwDisplayFade @ 0x1406DA060 (AnFwDisplayFade.c)
 *     BgpTxtCreateRegion @ 0x1406DAC94 (BgpTxtCreateRegion.c)
 *     AnFwFadeCompletion @ 0x1406DAE6C (AnFwFadeCompletion.c)
 *     TxtpDestroyCacheEntry @ 0x1406DB784 (TxtpDestroyCacheEntry.c)
 *     BgpTxtDestroyRegion @ 0x1406DC840 (BgpTxtDestroyRegion.c)
 *     BgpTxtDisplayString @ 0x1406DECE0 (BgpTxtDisplayString.c)
 *     BgpGxBlendRectangle @ 0x1406DEF28 (BgpGxBlendRectangle.c)
 *     BgpGxDrawBitmapImage @ 0x1406DF20C (BgpGxDrawBitmapImage.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14011E4C8 (BgpFwFreeMemory.c)
 */

__int64 __fastcall BgpGxRectangleDestroy(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
    BgpFwFreeMemory(a1);
  return 0LL;
}
