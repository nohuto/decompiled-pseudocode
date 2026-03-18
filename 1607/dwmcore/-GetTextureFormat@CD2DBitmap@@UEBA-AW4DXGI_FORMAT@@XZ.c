/*
 * XREFs of ?GetTextureFormat@CD2DBitmap@@UEBA?AW4DXGI_FORMAT@@XZ @ 0x18009FB00
 * Callers:
 *     ?GetTextureFormat@CDxHandleBitmapRealization@@UEAA?AW4DXGI_FORMAT@@XZ @ 0x1800102B0 (-GetTextureFormat@CDxHandleBitmapRealization@@UEAA-AW4DXGI_FORMAT@@XZ.c)
 *     ?InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x18009F5E0 (-InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DBitmap::GetTextureFormat(CD2DBitmap *this)
{
  return *((unsigned int *)this + 18);
}
