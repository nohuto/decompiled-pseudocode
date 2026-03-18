/*
 * XREFs of ?GetDefaultRealizationFormat@CBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x180083690
 * Callers:
 *     ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAUBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x180083520 (-EnsureRealization@CBrushResourceRealizer@@UEAAJPEAUBrushContext@@PEBUCContextState@@PEBUPixelFo.c)
 *     ?GetDefaultRealizationFormat@CImageBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x180085AF0 (-GetDefaultRealizationFormat@CImageBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?IsConstantOpaque@CSolidColorBrush@@UEBA_NXZ @ 0x180083DD0 (-IsConstantOpaque@CSolidColorBrush@@UEBA_NXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CBrush::GetDefaultRealizationFormat(CBrush *this, struct PixelFormatInfo *a2)
{
  bool (__fastcall *v3)(CSolidColorBrush *__hidden); // rsi
  bool IsConstantOpaque; // al

  v3 = *(bool (__fastcall **)(CSolidColorBrush *__hidden))(*(_QWORD *)this + 128LL);
  if ( v3 == CSolidColorBrush::IsConstantOpaque )
    IsConstantOpaque = CSolidColorBrush::IsConstantOpaque(this);
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
