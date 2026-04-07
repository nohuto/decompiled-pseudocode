/*
 * XREFs of ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x180001A90
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002070 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002E70 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     _lambda_81f2de84cd03038fe2b12ca1386d224e_::operator() @ 0x180091B54 (_lambda_81f2de84cd03038fe2b12ca1386d224e_--operator().c)
 *     _lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_::operator() @ 0x180091BA4 (_lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_--operator().c)
 *     ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x180093D50 (-_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?_NumberOfWindowsInUnionRect@CGroupingStoryboard@@IEAAIW4DWMTRANSITION_TARGET@@@Z @ 0x180001C08 (-_NumberOfWindowsInUnionRect@CGroupingStoryboard@@IEAAIW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z @ 0x180001C4C (-_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CGroupingStoryboard::_SetUnifiedCenter(CGroupingStoryboard *this, struct CAnimationComponent *a2)
{
  unsigned int v3; // edi
  __int64 v5; // r8
  unsigned int v6; // ecx
  __m128i v7; // xmm1
  __m128i v8; // xmm3
  unsigned int v9; // ecx
  unsigned __int64 v10; // xmm0_8
  __m128i v11; // xmm2
  int v12; // eax
  __m128 v13; // xmm3
  int v14; // edx
  __m128 v15; // xmm2
  unsigned __int64 v16; // xmm0_8
  __int64 v17; // rax
  _DWORD v18[6]; // [rsp+30h] [rbp-18h] BYREF

  v3 = *((_DWORD *)a2 + 6) & 0xFFF;
  if ( ((*(__int64 (__fastcall **)(CGroupingStoryboard *, _QWORD))(*(_QWORD *)this + 96LL))(this, v3) & 8) != 0
    && (int)CGroupingStoryboard::_GetUnionRect(this, v3, v18) >= 0 )
  {
    v5 = *((_QWORD *)a2 + 5);
    v6 = v18[2] + v18[0];
    v7 = *(__m128i *)(v5 + 840);
    *(_DWORD *)(v5 + 1004) = 2;
    v8 = _mm_cvtsi32_si128(v6);
    v9 = v18[3] + v18[1];
    v10 = _mm_srli_si128(v7, 8).m128i_u64[0];
    *(_BYTE *)(v5 + 957) = 1;
    v11 = _mm_cvtsi32_si128(v9);
    v12 = v10 - v7.m128i_i32[0];
    v13 = _mm_cvtepi32_ps(v8);
    if ( (int)v10 - v7.m128i_i32[0] < 0 )
      v12 = 0;
    v13.m128_f32[0] = v13.m128_f32[0] * 0.5;
    v14 = HIDWORD(v10) - v7.m128i_i32[1];
    if ( HIDWORD(v10) - v7.m128i_i32[1] < 0 )
      v14 = 0;
    v15 = _mm_cvtepi32_ps(v11);
    v13.m128_f32[0] = (float)(v13.m128_f32[0] - (float)v7.m128i_i32[0]) / (float)v12;
    v15.m128_f32[0] = (float)((float)(v15.m128_f32[0] * 0.5) - (float)v7.m128i_i32[1]) / (float)v14;
    v16 = _mm_unpacklo_ps(v13, v15).m128_u64[0];
    *(_QWORD *)(v5 + 784) = v16;
    *(_DWORD *)(v5 + 792) = 0;
    v17 = *((_QWORD *)a2 + 5);
    *(_QWORD *)(v17 + 760) = v16;
    *(_DWORD *)(v17 + 768) = 0;
    *(_BYTE *)(v17 + 958) = 1;
    if ( (unsigned int)CGroupingStoryboard::_NumberOfWindowsInUnionRect(this, v3, v5, 0LL) > 1 || v3 - 45 <= 1 )
    {
      if ( *((_DWORD *)a2 + 17) != 2 )
        *((_DWORD *)a2 + 17) = 3;
    }
    else if ( *((_DWORD *)a2 + 17) != 2 )
    {
      *((_DWORD *)a2 + 17) = 1;
    }
  }
}
