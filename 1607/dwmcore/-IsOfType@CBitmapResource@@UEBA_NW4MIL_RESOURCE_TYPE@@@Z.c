/*
 * XREFs of ?IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AE890
 * Callers:
 *     ?IsOfType@CHwndBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18000A3B0 (-IsOfType@CHwndBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CGdiSpriteBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18002AAB0 (-IsOfType@CGdiSpriteBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x180032274 (-GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ.c)
 *     ?DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DC@@@@Z @ 0x18005CC70 (-DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DC@@@@Z @ 0x18006B140 (-DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?IsOfType@CFlipChain@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800BC4E0 (-IsOfType@CFlipChain@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CBitmapResource::IsOfType(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  _BOOL8 result; // rax

  v2 = (unsigned int)(a2 - 56);
  result = 0;
  if ( (unsigned int)v2 <= 0x22 )
  {
    v3 = 0x440000001LL;
    if ( _bittest64(&v3, v2) )
      return 1;
  }
  return result;
}
