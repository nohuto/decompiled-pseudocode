/*
 * XREFs of ?ComputeAdjointIgnoreZ@CBaseMatrix@@KA?AV1@AEBV1@@Z @ 0x180004264
 * Callers:
 *     ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x180004208 (-ComputeAdjointIgnoreZ@CMILMatrix@@SA-AV1@AEBV1@@Z.c)
 * Callees:
 *     ??0D2DMatrix@@QEAA@MMMMMMMMMMMMMMMM@Z @ 0x18009B8A8 (--0D2DMatrix@@QEAA@MMMMMMMMMMMMMMMM@Z.c)
 */

D2DMatrix *__fastcall CBaseMatrix::ComputeAdjointIgnoreZ(D2DMatrix *a1, float *a2)
{
  float v2; // xmm3_4
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm12_4

  v2 = a2[1];
  v4 = a2[4];
  v5 = a2[12];
  v6 = a2[7];
  D2DMatrix::D2DMatrix(
    a1,
    (float)(a2[15] * a2[5]) - (float)(v6 * a2[13]),
    (float)(a2[3] * a2[13]) - (float)(a2[15] * v2),
    0.0,
    (float)(v6 * v2) - (float)(a2[3] * a2[5]),
    (float)(v6 * v5) - (float)(a2[15] * v4),
    (float)(a2[15] * *a2) - (float)(a2[3] * v5),
    0.0,
    (float)(a2[3] * v4) - (float)(v6 * *a2),
    0.0,
    0.0,
    0.0,
    0.0,
    (float)(a2[13] * v4) - (float)(v5 * a2[5]),
    (float)(v5 * v2) - (float)(a2[13] * *a2),
    0.0,
    (float)(*a2 * a2[5]) - (float)(v2 * v4));
  return a1;
}
