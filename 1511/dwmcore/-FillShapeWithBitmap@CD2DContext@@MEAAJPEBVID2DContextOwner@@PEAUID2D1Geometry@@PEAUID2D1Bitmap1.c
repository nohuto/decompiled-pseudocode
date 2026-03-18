/*
 * XREFs of ?FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Geometry@@PEAUID2D1Bitmap1@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180147490
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800203A8 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180020670 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800207C0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?SetBitmap@CD2DBitmapBrushWrapper@@QEAAXPEAUID2D1Bitmap1@@AEBUD2D1_BITMAP_BRUSH_PROPERTIES1@@AEBUD2D1_BRUSH_PROPERTIES@@@Z @ 0x1800AC790 (-SetBitmap@CD2DBitmapBrushWrapper@@QEAAXPEAUID2D1Bitmap1@@AEBUD2D1_BITMAP_BRUSH_PROPERTIES1@@AEB.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_qq @ 0x180100238 (Template_qq.c)
 */

__int64 __fastcall CD2DContext::FillShapeWithBitmap(
        struct ID2D1PrivateCompositorRenderer **this,
        const struct ID2DContextOwner *a2,
        struct ID2D1Geometry *a3,
        struct ID2D1Bitmap1 *a4,
        const struct D2D_MATRIX_3X2_F *a5,
        FLOAT a6,
        enum D2D1_INTERPOLATION_MODE a7,
        enum D2D1_EXTEND_MODE a8,
        enum D2D1_PRIMITIVE_BLEND a9)
{
  __int64 v13; // xmm1_8
  __int128 v14; // xmm0
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  enum D2D1_ANTIALIAS_MODE v20; // [rsp+30h] [rbp-40h] BYREF
  struct D2D1_BITMAP_BRUSH_PROPERTIES1 v21; // [rsp+38h] [rbp-38h] BYREF
  struct D2D1_BRUSH_PROPERTIES v22; // [rsp+48h] [rbp-28h] BYREF

  CD2DContext::FlushDrawList(this);
  v13 = *(_QWORD *)&a5->m[2][0];
  v22.opacity = a6;
  v14 = *(_OWORD *)&a5->m11;
  v21.extendModeX = a8;
  v21.extendModeY = a8;
  *(_OWORD *)&v22.transform.m11 = v14;
  v20 = D2D1_ANTIALIAS_MODE_ALIASED;
  v21.interpolationMode = a7;
  *(_QWORD *)&v22.transform.m[2][0] = v13;
  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v15 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    Template_qq(v16, &EVTDESC_ETWGUID_DRAWEVENT_Start, 1, v15);
  }
  CD2DContext::SetCommonState((CD2DContext *)this, a2, a9, &v20, 0LL);
  CD2DBitmapBrushWrapper::SetBitmap(this[19], a4, &v21, &v22);
  (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, struct ID2D1Geometry *, _QWORD, _QWORD))(*(_QWORD *)this[5] + 184LL))(
    this[5],
    a3,
    *((_QWORD *)this[19] + 2),
    0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this[19] + 2) + 88LL))(
    *((_QWORD *)this[19] + 2),
    *((_QWORD *)this[19] + 3));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v17 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    Template_qq(v18, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 1, v17);
  }
  return 0LL;
}
