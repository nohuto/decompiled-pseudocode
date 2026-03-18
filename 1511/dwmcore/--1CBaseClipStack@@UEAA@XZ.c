/*
 * XREFs of ??1CBaseClipStack@@UEAA@XZ @ 0x1800A2600
 * Callers:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x1800438D4 (--1CDrawingContext@@MEAA@XZ.c)
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x18004EB84 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x180054ED0 (--1COcclusionContext@@QEAA@XZ.c)
 *     ??_GCBaseClipStack@@UEAAPEAXI@Z @ 0x18010B140 (--_GCBaseClipStack@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 */

void __fastcall CBaseClipStack::~CBaseClipStack(CBaseClipStack *this)
{
  WPF::ProcessHeapImpl *v1; // rbx
  void *v2; // rdi
  void (__fastcall *v3)(WPF::ProcessHeapImpl *, void *); // rsi

  v1 = WPF::g_pProcessHeap;
  v2 = (void *)*((_QWORD *)this + 3);
  *(_QWORD *)this = &CClipStack<CoordinateSpace::PageInPixels>::`vftable';
  v3 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)v1 + 32LL);
  if ( v3 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(v1, v2);
  else
    v3(v1, v2);
}
