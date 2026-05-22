/*
 * XREFs of ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x18004C7E8
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004B610 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 *     ?UpdateGazeCursor@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x18004BE90 (-UpdateGazeCursor@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z.c)
 *     _lambda_a88adf0547c7b0cb38e523d07adee41d_::operator() @ 0x18004BF64 (_lambda_a88adf0547c7b0cb38e523d07adee41d_--operator().c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@AEA_N@Z @ 0x18005036C (-ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@A.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCHolographicInputManager::ProcessCursorData(
        __int64 a1,
        struct IMPCInputProviderBase *a2,
        __int64 a3,
        const char *a4,
        __int64 a5)
{
  int v5; // r15d
  __int64 v9; // rbx
  char v10; // al
  MPCCursorManager *v11; // rcx
  int v12; // eax
  char v13; // al
  int v14; // eax
  __m128 v15; // xmm6
  __m128 v16; // xmm2
  float v17; // xmm1_4
  __int64 result; // rax
  int v19; // [rsp+28h] [rbp-18h]
  float v20; // [rsp+28h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  bool v22; // [rsp+60h] [rbp+20h] BYREF

  v5 = (int)a4;
  if ( !*(_BYTE *)(a1 + 2160) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2D5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    __debugbreak();
  }
  v9 = a5;
  *(_OWORD *)(a5 + 24) = *(_OWORD *)(a3 + 160);
  *(_OWORD *)(v9 + 40) = *(_OWORD *)(a3 + 176);
  *(_OWORD *)(v9 + 56) = *(_OWORD *)(a3 + 192);
  *(_OWORD *)(v9 + 72) = *(_OWORD *)(a3 + 112);
  *(_OWORD *)(v9 + 88) = *(_OWORD *)(a3 + 128);
  *(_OWORD *)(v9 + 104) = *(_OWORD *)(a3 + 144);
  *(_OWORD *)v9 = *(_OWORD *)(a3 + 212);
  *(_QWORD *)(v9 + 16) = *(_QWORD *)(a3 + 228);
  v10 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 120LL))(a2);
  *(_DWORD *)(v9 + 152) = v5;
  *(_BYTE *)(v9 + 136) = v10;
  *(_DWORD *)(v9 + 132) = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 112LL))(a2);
  *(_BYTE *)(v9 + 160) = 0;
  *(_QWORD *)(v9 + 120) = *(_QWORD *)(a3 + 52);
  *(_DWORD *)(v9 + 128) = *(_DWORD *)(a3 + 60);
  *(_BYTE *)(v9 + 161) = *(_BYTE *)(a3 + 1);
  *(_DWORD *)(v9 + 164) = (__int64)(*(_QWORD *)(a1 + 2368) - *(_QWORD *)(a1 + 2360)) >> 3;
  v22 = 0;
  if ( v5 == 1 )
  {
    v11 = *(MPCCursorManager **)(a1 + 2184);
    if ( *((_BYTE *)v11 + 64) )
    {
      v12 = MPCCursorManager::ProcessProviderHitTest(v11, a2, (const struct HitTestResult3D *)a3, &v22);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x2E5,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v12);
        __debugbreak();
      }
      if ( v22 )
        goto LABEL_9;
    }
    else
    {
      v22 = 0;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 2360) + 80LL))(**(_QWORD **)(a1 + 2360)) )
    {
      v13 = 0;
LABEL_10:
      *(_BYTE *)(v9 + 160) = v13;
      goto LABEL_11;
    }
LABEL_9:
    v13 = 1;
    goto LABEL_10;
  }
LABEL_11:
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 2136) + 112LL))(*(_QWORD *)(a1 + 2136), v9);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x2E9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v14);
    JUMPOUT(0x18004CB12LL);
  }
  v19 = *(_DWORD *)(a3 + 60);
  if ( v5 == 1 )
  {
    *(_QWORD *)(a1 + 176) = *(_QWORD *)(a3 + 52);
    *(_DWORD *)(a1 + 184) = v19;
    v15 = (__m128)*(unsigned int *)(a1 + 180);
    v16 = (__m128)*(unsigned int *)(a1 + 176);
    v17 = *(float *)(a1 + 184);
    v15.m128_f32[0] = (float)((float)((float)(v15.m128_f32[0] * *(float *)(a1 + 16))
                                    + (float)(*(float *)(a1 + 176) * *(float *)a1))
                            + (float)(v17 * *(float *)(a1 + 32)))
                    + *(float *)(a1 + 48);
    v16.m128_f32[0] = (float)((float)((float)(v16.m128_f32[0] * *(float *)(a1 + 4))
                                    + (float)(*(float *)(a1 + 180) * *(float *)(a1 + 20)))
                            + (float)(v17 * *(float *)(a1 + 36)))
                    + *(float *)(a1 + 52);
    v20 = (float)((float)((float)(*(float *)(a1 + 176) * *(float *)(a1 + 8))
                        + (float)(*(float *)(a1 + 180) * *(float *)(a1 + 24)))
                + (float)(v17 * *(float *)(a1 + 40)))
        + *(float *)(a1 + 56);
    *(_QWORD *)(a1 + 188) = _mm_unpacklo_ps(v15, v16).m128_u64[0];
    *(float *)(a1 + 196) = v20;
  }
  *(_OWORD *)(a1 + 2192) = *(_OWORD *)v9;
  *(_OWORD *)(a1 + 2208) = *(_OWORD *)(v9 + 16);
  *(_OWORD *)(a1 + 2224) = *(_OWORD *)(v9 + 32);
  *(_OWORD *)(a1 + 2240) = *(_OWORD *)(v9 + 48);
  *(_OWORD *)(a1 + 2256) = *(_OWORD *)(v9 + 64);
  *(_OWORD *)(a1 + 2272) = *(_OWORD *)(v9 + 80);
  *(_OWORD *)(a1 + 2288) = *(_OWORD *)(v9 + 96);
  *(_OWORD *)(a1 + 2304) = *(_OWORD *)(v9 + 112);
  *(_OWORD *)(a1 + 2320) = *(_OWORD *)(v9 + 128);
  *(_OWORD *)(a1 + 2336) = *(_OWORD *)(v9 + 144);
  result = *(_QWORD *)(v9 + 160);
  *(_QWORD *)(a1 + 2352) = result;
  return result;
}
