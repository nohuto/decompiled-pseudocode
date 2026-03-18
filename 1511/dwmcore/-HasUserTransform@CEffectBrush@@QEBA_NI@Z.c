/*
 * XREFs of ?HasUserTransform@CEffectBrush@@QEBA_NI@Z @ 0x180122F20
 * Callers:
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z @ 0x18010B978 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180030D64 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 */

bool __fastcall CEffectBrush::HasUserTransform(CEffectBrush *this)
{
  __int64 v1; // rax
  __int64 v2; // xmm1_8
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 24LL))(*((_QWORD *)this + 11), 0LL);
  v2 = *(_QWORD *)(v1 + 16);
  v4 = *(_OWORD *)v1;
  v5 = v2;
  return !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v4);
}
