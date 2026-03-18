/*
 * XREFs of ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180104B60
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRelativeOffset@CVisual@@QEAAXMM@Z @ 0x18000BBC0 (-SetRelativeOffset@CVisual@@QEAAXMM@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x180034A84 (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x180034B64 (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x18003724C (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180104AE8 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 */

__int64 __fastcall CVisual::SetProperty(float *a1, unsigned int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float v5; // xmm3_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm1_4

  v4 = 0;
  if ( a3 == 17 )
  {
    if ( a2 > 0x16 )
    {
      v13 = a2 - 26;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            if ( v15 != 1 )
              goto LABEL_30;
            v16 = *a4;
            v17 = a1[35];
          }
          else
          {
            v16 = a1[36];
            v17 = *a4;
          }
          CVisual::SetRelativeSize((CVisual *)a1, v17, v16);
          return v4;
        }
        v18 = *a4;
        v19 = a1[29];
      }
      else
      {
        v18 = a1[30];
        v19 = *a4;
      }
      CVisual::SetRelativeOffset((CVisual *)a1, v19, v18);
      return v4;
    }
    if ( a2 == 22 )
    {
      CVisual::SetOpacity((CVisual *)a1, *a4);
      return v4;
    }
    if ( !a2 )
    {
      v5 = a1[28];
      v6 = a1[27];
      goto LABEL_6;
    }
    v10 = a2 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 18;
        if ( !v12 )
        {
          v8 = a1[34];
          goto LABEL_10;
        }
        if ( v12 == 1 )
        {
          v8 = *a4;
          v9 = a1[33];
          goto LABEL_11;
        }
LABEL_30:
        v4 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x72Fu);
        return v4;
      }
      v5 = *a4;
      v6 = a1[27];
    }
    else
    {
      v5 = a1[28];
      v6 = *a4;
    }
    v7 = a1[26];
    goto LABEL_7;
  }
  if ( a3 == 34 )
  {
    if ( a2 == 25 )
    {
      v8 = a4[1];
LABEL_10:
      v9 = *a4;
LABEL_11:
      CVisual::SetSize((CVisual *)a1, v9, v8);
      return v4;
    }
    goto LABEL_30;
  }
  if ( a3 != 51 || a2 != 24 )
    goto LABEL_30;
  v5 = a4[2];
  v6 = a4[1];
LABEL_6:
  v7 = *a4;
LABEL_7:
  CVisual::SetOffset((CVisual *)a1, v7, v6, v5);
  return v4;
}
