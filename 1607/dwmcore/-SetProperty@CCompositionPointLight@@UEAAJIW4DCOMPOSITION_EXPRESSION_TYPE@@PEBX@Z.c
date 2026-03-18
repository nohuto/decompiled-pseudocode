/*
 * XREFs of ?SetProperty@CCompositionPointLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180150D50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetAttenuation0@CCompositionPointLight@@AEAAXM@Z @ 0x180150BC4 (-SetAttenuation0@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?SetAttenuation2@CCompositionPointLight@@AEAAXM@Z @ 0x180150C08 (-SetAttenuation2@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?SetColor@CCompositionPointLight@@AEAAXMMMM@Z @ 0x180150C4C (-SetColor@CCompositionPointLight@@AEAAXMMMM@Z.c)
 *     ?SetOffset@CCompositionPointLight@@AEAAXMMM@Z @ 0x180150CDC (-SetOffset@CCompositionPointLight@@AEAAXMMM@Z.c)
 *     ?SetAttenuation1@CCompositionPointLight@@AEAAXM@Z @ 0x18015122C (-SetAttenuation1@CCompositionPointLight@@AEAAXM@Z.c)
 */

__int64 __fastcall CCompositionPointLight::SetProperty(CCompositionPointLight *a1, int a2, int a3, float *a4)
{
  if ( a3 == 18 )
  {
LABEL_6:
    switch ( a2 )
    {
      case 1:
        CCompositionPointLight::SetAttenuation0(a1, *a4);
        break;
      case 2:
        CCompositionPointLight::SetAttenuation1(a1, *a4);
        goto LABEL_14;
      case 3:
        CCompositionPointLight::SetAttenuation2(a1, *a4);
        goto LABEL_14;
    }
    goto LABEL_12;
  }
  if ( a3 != 52 )
  {
    if ( a3 != 70 )
      goto LABEL_14;
    if ( a2 == 4 )
      CCompositionPointLight::SetColor(
        a1,
        COERCE_FLOAT(*(_OWORD *)a4),
        COERCE_FLOAT(HIDWORD(*(_QWORD *)a4)),
        COERCE_FLOAT(*((_QWORD *)a4 + 1)),
        COERCE_FLOAT(HIDWORD(*(_OWORD *)a4)));
    goto LABEL_6;
  }
LABEL_12:
  if ( a2 == 6 )
    CCompositionPointLight::SetOffset(a1, *a4, a4[1], a4[2]);
LABEL_14:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xD6u);
  return 2147942487LL;
}
