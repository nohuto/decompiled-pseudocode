/*
 * XREFs of ?GetTextureFormat@CCachedVisualImage@@UEAA?AW4DXGI_FORMAT@@XZ @ 0x180143F10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormat@CCachedVisualImage@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18001B920 (-GetPixelFormat@CCachedVisualImage@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CCachedVisualImage::GetTextureFormat(CComposition **this)
{
  enum DXGI_FORMAT v2; // [rsp+30h] [rbp+8h] BYREF

  CCachedVisualImage::GetPixelFormat(this - 17, &v2);
  return (unsigned int)v2;
}
