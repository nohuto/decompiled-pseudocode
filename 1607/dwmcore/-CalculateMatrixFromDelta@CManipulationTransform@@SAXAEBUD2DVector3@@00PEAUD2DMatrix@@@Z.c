/*
 * XREFs of ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x18001ADC0
 * Callers:
 *     ?GetProperty@CManipulationTransform@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180022330 (-GetProperty@CManipulationTransform@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetRealization@CManipulationTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800223E0 (-GetRealization@CManipulationTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS@@@Z @ 0x180022504 (-ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTR.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801466DC (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 * Callees:
 *     WithinEpsilon @ 0x18001AD94 (WithinEpsilon.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x1800AC2F0 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 */

void __fastcall CManipulationTransform::CalculateMatrixFromDelta(
        const struct D2DVector3 *a1,
        const struct D2DVector3 *a2,
        const struct D2DVector3 *a3,
        struct D2DMatrix *a4)
{
  float *v4; // rdx
  __int64 v5; // rcx
  char v6; // bl
  char v7; // di
  __int64 v8; // rdx
  float *v9; // r8
  __int64 v10; // rdx
  int *v11; // rdx
  char v12; // cl
  float *v13; // r8
  __int64 v14; // r9
  int *v15; // r11
  int v16; // xmm0_4
  int v17; // xmm1_4
  __int64 v18; // rcx
  int v19; // xmm2_4
  float v20; // xmm1_4
  int v21; // xmm3_4
  int v22; // xmm0_4
  int v23; // xmm1_4
  const struct D2DMatrix *v24; // rdx
  int *v25; // r10
  int v26; // xmm0_4
  int v27; // xmm1_4
  int v28; // [rsp+20h] [rbp-40h] BYREF
  int v29; // [rsp+24h] [rbp-3Ch]
  int v30; // [rsp+28h] [rbp-38h]
  int v31; // [rsp+2Ch] [rbp-34h]
  int v32; // [rsp+30h] [rbp-30h]
  int v33; // [rsp+34h] [rbp-2Ch]
  int v34; // [rsp+38h] [rbp-28h]
  int v35; // [rsp+3Ch] [rbp-24h]
  int v36; // [rsp+40h] [rbp-20h]
  int v37; // [rsp+44h] [rbp-1Ch]
  int v38; // [rsp+48h] [rbp-18h]
  int v39; // [rsp+4Ch] [rbp-14h]
  int v40; // [rsp+50h] [rbp-10h]
  int v41; // [rsp+54h] [rbp-Ch]
  int v42; // [rsp+58h] [rbp-8h]
  int v43; // [rsp+5Ch] [rbp-4h]

  v6 = 1;
  if ( !WithinEpsilon(*(float *)a1, 0.0)
    || !WithinEpsilon(*(float *)(v5 + 4), 0.0)
    || (v7 = 0, !WithinEpsilon(*(float *)(v18 + 8), 0.0)) )
  {
    v7 = 1;
  }
  if ( WithinEpsilon(*v4, 1.0) && WithinEpsilon(*(float *)(v8 + 4), 1.0) )
    WithinEpsilon(*(float *)(v10 + 8), 1.0);
  if ( WithinEpsilon(*v9, 0.0) && WithinEpsilon(v13[1], 0.0) && WithinEpsilon(v13[2], 0.0) )
    v6 = 0;
  *(_QWORD *)(v14 + 52) = 0LL;
  *(_DWORD *)(v14 + 60) = 1065353216;
  *(_DWORD *)(v14 + 40) = 1065353216;
  *(_DWORD *)(v14 + 20) = 1065353216;
  *(_DWORD *)v14 = 1065353216;
  *(_QWORD *)(v14 + 44) = 0LL;
  *(_QWORD *)(v14 + 32) = 0LL;
  *(_QWORD *)(v14 + 24) = 0LL;
  *(_QWORD *)(v14 + 12) = 0LL;
  *(_QWORD *)(v14 + 4) = 0LL;
  if ( v12 )
  {
    if ( v6 )
    {
      v19 = *((_DWORD *)v13 + 1);
      v20 = *v13;
      v21 = *((_DWORD *)v13 + 2) ^ _xmm;
      *(_QWORD *)(v14 + 40) = 1065353216LL;
      *(_DWORD *)(v14 + 56) = v21;
      *(_DWORD *)(v14 + 52) = v19 ^ _xmm;
      *(_DWORD *)(v14 + 48) = LODWORD(v20) ^ _xmm;
      *(_QWORD *)(v14 + 32) = 0LL;
      *(_QWORD *)(v14 + 24) = 0LL;
      *(_QWORD *)(v14 + 12) = 0LL;
      *(_QWORD *)(v14 + 4) = 0LL;
      *(_DWORD *)(v14 + 60) = 1065353216;
      *(_DWORD *)(v14 + 20) = 1065353216;
      *(_DWORD *)v14 = 1065353216;
    }
    v22 = *v11;
    v23 = v11[1];
    v42 = 0;
    v41 = 0;
    v40 = 0;
    v39 = 0;
    v37 = 0;
    v36 = 0;
    v35 = 0;
    v34 = 0;
    v32 = 0;
    v31 = 0;
    v30 = 0;
    v29 = 0;
    v28 = v22;
    v38 = v11[2];
    v33 = v23;
    v43 = 1065353216;
    D2DMatrixMultiply((struct D2DMatrix *)v14, (const struct D2DMatrix *)v14, (const struct D2DMatrix *)&v28);
    if ( v6 )
    {
      v26 = *v25;
      v27 = v25[1];
      v39 = 0;
      v37 = 0;
      v36 = 0;
      v35 = 0;
      v34 = 0;
      v32 = 0;
      v31 = 0;
      v30 = 0;
      v29 = 0;
      v40 = v26;
      v42 = v25[2];
      v41 = v27;
      v43 = 1065353216;
      v38 = 1065353216;
      v33 = 1065353216;
      v28 = 1065353216;
      D2DMatrixMultiply((struct D2DMatrix *)v14, v24, (const struct D2DMatrix *)&v28);
    }
  }
  if ( v7 )
  {
    v16 = *v15;
    v17 = v15[1];
    v39 = 0;
    v37 = 0;
    v36 = 0;
    v35 = 0;
    v34 = 0;
    v32 = 0;
    v31 = 0;
    v30 = 0;
    v29 = 0;
    v40 = v16;
    v42 = v15[2];
    v41 = v17;
    v43 = 1065353216;
    v38 = 1065353216;
    v33 = 1065353216;
    v28 = 1065353216;
    D2DMatrixMultiply((struct D2DMatrix *)v14, (const struct D2DMatrix *)v14, (const struct D2DMatrix *)&v28);
  }
}
