/*
 * XREFs of ?Create@CHWDrawListCache@@SAJPEAPEAV1@@Z @ 0x18002B9C0
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18003FFB0 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?EnsureHWCacheNoRef@CDrawListCacheSet@@QEAAJPEBVIRenderTarget@@PEAPEAVCHWDrawListCache@@@Z @ 0x1800FC14C (-EnsureHWCacheNoRef@CDrawListCacheSet@@QEAAJPEBVIRenderTarget@@PEAPEAVCHWDrawListCache@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHWDrawListCache::Create(struct CHWDrawListCache **a1)
{
  unsigned int v2; // esi
  void *(__fastcall *v3)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  struct CHWDrawListCache *v4; // rax
  struct CHWDrawListCache *v5; // rdi

  v2 = 0;
  v3 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v3 == WPF::ProcessHeapImpl::Alloc )
    v4 = (struct CHWDrawListCache *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x40uLL);
  else
    v4 = (struct CHWDrawListCache *)v3(WPF::g_pProcessHeap, 64uLL);
  v5 = v4;
  if ( v4 )
  {
    ++CHWDrawListEngineMetrics::s_cDrawListCaches;
    *(_QWORD *)v4 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v4 = &CHWDrawListCache::`vftable';
    *((_DWORD *)v4 + 2) = 0;
    *((_QWORD *)v4 + 2) = 0LL;
    *((_DWORD *)v4 + 6) = 0;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_DWORD *)v4 + 15) = 1;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    (**(void (__fastcall ***)(struct CHWDrawListCache *))v5)(v5);
    *a1 = v5;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x12u);
  }
  return v2;
}
