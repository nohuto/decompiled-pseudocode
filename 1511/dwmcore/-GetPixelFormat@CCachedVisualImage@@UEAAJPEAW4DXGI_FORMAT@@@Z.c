/*
 * XREFs of ?GetPixelFormat@CCachedVisualImage@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18000B3B0
 * Callers:
 *     ?GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18005A330 (-GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 *     ?GetPixelFormat@CHwndBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180126800 (-GetPixelFormat@CHwndBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x18005BB48 (-ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ.c)
 */

__int64 __fastcall CCachedVisualImage::GetPixelFormat(CCachedVisualImage *this, enum DXGI_FORMAT *a2)
{
  if ( !*((_DWORD *)this + 31) )
    CCachedVisualImage::ChoosePixelFormat(this);
  *a2 = *((enum DXGI_FORMAT *)this + 31);
  return 0LL;
}
