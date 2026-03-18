/*
 * XREFs of ?ptfxFraction@@YA?AU_POINTFIX@@U1@PEAVLINEDATA@@AEAVEFLOAT@@2@Z @ 0x1C02C7168
 * Callers:
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C0131798 (-bWiden@WIDENER@@IEAAHXZ.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C001AA10 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 */

struct _POINTFIX __fastcall ptfxFraction(
        struct _POINTFIX a1,
        struct LINEDATA *a2,
        struct EFLOAT *a3,
        struct EFLOAT *a4)
{
  __int64 v4; // rdx
  float *v5; // r8
  float *v6; // r9
  __int64 v7; // r11
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm3_4
  char v12; // r8
  int v13; // r11^4
  int v14; // r11d
  int v15; // [rsp+20h] [rbp-10h] BYREF
  int v16; // [rsp+24h] [rbp-Ch] BYREF
  __int64 v17; // [rsp+28h] [rbp-8h]

  if ( EFLOAT::bIsZero(a4) )
    return (struct _POINTFIX)v7;
  if ( (*(_DWORD *)v4 & 0x10) == 0 )
  {
    v9 = (float)*(int *)(v4 + 44);
    *(float *)(v4 + 80) = (float)*(int *)(v4 + 40);
    *(float *)(v4 + 84) = v9;
    v10 = FP_1_0 / *v6;
    *(float *)(v4 + 80) = v10 * *(float *)(v4 + 80);
    *(float *)(v4 + 84) = v10 * *(float *)(v4 + 84);
    *(_DWORD *)v4 |= 0x10u;
  }
  v17 = *(_QWORD *)(v4 + 80);
  v11 = *((float *)&v17 + 1) * *v5;
  bFToL(*(float *)&v17 * *v5, &v15, 6);
  bFToL(v11, &v16, v12);
  HIDWORD(v17) = v16 + v13;
  LODWORD(v17) = v14 + v15;
  return (struct _POINTFIX)v17;
}
