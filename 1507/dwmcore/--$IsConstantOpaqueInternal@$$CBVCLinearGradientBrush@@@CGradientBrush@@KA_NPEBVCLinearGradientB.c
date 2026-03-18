/*
 * XREFs of ??$IsConstantOpaqueInternal@$$CBVCLinearGradientBrush@@@CGradientBrush@@KA_NPEBVCLinearGradientBrush@@@Z @ 0x1800F8450
 * Callers:
 *     ?IsConstantOpaque@CLinearGradientBrush@@UEBA_NXZ @ 0x1800F9880 (-IsConstantOpaque@CLinearGradientBrush@@UEBA_NXZ.c)
 * Callees:
 *     ?GetOpacity@CBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CJ@@@PEAM@Z @ 0x180056648 (-GetOpacity@CBrush@@KAJNPEAV-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CJ@@@PEAM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

char __fastcall CGradientBrush::IsConstantOpaqueInternal<CLinearGradientBrush const>(__int64 a1)
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
  Opacity = CBrush::GetOpacity(*(double *)(a1 + 72), *(_QWORD *)(a1 + 80), &v9);
  if ( Opacity >= 0 )
  {
    if ( v9 >= 1.0 )
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
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Opacity, 0x84u);
  }
  return v3;
}
