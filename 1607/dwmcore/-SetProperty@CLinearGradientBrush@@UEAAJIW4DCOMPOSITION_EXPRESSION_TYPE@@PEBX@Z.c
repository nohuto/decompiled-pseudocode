/*
 * XREFs of ?SetProperty@CLinearGradientBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18013F670
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetProperty@CSurfaceBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18013AD90 (-SetProperty@CSurfaceBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetEndPoint@CLinearGradientBrush@@AEAAXAEBUD2D_POINT_2F@@@Z @ 0x18013F624 (-SetEndPoint@CLinearGradientBrush@@AEAAXAEBUD2D_POINT_2F@@@Z.c)
 *     ?SetStartPoint@CLinearGradientBrush@@AEAAXAEBUD2D_POINT_2F@@@Z @ 0x18013F700 (-SetStartPoint@CLinearGradientBrush@@AEAAXAEBUD2D_POINT_2F@@@Z.c)
 */

__int64 __fastcall CLinearGradientBrush::SetProperty(CLinearGradientBrush *a1, int a2, int a3, struct D2D_POINT_2F *a4)
{
  int v8; // eax
  unsigned int v9; // ebx

  if ( a3 == 35 )
  {
    if ( a2 == 8 )
    {
      CLinearGradientBrush::SetStartPoint(a1, a4);
    }
    else if ( a2 == 9 )
    {
      CLinearGradientBrush::SetEndPoint((struct D2D_POINT_2F *)a1, a4);
    }
  }
  v8 = CSurfaceBrush::SetProperty(a1, a2, a3, (float *)a4);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x57u);
  return v9;
}
