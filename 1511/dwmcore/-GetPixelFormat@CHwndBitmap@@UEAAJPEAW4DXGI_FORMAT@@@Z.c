/*
 * XREFs of ?GetPixelFormat@CHwndBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180126800
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormat@CCachedVisualImage@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18000B3B0 (-GetPixelFormat@CCachedVisualImage@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwndBitmap::GetPixelFormat(CHwndBitmap *this, enum DXGI_FORMAT *a2)
{
  CCachedVisualImage *v2; // rcx
  unsigned int v3; // ebx
  int PixelFormat; // eax

  v2 = (CCachedVisualImage *)*((_QWORD *)this + 59);
  v3 = 0;
  if ( v2 )
  {
    PixelFormat = CCachedVisualImage::GetPixelFormat(v2, a2);
    v3 = PixelFormat;
    if ( PixelFormat < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormat, 0x1C3u);
  }
  else
  {
    *a2 = DXGI_FORMAT_B8G8R8A8_UNORM;
  }
  return v3;
}
