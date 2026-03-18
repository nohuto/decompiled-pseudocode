/*
 * XREFs of ?SetProperty@CCompositionDistantLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801508B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetColor@CCompositionDistantLight@@AEAAXMMMM@Z @ 0x180150784 (-SetColor@CCompositionDistantLight@@AEAAXMMMM@Z.c)
 *     ?SetDirection@CCompositionDistantLight@@AEAAXMMM@Z @ 0x180150814 (-SetDirection@CCompositionDistantLight@@AEAAXMMM@Z.c)
 */

__int64 __fastcall CCompositionDistantLight::SetProperty(CCompositionDistantLight *a1, int a2, int a3, float *a4)
{
  if ( a3 != 52 )
  {
    if ( a3 != 70 )
      goto LABEL_7;
    if ( a2 == 1 )
      CCompositionDistantLight::SetColor(
        a1,
        COERCE_FLOAT(*(_OWORD *)a4),
        COERCE_FLOAT(HIDWORD(*(_QWORD *)a4)),
        COERCE_FLOAT(*((_QWORD *)a4 + 1)),
        COERCE_FLOAT(HIDWORD(*(_OWORD *)a4)));
  }
  if ( a2 == 3 )
    CCompositionDistantLight::SetDirection(a1, *a4, a4[1], a4[2]);
LABEL_7:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xACu);
  return 2147942487LL;
}
