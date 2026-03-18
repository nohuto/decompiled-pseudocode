/*
 * XREFs of ?GetDeviceInfo@CHwDisplayRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x1800802A0
 * Callers:
 *     ?GetDeviceInfo@CHwDisplayRenderTarget@@WLA@EAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x1800BD960 (-GetDeviceInfo@CHwDisplayRenderTarget@@WLA@EAAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwDisplayRenderTarget::GetDeviceInfo(
        CHwDisplayRenderTarget *this,
        struct _LUID *a2,
        struct DisplayId *a3)
{
  *a2 = *(struct _LUID *)(*((_QWORD *)this + 20) + 584LL);
  if ( a3 )
    *(_DWORD *)a3 = *((_DWORD *)this + 28);
  return 0LL;
}
