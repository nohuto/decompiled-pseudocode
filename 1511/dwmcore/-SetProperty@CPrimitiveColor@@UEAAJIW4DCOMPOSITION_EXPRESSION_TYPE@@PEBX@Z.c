/*
 * XREFs of ?SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800AC580
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180083FD0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?OnColorChanged@CPrimitiveColor@@AEAAXXZ @ 0x18000F9B4 (-OnColorChanged@CPrimitiveColor@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPrimitiveColor::SetProperty(float *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float v5; // xmm1_4
  int v6; // edx
  int v7; // edx
  int v8; // edx
  float *v9; // rax

  v4 = 0;
  if ( a3 != 18 )
    goto LABEL_13;
  v5 = *a4;
  v6 = a2 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
        {
LABEL_13:
          v4 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x49u);
          return v4;
        }
        v9 = a1 + 25;
      }
      else
      {
        v9 = a1 + 24;
      }
    }
    else
    {
      v9 = a1 + 23;
    }
  }
  else
  {
    v9 = a1 + 22;
  }
  if ( !v9 )
    goto LABEL_13;
  if ( *v9 != v5 )
  {
    *v9 = v5;
    CPrimitiveColor::OnColorChanged((CPrimitiveColor *)(a1 - 2));
  }
  return v4;
}
