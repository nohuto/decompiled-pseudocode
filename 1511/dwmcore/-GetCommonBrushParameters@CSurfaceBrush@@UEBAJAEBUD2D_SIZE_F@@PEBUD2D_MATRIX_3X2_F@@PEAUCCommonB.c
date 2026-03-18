/*
 * XREFs of ?GetCommonBrushParameters@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUCCommonBrushParameters@@@Z @ 0x180121ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsProtectedContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000BF70 (-IsProtectedContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x18000CA24 (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CalculateDestinationRect@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUD2D_RECT_F@@PEAU3@@Z @ 0x1801216B0 (-CalculateDestinationRect@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUD2D_RECT.c)
 */

__int64 __fastcall CSurfaceBrush::GetCommonBrushParameters(
        CCompositionSurfaceBitmap **this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct CCommonBrushParameters *a4)
{
  int v6; // eax
  unsigned int v7; // edi
  CCompositionSurfaceBitmap *v8; // rdi

  v6 = CSurfaceBrush::CalculateDestinationRect(
         (CSurfaceBrush *)this,
         a2,
         a3,
         (struct D2D_RECT_F *)a4,
         (struct D2D_MATRIX_3X2_F *)((char *)a4 + 40));
  v7 = v6;
  if ( v6 >= 0 )
  {
    *((_BYTE *)a4 + 70) = 0;
    v8 = this[8];
    if ( CCompositionSurfaceBitmap::IsProtectedContent((CCompositionSurfaceBitmap *)((char *)v8 + 40))
      && *((_BYTE *)this[2] + 1136) )
    {
      *((_QWORD *)a4 + 4) = 0LL;
      *((_OWORD *)a4 + 1) = _xmm;
    }
    else
    {
      *((_QWORD *)a4 + 4) = v8;
      *((_DWORD *)a4 + 16) = *((_DWORD *)this + 25);
      *((_WORD *)a4 + 34) = 0;
      if ( (unsigned __int8)CCompositionSurfaceBitmap::IsSwapChain(this[8]) )
        *((_BYTE *)a4 + 70) = 1;
    }
    return 0;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x258u);
  }
  return v7;
}
