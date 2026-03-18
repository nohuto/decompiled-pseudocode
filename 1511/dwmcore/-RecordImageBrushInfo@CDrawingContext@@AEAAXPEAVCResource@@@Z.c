/*
 * XREFs of ?RecordImageBrushInfo@CDrawingContext@@AEAAXPEAVCResource@@@Z @ 0x18003C4C8
 * Callers:
 *     ?FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCResource@@@Z @ 0x180042C98 (-FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180058BC0 (-IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CImageLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18005A520 (-IsOfType@CImageLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

void __fastcall CDrawingContext::RecordImageBrushInfo(CDrawingContext *this, struct CResource *a2)
{
  __int64 (__fastcall *v4)(struct CResource *, __int64); // rdi
  char v5; // al

  v4 = *(__int64 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL);
  if ( (char *)v4 == (char *)CSolidColorLegacyMilBrush::IsOfType )
  {
    v5 = CSolidColorLegacyMilBrush::IsOfType(a2, 75LL);
  }
  else if ( (char *)v4 == (char *)CImageLegacyMilBrush::IsOfType )
  {
    v5 = CImageLegacyMilBrush::IsOfType(a2, 75LL);
  }
  else
  {
    v5 = v4(a2, 75LL);
  }
  if ( v5 )
  {
    if ( *((_BYTE *)a2 + 364) )
      *((_BYTE *)this + 5970) = 1;
    if ( *((_BYTE *)a2 + 365) )
      *((_BYTE *)this + 5972) = 1;
  }
}
