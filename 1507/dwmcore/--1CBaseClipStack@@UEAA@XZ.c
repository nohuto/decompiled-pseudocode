/*
 * XREFs of ??1CBaseClipStack@@UEAA@XZ @ 0x180058F20
 * Callers:
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18001F17C (--1COcclusionContext@@QEAA@XZ.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18002E3D4 (--1CDrawingContext@@MEAA@XZ.c)
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x18003BFA0 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??_GCBaseClipStack@@UEAAPEAXI@Z @ 0x1800F10B0 (--_GCBaseClipStack@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
