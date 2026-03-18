/*
 * XREFs of ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02A882C
 * Callers:
 *     GreAngleArc @ 0x1C02925A8 (GreAngleArc.c)
 *     NtGdiArcInternal @ 0x1C02A8B20 (NtGdiArcInternal.c)
 * Callees:
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 *     eFraction @ 0x1C02492FC (eFraction.c)
 */

__int64 __fastcall vCosSin(int a1, float *a2, float *a3)
{
  float v3; // xmm2_4
  double v6; // xmm1_8
  BOOL v7; // r11d
  double v8; // xmm0_8
  int v9; // xmm4_4
  char v10; // dl
  int v11; // r9d
  float v12; // xmm2_4
  char v13; // r9
  int v14; // edx
  __int64 result; // rax
  float v16; // xmm2_4
  int v17; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(float *)&a1;
  if ( *(float *)&a1 < 0.0 )
    LODWORD(v3) = a1 ^ _xmm;
  *(_QWORD *)&v6 = FP_SINE_FACTOR;
  *(float *)&v6 = FP_SINE_FACTOR * v3;
  bFToL(FP_SINE_FACTOR * v3, &v17, 5);
  v8 = eFraction(v6);
  v10 = v17;
  v11 = v17 >> 5;
  if ( ((v17 >> 5) & 2) != 0 )
    v7 = !v7;
  if ( (v11 & 1) != 0 )
  {
    v12 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(gaefSin[32 - (v17 & 0x1F)] - gaefSin[32 - (v17 & 0x1F) - 1]) * *(float *)&v8) ^ v9)
        + gaefSin[32 - (v17 & 0x1F)];
  }
  else
  {
    v10 = v17 & 0x1F;
    v12 = (float)((float)(gaefSin[(v17 & 0x1F) + 1] - gaefSin[v17 & 0x1F]) * *(float *)&v8) + gaefSin[v17 & 0x1F];
  }
  if ( v7 )
    LODWORD(v12) ^= v9;
  v13 = v11 + 1;
  *a3 = v12;
  v14 = v10 & 0x1F;
  if ( (v13 & 1) != 0 )
  {
    result = 32 - v14;
    v16 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(gaefSin[result] - gaefSin[result - 1]) * *(float *)&v8) ^ v9)
        + gaefSin[result];
  }
  else
  {
    result = v14;
    v16 = (float)((float)(gaefSin[v14 + 1] - gaefSin[v14]) * *(float *)&v8) + gaefSin[v14];
  }
  if ( (v13 & 2) != 0 )
    LODWORD(v16) ^= v9;
  *a2 = v16;
  return result;
}
