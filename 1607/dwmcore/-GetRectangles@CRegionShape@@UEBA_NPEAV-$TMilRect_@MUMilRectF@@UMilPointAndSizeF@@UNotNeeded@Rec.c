/*
 * XREFs of ?GetRectangles@CRegionShape@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18002BFA0
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18002C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18002DE30 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 * Callees:
 *     ?GetRectCount@CRegionShape@@QEBAIXZ @ 0x18002C0DC (-GetRectCount@CRegionShape@@QEBAIXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CRegionShape::GetRectangles(CRegionShape *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rbp
  int v6; // edi
  char *v7; // rsi
  __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  void *(__fastcall *v10)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  char *v11; // rax
  float *v12; // rax
  char *v13; // rcx
  __m128i v14; // xmm0
  void (*v15)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  v3 = a3;
  v6 = -2147467259;
  v7 = 0LL;
  if ( a3 && a3 == CRegionShape::GetRectCount(a1) )
  {
    v8 = (unsigned int)v3;
    v9 = 16 * v3;
    if ( !is_mul_ok(v3, 0x10uLL) )
      v9 = -1LL;
    v10 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v10 == WPF::ProcessHeapImpl::Alloc )
      v11 = (char *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v9);
    else
      v11 = (char *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, unsigned __int64, void *(__fastcall *)(WPF::ProcessHeapImpl *__hidden, unsigned __int64)))v10)(
                      WPF::g_pProcessHeap,
                      v9,
                      WPF::ProcessHeapImpl::Alloc);
    v7 = v11;
    if ( v11 )
    {
      (*(void (__fastcall **)(_QWORD *, char *, _QWORD))(**((_QWORD **)a1 + 1) + 144LL))(
        *((_QWORD **)a1 + 1),
        v11,
        (unsigned int)v3);
      if ( (_DWORD)v3 )
      {
        v12 = (float *)(a2 + 4);
        v13 = &v7[-a2];
        do
        {
          *(v12 - 1) = (float)*(int *)((char *)v12 + (_QWORD)v13 - 4);
          *v12 = (float)*(int *)((char *)v12 + (_QWORD)v13);
          v14 = _mm_cvtsi32_si128(*(_DWORD *)((char *)v12 + (_QWORD)v13 + 4));
          v12 += 4;
          *((_DWORD *)v12 - 3) = _mm_cvtepi32_ps(v14).m128_u32[0];
          *(v12 - 2) = (float)*(int *)((char *)v12 + (_QWORD)v13 - 8);
          --v8;
        }
        while ( v8 );
      }
      v6 = 0;
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xBEu);
    }
  }
  v15 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v15 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v7);
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, char *))v15)(WPF::g_pProcessHeap, v7);
  return v6 >= 0;
}
