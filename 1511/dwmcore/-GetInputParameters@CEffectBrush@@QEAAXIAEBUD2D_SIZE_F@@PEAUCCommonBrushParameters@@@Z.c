/*
 * XREFs of ?GetInputParameters@CEffectBrush@@QEAAXIAEBUD2D_SIZE_F@@PEAUCCommonBrushParameters@@@Z @ 0x180122E10
 * Callers:
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z @ 0x18010B978 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall CEffectBrush::GetInputParameters(
        CEffectBrush *this,
        unsigned int a2,
        const struct D2D_SIZE_F *a3,
        struct CCommonBrushParameters *a4)
{
  __int64 v6; // rbp
  unsigned __int64 v8; // r12
  D2D1_MATRIX_3X2_F matrix; // [rsp+20h] [rbp-58h] BYREF

  v6 = a2;
  matrix = *(D2D1_MATRIX_3X2_F *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 24LL))(
                                   *((_QWORD *)this + 11),
                                   a2);
  v8 = (unsigned __int64)&matrix & -(__int64)D2D1InvertMatrix(&matrix);
  if ( (*(int (__fastcall **)(_QWORD, const struct D2D_SIZE_F *, unsigned __int64, struct CCommonBrushParameters *))(**(_QWORD **)(*((_QWORD *)this + 23) + 8 * v6) + 152LL))(
         *(_QWORD *)(*((_QWORD *)this + 23) + 8 * v6),
         a3,
         v8,
         a4) < 0
    || !v8 )
  {
    *(_OWORD *)((char *)a4 + 40) = 0LL;
    *((_QWORD *)a4 + 7) = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_N1_0), (__m128)LODWORD(FLOAT_N1_0)).m128_u64[0];
  }
}
