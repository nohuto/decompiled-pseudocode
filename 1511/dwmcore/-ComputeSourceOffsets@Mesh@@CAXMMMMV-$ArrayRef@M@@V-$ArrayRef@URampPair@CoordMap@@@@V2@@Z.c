/*
 * XREFs of ?ComputeSourceOffsets@Mesh@@CAXMMMMV?$ArrayRef@M@@V?$ArrayRef@URampPair@CoordMap@@@@V2@@Z @ 0x1801189C0
 * Callers:
 *     ?ComputeUVOffsets@Mesh@@AEAAXPEBUContentInfo@1@AEBUD2D_RECT_F@@HHV?$ArrayRef@M@@2V?$ArrayRef@URampPair@CoordMap@@@@3V4@4@Z @ 0x180118C3C (-ComputeUVOffsets@Mesh@@AEAAXPEBUContentInfo@1@AEBUD2D_RECT_F@@HHV-$ArrayRef@M@@2V-$ArrayRef@URa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mesh::ComputeSourceOffsets(
        float a1,
        float a2,
        float a3,
        float a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  __int64 result; // rax
  float v10; // xmm6_4
  int v11; // ecx
  float v12; // xmm4_4
  int v14; // esi
  int v15; // r9d
  __int64 v16; // rbx
  __int64 v17; // r8
  _BOOL8 v18; // r13
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rbp
  float v22; // xmm3_4
  float v23; // xmm2_4
  _QWORD *v24; // rdx
  float v25; // xmm5_4
  float v26; // xmm3_4
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  __int64 v28; // [rsp+B0h] [rbp+28h]

  result = (__int64)&retaddr;
  v10 = 1.0 / a4;
  if ( (float)(1.0 / a4) == 1.0 )
  {
    v11 = 0;
    v12 = a3;
  }
  else
  {
    v11 = 1;
    v12 = a3 / a4;
  }
  v14 = 0;
  v15 = 0;
  if ( *(int *)(a5 + 8) > 0 )
  {
    result = (__int64)a7;
    v16 = 0LL;
    v17 = 0LL;
    v18 = *(_DWORD *)(a6 + 8) == 0;
    v19 = *a7;
    v20 = -4 - *a7;
    do
    {
      v21 = 4 * v16;
      v22 = *(float *)(*(_QWORD *)a5 + 4 * v16);
      if ( v11 )
      {
        if ( v22 == a4 )
          v22 = FLOAT_1_0;
        else
          v22 = v22 * v10;
      }
      v23 = 0.0;
      if ( v18 )
      {
        v23 = v22;
      }
      else if ( v15 < *(_DWORD *)(a6 + 8) )
      {
        v24 = *(_QWORD **)a6;
        result = *(_QWORD *)a6 + 8 * v17;
        while ( 1 )
        {
          v28 = *(_QWORD *)result;
          LODWORD(v25) = *(_QWORD *)result;
          if ( v12 >= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v22 - v25)) & _xmm) )
            break;
          if ( v25 > v22 )
          {
            if ( v17 )
            {
              result = (unsigned int)(v15 - 1);
              v24 += (int)result;
            }
            v26 = (float)(v22 - COERCE_FLOAT(*v24)) / (float)(v25 - COERCE_FLOAT(*v24));
            v23 = (float)((float)(1.0 - v26) * COERCE_FLOAT(HIDWORD(*v24))) + (float)(v26 * *((float *)&v28 + 1));
            goto LABEL_27;
          }
          ++v15;
          ++v17;
          result += 8LL;
          if ( v17 >= *(int *)(a6 + 8) )
            goto LABEL_27;
        }
        LODWORD(v23) = HIDWORD(*(_QWORD *)result);
        if ( !v16
          || (result = v21 + v20 + *(_QWORD *)a5,
              a3 >= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(*(_QWORD *)a5 + 4 * v16)
                                                                     - *(float *)(result + v19))) & _xmm)) )
        {
          for ( result = (__int64)&v24[v17 + 1];
                v12 >= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)result - v22)) & _xmm);
                result += 8LL )
          {
            ++v15;
            ++v17;
          }
          v23 = *((float *)&v24[v17] + 1);
        }
      }
LABEL_27:
      ++v14;
      ++v16;
      *(float *)(v19 + v21) = (float)(v23 * a2) + a1;
    }
    while ( v14 < *(_DWORD *)(a5 + 8) );
  }
  return result;
}
