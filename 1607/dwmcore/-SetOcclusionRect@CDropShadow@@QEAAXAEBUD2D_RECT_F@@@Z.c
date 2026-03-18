/*
 * XREFs of ?SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x18014FC34
 * Callers:
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180139050 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z @ 0x1800AE65C (-AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18013528C (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?InvalidateShadow@CDropShadow@@AEAAX_N@Z @ 0x18014FA54 (-InvalidateShadow@CDropShadow@@AEAAX_N@Z.c)
 */

void __fastcall CDropShadow::SetOcclusionRect(CDropShadow *this, __m128 *a2)
{
  const struct D2D_RECT_F *v2; // rcx
  D2D_RECT_F *v3; // r8
  CDropShadow *v4; // r9
  D2D_RECT_F v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = (D2D_RECT_F)_mm_sub_ps(*a2, (__m128)_xmm);
  if ( !AreEqual((const struct D2D_RECT_F *)((char *)this + 172), &v5) && (!IsEmpty(v2) || !IsEmpty(&v5)) )
  {
    *v3 = v5;
    CDropShadow::InvalidateShadow(v4, 0);
  }
}
