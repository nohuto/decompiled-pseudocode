/*
 * XREFs of ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x18005BE84
 * Callers:
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAPEAVCOcclusionContext@@@Z @ 0x18006D184 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800774A0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Clear@CArrayBasedCoverageSet@@UEAAXXZ @ 0x18004B740 (-Clear@CArrayBasedCoverageSet@@UEAAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEAAJPEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@@Z @ 0x18005C180 (-SetDeviceTransform@COcclusionContext@@QEAAJPEBV-$CMatrix@UPageInPixels@CoordinateSpace@@UDevice.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800608B0 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::Compute(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  CArrayBasedCoverageSet *v8; // rcx
  unsigned __int64 v10; // rbp
  float v12; // xmm6_4
  TemporaryConfiguration *v13; // rsi
  void (*v14)(void); // rax
  int v15; // eax
  unsigned int v16; // edi
  float *v17; // rcx
  float *v18; // rax
  unsigned __int64 v19; // r8
  float v20; // xmm1_4
  __int64 v21; // rcx
  unsigned int v22; // ebp
  __int64 v23; // rcx
  WPF::ProcessHeapImpl *v24; // rcx
  void (*v25)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rdx
  void *(__fastcall *v29)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  TemporaryConfiguration *v30; // rax
  TemporaryConfiguration *v31; // rdi
  __int64 v32; // rcx
  unsigned int v33; // [rsp+20h] [rbp-88h]
  __int128 v34; // [rsp+30h] [rbp-78h] BYREF

  *(_DWORD *)(a1 + 892) = 0;
  v8 = *(CArrayBasedCoverageSet **)(a1 + 248);
  v10 = a3;
  v12 = 0.0;
  v13 = 0LL;
  v14 = *(void (**)(void))(*(_QWORD *)v8 + 32LL);
  if ( (char *)v14 == (char *)CArrayBasedCoverageSet::Clear )
    CArrayBasedCoverageSet::Clear(v8);
  else
    v14();
  *(_DWORD *)(a1 + 888) = 0;
  *(_DWORD *)(a1 + 992) = 0;
  DynArrayImpl<0>::ShrinkToSize(a1 + 968, 40LL);
  v15 = COcclusionContext::SetDeviceTransform(a1, a6);
  v16 = v15;
  if ( v15 < 0 )
  {
    v33 = 200;
  }
  else
  {
    if ( a5 && *(_BYTE *)(a1 + 672) )
    {
      v27 = v10;
      v28 = 16 * v10;
      if ( !is_mul_ok(v10, 0x10uLL) )
        v28 = -1LL;
      v29 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL);
      if ( v29 == WPF::ProcessHeapImpl::Alloc )
        v30 = (TemporaryConfiguration *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v28);
      else
        v30 = (TemporaryConfiguration *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, unsigned __int64, void *(__fastcall *)(WPF::ProcessHeapImpl *__hidden, unsigned __int64)))v29)(
                                          WPF::g_pProcessHeap,
                                          v28,
                                          WPF::ProcessHeapImpl::Alloc);
      v13 = v30;
      if ( v30 )
        `vector constructor iterator'(
          v30,
          0x10uLL,
          v10,
          (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
      else
        v13 = 0LL;
      if ( !v13 )
      {
        v16 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xD0u);
        goto LABEL_10;
      }
      if ( (_DWORD)v10 )
      {
        v31 = v13;
        do
        {
          CMILMatrix::Transform2DBoundsHelper<0>(a1 + 744, a4, (float *)&v34);
          a4 += 16LL;
          *(_OWORD *)v31 = v34;
          v31 = (TemporaryConfiguration *)((char *)v31 + 16);
          --v27;
        }
        while ( v27 );
      }
      a4 = (__int64)v13;
    }
    *(_DWORD *)(a1 + 496) = v10;
    if ( (_DWORD)v10 )
    {
      v17 = (float *)(a1 + 628);
      v18 = (float *)(a4 + 4);
      v19 = v10;
      do
      {
        *v17 = (float)(v18[2] - *v18) * (float)(v18[1] - *(v18 - 1));
        *(_OWORD *)((char *)v18 + a1 - a4 + 496) = *(_OWORD *)(v18 - 1);
        v18 += 4;
        v12 = v12 + *v17++;
        --v19;
      }
      while ( v19 );
    }
    v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v12) & _xmm);
    if ( v20 < 0.0000011920929 )
    {
      v16 = -2003292287;
      goto LABEL_10;
    }
    **(_DWORD **)(a1 + 816) = 0;
    v21 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 1000) = a7;
    v15 = CVisualTreeIterator::WalkSubtree<COcclusionContext>(v21, a2, *(_QWORD *)(a2 + 24), a1, 2);
    v16 = v15;
    if ( v15 >= 0 )
      goto LABEL_10;
    v33 = 252;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, v33);
LABEL_10:
  *(_DWORD *)(a1 + 16) = 0;
  v22 = 0;
  for ( *(_DWORD *)(a1 + 64) = 0; v22 < *(_DWORD *)(a1 + 120); ++v22 )
  {
    v32 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL * v22);
    if ( v32 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  v23 = *(_QWORD *)(a1 + 168);
  if ( v23 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
    *(_QWORD *)(a1 + 168) = 0LL;
  }
  v24 = WPF::g_pProcessHeap;
  **(_DWORD **)(a1 + 816) = 0;
  *(_QWORD *)(a1 + 1000) = 0LL;
  v25 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)v24 + 32LL);
  if ( v25 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(v24, v13);
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, TemporaryConfiguration *))v25)(v24, v13);
  return v16;
}
