/*
 * XREFs of ?CallConstructors@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVCVolumeUnit@@_K@Z @ 0x18003E860
 * Callers:
 *     ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x18003F43C (-SetCount@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z.c)
 * Callees:
 *     log10_0 @ 0x1800449E2 (log10_0.c)
 *     pow_0 @ 0x1800449FA (pow_0.c)
 */

void __fastcall ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::CallConstructors(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdi
  double v6; // xmm6_8
  double v7; // xmm7_8
  double v8; // xmm6_8
  double v9; // xmm2_8
  double v10; // xmm2_8
  double v11; // xmm1_8
  double v12; // xmm0_8
  double v13; // xmm6_8
  double v14; // xmm0_8
  float v15; // xmm0_4
  unsigned __int64 j; // rax
  unsigned __int64 i; // [rsp+C8h] [rbp+10h]

  try
  {
    v4 = 0LL;
    for ( i = 0LL; v4 < a2; i = v4 )
    {
      v5 = a1 + 56 * v4;
      if ( v5 )
      {
        *(_DWORD *)v5 = 1;
        *(_DWORD *)(v5 + 8) = -1027604480;
        *(_DWORD *)(v5 + 12) = 0;
        *(_QWORD *)(v5 + 16) = 1069547520LL;
        v6 = pow_0(10.0, -4.8);
        *(double *)(v5 + 48) = v6;
        v7 = pow_0(10.0, 0.0);
        *(double *)(v5 + 40) = v7;
        if ( v6 > 1.0 )
          v8 = 2.0 - pow_0(v6, -0.5714285714285714);
        else
          v8 = pow_0(v6, 0.5714285714285714);
        *(double *)(v5 + 24) = v8;
        if ( v7 > 1.0 )
          v9 = 2.0 - pow_0(v7, -0.5714285714285714);
        else
          v9 = pow_0(v7, 0.5714285714285714);
        *(double *)(v5 + 32) = v9;
        v10 = (v9 - v8) * 0.0 + v8;
        if ( v10 > 1.0 )
        {
          v12 = 2.0 - v10;
          v11 = DOUBLE_N1_75;
        }
        else
        {
          v11 = DOUBLE_1_75;
          v12 = v10;
        }
        v13 = pow_0(v12, v11);
        if ( pow_0(10.0, -9.6) > v13 )
          v14 = DOUBLE_N192_0;
        else
          v14 = log10_0(v13) * 20.0;
        v15 = v14;
        *(float *)(v5 + 4) = v15;
        if ( v15 >= 0.0 )
          v15 = 0.0;
        *(float *)(v5 + 4) = v15;
      }
      ++v4;
    }
  }
  catch ( ... )
  {
    for ( j = i; j; --j )
      ;
    throw;
  }
}
