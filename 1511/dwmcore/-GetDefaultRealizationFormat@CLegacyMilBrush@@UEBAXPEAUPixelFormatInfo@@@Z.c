/*
 * XREFs of ?GetDefaultRealizationFormat@CLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18005D5E0
 * Callers:
 *     ?GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18005A330 (-GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 *     ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x18005D460 (-EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PE.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsConstantOpaque@CSolidColorLegacyMilBrush@@UEBA_NXZ @ 0x180058B30 (-IsConstantOpaque@CSolidColorLegacyMilBrush@@UEBA_NXZ.c)
 */

void __fastcall CLegacyMilBrush::GetDefaultRealizationFormat(CLegacyMilBrush *this, struct PixelFormatInfo *a2)
{
  bool (__fastcall *v3)(CSolidColorLegacyMilBrush *); // rsi
  bool IsConstantOpaque; // al

  v3 = *(bool (__fastcall **)(CSolidColorLegacyMilBrush *))(*(_QWORD *)this + 136LL);
  if ( v3 == CSolidColorLegacyMilBrush::IsConstantOpaque )
    IsConstantOpaque = CSolidColorLegacyMilBrush::IsConstantOpaque(this);
  else
    IsConstantOpaque = v3(this);
  if ( IsConstantOpaque )
  {
    *(_DWORD *)a2 = 88;
    *((_DWORD *)a2 + 1) = 3;
  }
  else
  {
    *(_DWORD *)a2 = 87;
    *((_DWORD *)a2 + 1) = 1;
  }
  *((_QWORD *)a2 + 2) = 0LL;
  *((_DWORD *)a2 + 2) = 1;
}
