/*
 * XREFs of bXformUnitVector @ 0x1C0010AEC
 * Callers:
 *     bComputeMaxGlyph @ 0x1C0019FE0 (bComputeMaxGlyph.c)
 *     bInitXform @ 0x1C014DC3C (bInitXform.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C0014318 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?vSqrt@EFLOAT@@QEAAXXZ @ 0x1C0014330 (-vSqrt@EFLOAT@@QEAAXXZ.c)
 *     ??4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z @ 0x1C024563C (--4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z.c)
 */

__int64 __fastcall bXformUnitVector(__int64 a1, float *a2, float *a3, float *a4, __int64 a5, float *a6)
{
  float v7; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm6_4
  float *v12; // r8
  float v13; // xmm4_4
  float v14; // xmm5_4
  float v15; // xmm3_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  __int64 v18; // rcx
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v22; // [rsp+40h] [rbp+8h] BYREF
  float v23; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2[2];
  v9 = *a2;
  v10 = a2[3];
  v11 = a2[1];
  v22 = v11;
  v23 = v7;
  if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)&v22) && (unsigned int)EFLOAT::bIsZero((EFLOAT *)&v23) )
  {
    v16 = v10 * v14;
    v15 = v9 * v13;
  }
  else
  {
    v15 = (float)(v7 * v14) + (float)(v9 * v13);
    v16 = (float)(v10 * v14) + (float)(v11 * v13);
  }
  *v12 = v15;
  v12[1] = v16;
  v22 = (float)(v16 * v16) + (float)(v15 * v15);
  EFLOAT::vSqrt((EFLOAT *)&v22);
  v17 = v22;
  v18 = a5;
  *a6 = v22;
  v19 = *a3 / v17;
  v20 = a3[1] / v17;
  *a4 = v19;
  a4[1] = v20;
  if ( v18 )
  {
    *(float *)&a6 = v19 * 16.0;
    *((float *)&a6 + 1) = v20 * 16.0;
    EPOINTQF::operator=(v18, &a6);
  }
  return 1LL;
}
