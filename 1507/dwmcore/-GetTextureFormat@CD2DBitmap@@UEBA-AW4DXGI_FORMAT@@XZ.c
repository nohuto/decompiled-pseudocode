/*
 * XREFs of ?GetTextureFormat@CD2DBitmap@@UEBA?AW4DXGI_FORMAT@@XZ @ 0x18001B890
 * Callers:
 *     ?InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x18001B430 (-InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DBitmap::GetTextureFormat(CD2DBitmap *this)
{
  return *((unsigned int *)this + 18);
}
