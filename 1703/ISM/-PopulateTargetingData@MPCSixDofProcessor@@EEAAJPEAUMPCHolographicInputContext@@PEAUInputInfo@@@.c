/*
 * XREFs of ?PopulateTargetingData@MPCSixDofProcessor@@EEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180045CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z @ 0x180044E90 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z.c)
 */

__int64 __fastcall MPCSixDofProcessor::PopulateTargetingData(
        MPCSixDofProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  __int128 v3; // xmm0
  float *v4; // rax
  float *v5; // r10
  float v6; // xmm11_4
  float v7; // xmm15_4
  float v8; // xmm12_4
  float v9; // xmm8_4
  float v10; // xmm14_4
  float v11; // xmm9_4
  float v12; // xmm5_4
  float v13; // xmm10_4
  float v14; // xmm6_4
  float v15; // xmm1_4
  float v16; // xmm13_4
  float v17; // xmm7_4
  float v18; // xmm12_4
  float v19; // xmm9_4
  float v20; // xmm6_4
  float *v21; // r9
  __int64 v23; // [rsp+28h] [rbp-89h]
  float v24; // [rsp+30h] [rbp-81h]
  __int64 v25; // [rsp+38h] [rbp-79h] BYREF
  float v26; // [rsp+40h] [rbp-71h]
  float v27[3]; // [rsp+48h] [rbp-69h] BYREF
  float v28[7]; // [rsp+54h] [rbp-5Dh] BYREF

  *((_BYTE *)a3 + 684) = 1;
  *((_DWORD *)a3 + 180) = *((_DWORD *)a3 + 327);
  if ( *((_BYTE *)a3 + 1460) && *((_BYTE *)a3 + 1461) )
  {
    v25 = 0LL;
    *((_BYTE *)this + 2224) = 0;
    v23 = *((_QWORD *)a3 + 181);
    v3 = *(_OWORD *)((char *)a3 + 1432);
    v24 = *((float *)a3 + 364);
    v26 = FLOAT_N1_0;
    *(_OWORD *)v28 = v3;
    v4 = Windows::Foundation::Numerics::transform(v27, (float *)&v25, v28);
    v6 = v5[4];
    v7 = *v5;
    v8 = v5[8];
    *(_QWORD *)&v3 = *(_QWORD *)v4;
    v9 = v5[1];
    v10 = v5[5];
    v11 = v5[9];
    v12 = v5[2];
    v13 = v5[6];
    v14 = v5[10];
    v15 = v8 * v24;
    v26 = v4[2];
    v25 = v3;
    v16 = (float)((float)((float)(v10 * *((float *)&v23 + 1)) + (float)(v9 * *(float *)&v23)) + (float)(v11 * v24))
        + v5[13];
    v17 = (float)((float)((float)(v13 * *((float *)&v23 + 1)) + (float)(v12 * *(float *)&v23)) + (float)(v14 * v24))
        + v5[14];
    v18 = v8 * v26;
    v19 = v11 * v26;
    v20 = v14 * v26;
    v21[181] = (float)((float)((float)(v7 * *(float *)&v23) + (float)(v6 * *((float *)&v23 + 1))) + v15) + v5[12];
    v21[182] = v16;
    v21[183] = v17;
    v21[184] = (float)((float)(v7 * *(float *)&v3) + (float)(v6 * *((float *)&v3 + 1))) + v18;
    v21[185] = (float)((float)(v10 * *((float *)&v3 + 1)) + (float)(v9 * *(float *)&v3)) + v19;
    v21[186] = (float)((float)(v13 * *((float *)&v3 + 1)) + (float)(v12 * *(float *)&v3)) + v20;
  }
  else
  {
    *((_BYTE *)this + 2224) = 1;
    *((_BYTE *)a3 + 684) = 1;
    *((_DWORD *)a3 + 181) = *((_DWORD *)a2 + 38);
    *((_DWORD *)a3 + 182) = *((_DWORD *)a2 + 39);
    *((_DWORD *)a3 + 183) = *((_DWORD *)a2 + 40);
    *((_DWORD *)a3 + 184) = *((_DWORD *)a2 + 41);
    *((_DWORD *)a3 + 185) = *((_DWORD *)a2 + 42);
    *((_DWORD *)a3 + 186) = *((_DWORD *)a2 + 43);
  }
  return 0LL;
}
