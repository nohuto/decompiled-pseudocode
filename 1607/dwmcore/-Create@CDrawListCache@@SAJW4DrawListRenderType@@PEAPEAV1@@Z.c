/*
 * XREFs of ?Create@CDrawListCache@@SAJW4DrawListRenderType@@PEAPEAV1@@Z @ 0x1800B0CD0
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x180069A20 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?EnsureDrawListCacheNoRef@CDrawListCacheSet@@QEAAJPEBVIRenderTarget@@W4DrawListRenderType@@PEAPEAVCDrawListCache@@@Z @ 0x18011134C (-EnsureDrawListCacheNoRef@CDrawListCacheSet@@QEAAJPEBVIRenderTarget@@W4DrawListRenderType@@PEAPE.c)
 *     ?RenderInternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18013CFC0 (-RenderInternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBUCCommonDrawListCacheParameters.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListCache::Create(int a1, _QWORD *a2)
{
  unsigned int v4; // edi
  LPVOID (__fastcall *v5)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  char *v6; // rax
  void (__fastcall ***v7)(_QWORD); // rbx

  v4 = 0;
  v5 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v5 == WPF::ProcessHeapImpl::Alloc )
    v6 = (char *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x50uLL);
  else
    v6 = (char *)v5(WPF::g_pProcessHeap, 80LL);
  v7 = (void (__fastcall ***)(_QWORD))v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 4) = a1;
    *(_QWORD *)v6 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v6 = &CDrawListCache::`vftable';
    *((_DWORD *)v6 + 2) = 0;
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 4) = 0LL;
    *((_DWORD *)v6 + 10) = 0;
    *(_QWORD *)(v6 + 60) = 0LL;
    *((_WORD *)v6 + 36) = 0;
    if ( !a1 )
      ++CHWDrawListEngineMetrics::s_cDrawListCaches;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    (**v7)(v7);
    *a2 = v7;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x31u);
  }
  return v4;
}
