/*
 * XREFs of ?GetCommonBrushParameters@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUCCommonBrushParameters@@PEAPEAVCShape@@@Z @ 0x18013A3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180005F0C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?IsProtectedContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000FC40 (-IsProtectedContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x1800101C0 (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x18010F624 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     ?InterpolationModeFromD2DInterpolationMode@@YA?AW4InterpolationMode@@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180136E58 (-InterpolationModeFromD2DInterpolationMode@@YA-AW4InterpolationMode@@W4D2D1_INTERPOLATION_MODE@@.c)
 *     ?ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x1801399CC (-ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEA.c)
 */

__int64 __fastcall CSurfaceBrush::GetCommonBrushParameters(
        CSurfaceBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct CCommonBrushParameters *a4,
        struct CShape **a5)
{
  int v7; // eax
  unsigned int v8; // edi
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  CCompositionSurfaceBitmap *v10; // rcx
  float v11; // xmm6_4
  float v12; // xmm9_4
  __m128 dx_low; // xmm3
  __m128 dy_low; // xmm2
  __int128 v15; // xmm6
  unsigned __int64 v16; // xmm7_8
  bool IsProtectedContent; // al
  __int128 v18; // xmm1
  __int64 v19; // rax
  __int64 v20; // rax
  __int128 v21; // xmm0
  struct CShape *v22; // rcx
  struct CShape *v24; // [rsp+40h] [rbp-C8h] BYREF
  int v25; // [rsp+48h] [rbp-C0h] BYREF
  int v26; // [rsp+4Ch] [rbp-BCh] BYREF
  __int128 v27; // [rsp+50h] [rbp-B8h]
  D2D1_MATRIX_3X2_F v28; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v29; // [rsp+80h] [rbp-88h]
  __int128 v30; // [rsp+90h] [rbp-78h]
  __int128 v31; // [rsp+A0h] [rbp-68h]
  D2D1_MATRIX_3X2_F v32; // [rsp+B8h] [rbp-50h] BYREF

  *((_QWORD *)a4 + 8) = 0LL;
  *((_DWORD *)a4 + 29) = 0;
  *((_QWORD *)a4 + 22) = 0LL;
  *((_DWORD *)a4 + 57) = 0;
  *((_DWORD *)a4 + 72) = 0;
  *((_OWORD *)a4 + 2) = _xmm;
  if ( a5 )
    *a5 = 0LL;
  v24 = 0LL;
  v7 = CSurfaceBrush::ComputeLayout(this, a2, a3, (struct CSurfaceBrush::LayoutData *)&v28, &v24);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1EDu);
  }
  else
  {
    v32 = v28;
    if ( D2D1::Matrix3x2F::Invert(&v32) )
    {
      RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*(CCompositionSurfaceInfo **)(*((_QWORD *)this + 18) + 520LL));
      (*(void (__fastcall **)(__int64, int *, int *))(*((_QWORD *)RenderingRealizationNoRef + 14) + 24LL))(
        (__int64)RenderingRealizationNoRef + 112,
        &v25,
        &v26);
      v10 = (CCompositionSurfaceBitmap *)(*((_QWORD *)this + 18) + 112LL);
      v11 = 1.0 / (float)v25;
      v12 = 1.0 / (float)v26;
      *((float *)&v27 + 1) = (float)(v32.m12 * v12) + (float)(v32.m11 * 0.0);
      *(float *)&v27 = (float)(v32.m11 * v11) + (float)(v32.m12 * 0.0);
      *((float *)&v27 + 2) = (float)(v32.m21 * v11) + (float)(v32.m22 * 0.0);
      *((float *)&v27 + 3) = (float)(v32.m22 * v12) + (float)(v32.m21 * 0.0);
      dx_low = (__m128)LODWORD(v32.dx);
      dy_low = (__m128)LODWORD(v32.dy);
      dx_low.m128_f32[0] = v32.dx * v11;
      v15 = v27;
      *(_OWORD *)&v32.m11 = v27;
      dx_low.m128_f32[0] = (float)(dx_low.m128_f32[0] + (float)(v32.dy * 0.0))
                         + (float)(0.0 - (float)((float)(1.0 / (float)v25) * 0.0));
      dy_low.m128_f32[0] = (float)((float)(v32.dy * v12) + (float)(v32.dx * 0.0)) + (float)(0.0 - (float)(v12 * 0.0));
      v16 = _mm_unpacklo_ps(dx_low, dy_low).m128_u64[0];
      *(_QWORD *)&v32.m[2][0] = v16;
      IsProtectedContent = CCompositionSurfaceBitmap::IsProtectedContent(v10);
      *((_BYTE *)a4 + 289) = IsProtectedContent;
      v18 = v31;
      *(_OWORD *)a4 = v30;
      *((_OWORD *)a4 + 1) = v18;
      if ( IsProtectedContent && *(_BYTE *)(*((_QWORD *)this + 2) + 1240LL) )
      {
        *((_OWORD *)a4 + 2) = _xmm;
        *((_QWORD *)a4 + 8) = 0LL;
        *((_BYTE *)a4 + 288) = 1;
      }
      else
      {
        v19 = *((_QWORD *)this + 18);
        if ( v19 )
          v20 = v19 + 120;
        else
          v20 = 0LL;
        v21 = v29;
        *((_QWORD *)a4 + 8) = v20;
        *(_OWORD *)((char *)a4 + 88) = v15;
        *(_OWORD *)((char *)a4 + 72) = v21;
        *((_QWORD *)a4 + 13) = v16;
        *((_WORD *)a4 + 56) = InterpolationModeFromD2DInterpolationMode(*((_DWORD *)this + 35));
        *((_BYTE *)a4 + 114) = 0;
        if ( (unsigned __int8)CCompositionSurfaceBitmap::IsSwapChain(*((CCompositionSurfaceBitmap **)this + 18)) )
          *((_BYTE *)a4 + 291) = 1;
      }
      if ( a5 )
      {
        v22 = 0LL;
        *a5 = v24;
        goto LABEL_18;
      }
    }
    else
    {
      v8 = -2003304441;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304441, 0x1F3u);
    }
  }
  v22 = v24;
LABEL_18:
  if ( v22 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v22)(v22, 1LL);
  return v8;
}
