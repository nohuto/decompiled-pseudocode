/*
 * XREFs of ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x18007814C
 * Callers:
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x180078370 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?TransferVertices@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEAV1@AEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@MI@Z @ 0x1800330E0 (-TransferVertices@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEAV1@AEBVCMILMatrix@@AEB.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?TryWellOrderRectForFixedPoint@CMegaRectCollection@@AEAA_NPEAVCVertexXYWColorDUV2@@0@Z @ 0x180077CD0 (-TryWellOrderRectForFixedPoint@CMegaRectCollection@@AEAA_NPEAVCVertexXYWColorDUV2@@0@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CMegaRectCollection::PrepMegaRectData(CMegaRectCollection *this)
{
  unsigned int v1; // ebx
  unsigned int i; // esi
  __int64 v4; // rdi
  _QWORD *v5; // rcx
  __int64 v6; // r9
  struct D2D_VECTOR_2F v7; // xmm0_8
  const struct CVertexAAFixupData *v8; // rdx
  const struct CVertexXYWColorDUV2 *v9; // rcx
  CMegaRectCollection *v10; // rcx
  unsigned int v11; // xmm1_4
  __m128 v12; // xmm0
  __m128 v13; // xmm1
  LPVOID (__fastcall *v14)(WPF::ProcessHeapImpl *, SIZE_T); // r12
  char *v15; // rax
  FLOAT **v16; // rcx
  FLOAT *v17; // rax
  FLOAT x; // r9d
  FLOAT v19; // r10d
  FLOAT y; // eax
  FLOAT v21; // r11d
  FLOAT *v22; // rdx
  struct D2D_VECTOR_2F v24[2]; // [rsp+48h] [rbp-89h] BYREF
  __m128 v25; // [rsp+58h] [rbp-79h]
  _BYTE v26[128]; // [rsp+68h] [rbp-69h] BYREF

  v1 = 0;
  for ( i = 0; i < *((_DWORD *)this + 6); ++i )
  {
    v4 = *(_QWORD *)this + 216LL * i;
    v5 = *(_QWORD **)(v4 + 8);
    v6 = *(_QWORD *)v4;
    *(_QWORD *)(v4 + 80) = 0LL;
    v7 = *(struct D2D_VECTOR_2F *)((char *)v5 + 84);
    v8 = (const struct CVertexAAFixupData *)v5[7];
    v9 = (const struct CVertexXYWColorDUV2 *)v5[6];
    v24[0] = v7;
    TransferVertices(v9, v8, (struct CVertexXYWColorDUV2 *)v26, (const struct CMILMatrix *)(v6 + 76), v24, 1.0, 4u);
    if ( (unsigned __int8)CMegaRectCollection::TryWellOrderRectForFixedPoint(
                            v10,
                            (struct CVertexXYWColorDUV2 *)v26,
                            (struct CVertexXYWColorDUV2 *)(v4 + 88)) )
    {
      v11 = *(_DWORD *)(v4 + 92);
      v25.m128_i32[0] = *(_DWORD *)(v4 + 88);
      *(unsigned __int64 *)((char *)v25.m128_u64 + 4) = __PAIR64__(*(_DWORD *)(v4 + 184), v11);
      v25.m128_i32[3] = *(_DWORD *)(v4 + 188);
      v12 = _mm_mul_ps(_mm_add_ps(v25, g_halfFixedPointForRounding), (__m128)_xmm);
      v13 = _mm_cmplt_ps(DirectX::g_XMMaxInt, v12);
      *(__m128 *)&v24[0].x = _mm_or_ps(
                               _mm_andnot_ps(v13, (__m128)_mm_cvttps_epi32(v12)),
                               _mm_and_ps(v13, DirectX::g_XMAbsMask));
      v14 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v14 == WPF::ProcessHeapImpl::Alloc )
        v15 = (char *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x48uLL);
      else
        v15 = (char *)v14(WPF::g_pProcessHeap, 72LL);
      v16 = (FLOAT **)v15;
      if ( v15 )
      {
        v17 = (FLOAT *)(v15 + 8);
        *v16 = v17;
        *v17 = 0.0;
      }
      else
      {
        v16 = 0LL;
      }
      *(_QWORD *)(v4 + 80) = v16;
      if ( !v16 )
      {
        v1 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x115u);
        return v1;
      }
      x = v24[0].x;
      v19 = v24[1].x;
      if ( SLODWORD(v24[0].x) >= SLODWORD(v24[1].x)
        || (y = v24[0].y, v21 = v24[1].y, SLODWORD(v24[0].y) >= SLODWORD(v24[1].y)) )
      {
        **v16 = 0.0;
      }
      else
      {
        v22 = *v16;
        *(_DWORD *)v22 = 2;
        v22[1] = x;
        v22[2] = v19;
        v22[3] = y;
        *((_DWORD *)v22 + 4) = 16;
        v22[7] = x;
        v22[8] = v19;
        v22[5] = v21;
        *((_DWORD *)v22 + 6) = 16;
      }
    }
  }
  return v1;
}
