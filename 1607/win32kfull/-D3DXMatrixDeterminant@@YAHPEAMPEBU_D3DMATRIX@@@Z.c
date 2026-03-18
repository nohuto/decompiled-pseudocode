/*
 * XREFs of ?D3DXMatrixDeterminant@@YAHPEAMPEBU_D3DMATRIX@@@Z @ 0x1C01DA7E4
 * Callers:
 *     ValidateInertiaInfo @ 0x1C022A2D0 (ValidateInertiaInfo.c)
 * Callees:
 *     ?NlsNullProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0135D10 (-NlsNullProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     sqrtf_0 @ 0x1C015A000 (sqrtf_0.c)
 */

__int64 __fastcall D3DXMatrixDeterminant(struct tagKE *a1, const struct _D3DMATRIX *a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  float *v5; // rdx
  float v6; // xmm15_4
  float v7; // xmm7_4
  float v8; // xmm11_4
  float v9; // xmm13_4
  float v10; // xmm14_4
  float v11; // xmm12_4
  float v12; // xmm9_4
  float v13; // xmm10_4
  float v14; // xmm6_4
  float v15; // [rsp+30h] [rbp-118h]
  float v16; // [rsp+34h] [rbp-114h]
  float v17; // [rsp+3Ch] [rbp-10Ch]
  float v18; // [rsp+6Ch] [rbp-DCh]
  float v19; // [rsp+160h] [rbp+18h]
  float v20; // [rsp+168h] [rbp+20h]

  v3 = 0;
  result = NlsNullProc(a1);
  if ( (_DWORD)result )
  {
    v15 = v5[5];
    v16 = v5[9];
    v17 = v5[13];
    v6 = v5[2];
    v7 = v5[3];
    v19 = v5[6];
    v8 = v5[7];
    v20 = v5[10];
    v9 = v5[11];
    v10 = v5[14];
    v11 = v5[15];
    v12 = (float)(v6 * v8) - (float)(v19 * v7);
    v13 = (float)(v6 * v9) - (float)(v20 * v7);
    v18 = (float)(v6 * v11) - (float)(v10 * v7);
    v14 = 1.0
        / sqrtf_0(
            (float)((float)((float)((float)((float)((float)(v13 * v15) - (float)(v12 * v16))
                                          - (float)((float)((float)(v19 * v9) - (float)(v20 * v8)) * v5[1]))
                                  * v5[12])
                          + (float)((float)((float)((float)((float)((float)(v19 * v11) - (float)(v10 * v8)) * v5[1])
                                                  - (float)(v18 * v15))
                                          + (float)(v12 * v17))
                                  * v5[8]))
                  + (float)((float)((float)((float)(v18 * v16) - (float)(v13 * v17))
                                  - (float)((float)((float)(v20 * v11) - (float)(v10 * v9)) * v5[1]))
                          * v5[4]))
          + (float)((float)((float)((float)((float)((float)(v20 * v11) - (float)(v10 * v9)) * v15)
                                  - (float)((float)((float)(v19 * v11) - (float)(v10 * v8)) * v16))
                          + (float)((float)((float)(v19 * v9) - (float)(v20 * v8)) * v17))
                  * *v5));
    if ( _finite(v14) )
    {
      *(float *)a1 = v14;
      return 1;
    }
    return v3;
  }
  return result;
}
