/*
 * XREFs of ?GetDeviceInfo@CHwTextureRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x18002C710
 * Callers:
 *     ?GetDeviceInfo@CHwTextureRenderTarget@@WLA@EAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x1800BE030 (-GetDeviceInfo@CHwTextureRenderTarget@@WLA@EAAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::GetDeviceInfo(
        CHwTextureRenderTarget *this,
        struct _LUID *a2,
        struct DisplayId *a3)
{
  *a2 = *(struct _LUID *)(*((_QWORD *)this + 20) + 584LL);
  if ( a3 )
    *(_DWORD *)a3 = *((_DWORD *)this + 28);
  return 0LL;
}
