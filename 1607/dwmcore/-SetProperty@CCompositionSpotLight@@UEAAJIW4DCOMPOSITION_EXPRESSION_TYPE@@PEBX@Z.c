/*
 * XREFs of ?SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180151530
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetAttenuation0@CCompositionPointLight@@AEAAXM@Z @ 0x180150BC4 (-SetAttenuation0@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?SetAttenuation2@CCompositionPointLight@@AEAAXM@Z @ 0x180150C08 (-SetAttenuation2@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?SetAttenuation1@CCompositionPointLight@@AEAAXM@Z @ 0x18015122C (-SetAttenuation1@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?SetDirection@CCompositionSpotLight@@AEAAXMMM@Z @ 0x180151270 (-SetDirection@CCompositionSpotLight@@AEAAXMMM@Z.c)
 *     ?SetInnerConeAngle@CCompositionSpotLight@@AEAAXM@Z @ 0x180151308 (-SetInnerConeAngle@CCompositionSpotLight@@AEAAXM@Z.c)
 *     ?SetInnerConeColor@CCompositionSpotLight@@AEAAXMMMM@Z @ 0x18015134C (-SetInnerConeColor@CCompositionSpotLight@@AEAAXMMMM@Z.c)
 *     ?SetOffset@CCompositionSpotLight@@AEAAXMMM@Z @ 0x1801513DC (-SetOffset@CCompositionSpotLight@@AEAAXMMM@Z.c)
 *     ?SetOuterConeAngle@CCompositionSpotLight@@AEAAXM@Z @ 0x180151450 (-SetOuterConeAngle@CCompositionSpotLight@@AEAAXM@Z.c)
 *     ?SetOuterConeColor@CCompositionSpotLight@@AEAAXMMMM@Z @ 0x180151494 (-SetOuterConeColor@CCompositionSpotLight@@AEAAXMMMM@Z.c)
 */

__int64 __fastcall CCompositionSpotLight::SetProperty(CCompositionSpotLight *a1, int a2, int a3, float *a4)
{
  float v7; // xmm1_4
  __int128 v9; // [rsp+30h] [rbp-18h]

  if ( a3 != 18 )
  {
    if ( a3 == 52 )
      goto LABEL_22;
    if ( a3 != 70 )
      goto LABEL_26;
    v9 = *(_OWORD *)a4;
    if ( a2 == 8 )
    {
      CCompositionSpotLight::SetInnerConeColor(
        a1,
        *(float *)&v9,
        *((float *)&v9 + 1),
        *((float *)&v9 + 2),
        *((float *)&v9 + 3));
    }
    else if ( a2 == 12 )
    {
      CCompositionSpotLight::SetOuterConeColor(
        a1,
        *(float *)&v9,
        *((float *)&v9 + 1),
        *((float *)&v9 + 2),
        *((float *)&v9 + 3));
    }
  }
  v7 = *a4;
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
    {
      CCompositionPointLight::SetAttenuation1(a1, v7);
      goto LABEL_26;
    }
    if ( a2 == 3 )
    {
      CCompositionPointLight::SetAttenuation2(a1, v7);
      goto LABEL_26;
    }
    if ( a2 != 6 )
    {
      if ( a2 != 7 )
      {
        if ( a2 == 10 )
        {
LABEL_16:
          CCompositionSpotLight::SetOuterConeAngle(a1, v7);
          goto LABEL_26;
        }
        if ( a2 == 11 )
        {
          v7 = v7 * 0.017453292;
          goto LABEL_16;
        }
        goto LABEL_22;
      }
      v7 = v7 * 0.017453292;
    }
    CCompositionSpotLight::SetInnerConeAngle(a1, v7);
    goto LABEL_26;
  }
  CCompositionPointLight::SetAttenuation0(a1, v7);
LABEL_22:
  if ( a2 == 5 )
  {
    CCompositionSpotLight::SetDirection(a1, *a4, a4[1], a4[2]);
  }
  else if ( a2 == 9 )
  {
    CCompositionSpotLight::SetOffset(a1, *a4, a4[1], a4[2]);
  }
LABEL_26:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x105u);
  return 2147942487LL;
}
