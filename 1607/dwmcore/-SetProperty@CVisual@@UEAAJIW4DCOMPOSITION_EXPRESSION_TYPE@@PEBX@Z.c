/*
 * XREFs of ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18000C310
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRelativeOffset@CVisual@@QEAAXMM@Z @ 0x18000C3C8 (-SetRelativeOffset@CVisual@@QEAAXMM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_2F@@XZ @ 0x18004FB1C (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_2F@@XZ.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x18004FB44 (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x180050434 (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180051FB0 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x180052288 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x180109E2C (-SetSize@CVisual@@QEAAXMM@Z.c)
 */

__int64 __fastcall CVisual::SetProperty(float *a1, unsigned int a2, int a3, float *a4)
{
  unsigned int v4; // edi
  unsigned int v7; // edx
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  float *RelativeLayoutSizeInternal; // rax
  CVisual *v19; // r11
  float v20; // xmm2_4
  float v21; // xmm1_4
  struct D2D_SIZE_F v22; // rax
  float *RelativeOffsetInternal; // rax
  CVisual *v24; // r11
  float v25; // xmm2_4
  float v26; // xmm1_4
  struct D2D_VECTOR_2F v27; // rax

  v4 = 0;
  if ( a3 != 18 )
  {
    if ( a3 == 35 )
    {
      if ( a2 != 26 )
      {
LABEL_26:
        v4 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x786u);
        return v4;
      }
      v11 = a4[1];
      goto LABEL_20;
    }
    if ( a3 != 52 || a2 != 25 )
      goto LABEL_26;
    v8 = a4[2];
    v9 = a4[1];
LABEL_12:
    v10 = *a4;
    goto LABEL_10;
  }
  if ( a2 > 0x17 )
  {
    v15 = a2 - 27;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          if ( v17 != 1 )
            goto LABEL_26;
          RelativeLayoutSizeInternal = (float *)CVisual::GetRelativeLayoutSizeInternal((CVisual *)a1);
          v20 = *a4;
          v21 = *RelativeLayoutSizeInternal;
        }
        else
        {
          v22 = CVisual::GetRelativeLayoutSizeInternal((CVisual *)a1);
          v21 = *a4;
          v20 = *(float *)(*(_QWORD *)&v22 + 4LL);
        }
        CVisual::SetRelativeSize(v19, v21, v20);
        return v4;
      }
      RelativeOffsetInternal = (float *)CVisual::GetRelativeOffsetInternal((CVisual *)a1);
      v25 = *a4;
      v26 = *RelativeOffsetInternal;
    }
    else
    {
      v27 = CVisual::GetRelativeOffsetInternal((CVisual *)a1);
      v26 = *a4;
      v25 = *(float *)(*(_QWORD *)&v27 + 4LL);
    }
    CVisual::SetRelativeOffset(v24, v26, v25);
    return v4;
  }
  if ( a2 != 23 )
  {
    if ( a2 )
    {
      v7 = a2 - 1;
      if ( !v7 )
      {
        v8 = a1[43];
        v9 = *a4;
LABEL_9:
        v10 = a1[41];
LABEL_10:
        CVisual::SetOffset((CVisual *)a1, v10, v9, v8);
        return v4;
      }
      v13 = v7 - 1;
      if ( !v13 )
      {
        v8 = *a4;
        v9 = a1[42];
        goto LABEL_9;
      }
      v14 = v13 - 19;
      if ( v14 )
      {
        if ( v14 != 1 )
          goto LABEL_26;
        v11 = *a4;
        v12 = a1[46];
LABEL_22:
        CVisual::SetSize((CVisual *)a1, v12, v11);
        return v4;
      }
      v11 = a1[47];
LABEL_20:
      v12 = *a4;
      goto LABEL_22;
    }
    v8 = a1[43];
    v9 = a1[42];
    goto LABEL_12;
  }
  CVisual::SetOpacity((CVisual *)a1, *a4);
  return v4;
}
