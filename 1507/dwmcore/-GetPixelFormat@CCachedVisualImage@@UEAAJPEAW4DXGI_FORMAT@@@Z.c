/*
 * XREFs of ?GetPixelFormat@CCachedVisualImage@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18000EFA0
 * Callers:
 *     ?GetPixelFormat@CHwndBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18010AE40 (-GetPixelFormat@CHwndBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x180053A64 (-ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ.c)
 */

__int64 __fastcall CCachedVisualImage::GetPixelFormat(CCachedVisualImage *this, enum DXGI_FORMAT *a2)
{
  if ( !*((_DWORD *)this + 31) )
    CCachedVisualImage::ChoosePixelFormat(this);
  *a2 = *((enum DXGI_FORMAT *)this + 31);
  return 0LL;
}
