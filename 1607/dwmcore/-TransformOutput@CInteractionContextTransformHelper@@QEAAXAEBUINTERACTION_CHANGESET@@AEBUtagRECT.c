/*
 * XREFs of ?TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CHANGESET@@AEBUtagRECT@@1PEAU2@@Z @ 0x18018BC14
 * Callers:
 *     ?TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@AEBUtagRECT@@1PEAU2@@Z @ 0x18018BEA0 (-TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@AEBUtagRECT@@1P.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180098050 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?HimetricToScreen@CInteractionContextTransformHelper@@SAXAEBUtagRECT@@0PEAUINTERACTION_UPDATE@@PEAUINTERACTION_VELOCITY@@1121@Z @ 0x18018B7DC (-HimetricToScreen@CInteractionContextTransformHelper@@SAXAEBUtagRECT@@0PEAUINTERACTION_UPDATE@@P.c)
 */

void __fastcall CInteractionContextTransformHelper::TransformOutput(
        CInteractionContextTransformHelper *this,
        const struct INTERACTION_CHANGESET *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        struct INTERACTION_CHANGESET *a5)
{
  bool v5; // zf
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  unsigned __int64 v13; // rsi
  float *v14; // rbp
  __int64 v15; // rdx
  float *v16; // rcx
  int v17; // r8d
  const struct tagRECT *v18; // r10
  const struct tagRECT *v19; // r11
  float v20; // xmm5_4
  float v21; // xmm2_4
  float v22; // xmm3_4
  float v23; // xmm3_4
  float v24; // xmm5_4
  float v25; // xmm2_4
  float v26; // xmm3_4
  float v27; // xmm1_4

  v5 = (*((_BYTE *)a2 + 84) & 1) == 0;
  v7 = *((_OWORD *)a2 + 1);
  *(_OWORD *)a5 = *(_OWORD *)a2;
  v8 = *((_OWORD *)a2 + 2);
  *((_OWORD *)a5 + 1) = v7;
  v9 = *((_OWORD *)a2 + 3);
  *((_OWORD *)a5 + 2) = v8;
  v10 = *((_OWORD *)a2 + 4);
  *((_OWORD *)a5 + 3) = v9;
  v11 = *((_OWORD *)a2 + 5);
  *((_OWORD *)a5 + 4) = v10;
  v12 = *((_OWORD *)a2 + 6);
  *((_OWORD *)a5 + 5) = v11;
  *((_OWORD *)a5 + 6) = v12;
  if ( !v5 )
    *((_QWORD *)this + 15) = 0LL;
  v13 = (unsigned __int64)a5 & -(__int64)((*((_DWORD *)a5 + 21) & 2) != 0);
  if ( (*((_DWORD *)a5 + 21) & 2) != 0 )
    v14 = (float *)((char *)a5 + 32);
  else
    v14 = 0LL;
  if ( !D2D1::Matrix3x2F::IsIdentity(this) )
  {
    if ( v17 && v13 )
    {
      v20 = (float)((float)(*(float *)(v13 + 4) * v16[27]) + (float)(*(float *)v13 * v16[25])) + v16[29];
      v21 = (float)((float)(*(float *)(v13 + 20) * v16[14]) + (float)(*(float *)(v13 + 16) * v16[12])) + v16[16];
      v22 = (float)((float)(*(float *)(v13 + 20) * v16[15]) + (float)(*(float *)(v13 + 16) * v16[13])) + v16[17];
      *(float *)v13 = (float)((float)(*(float *)(v13 + 4) * v16[26]) + (float)(*(float *)v13 * v16[24])) + v16[28];
      *(float *)(v13 + 4) = v20;
      *(float *)(v13 + 16) = v21;
      *(float *)(v13 + 20) = v22;
      v23 = (float)((float)(v14[1] * v16[27]) + (float)(*v14 * v16[25])) + v16[29];
      *v14 = (float)((float)(v14[1] * v16[26]) + (float)(*v14 * v16[24])) + v16[28];
      v14[1] = v23;
    }
    if ( (*((_BYTE *)a5 + 84) & 4) != 0 && v15 )
    {
      v24 = (float)((float)(*(float *)(v15 + 4) * v16[27]) + (float)(*(float *)v15 * v16[25])) + v16[29];
      v25 = (float)((float)(*(float *)(v15 + 20) * v16[14]) + (float)(*(float *)(v15 + 16) * v16[12])) + v16[16];
      v26 = (float)((float)(*(float *)(v15 + 20) * v16[15]) + (float)(*(float *)(v15 + 16) * v16[13])) + v16[17];
      *(float *)v15 = (float)((float)(*(float *)(v15 + 4) * v16[26]) + (float)(*(float *)v15 * v16[24])) + v16[28];
      *(float *)(v15 + 4) = v24;
      *(float *)(v15 + 16) = v25;
      *(float *)(v15 + 20) = v26;
    }
  }
  CInteractionContextTransformHelper::HimetricToScreen(
    v19,
    v18,
    (struct INTERACTION_UPDATE *)v13,
    (struct INTERACTION_VELOCITY *)v14,
    (struct INTERACTION_UPDATE *)v15,
    (struct INTERACTION_UPDATE *)v13,
    (struct INTERACTION_VELOCITY *)v14,
    (struct INTERACTION_UPDATE *)v15);
  if ( (*((_BYTE *)a5 + 84) & 2) != 0 && v13 )
  {
    v27 = *(float *)(v13 + 28);
    if ( v27 != 0.0 )
      *((double *)this + 15) = (float)((float)(*(float *)(v13 + 24) - 1.0) / v27);
    if ( v14 )
      v14[2] = v14[3] * *((double *)this + 15);
  }
}
