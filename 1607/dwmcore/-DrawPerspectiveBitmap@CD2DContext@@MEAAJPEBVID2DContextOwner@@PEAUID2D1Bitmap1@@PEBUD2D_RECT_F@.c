/*
 * XREFs of ?DrawPerspectiveBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18010F390
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18007C9A4 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007CA60 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 *     ?SetCommonStateMinusTransform@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_4X4_F@@@Z @ 0x180177C50 (-SetCommonStateMinusTransform@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PE.c)
 */

__int64 __fastcall CD2DContext::DrawPerspectiveBitmap(
        struct ID2D1PrivateCompositorRenderer **this,
        const struct ID2DContextOwner *a2,
        struct ID2D1Bitmap1 *a3,
        const struct D2D_RECT_F *a4,
        const struct D2D_RECT_F *a5,
        float a6,
        D2D1_ANTIALIAS_MODE a7,
        enum D2D1_INTERPOLATION_MODE a8,
        enum D2D1_PRIMITIVE_BLEND a9)
{
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  struct D2D_MATRIX_4X4_F v17; // [rsp+40h] [rbp-78h] BYREF

  CD2DContext::FlushDrawList(this);
  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  CD2DContext::SetCommonStateMinusTransform((CD2DContext *)this, a2, a9, &a7, &v17);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v12 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    Template_qq(v13, &EVTDESC_ETWGUID_DRAWEVENT_Start, 14, v12);
  }
  (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, struct ID2D1Bitmap1 *, const struct D2D_RECT_F *))(*(_QWORD *)this[5] + 680LL))(
    this[5],
    a3,
    a5);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v14 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    Template_qq(v15, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 14, v14);
  }
  return 0LL;
}
