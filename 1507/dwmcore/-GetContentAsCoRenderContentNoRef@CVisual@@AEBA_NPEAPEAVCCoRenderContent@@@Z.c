/*
 * XREFs of ?GetContentAsCoRenderContentNoRef@CVisual@@AEBA_NPEAPEAVCCoRenderContent@@@Z @ 0x1800DCBE8
 * Callers:
 *     ?GetComplex2DBounds@CVisual@@QEBAXPEAPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x1800DCE04 (-GetComplex2DBounds@CVisual@@QEBAXPEAPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z @ 0x1800F5880 (-SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

char __fastcall CVisual::GetContentAsCoRenderContentNoRef(CVisual *this, struct CCoRenderContent **a2)
{
  __int64 v2; // r14
  char v3; // di

  v2 = *((_QWORD *)this + 47);
  v3 = 0;
  if ( v2 && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v2 + 48LL))(*((_QWORD *)this + 47), 96LL) )
  {
    v3 = 1;
    *a2 = (struct CCoRenderContent *)*((_QWORD *)this + 47);
  }
  return v3;
}
