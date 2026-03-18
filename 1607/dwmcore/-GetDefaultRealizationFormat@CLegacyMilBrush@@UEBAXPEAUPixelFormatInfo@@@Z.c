/*
 * XREFs of ?GetDefaultRealizationFormat@CLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18002EE30
 * Callers:
 *     ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x18002ECB0 (-EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PE.c)
 *     ?GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x180032930 (-GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?IsConstantOpaque@CSolidColorLegacyMilBrush@@UEBA_NXZ @ 0x180031A00 (-IsConstantOpaque@CSolidColorLegacyMilBrush@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLegacyMilBrush::GetDefaultRealizationFormat(CLegacyMilBrush *this, struct PixelFormatInfo *a2)
{
  __int64 (*v3)(void); // rax
  char IsConstantOpaque; // al

  v3 = *(__int64 (**)(void))(*(_QWORD *)this + 144LL);
  if ( (char *)v3 == (char *)CSolidColorLegacyMilBrush::IsConstantOpaque )
    IsConstantOpaque = CSolidColorLegacyMilBrush::IsConstantOpaque(this);
  else
    IsConstantOpaque = v3();
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
  *((_DWORD *)a2 + 2) = 1;
  *((_QWORD *)a2 + 2) = 0LL;
}
