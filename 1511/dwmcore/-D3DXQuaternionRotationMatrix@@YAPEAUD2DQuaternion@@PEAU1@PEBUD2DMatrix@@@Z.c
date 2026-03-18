/*
 * XREFs of ?D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z @ 0x180157898
 * Callers:
 *     ?DecomposeMatrix@?A0xe8837992@@YAXAEBVCMILMatrix@@PEAV2@11@Z @ 0x180142384 (-DecomposeMatrix@-A0xe8837992@@YAXAEBVCMILMatrix@@PEAV2@11@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800BC90E (sqrtf_0.c)
 */

struct D2DQuaternion *__fastcall D3DXQuaternionRotationMatrix(struct D2DQuaternion *a1, const struct D2DMatrix *a2)
{
  float v2; // xmm2_4
  float v5; // xmm3_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm2_4
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdi
  float v13; // xmm0_4
  __int64 v14; // r8
  float v16[4]; // [rsp+20h] [rbp-38h]
  int v17; // [rsp+30h] [rbp-28h]
  __int64 v18; // [rsp+34h] [rbp-24h]

  v2 = *((float *)a2 + 5);
  v5 = *((float *)a2 + 10);
  v6 = *(float *)a2 + v2;
  if ( (float)(v5 + v6) <= 0.0 )
  {
    v8 = *(float *)a2 - v2;
    v17 = 1;
    v9 = v2 - *(float *)a2;
    v18 = 2LL;
    v16[0] = v8 - v5;
    v16[1] = v9 - v5;
    v16[2] = v5 - v6;
    v10 = (float)(v8 - v5) < (float)(v9 - v5);
    if ( v16[v10] < (float)(v5 - v6) )
      v10 = 2LL;
    v11 = (unsigned int)v10;
    v12 = (unsigned int)*(&v17 + v10);
    v13 = sqrtf_0(v16[v10] + 1.0) * 0.5;
    v14 = (unsigned int)*(&v17 + v12);
    *((float *)a1 + v11) = v13;
    *((float *)a1 + v12) = (float)(*((float *)a2 + 4 * v11 + v12) + *((float *)a2 + 4 * v12 + v11))
                         * (float)(0.25 / v13);
    *((float *)a1 + v14) = (float)(*((float *)a2 + 4 * v14 + v11) + *((float *)a2 + 4 * v11 + v14))
                         * (float)(0.25 / v13);
    *((float *)a1 + 3) = (float)(*((float *)a2 + 4 * v12 + v14) - *((float *)a2 + 4 * v14 + v12)) * (float)(0.25 / v13);
  }
  else
  {
    v7 = sqrtf_0((float)(v5 + v6) + 1.0) * 0.5;
    *((float *)a1 + 3) = v7;
    *(float *)a1 = (float)(*((float *)a2 + 6) - *((float *)a2 + 9)) * (float)(0.25 / v7);
    *((float *)a1 + 1) = (float)(*((float *)a2 + 8) - *((float *)a2 + 2)) * (float)(0.25 / v7);
    *((float *)a1 + 2) = (float)(*((float *)a2 + 1) - *((float *)a2 + 4)) * (float)(0.25 / v7);
  }
  return a1;
}
