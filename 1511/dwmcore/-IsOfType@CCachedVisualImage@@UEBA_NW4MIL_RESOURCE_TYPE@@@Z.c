/*
 * XREFs of ?IsOfType@CCachedVisualImage@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18005A930
 * Callers:
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x18003EBA0 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 *     ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x18005A62C (-GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCachedVisualImage::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( (unsigned int)(a2 - 55) > 1 )
    return a2 == 81;
  return v2;
}
