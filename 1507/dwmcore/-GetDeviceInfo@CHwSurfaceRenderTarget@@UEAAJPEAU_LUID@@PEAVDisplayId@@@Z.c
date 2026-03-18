/*
 * XREFs of ?GetDeviceInfo@CHwSurfaceRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x1800825C8
 * Callers:
 *     ?GetDeviceInfo@CHwTextureRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x180082BD0 (-GetDeviceInfo@CHwTextureRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwSurfaceRenderTarget::GetDeviceInfo(
        CHwSurfaceRenderTarget *this,
        struct _LUID *a2,
        struct DisplayId *a3)
{
  *a2 = *(struct _LUID *)(*((_QWORD *)this + 20) + 576LL);
  if ( a3 )
    *(_DWORD *)a3 = *((_DWORD *)this + 28);
  return 0LL;
}
