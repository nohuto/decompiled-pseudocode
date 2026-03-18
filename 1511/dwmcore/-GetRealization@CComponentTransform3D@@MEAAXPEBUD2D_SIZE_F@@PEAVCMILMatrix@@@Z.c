/*
 * XREFs of ?GetRealization@CComponentTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18012EE40
 * Callers:
 *     <none>
 * Callees:
 *     ?D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z @ 0x180012410 (-D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z @ 0x1800BEEE4 (-D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z.c)
 */

void __fastcall CComponentTransform3D::GetRealization(
        CComponentTransform3D *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  float v4; // xmm5_4
  float v5; // xmm7_4
  float v6; // xmm10_4
  float v7; // xmm9_4
  float v8; // xmm8_4
  char v9; // di
  double v10; // xmm15_8
  double v11; // xmm14_8
  double v12; // xmm13_8
  double v13; // xmm4_8
  double v14; // xmm11_8
  double v15; // xmm12_8
  float v16; // xmm0_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm0_4
  float v21; // xmm15_4
  float v22; // xmm14_4
  float v23; // xmm13_4
  float v24; // xmm4_4
  float v25; // xmm11_4
  float v26; // xmm12_4
  float v27; // xmm2_4
  float v28; // xmm7_4
  float v29; // xmm0_4
  float v30; // xmm2_4
  float v31; // xmm0_4
  float v32; // xmm2_4
  float v33; // xmm0_4
  float v34; // xmm2_4
  float v35; // xmm0_4
  float *v36; // rax
  __int64 v37; // rcx
  float v38; // xmm1_4
  __int64 v39; // rdx
  float v40; // xmm0_4
  float v41; // xmm4_4
  float *v42; // rax
  float v43; // xmm3_4
  float v44; // xmm1_4
  float v45; // xmm2_4
  float v46; // xmm0_4
  float v47; // xmm1_4
  float v48; // xmm3_4
  float v49; // xmm2_4
  float v50; // xmm0_4
  float v51; // xmm1_4
  float v52; // xmm3_4
  float v53; // xmm0_4
  float v54; // xmm1_4
  float v55; // xmm3_4
  float v56; // [rsp+28h] [rbp-E0h]
  float v57; // [rsp+30h] [rbp-D8h] BYREF
  float v58; // [rsp+34h] [rbp-D4h]
  float v59; // [rsp+38h] [rbp-D0h]
  float v60; // [rsp+3Ch] [rbp-CCh]
  _BYTE v61[224]; // [rsp+48h] [rbp-C0h] BYREF
  float v62; // [rsp+148h] [rbp+40h]
  float v63; // [rsp+150h] [rbp+48h]
  float v64; // [rsp+158h] [rbp+50h]

  v4 = 0.0;
  v5 = 0.0;
  v6 = *((double *)this + 15);
  v7 = *((double *)this + 16);
  v8 = *((double *)this + 17);
  if ( a2 )
  {
    v4 = a2->width * *((double *)this + 18);
    v5 = a2->height * *((double *)this + 19);
  }
  v9 = 0;
  v10 = *((double *)this + 20);
  v11 = *((double *)this + 23);
  v12 = *((double *)this + 27);
  v13 = *((double *)this + 28);
  v14 = *((double *)this + 29);
  v15 = *((double *)this + 30);
  v16 = *((double *)this + 21);
  v17 = *((double *)this + 24);
  v63 = v16;
  v18 = *((double *)this + 22);
  v19 = *((double *)this + 25);
  v62 = v18;
  v20 = *((double *)this + 26);
  v64 = v17;
  v56 = v20;
  *(_OWORD *)a3 = *(_OWORD *)((char *)this + 248);
  v21 = v10;
  *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)this + 264);
  v22 = v11;
  *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)this + 280);
  v23 = v12;
  *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)this + 296);
  v24 = v13;
  v25 = v14;
  v26 = v15;
  if ( v6 != 0.0 || v7 != 0.0 || v8 != 0.0 || v4 != 0.0 || v5 != 0.0 )
  {
    v27 = *((float *)a3 + 3);
    v28 = v5 + v7;
    v9 = 1;
    *(float *)a3 = *(float *)a3 - (float)(v27 * (float)(v4 + v6));
    *((float *)a3 + 1) = *((float *)a3 + 1) - (float)((float)(v4 + v7) * v27);
    v29 = *((float *)a3 + 2) - (float)(v27 * v8);
    v30 = *((float *)a3 + 7);
    *((float *)a3 + 2) = v29;
    *((float *)a3 + 4) = *((float *)a3 + 4) - (float)(v30 * (float)(v4 + v6));
    *((float *)a3 + 5) = *((float *)a3 + 5) - (float)(v28 * v30);
    v31 = *((float *)a3 + 6) - (float)(v30 * v8);
    v32 = *((float *)a3 + 11);
    *((float *)a3 + 6) = v31;
    *((float *)a3 + 8) = *((float *)a3 + 8) - (float)(v32 * (float)(v4 + v6));
    *((float *)a3 + 9) = *((float *)a3 + 9) - (float)(v32 * v28);
    v33 = *((float *)a3 + 10) - (float)(v32 * v8);
    v34 = *((float *)a3 + 15);
    *((float *)a3 + 10) = v33;
    *((float *)a3 + 12) = *((float *)a3 + 12) - (float)(v34 * (float)(v4 + v6));
    *((float *)a3 + 13) = *((float *)a3 + 13) - (float)(v34 * v28);
    v35 = *((float *)a3 + 14) - (float)(v34 * v8);
    v17 = v64;
    *((float *)a3 + 14) = v35;
  }
  if ( v24 != 1.0 || v25 != 1.0 || v26 != 1.0 )
  {
    v36 = (float *)((char *)a3 + 4);
    v37 = 4LL;
    v38 = v24 * *((float *)a3 + 4);
    v39 = 4LL;
    *(float *)a3 = v24 * *(float *)a3;
    v40 = v24 * *((float *)a3 + 8);
    v41 = v24 * *((float *)a3 + 12);
    *((float *)a3 + 8) = v40;
    *((float *)a3 + 4) = v38;
    *((float *)a3 + 12) = v41;
    do
    {
      *v36 = v25 * *v36;
      v36 += 4;
      --v39;
    }
    while ( v39 );
    v42 = (float *)((char *)a3 + 8);
    do
    {
      *v42 = v26 * *v42;
      v42 += 4;
      --v37;
    }
    while ( v37 );
  }
  if ( v23 != 0.0 )
  {
    v57 = v17;
    v59 = v56;
    v58 = v19;
    D2DMatrixRotationAxis((struct D2DMatrix *)v61, (const struct D2DVector3 *)&v57, v23);
    D2DMatrixMultiply(a3, a3, (const struct D2DMatrix *)v61);
  }
  if ( v21 != 0.0 || v63 != 0.0 || v62 != 0.0 || v22 != 1.0 )
  {
    v57 = v21;
    v58 = v63;
    v59 = v62;
    v60 = v22;
    D2DMatrixRotationQuaternion((struct D2DMatrix *)v61, (const struct D2DQuaternion *)&v57);
    D2DMatrixMultiply(a3, a3, (const struct D2DMatrix *)v61);
  }
  if ( v9 )
  {
    v43 = *((float *)a3 + 7);
    v44 = (float)(*((float *)a3 + 3) * v7) + *((float *)a3 + 1);
    v45 = (float)(*((float *)a3 + 3) * v8) + *((float *)a3 + 2);
    *(float *)a3 = (float)(*((float *)a3 + 3) * v6) + *(float *)a3;
    *((float *)a3 + 1) = v44;
    v46 = (float)(v43 * v6) + *((float *)a3 + 4);
    v47 = (float)(v43 * v7) + *((float *)a3 + 5);
    *((float *)a3 + 2) = v45;
    v48 = (float)(v43 * v8) + *((float *)a3 + 6);
    v49 = *((float *)a3 + 11);
    *((float *)a3 + 4) = v46;
    *((float *)a3 + 5) = v47;
    v50 = (float)(v49 * v6) + *((float *)a3 + 8);
    *((float *)a3 + 6) = v48;
    v51 = (float)(v49 * v7) + *((float *)a3 + 9);
    v52 = *((float *)a3 + 15);
    *((float *)a3 + 8) = v50;
    *((float *)a3 + 9) = v51;
    v53 = (float)(v52 * v6) + *((float *)a3 + 12);
    v54 = (float)(v52 * v7) + *((float *)a3 + 13);
    *((float *)a3 + 10) = (float)(v49 * v8) + *((float *)a3 + 10);
    v55 = (float)(v52 * v8) + *((float *)a3 + 14);
    *((float *)a3 + 12) = v53;
    *((float *)a3 + 13) = v54;
    *((float *)a3 + 14) = v55;
  }
}
