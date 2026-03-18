/*
 * XREFs of ?PrepMegaRectData@CMegaRectCollection@@AEAAJPEBVCMILMatrix@@@Z @ 0x18006F774
 * Callers:
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJPEBVCMILMatrix@@@Z @ 0x18006F960 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJPEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180057F40 (--$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?TryWellOrderRectForFixedPoint@CMegaRectCollection@@AEAA_NPEAVCVertexXYWColorDUV2@@0@Z @ 0x18006F2A0 (-TryWellOrderRectForFixedPoint@CMegaRectCollection@@AEAA_NPEAVCVertexXYWColorDUV2@@0@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMegaRectCollection::PrepMegaRectData(
        CMegaRectCollection *this,
        const struct CMILMatrix *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int i; // esi
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  CMegaRectCollection *v10; // rcx
  __m128 v11; // xmm0
  __m128 v12; // xmm1
  LPVOID (__fastcall *v13)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  char *v14; // rax
  _QWORD *v15; // rcx
  _DWORD *v16; // rax
  _DWORD *v17; // rdx
  __m128 v19; // [rsp+38h] [rbp-79h]
  __m128 v20; // [rsp+48h] [rbp-69h]
  _BYTE v21[128]; // [rsp+58h] [rbp-59h] BYREF

  v4 = 0;
  for ( i = 0; i < *((_DWORD *)this + 6); ++i )
  {
    v7 = *(_QWORD *)this + 224LL * i;
    v8 = *(_QWORD *)(v7 + 8);
    v9 = *(_QWORD *)v7 + 96LL;
    *(_QWORD *)(v7 + 16) = 0LL;
    TransferVertices<CVertexXYWColorDUV2>(v8, (__int64)v21, v9, a4, 1.0);
    if ( (unsigned __int8)CMegaRectCollection::TryWellOrderRectForFixedPoint(
                            v10,
                            (struct CVertexXYWColorDUV2 *)v21,
                            (struct CVertexXYWColorDUV2 *)(v7 + 92)) )
    {
      v19.m128_u64[0] = *(_QWORD *)(v7 + 92);
      v19.m128_u64[1] = *(_QWORD *)(v7 + 188);
      v11 = _mm_mul_ps(_mm_add_ps(v19, g_halfFixedPointForRounding), (__m128)_xmm);
      v12 = _mm_cmplt_ps(DirectX::g_XMMaxInt, v11);
      v20 = _mm_or_ps(_mm_andnot_ps(v12, (__m128)_mm_cvttps_epi32(v11)), _mm_and_ps(v12, DirectX::g_XMAbsMask));
      v13 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v13 == WPF::ProcessHeapImpl::Alloc )
        v14 = (char *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x48uLL);
      else
        v14 = (char *)v13(WPF::g_pProcessHeap, 72LL);
      v15 = v14;
      if ( v14 )
      {
        v16 = v14 + 8;
        *v15 = v16;
        *v16 = 0;
      }
      else
      {
        v15 = 0LL;
      }
      *(_QWORD *)(v7 + 16) = v15;
      if ( !v15 )
      {
        v4 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x114u);
        return v4;
      }
      a4 = v20.m128_u32[0];
      if ( v20.m128_i32[0] >= v20.m128_i32[2] || v20.m128_i32[1] >= v20.m128_i32[3] )
      {
        *(_DWORD *)*v15 = 0;
      }
      else
      {
        v17 = (_DWORD *)*v15;
        *v17 = 2;
        v17[1] = v20.m128_i32[0];
        v17[2] = v20.m128_i32[2];
        v17[3] = v20.m128_i32[1];
        v17[4] = 16;
        v17[7] = v20.m128_i32[0];
        v17[8] = v20.m128_i32[2];
        v17[5] = v20.m128_i32[3];
        v17[6] = 16;
      }
    }
  }
  return v4;
}
