/*
 * XREFs of ?GetPixelFormat@CCachedVisualImage@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18001B920
 * Callers:
 *     ?GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x180032930 (-GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 *     ?GetPixelFormat@CHwndBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180142FF0 (-GetPixelFormat@CHwndBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?GetTextureFormat@CCachedVisualImage@@UEAA?AW4DXGI_FORMAT@@XZ @ 0x180143F10 (-GetTextureFormat@CCachedVisualImage@@UEAA-AW4DXGI_FORMAT@@XZ.c)
 * Callees:
 *     ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x18001B890 (-ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ.c)
 */

__int64 __fastcall CCachedVisualImage::GetPixelFormat(CComposition **this, enum DXGI_FORMAT *a2)
{
  if ( !*((_DWORD *)this + 51) )
    CCachedVisualImage::ChoosePixelFormat(this);
  *a2 = *((enum DXGI_FORMAT *)this + 51);
  return 0LL;
}
