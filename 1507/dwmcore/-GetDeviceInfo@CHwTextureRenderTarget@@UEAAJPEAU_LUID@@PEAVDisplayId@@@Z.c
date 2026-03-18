/*
 * XREFs of ?GetDeviceInfo@CHwTextureRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x180082BD0
 * Callers:
 *     ?GetDeviceInfo@CHwTextureRenderTarget@@WLA@EAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x18009B340 (-GetDeviceInfo@CHwTextureRenderTarget@@WLA@EAAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CHwTextureRenderTarget::GetDeviceInfo(
        CHwTextureRenderTarget *this,
        struct _LUID *a2,
        struct DisplayId *a3)
{
  return CHwSurfaceRenderTarget::GetDeviceInfo(this, a2, a3);
}
