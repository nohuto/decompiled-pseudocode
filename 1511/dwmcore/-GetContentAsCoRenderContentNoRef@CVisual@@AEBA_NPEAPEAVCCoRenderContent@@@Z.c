/*
 * XREFs of ?GetContentAsCoRenderContentNoRef@CVisual@@AEBA_NPEAPEAVCCoRenderContent@@@Z @ 0x1800F77D4
 * Callers:
 *     ?GetComplex2DBounds@CVisual@@QEBAXPEAPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x1800F7AB0 (-GetComplex2DBounds@CVisual@@QEBAXPEAPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z @ 0x18010F520 (-SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

char __fastcall CVisual::GetContentAsCoRenderContentNoRef(CVisual *this, struct CCoRenderContent **a2)
{
  __int64 v2; // r14
  char v3; // di

  v2 = *((_QWORD *)this + 45);
  v3 = 0;
  if ( v2 && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v2 + 48LL))(*((_QWORD *)this + 45), 104LL) )
  {
    v3 = 1;
    *a2 = (struct CCoRenderContent *)*((_QWORD *)this + 45);
  }
  return v3;
}
