/*
 * XREFs of ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAVCOverlayContext@@@Z @ 0x18005524C
 * Callers:
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAVCOverlayContext@@PEAPEAVCOcclusionContext@@@Z @ 0x180044B58 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18007D530 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Clear@CArrayBasedCoverageSet@@UEAAXXZ @ 0x180036AD0 (-Clear@CArrayBasedCoverageSet@@UEAAXXZ.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x180047060 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?Invert@CBaseMatrix@@IEAAHAEBV1@@Z @ 0x1800476D8 (-Invert@CBaseMatrix@@IEAAHAEBV1@@Z.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180052F20 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180065E88 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall COcclusionContext::Compute(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        const struct MilRectF *a4,
        char a5,
        struct D2DMatrix *a6,
        __int64 a7)
{
  CArrayBasedCoverageSet *v7; // r15
  CBitmapOfDeviceBitmaps::DeviceBitmapInfo *v8; // rsi
  __int64 *v10; // r13
  unsigned __int64 v11; // r14
  float v13; // xmm6_4
  void (__fastcall *v14)(CArrayBasedCoverageSet *); // r12
  CBaseMatrix *v15; // rdi
  __int128 v16; // xmm1
  float *v17; // rcx
  float *v18; // rax
  unsigned __int64 v19; // r8
  float v20; // xmm1_4
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // edi
  void (__fastcall *v24)(WPF::ProcessHeapImpl *, void *); // rbp
  unsigned __int64 v26; // r15
  SIZE_T v27; // rsi
  LPVOID (__fastcall *v28)(WPF::ProcessHeapImpl *, SIZE_T); // r13
  CBitmapOfDeviceBitmaps::DeviceBitmapInfo *v29; // rax
  _OWORD *v30; // r10
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  int v33; // r9d
  unsigned int v34; // [rsp+20h] [rbp-D8h]
  __int128 v36; // [rsp+38h] [rbp-C0h] BYREF
  _OWORD v37[4]; // [rsp+50h] [rbp-A8h] BYREF

  v7 = *(CArrayBasedCoverageSet **)(a1 + 96);
  v8 = 0LL;
  *(_DWORD *)(a1 + 656) = 0;
  v10 = a2;
  v11 = a3;
  v13 = 0.0;
  v14 = *(void (__fastcall **)(CArrayBasedCoverageSet *))(*(_QWORD *)v7 + 32LL);
  if ( v14 == CArrayBasedCoverageSet::Clear )
    CArrayBasedCoverageSet::Clear(v7);
  else
    v14(v7);
  *(_DWORD *)(a1 + 652) = 0;
  if ( a6 && !D2DMatrixIsIdentity(a6) )
  {
    if ( !CBaseMatrix::Invert((CBaseMatrix *)v37, a6) )
    {
      v23 = -2003304441;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304441, 0x9Bu);
      v34 = 199;
      goto LABEL_33;
    }
    *(_OWORD *)(a1 + 524) = *(_OWORD *)a6;
    *(_OWORD *)(a1 + 540) = *((_OWORD *)a6 + 1);
    *(_OWORD *)(a1 + 556) = *((_OWORD *)a6 + 2);
    v31 = *((_OWORD *)a6 + 3);
    v15 = (CBaseMatrix *)(a1 + 588);
    *(_BYTE *)(a1 + 520) = 1;
    *(_OWORD *)(a1 + 588) = v37[0];
    v32 = v37[2];
    *(_OWORD *)(a1 + 572) = v31;
    *(_OWORD *)(a1 + 604) = v37[1];
    v16 = v37[3];
    *(_OWORD *)(a1 + 620) = v32;
  }
  else
  {
    v15 = (CBaseMatrix *)(a1 + 588);
    *(_OWORD *)(a1 + 524) = IdentityMatrix;
    *(_OWORD *)(a1 + 540) = xmmword_18019E9C0;
    *(_OWORD *)(a1 + 556) = xmmword_18019E9D0;
    *(_OWORD *)(a1 + 572) = xmmword_18019E9E0;
    *(_OWORD *)(a1 + 588) = IdentityMatrix;
    *(_OWORD *)(a1 + 604) = xmmword_18019E9C0;
    *(_OWORD *)(a1 + 620) = xmmword_18019E9D0;
    v16 = xmmword_18019E9E0;
    *(_BYTE *)(a1 + 520) = 0;
  }
  *((_OWORD *)v15 + 3) = v16;
  if ( a5 && *(_BYTE *)(a1 + 520) )
  {
    v26 = v11;
    v27 = 16 * v11;
    if ( !is_mul_ok(v11, 0x10uLL) )
      v27 = -1LL;
    v28 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v28 == WPF::ProcessHeapImpl::Alloc )
      v29 = (CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v27);
    else
      v29 = (CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)v28(WPF::g_pProcessHeap, v27);
    v8 = v29;
    if ( v29 )
      `vector constructor iterator'(
        v29,
        0x10uLL,
        v11,
        TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
    else
      v8 = 0LL;
    if ( v8 )
    {
      if ( (_DWORD)v11 )
      {
        do
        {
          CBaseMatrix::Transform2DBounds(v15, a4, (struct MilRectF *)&v36);
          a4 = (const struct MilRectF *)((char *)a4 + 16);
          *v30 = v36;
          --v26;
        }
        while ( v26 );
      }
      v10 = a2;
      a4 = v8;
      goto LABEL_7;
    }
    v23 = -2147024882;
    v34 = 207;
LABEL_33:
    v33 = v23;
    goto LABEL_37;
  }
LABEL_7:
  *(_DWORD *)(a1 + 344) = v11;
  if ( (_DWORD)v11 )
  {
    v17 = (float *)(a1 + 476);
    v18 = (float *)((char *)a4 + 4);
    v19 = v11;
    do
    {
      *v17 = (float)(v18[2] - *v18) * (float)(v18[1] - *(v18 - 1));
      *(_OWORD *)((char *)v18 + a1 - (_QWORD)a4 + 344) = *(_OWORD *)(v18 - 1);
      v18 += 4;
      v13 = v13 + *v17++;
      --v19;
    }
    while ( v19 );
  }
  v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v13) & _xmm);
  if ( v20 < 0.0000011920929 )
  {
    v23 = -2003292287;
    goto LABEL_12;
  }
  v21 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 768) = a7;
  v22 = CVisualTreeIterator::WalkSubtree<COcclusionContext>(v21, (const struct CVisualTree *)v10, v10[3], a1, 2);
  v23 = v22;
  if ( v22 >= 0 )
    goto LABEL_12;
  v34 = 249;
  v33 = v22;
LABEL_37:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, v34);
LABEL_12:
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 768) = 0LL;
  v24 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v24 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v8);
  else
    v24(WPF::g_pProcessHeap, v8);
  return v23;
}
