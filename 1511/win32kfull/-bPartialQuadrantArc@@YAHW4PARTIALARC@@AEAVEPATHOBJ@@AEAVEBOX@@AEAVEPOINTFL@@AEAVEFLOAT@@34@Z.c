/*
 * XREFs of ?bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z @ 0x1C02A838C
 * Callers:
 *     ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1C02A80F0 (-bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z.c)
 * Callees:
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C001AA28 (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?ptlXform@EBOX@@QEAA?AU_POINTL@@AEAVEPOINTFL@@@Z @ 0x1C02A8610 (-ptlXform@EBOX@@QEAA-AU_POINTL@@AEAVEPOINTFL@@@Z.c)
 */

__int64 __fastcall bPartialQuadrantArc(int a1, EPATHOBJ *a2, EBOX *a3, float *a4, float *a5, float *a6)
{
  unsigned int *v10; // rdx
  float *v11; // r9
  float v12; // xmm0_4
  __m128i v13; // xmm1
  float v14; // xmm6_4
  float v15; // xmm6_4
  float v16; // xmm7_4
  float v17; // xmm0_4
  float v18; // xmm2_4
  float v19; // xmm3_4
  float v20; // xmm7_4
  float v21; // xmm0_4
  unsigned int v22; // edi
  int v23; // ebx
  int v24; // eax
  __int64 v26; // [rsp+28h] [rbp-51h] BYREF
  float v27; // [rsp+30h] [rbp-49h]
  float v28; // [rsp+34h] [rbp-45h]
  struct _POINTL v29; // [rsp+38h] [rbp-41h] BYREF
  __int64 v30; // [rsp+40h] [rbp-39h]
  unsigned __int64 v31; // [rsp+48h] [rbp-31h]
  struct _POINTL v32[3]; // [rsp+50h] [rbp-29h] BYREF

  *(float *)&v26 = (float)(*a4 * a6[1]) - (float)(a4[1] * *a6);
  EFLOAT::vAbs((EFLOAT *)&v26);
  if ( FP_EPSILON < *(float *)&v26 )
  {
    v13 = (__m128i)*v10;
    v27 = a6[1];
    *(float *)v13.m128i_i32 = *(float *)v13.m128i_i32 - *a5;
    v14 = v27 - v11[1];
    v28 = *v11;
    *(float *)v13.m128i_i32 = *(float *)v13.m128i_i32 * 0.5;
    v15 = v14 / *(float *)&v26;
    v16 = (float)(v28 - *a6) / *(float *)&v26;
    LODWORD(v26) = efCos((unsigned int)_mm_cvtsi128_si32(v13));
    EFLOAT::vAbs((EFLOAT *)&v26);
    v17 = (float)(*(float *)&v26 * FP_4DIV3) / (float)(*(float *)&v26 + FP_1_0);
    v18 = v17 * v15;
    v19 = FP_1_0 - v17;
    v20 = v16 * v17;
    v26 = *(_QWORD *)a4;
    v30 = v26;
    *(float *)&v26 = (float)(*(float *)&v26 * (float)(FP_1_0 - v17)) + (float)(v17 * v15);
    v21 = *a6;
    *((float *)&v26 + 1) = (float)(*((float *)&v26 + 1) * v19) + v20;
    *(float *)v13.m128i_i32 = (float)(a6[1] * v19) + v20;
    v27 = (float)(v21 * v19) + v18;
    v31 = *(_QWORD *)a6;
    v28 = *(float *)v13.m128i_i32;
  }
  else
  {
    v30 = *(_QWORD *)v11;
    v26 = v30;
    v12 = a6[1];
    v27 = *a6;
    v28 = v12;
    v31 = __PAIR64__(LODWORD(v12), LODWORD(v27));
  }
  v22 = 0;
  if ( !a1 )
    goto LABEL_9;
  EBOX::ptlXform(a3, (struct EPOINTFL *)&v29);
  v23 = a1 - 1;
  if ( v23 )
  {
    if ( v23 != 1 )
    {
LABEL_9:
      v32[0] = **(struct _POINTL **)&EBOX::ptlXform(a3, (struct EPOINTFL *)&v29);
      v32[1] = **(struct _POINTL **)&EBOX::ptlXform(a3, (struct EPOINTFL *)&v29);
      v32[2] = **(struct _POINTL **)&EBOX::ptlXform(a3, (struct EPOINTFL *)&v29);
      return (unsigned int)EPATHOBJ::bPolyBezierTo(a2, 0LL, v32, 3u);
    }
    v24 = EPATHOBJ::bPolyLineTo(a2, 0LL, &v29, 1u);
  }
  else
  {
    v24 = EPATHOBJ::bMoveTo(a2, 0LL, &v29);
  }
  if ( v24 )
    goto LABEL_9;
  return v22;
}
