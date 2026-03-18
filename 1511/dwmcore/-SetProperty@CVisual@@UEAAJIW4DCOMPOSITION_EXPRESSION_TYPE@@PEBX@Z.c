/*
 * XREFs of ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180009290
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRelativeOffset@CVisual@@QEAAXMM@Z @ 0x180009328 (-SetRelativeOffset@CVisual@@QEAAXMM@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x180049D64 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x18004D3CC (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x18004D4B4 (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180120E48 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 */

__int64 __fastcall CVisual::SetProperty(float *a1, unsigned int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  float v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm1_4

  v4 = 0;
  if ( a3 != 18 )
  {
    if ( a3 == 35 )
    {
      if ( a2 != 26 )
      {
LABEL_25:
        v4 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x701u);
        return v4;
      }
      v10 = a4[1];
      goto LABEL_19;
    }
    if ( a3 != 52 || a2 != 25 )
      goto LABEL_25;
    v6 = a4[2];
    v7 = a4[1];
LABEL_11:
    v8 = *a4;
    goto LABEL_8;
  }
  if ( a2 > 0x17 )
  {
    v14 = a2 - 27;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 != 1 )
            goto LABEL_25;
          v17 = *a4;
          v18 = a1[31];
        }
        else
        {
          v17 = a1[32];
          v18 = *a4;
        }
        CVisual::SetRelativeSize((CVisual *)a1, v18, v17);
        return v4;
      }
      v19 = *a4;
      v20 = a1[25];
    }
    else
    {
      v19 = a1[26];
      v20 = *a4;
    }
    CVisual::SetRelativeOffset((CVisual *)a1, v20, v19);
    return v4;
  }
  if ( a2 == 23 )
  {
    CVisual::SetOpacity((CVisual *)a1, *a4);
    return v4;
  }
  if ( !a2 )
  {
    v6 = a1[24];
    v7 = a1[23];
    goto LABEL_11;
  }
  v5 = a2 - 1;
  if ( v5 )
  {
    v12 = v5 - 1;
    if ( !v12 )
    {
      v6 = *a4;
      v7 = a1[23];
      goto LABEL_7;
    }
    v13 = v12 - 19;
    if ( v13 )
    {
      if ( v13 != 1 )
        goto LABEL_25;
      v10 = *a4;
      v11 = a1[29];
LABEL_21:
      CVisual::SetSize((CVisual *)a1, v11, v10);
      return v4;
    }
    v10 = a1[30];
LABEL_19:
    v11 = *a4;
    goto LABEL_21;
  }
  v6 = a1[24];
  v7 = *a4;
LABEL_7:
  v8 = a1[22];
LABEL_8:
  CVisual::SetOffset((CVisual *)a1, v8, v7, v6);
  return v4;
}
