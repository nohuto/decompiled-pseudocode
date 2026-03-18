/*
 * XREFs of ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18007C698
 * Callers:
 *     ?FillShape@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18007D280 (-FillShape@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANT.c)
 *     ?FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18007D350 (-FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD.c)
 *     ?DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180176950 (-DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkS.c)
 *     ?DrawPencilStroke@CD2DContext@@UEAAJPEAVID2DContextOwner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@PEAUID2D1PencilStroke@@PEBUD2D1_PENCIL_STYLE@@PEAVCCompositionSurfaceBitmap@@AEBUtagRECT@@56M@Z @ 0x180176A00 (-DrawPencilStroke@CD2DContext@@UEAAJPEAVID2DContextOwner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIV.c)
 *     ?DrawTextW@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@W4D2D1_DRAW_TEXT_OPTIONS@@W4DWRITE_MEASURING_MODE@@@Z @ 0x180176BC0 (-DrawTextW@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@A.c)
 * Callees:
 *     ?GetWorldTransform3x2@CDrawingContext@@EEBAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x180064060 (-GetWorldTransform3x2@CDrawingContext@@EEBAXPEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetPrimitiveBlend@CD2DContext@@IEAAXW4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18007C840 (-SetPrimitiveBlend@CD2DContext@@IEAAXW4D2D1_PRIMITIVE_BLEND@@@Z.c)
 *     ?SetAntiAliasMode@CD2DContext@@IEAAXW4D2D1_ANTIALIAS_MODE@@@Z @ 0x18007C86C (-SetAntiAliasMode@CD2DContext@@IEAAXW4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::SetCommonState(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        enum D2D1_PRIMITIVE_BLEND a3,
        enum D2D1_ANTIALIAS_MODE *a4,
        struct D2D_MATRIX_3X2_F *a5)
{
  void (__fastcall *v8)(CDrawingContext *, struct D2D_MATRIX_3X2_F *); // rax
  __int64 v9; // xmm1_8
  struct D2D_MATRIX_3X2_F v10; // [rsp+20h] [rbp-48h] BYREF

  v8 = *(void (__fastcall **)(CDrawingContext *, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)a2 + 8LL);
  if ( v8 == CDrawingContext::GetWorldTransform3x2 )
    CDrawingContext::GetWorldTransform3x2(a2, &v10);
  else
    v8(a2, &v10);
  (*(void (__fastcall **)(_QWORD, struct D2D_MATRIX_3X2_F *))(**((_QWORD **)this + 5) + 240LL))(
    *((_QWORD *)this + 5),
    &v10);
  CD2DContext::SetPrimitiveBlend(this, a3);
  if ( a4 )
    CD2DContext::SetAntiAliasMode(this, *a4);
  if ( a5 )
  {
    v9 = *(_QWORD *)&v10.m[2][0];
    *(_OWORD *)&a5->m11 = *(_OWORD *)&v10.m11;
    *(_QWORD *)&a5->m[2][0] = v9;
  }
}
