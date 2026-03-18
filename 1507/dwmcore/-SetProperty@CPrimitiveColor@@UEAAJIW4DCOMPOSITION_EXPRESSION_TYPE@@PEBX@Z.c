/*
 * XREFs of ?SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180107F50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdatePrimitivePropertiesList@CPrimitiveColor@@AEAAXXZ @ 0x180108084 (-UpdatePrimitivePropertiesList@CPrimitiveColor@@AEAAXXZ.c)
 */

__int64 __fastcall CPrimitiveColor::SetProperty(CPrimitiveColor *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float v5; // xmm1_4
  int v6; // edx
  int v7; // edx
  int v8; // edx
  float *v9; // rax

  v4 = 0;
  if ( a3 != 17 )
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
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x59u);
          return v4;
        }
        v9 = (float *)((char *)a1 + 132);
      }
      else
      {
        v9 = (float *)((char *)a1 + 128);
      }
    }
    else
    {
      v9 = (float *)((char *)a1 + 124);
    }
  }
  else
  {
    v9 = (float *)((char *)a1 + 120);
  }
  if ( !v9 )
    goto LABEL_13;
  if ( *v9 != v5 )
  {
    *v9 = v5;
    CPrimitiveColor::UpdatePrimitivePropertiesList(a1);
  }
  return v4;
}
