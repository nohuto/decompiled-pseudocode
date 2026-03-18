/*
 * XREFs of ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1C02AA2C8
 * Callers:
 *     cjIFIMetricsToOTMW @ 0x1C0011C6C (cjIFIMetricsToOTMW.c)
 *     ?lfOrientation@IFIOBJ@@QEAAJXZ @ 0x1C0026720 (-lfOrientation@IFIOBJ@@QEAAJXZ.c)
 *     GreAngleArc @ 0x1C02918E4 (GreAngleArc.c)
 *     NtGdiArcInternal @ 0x1C02AA770 (NtGdiArcInternal.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C0014318 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     eFraction @ 0x1C024569C (eFraction.c)
 */

__int64 __fastcall vArctan(unsigned int a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  int v4; // ebx
  unsigned __int64 v5; // xmm1_8
  double v7; // xmm3_8
  double v8; // xmm0_8
  _DWORD *v9; // r8
  _DWORD *v10; // r9
  __int64 result; // rax
  __int64 v12; // rdx
  float *v13; // r11
  float v14; // xmm2_4
  float *v15; // r11
  double v16; // xmm0_8
  int v17; // xmm4_4
  __int64 v18; // r8
  __int64 v19; // r9
  float v20; // xmm2_4
  float *v21; // rax
  int v22; // [rsp+20h] [rbp-28h] BYREF
  int v23; // [rsp+28h] [rbp-20h]
  _DWORD v24[6]; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  v5 = _mm_cvtsi32_si128(a1).m128i_u64[0];
  *(_QWORD *)&v7 = _mm_cvtsi32_si128(a2).m128i_u64[0];
  v23 = LODWORD(v7);
  v22 = v5;
  if ( *(float *)&v5 < 0.0 )
  {
    v4 = 1;
    v5 ^= (unsigned int)_xmm;
    v22 = v5;
  }
  if ( *(float *)&v7 < 0.0 )
  {
    v4 |= 2u;
    *(_QWORD *)&v7 ^= (unsigned int)_xmm;
    v23 = LODWORD(v7);
  }
  if ( *(float *)&v7 > *(float *)&v5 )
  {
    v8 = *(double *)&v5;
    v22 = LODWORD(v7);
    LODWORD(v5) = LODWORD(v7);
    v23 = LODWORD(v8);
    v7 = v8;
    v4 |= 4u;
  }
  if ( EFLOAT::bIsZero((EFLOAT *)&v22) )
  {
    result = FP_0_0;
    *v10 = 0;
    *v9 = FP_0_0;
    return result;
  }
  *(float *)&v7 = (float)(*(float *)&v7 * FP_ARCTAN_TABLE_SIZE) / *(float *)&v5;
  bFToL(*(float *)&v7, v24, 5);
  v12 = v24[0];
  *v13 = gaefArctan[v24[0] + 1];
  v14 = *v13 - gaefArctan[v12];
  v16 = eFraction(v7);
  v20 = (float)(v14 * *(float *)&v16) + *(float *)(v19 + 4 * v18);
  *v15 = v20;
  switch ( v4 )
  {
    case 1:
      v21 = (float *)FP_180_0;
      goto LABEL_23;
    case 2:
      v21 = (float *)FP_360_0;
      goto LABEL_23;
    case 3:
      v21 = (float *)FP_180_0;
      goto LABEL_24;
    case 4:
      v21 = (float *)FP_90_0;
      goto LABEL_23;
    case 5:
      v21 = (float *)FP_90_0;
      goto LABEL_24;
    case 6:
      v21 = (float *)FP_270_0;
LABEL_24:
      *v15 = v20 + *v21;
      break;
    case 7:
      v21 = (float *)FP_270_0;
LABEL_23:
      LODWORD(v20) ^= v17;
      goto LABEL_24;
  }
  result = byte_1C02F29B0[v4];
  *a4 = result;
  return result;
}
