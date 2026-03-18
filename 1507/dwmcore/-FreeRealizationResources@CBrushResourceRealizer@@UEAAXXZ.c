/*
 * XREFs of ?FreeRealizationResources@CBrushResourceRealizer@@UEAAXXZ @ 0x1800834C0
 * Callers:
 *     ?FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCResource@@@Z @ 0x18002D8C0 (-FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 * Callees:
 *     ?FreeRealizationResources@CBrushRealizer@@UEAAXXZ @ 0x180081340 (-FreeRealizationResources@CBrushRealizer@@UEAAXXZ.c)
 *     ?FreeRealizationResources@CImageBrush@@UEAAXXZ @ 0x180085970 (-FreeRealizationResources@CImageBrush@@UEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CBrushResourceRealizer::FreeRealizationResources(CImageBrush **this)
{
  CImageBrush *v2; // rbx
  void (__fastcall *v3)(CImageBrush *__hidden); // rdi

  CBrushRealizer::FreeRealizationResources((CBrushRealizer *)this);
  v2 = this[13];
  v3 = *(void (__fastcall **)(CImageBrush *__hidden))(*(_QWORD *)v2 + 144LL);
  if ( v3 == CImageBrush::FreeRealizationResources )
    CImageBrush::FreeRealizationResources(v2);
  else
    v3(v2);
}
