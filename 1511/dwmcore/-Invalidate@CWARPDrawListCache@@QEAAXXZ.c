/*
 * XREFs of ?Invalidate@CWARPDrawListCache@@QEAAXXZ @ 0x180117C18
 * Callers:
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x18010C250 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 *     ??_GCWARPDrawListCache@@EEAAPEAXI@Z @ 0x180117890 (--_GCWARPDrawListCache@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

void __fastcall CWARPDrawListCache::Invalidate(CWARPDrawListCache *this)
{
  __int64 i; // rbx
  CMILRefCountBase *v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
  {
    v3 = *(CMILRefCountBase **)(*((_QWORD *)this + 2) + 8 * i);
    if ( v3 )
    {
      CMILRefCountBase::Release(v3);
      *(_QWORD *)(*((_QWORD *)this + 2) + 8 * i) = 0LL;
    }
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 2));
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
}
