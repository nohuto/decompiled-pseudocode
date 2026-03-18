/*
 * XREFs of ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAVCOverlayContext@@@Z @ 0x18001F420
 * Callers:
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAVCOverlayContext@@PEAPEAVCOcclusionContext@@@Z @ 0x18002F32C (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18004BE00 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x18001EFF0 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?Invert@CBaseMatrix@@IEAAHAEBV1@@Z @ 0x1800222D4 (-Invert@CBaseMatrix@@IEAAHAEBV1@@Z.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800325D0 (--$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOccl.c)
 *     ?Clear@CArrayBasedCoverageSet@@UEAAXXZ @ 0x18004DDA0 (-Clear@CArrayBasedCoverageSet@@UEAAXXZ.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180051CE0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall COcclusionContext::Compute(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const struct MilRectF *a4,
        char a5,
        struct D2DMatrix *a6,
        __int64 a7)
{
  CArrayBasedCoverageSet *v7; // rsi
  Mesh::MeshLine *v8; // rdi
  __int64 v10; // r13
  unsigned __int64 v11; // r12
  float v13; // xmm6_4
  void (__fastcall *v14)(CArrayBasedCoverageSet *__hidden); // r14
  CBaseMatrix *v15; // r14
  __int128 v16; // xmm1
  float *v17; // rcx
  float *v18; // rax
  unsigned __int64 v19; // r8
  float v20; // xmm1_4
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // ebx
  void (*v24)(WPF::ProcessHeapImpl *__hidden, void *); // rbp
  unsigned __int64 v26; // r13
  __int64 v27; // rdi
  Mesh::MeshLine *v28; // rax
  _OWORD *v29; // r10
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  int v32; // r9d
  unsigned int v33; // [rsp+20h] [rbp-D8h]
  __int128 v35; // [rsp+38h] [rbp-C0h] BYREF
  _OWORD v36[4]; // [rsp+50h] [rbp-A8h] BYREF

  v7 = *(CArrayBasedCoverageSet **)(a1 + 96);
  v8 = 0LL;
  *(_DWORD *)(a1 + 656) = 0;
  v10 = a2;
  v11 = a3;
  v13 = 0.0;
  v14 = *(void (__fastcall **)(CArrayBasedCoverageSet *__hidden))(*(_QWORD *)v7 + 32LL);
  if ( v14 == CArrayBasedCoverageSet::Clear )
    CArrayBasedCoverageSet::Clear(v7);
  else
    v14(v7);
  *(_DWORD *)(a1 + 652) = 0;
  if ( a6 && !D2DMatrixIsIdentity(a6) )
  {
    if ( !CBaseMatrix::Invert((CBaseMatrix *)v36, a6) )
    {
      v23 = -2003304441;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304441, 0x9Bu);
      v33 = 199;
      goto LABEL_29;
    }
    v15 = (CBaseMatrix *)(a1 + 588);
    *(_OWORD *)(a1 + 524) = *(_OWORD *)a6;
    *(_OWORD *)(a1 + 540) = *((_OWORD *)a6 + 1);
    *(_OWORD *)(a1 + 556) = *((_OWORD *)a6 + 2);
    v30 = *((_OWORD *)a6 + 3);
    *(_BYTE *)(a1 + 520) = 1;
    *(_OWORD *)(a1 + 588) = v36[0];
    v31 = v36[2];
    *(_OWORD *)(a1 + 572) = v30;
    *(_OWORD *)(a1 + 604) = v36[1];
    v16 = v36[3];
    *(_OWORD *)(a1 + 620) = v31;
  }
  else
  {
    v15 = (CBaseMatrix *)(a1 + 588);
    *(_OWORD *)(a1 + 524) = IdentityMatrix;
    *(_OWORD *)(a1 + 540) = xmmword_180190B10;
    *(_OWORD *)(a1 + 556) = xmmword_180190B20;
    *(_OWORD *)(a1 + 572) = xmmword_180190B30;
    *(_OWORD *)(a1 + 588) = IdentityMatrix;
    *(_OWORD *)(a1 + 604) = xmmword_180190B10;
    *(_OWORD *)(a1 + 620) = xmmword_180190B20;
    v16 = xmmword_180190B30;
    *(_BYTE *)(a1 + 520) = 0;
  }
  *((_OWORD *)v15 + 3) = v16;
  if ( a5 && *(_BYTE *)(a1 + 520) )
  {
    v26 = v11;
    v27 = 16 * v11;
    if ( !is_mul_ok(v11, 0x10uLL) )
      v27 = -1LL;
    v28 = (Mesh::MeshLine *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                              WPF::g_pProcessHeap,
                              v27);
    v8 = v28;
    if ( v28 )
      `vector constructor iterator'(
        v28,
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
          CBaseMatrix::Transform2DBounds(v15, a4, (struct MilRectF *)&v35);
          a4 = (const struct MilRectF *)((char *)a4 + 16);
          *v29 = v35;
          --v26;
        }
        while ( v26 );
      }
      v10 = a2;
      a4 = v8;
      goto LABEL_7;
    }
    v23 = -2147024882;
    v33 = 207;
LABEL_29:
    v32 = v23;
    goto LABEL_33;
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
  v22 = CGraphIterator::WalkSubtree<COcclusionContext>(v21, v10, *(_QWORD *)(v10 + 24), a1, 2);
  v23 = v22;
  if ( v22 >= 0 )
    goto LABEL_12;
  v33 = 249;
  v32 = v22;
LABEL_33:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, v33);
LABEL_12:
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 768) = 0LL;
  v24 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v24 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v8);
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, Mesh::MeshLine *))v24)(WPF::g_pProcessHeap, v8);
  return v23;
}
