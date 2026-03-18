/*
 * XREFs of ?GetDeviceInfo@CHwTextureRenderTarget@@WLA@EAAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z @ 0x1800C1820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::GetDeviceInfo(
        __int64 a1,
        struct _LUID *a2,
        struct DisplayId *a3,
        struct _GUID *a4)
{
  return CHwTextureRenderTarget::GetDeviceInfo((CHwTextureRenderTarget *)(a1 - 176), a2, a3, a4);
}
