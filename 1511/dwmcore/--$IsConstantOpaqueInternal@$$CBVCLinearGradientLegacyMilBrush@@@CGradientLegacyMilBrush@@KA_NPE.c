/*
 * XREFs of ??$IsConstantOpaqueInternal@$$CBVCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KA_NPEBVCLinearGradientLegacyMilBrush@@@Z @ 0x180014BA8
 * Callers:
 *     ?IsConstantOpaque@CLinearGradientLegacyMilBrush@@UEBA_NXZ @ 0x180013B60 (-IsConstantOpaque@CLinearGradientLegacyMilBrush@@UEBA_NXZ.c)
 * Callees:
 *     ?GetOpacity@CLegacyMilBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CN@@@PEAM@Z @ 0x18005D948 (-GetOpacity@CLegacyMilBrush@@KAJNPEAV-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CN@@@PEAM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

char __fastcall CGradientLegacyMilBrush::IsConstantOpaqueInternal<CLinearGradientLegacyMilBrush const>(__int64 a1)
{
  __int64 v2; // rsi
  char v3; // bl
  int Opacity; // eax
  int v5; // ecx
  unsigned int v6; // edx
  float *i; // rax
  float v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 120);
  v3 = 0;
  Opacity = CLegacyMilBrush::GetOpacity(a1, *(_QWORD *)(a1 + 80), &v9);
  if ( Opacity < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Opacity, 0x84u);
  }
  else if ( v9 >= 1.0 )
  {
    v5 = 0;
    v6 = *(_DWORD *)(a1 + 116) / 0x18u;
    if ( v6 )
    {
      for ( i = (float *)(v2 + 20); *i >= 1.0; i += 6 )
      {
        if ( ++v5 >= v6 )
          return 1;
      }
    }
    else
    {
      return 1;
    }
  }
  return v3;
}
