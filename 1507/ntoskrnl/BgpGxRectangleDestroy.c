/*
 * XREFs of BgpGxRectangleDestroy @ 0x14075E7EC
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x140150300 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x1401505A0 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x140150614 (GxpWriteFrameBufferPixels.c)
 *     BgpGxParseBitmap @ 0x14075C9D8 (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x14075CD58 (BgpGxReadRectangle.c)
 *     AnFwDisplayFade @ 0x14075D0A8 (AnFwDisplayFade.c)
 *     BgpTxtCreateRegion @ 0x14075DCDC (BgpTxtCreateRegion.c)
 *     AnFwFadeCompletion @ 0x14075DEB4 (AnFwFadeCompletion.c)
 *     TxtpDestroyCacheEntry @ 0x14075E7CC (TxtpDestroyCacheEntry.c)
 *     BgpTxtDestroyRegion @ 0x14075F888 (BgpTxtDestroyRegion.c)
 *     BgpTxtDisplayString @ 0x140761D5C (BgpTxtDisplayString.c)
 *     BgpGxBlendRectangle @ 0x140761FA4 (BgpGxBlendRectangle.c)
 *     BgpGxDrawBitmapImage @ 0x140762288 (BgpGxDrawBitmapImage.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140152748 (BgpFwFreeMemory.c)
 */

__int64 __fastcall BgpGxRectangleDestroy(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
    BgpFwFreeMemory(a1);
  return 0LL;
}
