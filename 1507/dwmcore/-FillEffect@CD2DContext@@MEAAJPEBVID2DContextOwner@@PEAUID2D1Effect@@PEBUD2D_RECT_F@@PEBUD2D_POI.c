/*
 * XREFs of ?FillEffect@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x180005A40
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x18000FA28 (-DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_IN.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180071584 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180071660 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD2DContext::FillEffect(
        ID2D1DeviceContext **this,
        const struct ID2DContextOwner *a2,
        struct ID2D1Effect *a3,
        const struct D2D_RECT_F *a4,
        const struct D2D_POINT_2F *a5,
        enum D2D1_INTERPOLATION_MODE a6,
        enum D2D1_COMPOSITE_MODE a7)
{
  struct D2D_POINT_2F *v11; // r8
  FLOAT y; // xmm1_4
  struct D2D_POINT_2F v14; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v15[24]; // [rsp+38h] [rbp-60h] BYREF

  CD2DContext::FlushDrawList((CD2DContext *)this);
  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  (*(void (__fastcall **)(const struct ID2DContextOwner *, _BYTE *))(*(_QWORD *)a2 + 8LL))(a2, v15);
  (*(void (__fastcall **)(ID2D1DeviceContext *, _BYTE *))(*(_QWORD *)this[5] + 240LL))(this[5], v15);
  v11 = 0LL;
  if ( a5 )
  {
    v11 = &v14;
    y = a5->y;
    v14.x = a5->x;
    v14.y = y;
  }
  ID2D1DeviceContext::DrawImage(this[5], a3, v11, a4, a6, a7);
  return 0LL;
}
