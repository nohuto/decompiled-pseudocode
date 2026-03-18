/*
 * XREFs of ?FreeRealizationResources@CBrushResourceRealizer@@UEAAXXZ @ 0x18002EC50
 * Callers:
 *     ?FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCResource@@@Z @ 0x18006B420 (-FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBrushResourceRealizer::FreeRealizationResources(CBrushResourceRealizer *this)
{
  __int64 v2; // rcx
  CImageLegacyMilBrush *v3; // rcx
  void (*v4)(void); // rax

  v2 = *((_QWORD *)this + 12);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 12) = 0LL;
  }
  v3 = (CImageLegacyMilBrush *)*((_QWORD *)this + 13);
  v4 = *(void (**)(void))(*(_QWORD *)v3 + 160LL);
  if ( (char *)v4 == (char *)CImageLegacyMilBrush::FreeRealizationResources )
    CImageLegacyMilBrush::FreeRealizationResources(v3);
  else
    v4();
}
