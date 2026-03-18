/*
 * XREFs of ?GetAlphaMode@CCachedVisualImage@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x18000B2B0
 * Callers:
 *     ?GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18005A330 (-GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
enum DXGI_ALPHA_MODE __fastcall CCachedVisualImage::GetAlphaMode(CCachedVisualImage *this)
{
  return CCachedVisualImage::GetAlphaModeInternal(this);
}
