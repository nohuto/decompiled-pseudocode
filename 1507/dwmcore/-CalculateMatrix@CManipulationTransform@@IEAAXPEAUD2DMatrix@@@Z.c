/*
 * XREFs of ?CalculateMatrix@CManipulationTransform@@IEAAXPEAUD2DMatrix@@@Z @ 0x1800164B8
 * Callers:
 *     ?GetRealization@CManipulationTransform@@MEAAXPEAVCMILMatrix@@@Z @ 0x1800166D0 (-GetRealization@CManipulationTransform@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS@@@Z @ 0x18001678C (-ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTR.c)
 *     ?GetSourcePropertyValue@CManipulationTransform@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180111690 (-GetSourcePropertyValue@CManipulationTransform@@UEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     WithinEpsilon @ 0x180060F74 (WithinEpsilon.c)
 */

void __fastcall CManipulationTransform::CalculateMatrix(CManipulationTransform *this, struct D2DMatrix *a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // r10
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // r10
  char v18; // r11
  __int64 v19; // r8
  int v20; // xmm0_4
  int v21; // xmm1_4
  int v22; // xmm2_4
  int v23; // xmm1_4
  int v24; // xmm3_4
  int v25; // xmm0_4
  int v26; // xmm1_4
  char v27; // r10
  int v28; // xmm0_4
  int v29; // xmm1_4
  int v30; // [rsp+20h] [rbp-40h] BYREF
  int v31; // [rsp+24h] [rbp-3Ch]
  int v32; // [rsp+28h] [rbp-38h]
  int v33; // [rsp+2Ch] [rbp-34h]
  int v34; // [rsp+30h] [rbp-30h]
  int v35; // [rsp+34h] [rbp-2Ch]
  int v36; // [rsp+38h] [rbp-28h]
  int v37; // [rsp+3Ch] [rbp-24h]
  int v38; // [rsp+40h] [rbp-20h]
  int v39; // [rsp+44h] [rbp-1Ch]
  int v40; // [rsp+48h] [rbp-18h]
  int v41; // [rsp+4Ch] [rbp-14h]
  int v42; // [rsp+50h] [rbp-10h]
  int v43; // [rsp+54h] [rbp-Ch]
  int v44; // [rsp+58h] [rbp-8h]
  int v45; // [rsp+5Ch] [rbp-4h]

  if ( (unsigned int)WithinEpsilon(this, a2, a3, this) && (unsigned int)WithinEpsilon(v4, v3, v5, v6) )
    WithinEpsilon(v4, v3, v5, v6);
  if ( !(unsigned int)WithinEpsilon(v4, v3, v5, v6)
    || !(unsigned int)WithinEpsilon(v8, v7, v9, v10)
    || (v12 = WithinEpsilon(v8, v7, v9, v10), LOBYTE(v8) = 0, !v12) )
  {
    LOBYTE(v8) = v11;
  }
  if ( (unsigned int)WithinEpsilon(v8, v7, v9, v10)
    && (unsigned int)WithinEpsilon(v14, v13, v15, v16)
    && (unsigned int)WithinEpsilon(v14, v13, v19, v16) )
  {
    v17 = 0;
  }
  *(_QWORD *)(v13 + 52) = 0LL;
  *(_DWORD *)(v13 + 60) = 1065353216;
  *(_DWORD *)(v13 + 40) = 1065353216;
  *(_DWORD *)(v13 + 20) = 1065353216;
  *(_DWORD *)v13 = 1065353216;
  *(_QWORD *)(v13 + 44) = 0LL;
  *(_QWORD *)(v13 + 32) = 0LL;
  *(_QWORD *)(v13 + 24) = 0LL;
  *(_QWORD *)(v13 + 12) = 0LL;
  *(_QWORD *)(v13 + 4) = 0LL;
  if ( (_BYTE)v14 )
  {
    if ( v17 )
    {
      v22 = *(_DWORD *)(v16 + 152);
      v23 = *(_DWORD *)(v16 + 148);
      v24 = *(_DWORD *)(v16 + 156) ^ _xmm;
      *(_QWORD *)(v13 + 40) = 1065353216LL;
      *(_DWORD *)(v13 + 56) = v24;
      *(_DWORD *)(v13 + 52) = v22 ^ _xmm;
      *(_DWORD *)(v13 + 48) = v23 ^ _xmm;
      *(_QWORD *)(v13 + 32) = 0LL;
      *(_QWORD *)(v13 + 24) = 0LL;
      *(_QWORD *)(v13 + 12) = 0LL;
      *(_QWORD *)(v13 + 4) = 0LL;
      *(_DWORD *)(v13 + 60) = 1065353216;
      *(_DWORD *)(v13 + 20) = 1065353216;
      *(_DWORD *)v13 = 1065353216;
    }
    v25 = *(_DWORD *)(v16 + 136);
    v26 = *(_DWORD *)(v16 + 140);
    v44 = 0;
    v43 = 0;
    v42 = 0;
    v41 = 0;
    v39 = 0;
    v38 = 0;
    v37 = 0;
    v36 = 0;
    v34 = 0;
    v33 = 0;
    v32 = 0;
    v31 = 0;
    v30 = v25;
    v40 = *(_DWORD *)(v16 + 144);
    v35 = v26;
    v45 = 1065353216;
    D2DMatrixMultiply((struct D2DMatrix *)v13, (const struct D2DMatrix *)v13, (const struct D2DMatrix *)&v30);
    if ( v27 )
    {
      v28 = *(_DWORD *)(v16 + 148);
      v29 = *(_DWORD *)(v16 + 152);
      v41 = 0;
      v39 = 0;
      v38 = 0;
      v37 = 0;
      v36 = 0;
      v34 = 0;
      v33 = 0;
      v32 = 0;
      v31 = 0;
      v42 = v28;
      v44 = *(_DWORD *)(v16 + 156);
      v43 = v29;
      v45 = 1065353216;
      v40 = 1065353216;
      v35 = 1065353216;
      v30 = 1065353216;
      D2DMatrixMultiply((struct D2DMatrix *)v13, (const struct D2DMatrix *)v13, (const struct D2DMatrix *)&v30);
    }
  }
  if ( v18 )
  {
    v20 = *(_DWORD *)(v16 + 112);
    v21 = *(_DWORD *)(v16 + 116);
    v41 = 0;
    v39 = 0;
    v38 = 0;
    v37 = 0;
    v36 = 0;
    v34 = 0;
    v33 = 0;
    v32 = 0;
    v31 = 0;
    v42 = v20;
    v44 = *(_DWORD *)(v16 + 120);
    v43 = v21;
    v45 = 1065353216;
    v40 = 1065353216;
    v35 = 1065353216;
    v30 = 1065353216;
    D2DMatrixMultiply((struct D2DMatrix *)v13, (const struct D2DMatrix *)v13, (const struct D2DMatrix *)&v30);
  }
  *(_BYTE *)(v16 + 224) = 0;
}
