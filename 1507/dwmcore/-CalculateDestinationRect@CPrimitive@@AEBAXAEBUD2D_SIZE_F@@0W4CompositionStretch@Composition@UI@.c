/*
 * XREFs of ?CalculateDestinationRect@CPrimitive@@AEBAXAEBUD2D_SIZE_F@@0W4CompositionStretch@Composition@UI@Windows@@MMPEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@PEA_N@Z @ 0x18011658C
 * Callers:
 *     ?Draw@CPrimitive@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180116FD0 (-Draw@CPrimitive@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?HitTest@CPrimitive@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180117480 (-HitTest@CPrimitive@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CPrimitive::CalculateDestinationRect(
        __int64 a1,
        float *a2,
        float *a3,
        int a4,
        float a5,
        float a6,
        _OWORD *a7,
        __int64 a8,
        char *a9)
{
  _UNKNOWN **v9; // rax
  char v10; // r11
  float v11; // xmm0_4
  float v12; // xmm9_4
  float v13; // xmm1_4
  float v14; // xmm11_4
  float v15; // xmm10_4
  float v16; // xmm9_4
  float v17; // xmm12_4
  float v18; // xmm0_4
  float v19; // xmm9_4
  float v20; // xmm1_4
  float v21; // xmm11_4
  float v22; // xmm15_4
  float v23; // xmm14_4
  __int128 v24; // xmm5
  float v25; // xmm1_4
  float v26; // xmm1_4
  float v27; // xmm2_4
  float v28; // xmm2_4
  float v29; // xmm2_4
  float v30; // xmm7_4
  float v31; // xmm2_4
  float v32; // xmm6_4
  __int128 v34; // [rsp+8h] [rbp-A1h]
  __int128 v35; // [rsp+18h] [rbp-91h]
  __int64 v36; // [rsp+28h] [rbp-81h]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+37h] BYREF

  v9 = &retaddr;
  v10 = 1;
  v34 = 0LL;
  switch ( a4 )
  {
    case 0:
      v21 = *a2;
      v15 = (float)(a5 * *a3) - (float)(*a2 * a5);
      v16 = (float)(a6 * a3[1]) - (float)(a2[1] * a6);
      v17 = a2[1] + v16;
LABEL_21:
      v14 = v21 + v15;
      goto LABEL_22;
    case 1:
      v14 = *a3;
      v15 = 0.0;
      v17 = a3[1];
      goto LABEL_12;
    case 2:
      v18 = *a2 / a2[1];
      v19 = a3[1];
      v20 = *a3 / v18;
      v21 = *a3;
      if ( v20 <= v19 )
      {
        v15 = 0.0;
        v16 = (float)(v19 * a6) - (float)(v20 * a6);
      }
      else
      {
        v21 = v19 * v18;
        v20 = a3[1];
        v16 = 0.0;
        v15 = (float)(*a3 * a5) - (float)(v21 * a5);
      }
      v17 = v16 + v20;
      goto LABEL_21;
  }
  if ( a4 != 3 )
  {
    v17 = 0.0;
    v14 = 0.0;
    v16 = 0.0;
    v15 = 0.0;
    goto LABEL_23;
  }
  LOBYTE(v9) = 1;
  v11 = *a2 / a2[1];
  v12 = a3[1];
  v13 = *a3 / v11;
  v14 = *a3;
  if ( v12 > v13 )
  {
    v13 = a3[1];
    v14 = v12 * v11;
    LOBYTE(v9) = 0;
  }
  v15 = (float)(*a3 * a5) - (float)(v14 * a5);
  v16 = (float)(v12 * a6) - (float)(v13 * a6);
  if ( (_BYTE)v9 )
    v17 = v16 + v13;
  else
    v17 = v13;
  if ( (_BYTE)v9 )
  {
    v15 = 0.0;
    goto LABEL_22;
  }
  v14 = v15 + v14;
LABEL_12:
  v16 = 0.0;
LABEL_22:
  *((_QWORD *)&v34 + 1) = __PAIR64__(LODWORD(v17), LODWORD(v14));
  *(_QWORD *)&v34 = __PAIR64__(LODWORD(v16), LODWORD(v15));
LABEL_23:
  if ( a8 )
  {
    v22 = 0.0;
    v23 = 0.0;
    v24 = _xmm;
    v36 = 0LL;
    v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v15) & _xmm);
    if ( v25 >= 0.0000011920929 || (v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v16) & _xmm), v26 >= 0.0000011920929) )
    {
      v24 = _xmm;
      v22 = COERCE_FLOAT(LODWORD(v15) ^ _xmm) + 0.0;
      v23 = COERCE_FLOAT(LODWORD(v16) ^ _xmm) + 0.0;
      v10 = 0;
      *(float *)&v36 = v22;
      *((float *)&v36 + 1) = v23;
    }
    if ( a4 )
    {
      v27 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*a2 - *a3)) & _xmm);
      if ( v27 > 0.0000011920929
        || (v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a2[1] - a3[1])) & _xmm), v28 > 0.0000011920929) )
      {
        v10 = 0;
        v29 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v14 - v15)) & _xmm);
        v30 = *a2 / v29;
        v31 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v17 - v16)) & _xmm);
        v32 = a2[1] / v31;
        *(float *)&v35 = v30 + 0.0;
        *((float *)&v35 + 2) = (float)(v30 * 0.0) + 0.0;
        *((float *)&v35 + 1) = (float)(v32 * 0.0) + 0.0;
        *((float *)&v35 + 3) = v32 + 0.0;
        v24 = v35;
        *((float *)&v36 + 1) = (float)((float)(v23 * v32) + (float)(v22 * 0.0)) + (float)(0.0 - (float)(v32 * 0.0));
        *(float *)&v36 = (float)((float)(v22 * v30) + (float)(v23 * 0.0)) + (float)(0.0 - (float)(v30 * 0.0));
      }
    }
    *(_OWORD *)a8 = v24;
    *(_QWORD *)(a8 + 16) = v36;
    if ( a9 )
      *a9 = v10;
  }
  if ( v15 <= 0.0 )
    LODWORD(v34) = 0;
  if ( v16 <= 0.0 )
    DWORD1(v34) = 0;
  if ( *a3 <= v14 )
    *((float *)&v34 + 2) = *a3;
  if ( a3[1] <= v17 )
    *((float *)&v34 + 3) = a3[1];
  *a7 = v34;
  return (char)v9;
}
