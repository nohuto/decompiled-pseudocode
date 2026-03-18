/*
 * XREFs of ?CalculateViewboxToViewportMapping@CTileBrushUtils@@SAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@PEAVCMILMatrix@@@Z @ 0x180032C50
 * Callers:
 *     ?CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@W43MilBrushMappingMode@@4PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@5MMPEAV8@6PEAV2@77PEAH@Z @ 0x180025094 (-CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizon.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z @ 0x180144498 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTileBrushUtils::CalculateViewboxToViewportMapping(
        float *a1,
        float *a2,
        int a3,
        int a4,
        int a5,
        __int64 a6)
{
  double v6; // xmm3_8
  double v7; // xmm4_8
  double v8; // xmm5_8
  double v9; // xmm6_8
  double v10; // xmm8_8
  double v11; // xmm7_8
  int v12; // r8d
  __int64 result; // rax
  unsigned int v14; // xmm0_4
  unsigned int v15; // xmm0_4
  float v16; // xmm0_4
  unsigned int v17; // xmm0_4
  int v18; // r9d
  __int128 v19; // [rsp+0h] [rbp-80h]
  __int128 v20; // [rsp+10h] [rbp-70h]
  float v21[8]; // [rsp+30h] [rbp-50h]

  v6 = DOUBLE_1_0;
  v7 = 0.0;
  v8 = DOUBLE_1_0;
  v9 = 0.0;
  v10 = 0.0;
  v11 = 0.0;
  if ( a3 )
  {
    v6 = (float)((float)(a1[2] - *a1) / (float)(a2[2] - *a2));
    v8 = (float)((float)(a1[3] - a1[1]) / (float)(a2[3] - a2[1]));
    v12 = a3 - 2;
    if ( !v12 )
    {
      v6 = fmin(v6, v8);
LABEL_4:
      v8 = v6;
      goto LABEL_5;
    }
    if ( v12 == 1 )
    {
      v6 = fmax(v6, v8);
      goto LABEL_4;
    }
  }
LABEL_5:
  if ( a4 )
  {
    v18 = a4 - 1;
    if ( v18 )
    {
      if ( v18 == 1 )
      {
        v7 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(a2[2] - *a2) + *a2) ^ _xmm);
        v10 = (float)((float)(a1[2] - *a1) + *a1);
      }
    }
    else
    {
      *(_QWORD *)&v7 = COERCE_UNSIGNED_INT64((float)(a2[2] - *a2) * 0.5 + *a2) ^ _xmm;
      v10 = (float)(a1[2] - *a1) * 0.5 + *a1;
    }
  }
  else
  {
    v7 = COERCE_FLOAT(*(_DWORD *)a2 ^ _xmm);
    v10 = *a1;
  }
  if ( a5 )
  {
    if ( a5 == 1 )
    {
      *(_QWORD *)&v9 = COERCE_UNSIGNED_INT64((float)(a2[3] - a2[1]) * 0.5 + a2[1]) ^ _xmm;
      v11 = (float)(a1[3] - a1[1]) * 0.5 + a1[1];
    }
    else if ( a5 == 2 )
    {
      v9 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(a2[3] - a2[1]) + a2[1]) ^ _xmm);
      v11 = (float)((float)(a1[3] - a1[1]) + a1[1]);
    }
  }
  else
  {
    v9 = COERCE_FLOAT(*((_DWORD *)a2 + 1) ^ _xmm);
    v11 = a1[1];
  }
  result = a6;
  LODWORD(v20) = 0;
  HIDWORD(v20) = 0;
  *(float *)&v14 = v6;
  v19 = v14;
  *(float *)&v15 = v8;
  v21[3] = FLOAT_1_0;
  *(_QWORD *)((char *)&v20 + 4) = v15;
  v16 = v7 * v6 + v10;
  v21[0] = v16;
  *(float *)&v17 = v9 * v8 + v11;
  *(_QWORD *)&v21[1] = v17;
  *(_OWORD *)a6 = v19;
  *(_OWORD *)(a6 + 16) = v20;
  *(_OWORD *)(a6 + 32) = _xmm;
  *(_OWORD *)(a6 + 48) = *(_OWORD *)v21;
  *(_DWORD *)(a6 + 64) = 0;
  return result;
}
