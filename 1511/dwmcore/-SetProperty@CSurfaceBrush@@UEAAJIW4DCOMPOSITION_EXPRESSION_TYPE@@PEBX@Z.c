/*
 * XREFs of ?SetProperty@CSurfaceBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180122420
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetHorizontalAlignmentRatio@CSurfaceBrush@@AEAAXM@Z @ 0x1801223D4 (-SetHorizontalAlignmentRatio@CSurfaceBrush@@AEAAXM@Z.c)
 *     ?SetVerticalAlignmentRatio@CSurfaceBrush@@AEAAXM@Z @ 0x180122478 (-SetVerticalAlignmentRatio@CSurfaceBrush@@AEAAXM@Z.c)
 */

__int64 __fastcall CSurfaceBrush::SetProperty(CSurfaceBrush *a1, int a2, int a3, float *a4)
{
  int v4; // edx

  if ( a3 == 18 )
  {
    v4 = a2 - 2;
    if ( v4 )
    {
      if ( v4 == 1 )
        CSurfaceBrush::SetVerticalAlignmentRatio(a1, *a4);
    }
    else
    {
      CSurfaceBrush::SetHorizontalAlignmentRatio(a1, *a4);
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x93u);
  return 2147942487LL;
}
