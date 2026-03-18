/*
 * XREFs of ?GetRealization@CComponentTransform3D@@MEAAXPEAVCMILMatrix@@@Z @ 0x18011ECA0
 * Callers:
 *     <none>
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z @ 0x18009BC40 (-D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z.c)
 *     ?D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z @ 0x1801494BC (-D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z.c)
 */

void __fastcall CComponentTransform3D::GetRealization(CComponentTransform3D *this, struct CMILMatrix *a2)
{
  char v2; // di
  double v3; // xmm2_8
  double v5; // xmm4_8
  double v6; // xmm3_8
  double v7; // xmm5_8
  double v8; // xmm8_8
  double v9; // xmm9_8
  double v10; // xmm10_8
  double v11; // xmm11_8
  float v12; // xmm0_4
  double v13; // xmm12_8
  double v14; // xmm13_8
  float v15; // xmm0_4
  double v16; // xmm14_8
  double v17; // xmm15_8
  float v18; // xmm10_4
  float v19; // xmm2_4
  float v20; // xmm8_4
  float v21; // xmm9_4
  float v22; // xmm13_4
  float v23; // xmm14_4
  float v24; // xmm15_4
  float v25; // xmm12_4
  float v26; // xmm4_4
  float v27; // xmm3_4
  float v28; // xmm5_4
  float v29; // xmm11_4
  float v30; // xmm1_4
  float v31; // xmm2_4
  float v32; // xmm0_4
  float v33; // xmm2_4
  float v34; // xmm0_4
  float v35; // xmm2_4
  float v36; // xmm0_4
  float v37; // xmm2_4
  float v38; // xmm0_4
  float *v39; // rax
  __int64 v40; // rcx
  float v41; // xmm1_4
  float v42; // xmm0_4
  float v43; // xmm3_4
  __int64 v44; // rdx
  float *v45; // rax
  float v46; // xmm3_4
  float v47; // xmm1_4
  float v48; // xmm2_4
  float v49; // xmm0_4
  float v50; // xmm1_4
  float v51; // xmm3_4
  float v52; // xmm2_4
  float v53; // xmm0_4
  float v54; // xmm1_4
  float v55; // xmm3_4
  float v56; // xmm0_4
  float v57; // xmm1_4
  float v58; // xmm3_4
  float v59; // [rsp+28h] [rbp-99h] BYREF
  float v60; // [rsp+2Ch] [rbp-95h]
  float v61; // [rsp+30h] [rbp-91h]
  float v62; // [rsp+34h] [rbp-8Dh]
  _BYTE v63[56]; // [rsp+38h] [rbp-89h] BYREF
  float v64; // [rsp+128h] [rbp+67h]
  float v65; // [rsp+130h] [rbp+6Fh]
  float v66; // [rsp+138h] [rbp+77h]

  v2 = 0;
  v3 = *((double *)this + 20);
  v5 = *((double *)this + 23);
  v6 = *((double *)this + 24);
  v7 = *((double *)this + 25);
  v8 = *((double *)this + 14);
  v9 = *((double *)this + 15);
  v10 = *((double *)this + 13);
  v11 = *((double *)this + 26);
  v12 = *((double *)this + 21);
  v13 = *((double *)this + 19);
  v65 = v12;
  v14 = *((double *)this + 16);
  v15 = *((double *)this + 22);
  v16 = *((double *)this + 17);
  v66 = v15;
  v17 = *((double *)this + 18);
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 216);
  v18 = v10;
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 232);
  v19 = v3;
  *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)this + 248);
  v64 = v19;
  *((_OWORD *)a2 + 3) = *(_OWORD *)((char *)this + 264);
  v20 = v8;
  v21 = v9;
  v22 = v14;
  v23 = v16;
  v24 = v17;
  v25 = v13;
  v26 = v5;
  v27 = v6;
  v28 = v7;
  v29 = v11;
  if ( v18 != 0.0 || v20 != 0.0 || v21 != 0.0 )
  {
    v2 = 1;
    v30 = *((float *)a2 + 3) * v20;
    v31 = *((float *)a2 + 3) * v21;
    *(float *)a2 = *(float *)a2 - (float)(*((float *)a2 + 3) * v18);
    *((float *)a2 + 1) = *((float *)a2 + 1) - v30;
    v32 = *((float *)a2 + 2) - v31;
    v33 = *((float *)a2 + 7);
    *((float *)a2 + 2) = v32;
    *((float *)a2 + 4) = *((float *)a2 + 4) - (float)(v33 * v18);
    *((float *)a2 + 5) = *((float *)a2 + 5) - (float)(v33 * v20);
    v34 = *((float *)a2 + 6) - (float)(v33 * v21);
    v35 = *((float *)a2 + 11);
    *((float *)a2 + 6) = v34;
    *((float *)a2 + 8) = *((float *)a2 + 8) - (float)(v35 * v18);
    *((float *)a2 + 9) = *((float *)a2 + 9) - (float)(v35 * v20);
    v36 = *((float *)a2 + 10) - (float)(v35 * v21);
    v37 = *((float *)a2 + 15);
    *((float *)a2 + 10) = v36;
    *((float *)a2 + 12) = *((float *)a2 + 12) - (float)(v37 * v18);
    *((float *)a2 + 13) = *((float *)a2 + 13) - (float)(v37 * v20);
    v38 = *((float *)a2 + 14) - (float)(v37 * v21);
    v19 = v64;
    *((float *)a2 + 14) = v38;
  }
  if ( v27 != 1.0 || v28 != 1.0 || v29 != 1.0 )
  {
    v39 = (float *)((char *)a2 + 4);
    v40 = 4LL;
    v41 = v27 * *((float *)a2 + 4);
    *(float *)a2 = v27 * *(float *)a2;
    v42 = v27 * *((float *)a2 + 8);
    v43 = v27 * *((float *)a2 + 12);
    *((float *)a2 + 8) = v42;
    *((float *)a2 + 4) = v41;
    *((float *)a2 + 12) = v43;
    v44 = 4LL;
    do
    {
      *v39 = v28 * *v39;
      v39 += 4;
      --v44;
    }
    while ( v44 );
    v45 = (float *)((char *)a2 + 8);
    do
    {
      *v45 = v29 * *v45;
      v45 += 4;
      --v40;
    }
    while ( v40 );
  }
  if ( v26 != 0.0 )
  {
    v59 = v19;
    v60 = v65;
    v61 = v66;
    D2DMatrixRotationAxis((struct D2DMatrix *)v63, (const struct D2DVector3 *)&v59, v26 * 0.017453292);
    D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)v63);
  }
  if ( v22 != 0.0 || v23 != 0.0 || v24 != 0.0 || v25 != 1.0 )
  {
    v59 = v22;
    v60 = v23;
    v61 = v24;
    v62 = v25;
    D2DMatrixRotationQuaternion((struct D2DMatrix *)v63, (const struct D2DQuaternion *)&v59);
    D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)v63);
  }
  if ( v2 )
  {
    v46 = *((float *)a2 + 7);
    v47 = (float)(*((float *)a2 + 3) * v20) + *((float *)a2 + 1);
    v48 = (float)(*((float *)a2 + 3) * v21) + *((float *)a2 + 2);
    *(float *)a2 = (float)(*((float *)a2 + 3) * v18) + *(float *)a2;
    *((float *)a2 + 1) = v47;
    v49 = (float)(v46 * v18) + *((float *)a2 + 4);
    v50 = (float)(v46 * v20) + *((float *)a2 + 5);
    *((float *)a2 + 2) = v48;
    v51 = (float)(v46 * v21) + *((float *)a2 + 6);
    v52 = *((float *)a2 + 11);
    *((float *)a2 + 4) = v49;
    *((float *)a2 + 5) = v50;
    v53 = (float)(v52 * v18) + *((float *)a2 + 8);
    *((float *)a2 + 6) = v51;
    v54 = (float)(v52 * v20) + *((float *)a2 + 9);
    v55 = *((float *)a2 + 15);
    *((float *)a2 + 8) = v53;
    *((float *)a2 + 9) = v54;
    v56 = (float)(v55 * v18) + *((float *)a2 + 12);
    v57 = (float)(v55 * v20) + *((float *)a2 + 13);
    *((float *)a2 + 10) = (float)(v52 * v21) + *((float *)a2 + 10);
    v58 = (float)(v55 * v21) + *((float *)a2 + 14);
    *((float *)a2 + 12) = v56;
    *((float *)a2 + 13) = v57;
    *((float *)a2 + 14) = v58;
  }
}
