/*
 * XREFs of ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1C02A86A0
 * Callers:
 *     ?lfOrientation@IFIOBJ@@QEAAJXZ @ 0x1C001D868 (-lfOrientation@IFIOBJ@@QEAAJXZ.c)
 *     cjIFIMetricsToOTMW @ 0x1C00E7ED0 (cjIFIMetricsToOTMW.c)
 *     GreAngleArc @ 0x1C02925A8 (GreAngleArc.c)
 *     NtGdiArcInternal @ 0x1C02A8B20 (NtGdiArcInternal.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C001AA10 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 *     eFraction @ 0x1C02492FC (eFraction.c)
 */

__int64 __fastcall vArctan(int a1, int a2, float *a3, _DWORD *a4)
{
  int v4; // edi
  float v5; // xmm1_4
  float v8; // xmm4_4
  float v9; // xmm0_4
  _DWORD *v10; // r8
  _DWORD *v11; // r9
  double v12; // xmm4_8
  __int64 result; // rax
  double v14; // xmm0_8
  __int64 v15; // r11
  float v16; // xmm3_4
  double v17; // xmm0_8
  int v18; // xmm5_4
  __int64 v19; // r8
  __int64 v20; // r11
  float v21; // xmm3_4
  float *v22; // rax
  float v23; // [rsp+20h] [rbp-28h] BYREF
  float v24; // [rsp+28h] [rbp-20h]
  int v25[6]; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  v5 = *(float *)&a1;
  v8 = *(float *)&a2;
  v24 = *(float *)&a2;
  v23 = *(float *)&a1;
  if ( *(float *)&a1 < 0.0 )
  {
    v4 = 1;
    LODWORD(v5) = a1 ^ _xmm;
    LODWORD(v23) = a1 ^ _xmm;
  }
  if ( *(float *)&a2 < 0.0 )
  {
    v4 |= 2u;
    LODWORD(v8) = a2 ^ _xmm;
    LODWORD(v24) = a2 ^ _xmm;
  }
  if ( v8 > v5 )
  {
    v9 = v5;
    v23 = v8;
    v5 = v8;
    v24 = v9;
    v4 |= 4u;
  }
  if ( EFLOAT::bIsZero((EFLOAT *)&v23) )
  {
    result = FP_0_0;
    *v11 = 0;
    *v10 = FP_0_0;
    return result;
  }
  *(float *)&v12 = (float)(*(float *)&v12 * FP_ARCTAN_TABLE_SIZE) / v5;
  v14 = v12;
  bFToL(*(float *)&v12, v25, 5);
  v15 = v25[0];
  *a3 = gaefArctan[v25[0] + 1];
  v16 = *a3 - gaefArctan[v15];
  v17 = eFraction(v14);
  v21 = (float)(v16 * *(float *)&v17) + *(float *)(v19 + 4 * v20);
  *a3 = v21;
  switch ( v4 )
  {
    case 1:
      v22 = (float *)FP_180_0;
      goto LABEL_23;
    case 2:
      v22 = (float *)FP_360_0;
      goto LABEL_23;
    case 3:
      v22 = (float *)FP_180_0;
      goto LABEL_24;
    case 4:
      v22 = (float *)FP_90_0;
      goto LABEL_23;
    case 5:
      v22 = (float *)FP_90_0;
      goto LABEL_24;
    case 6:
      v22 = (float *)FP_270_0;
LABEL_24:
      *a3 = v21 + *v22;
      break;
    case 7:
      v22 = (float *)FP_270_0;
LABEL_23:
      LODWORD(v21) ^= v18;
      goto LABEL_24;
  }
  result = byte_1C02ED2E8[v4];
  *a4 = result;
  return result;
}
