/*
 * XREFs of ?GetColorSpace@CCachedVisualImage@@UEAA?AW4ColorSpace@@XZ @ 0x180032EC0
 * Callers:
 *     ?GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x180032930 (-GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::GetColorSpace(__int64 a1)
{
  return *(unsigned int *)(a1 + 212);
}
