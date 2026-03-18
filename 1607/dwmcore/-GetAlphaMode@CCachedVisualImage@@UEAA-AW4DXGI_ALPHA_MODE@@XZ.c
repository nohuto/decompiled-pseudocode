/*
 * XREFs of ?GetAlphaMode@CCachedVisualImage@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x18001B770
 * Callers:
 *     ?GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x180032930 (-GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::GetAlphaMode(CCachedVisualImage *this)
{
  return *((_DWORD *)this + 52) != 0 ? 1 : 3;
}
