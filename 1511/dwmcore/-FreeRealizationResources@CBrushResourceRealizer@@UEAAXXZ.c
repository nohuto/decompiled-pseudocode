/*
 * XREFs of ?FreeRealizationResources@CBrushResourceRealizer@@UEAAXXZ @ 0x18005D400
 * Callers:
 *     ?FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCResource@@@Z @ 0x180042C98 (-FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?FreeRealizationResources@CImageLegacyMilBrush@@UEAAXXZ @ 0x18005A2B0 (-FreeRealizationResources@CImageLegacyMilBrush@@UEAAXXZ.c)
 *     ?FreeRealizationResources@CLegacyMilBrushRealizer@@UEAAXXZ @ 0x18008A460 (-FreeRealizationResources@CLegacyMilBrushRealizer@@UEAAXXZ.c)
 */

void __fastcall CBrushResourceRealizer::FreeRealizationResources(CImageLegacyMilBrush **this)
{
  CImageLegacyMilBrush *v2; // rbx
  void (__fastcall *v3)(CImageLegacyMilBrush *); // rdi

  CLegacyMilBrushRealizer::FreeRealizationResources((CLegacyMilBrushRealizer *)this);
  v2 = this[13];
  v3 = *(void (__fastcall **)(CImageLegacyMilBrush *))(*(_QWORD *)v2 + 152LL);
  if ( v3 == CImageLegacyMilBrush::FreeRealizationResources )
    CImageLegacyMilBrush::FreeRealizationResources(v2);
  else
    v3(v2);
}
