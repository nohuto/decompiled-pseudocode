/*
 * XREFs of ??1COcclusionContext@@QEAA@XZ @ 0x18005BD40
 * Callers:
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x18005C138 (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x18004AED0 (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ?Release@CRenderTargetImageSource@@UEAAKXZ @ 0x18004B000 (-Release@CRenderTargetImageSource@@UEAAKXZ.c)
 *     ??_GCVisualTreeIterator@@QEAAPEAXI@Z @ 0x18005FBE4 (--_GCVisualTreeIterator@@QEAAPEAXI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009A9F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x18009BC48 (--1CLightStack@@QEAA@XZ.c)
 *     ??1CBaseClipStack@@UEAA@XZ @ 0x1800A3818 (--1CBaseClipStack@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall COcclusionContext::~COcclusionContext(COcclusionContext *this, __int64 a2, __int64 a3)
{
  CVisualTreeIterator *v4; // rcx
  CContentBounder *v5; // rcx
  CRenderTargetImageSource *v6; // rcx
  void (*v7)(void); // rax
  void *v8; // rdx
  void (*v9)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  void *v10; // rdx
  void (*v11)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  void *v14; // rdx
  void (*v15)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  *(_QWORD *)this = &COcclusionContext::`vftable'{for `IGraphIteratorSink'};
  *((_QWORD *)this + 1) = &COcclusionContext::`vftable'{for `IDrawingContext'};
  v4 = (CVisualTreeIterator *)*((_QWORD *)this + 6);
  if ( v4 )
    CVisualTreeIterator::`scalar deleting destructor'(v4, a2);
  v5 = (CContentBounder *)*((_QWORD *)this + 120);
  if ( v5 )
    CContentBounder::`scalar deleting destructor'(v5);
  v6 = (CRenderTargetImageSource *)*((_QWORD *)this + 31);
  if ( v6 )
  {
    v7 = *(void (**)(void))(*(_QWORD *)v6 + 16LL);
    if ( (char *)v7 == (char *)CRenderTargetImageSource::Release )
      CRenderTargetImageSource::Release(v6);
    else
      v7();
    *((_QWORD *)this + 31) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 968, a2, a3);
  v8 = (void *)*((_QWORD *)this + 118);
  v9 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v9 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v8);
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v9)(WPF::g_pProcessHeap, v8);
  v10 = (void *)*((_QWORD *)this + 114);
  v11 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v11 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v10);
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v11)(WPF::g_pProcessHeap, v10);
  FastRegion::CRegion::FreeMemory((COcclusionContext *)((char *)this + 816));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 256, v12, v13);
  CLightStack::~CLightStack((COcclusionContext *)((char *)this + 96));
  CBaseClipStack::~CBaseClipStack((COcclusionContext *)((char *)this + 56));
  v14 = (void *)*((_QWORD *)this + 4);
  v15 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v15 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v14);
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v15)(WPF::g_pProcessHeap, v14);
}
