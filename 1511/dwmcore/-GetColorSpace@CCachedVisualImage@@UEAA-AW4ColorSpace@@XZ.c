/*
 * XREFs of ?GetColorSpace@CCachedVisualImage@@UEAA?AW4ColorSpace@@XZ @ 0x18005AB80
 * Callers:
 *     ?GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18005A330 (-GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::GetColorSpace(__int64 a1)
{
  return *(unsigned int *)(a1 + 132);
}
