/*
 * XREFs of ?SetProperty@CColorBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180139560
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetColor@CColorBrush@@AEAAXMMMM@Z @ 0x1801394E0 (-SetColor@CColorBrush@@AEAAXMMMM@Z.c)
 */

__int64 __fastcall CColorBrush::SetProperty(CColorBrush *a1, int a2, int a3, __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a3 != 70 || a2 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x42u);
  }
  else
  {
    CColorBrush::SetColor(
      a1,
      COERCE_FLOAT(*(_OWORD *)a4),
      COERCE_FLOAT(HIDWORD(*(_QWORD *)a4)),
      COERCE_FLOAT(*(_QWORD *)(a4 + 8)),
      COERCE_FLOAT(HIDWORD(*(_OWORD *)a4)));
  }
  return v4;
}
