/*
 * XREFs of ?ComputeUVOffsets@Mesh@@AEAAXPEBUContentInfo@1@AEBUD2D_RECT_F@@HHV?$ArrayRef@M@@2V?$ArrayRef@URampPair@CoordMap@@@@3V4@4@Z @ 0x1800FFBF4
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x180075B0C (-CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 * Callees:
 *     ?ComputeSourceOffsets@Mesh@@CAXMMMMV?$ArrayRef@M@@V?$ArrayRef@URampPair@CoordMap@@@@V2@@Z @ 0x1800FF978 (-ComputeSourceOffsets@Mesh@@CAXMMMMV-$ArrayRef@M@@V-$ArrayRef@URampPair@CoordMap@@@@V2@@Z.c)
 */

__int64 __fastcall Mesh::ComputeUVOffsets(
        __int64 a1,
        __int64 a2,
        float *a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        __int64 *a9,
        __int64 a10,
        __int64 a11)
{
  float v11; // xmm6_4
  int v12; // r14d
  __int64 v13; // r9
  float v14; // xmm3_4
  float v15; // xmm9_4
  float v16; // xmm8_4
  float v17; // xmm0_4
  float v18; // xmm7_4
  float v19; // xmm1_4
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rax
  float v23; // xmm7_4
  __int64 v24; // rsi
  int v25; // edi
  __int64 v27; // [rsp+48h] [rbp-51h] BYREF
  int v28; // [rsp+50h] [rbp-49h]
  __int64 v29; // [rsp+58h] [rbp-41h] BYREF
  int v30; // [rsp+60h] [rbp-39h]
  __int64 v31; // [rsp+68h] [rbp-31h] BYREF
  int v32; // [rsp+70h] [rbp-29h]

  v11 = FLOAT_1_0;
  v12 = *((_DWORD *)a8 + 2);
  v13 = 6LL * a4;
  if ( v12 )
    v14 = FLOAT_1_0;
  else
    v14 = a3[2] - *a3;
  if ( !*((_DWORD *)a9 + 2) )
    v11 = a3[3] - a3[1];
  v15 = *(float *)(*(_QWORD *)(a1 + 16) + 4LL);
  if ( *(_DWORD *)(a2 + 8 * v13 + 36) )
  {
    v16 = *(float *)(a2 + 8 * v13 + 28);
    v17 = *(float *)(a2 + 8 * v13 + 24);
    v18 = v16 - *(float *)(a2 + 8 * v13 + 20);
    v19 = *(float *)(a2 + 8 * v13 + 32);
    v20 = *(_DWORD *)(a11 + 8);
    v21 = *(_QWORD *)a11;
    v22 = a10;
    LODWORD(v23) = LODWORD(v18) ^ _xmm;
  }
  else
  {
    v16 = *(float *)(a2 + 8 * v13 + 24);
    v17 = *(float *)(a2 + 8 * v13 + 20);
    v23 = *(float *)(a2 + 8 * v13 + 32) - v16;
    v19 = *(float *)(a2 + 8 * v13 + 28);
    v20 = *(_DWORD *)(a10 + 8);
    v21 = *(_QWORD *)a10;
    v22 = a11;
  }
  v24 = *(_QWORD *)v22;
  v25 = *(_DWORD *)(v22 + 8);
  v29 = *a8;
  v28 = v20;
  v27 = v21;
  v30 = v12;
  v32 = *(_DWORD *)(a6 + 8);
  v31 = *(_QWORD *)a6;
  Mesh::ComputeSourceOffsets(v17, v19 - v17, v15, v14, (__int64)&v31, (__int64)&v29, &v27);
  v30 = *((_DWORD *)a9 + 2);
  v29 = *a9;
  v28 = *(_DWORD *)(a7 + 8);
  v27 = *(_QWORD *)a7;
  v32 = v25;
  v31 = v24;
  return Mesh::ComputeSourceOffsets(v16, v23, v15, v11, (__int64)&v27, (__int64)&v29, &v31);
}
