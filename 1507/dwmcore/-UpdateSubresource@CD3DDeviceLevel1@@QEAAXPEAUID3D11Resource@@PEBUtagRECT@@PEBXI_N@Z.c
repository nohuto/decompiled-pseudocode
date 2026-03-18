/*
 * XREFs of ?UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z @ 0x180018F40
 * Callers:
 *     ?PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapLock@@_N@Z @ 0x18001C040 (-PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV-$TMilRect@IUMilRectU@@UNotNeede.c)
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180151730 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD3DDeviceLevel1::UpdateSubresource(
        CD3DDeviceLevel1 *this,
        struct ID3D11Resource *a2,
        const struct tagRECT *a3,
        const void *a4,
        unsigned int a5)
{
  LONG left; // eax
  __int64 v6; // rdi
  _DWORD v7[6]; // [rsp+40h] [rbp-48h] BYREF

  left = a3->left;
  v6 = *((_QWORD *)this + 69);
  v7[2] = 0;
  v7[0] = left;
  v7[1] = a3->top;
  v7[3] = a3->right;
  v7[4] = a3->bottom;
  v7[5] = 1;
  (*(void (__fastcall **)(__int64, struct ID3D11Resource *, _QWORD, _DWORD *, const void *, unsigned int, _DWORD))(*(_QWORD *)v6 + 384LL))(
    v6,
    a2,
    0LL,
    v7,
    a4,
    a5,
    0);
}
