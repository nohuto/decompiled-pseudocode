/*
 * XREFs of ??1CDrawingContext@@MEAA@XZ @ 0x1800438D4
 * Callers:
 *     ??_ECDrawingContext@@MEAAPEAXI@Z @ 0x180043BE4 (--_ECDrawingContext@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CVisualTree@@UEAAKXZ @ 0x180003C90 (-Release@CVisualTree@@UEAAKXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1Mesh@@QEAA@XZ @ 0x18001FCCC (--1Mesh@@QEAA@XZ.c)
 *     ?Uninitialize@CDrawingContext@@IEAAXXZ @ 0x1800436C0 (-Uninitialize@CDrawingContext@@IEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x180058F14 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??1CBaseClipStack@@UEAA@XZ @ 0x1800A2600 (--1CBaseClipStack@@UEAA@XZ.c)
 *     ?ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@@@Z @ 0x180120C94 (-ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@.c)
 */

void __fastcall CDrawingContext::~CDrawingContext(CDrawingContext *this)
{
  CResource *v2; // r15
  CVisual *v3; // rcx
  _QWORD *i; // rbx
  unsigned int (__fastcall *v5)(CVisualTree *); // rsi
  __int64 v6; // rsi
  CMILCOMBase *v7; // rcx
  __int64 v8; // r14
  void (*v9)(WPF::ProcessHeapImpl *__hidden, void *); // rsi
  void (*v10)(WPF::ProcessHeapImpl *__hidden, void *); // rsi
  void (*v11)(WPF::ProcessHeapImpl *__hidden, void *); // rbp
  void (*v12)(WPF::ProcessHeapImpl *__hidden, void *); // rsi
  void (*v13)(WPF::ProcessHeapImpl *__hidden, void *); // rsi
  void *v14; // rsi
  void (*v15)(WPF::ProcessHeapImpl *__hidden, void *); // rdi

  *(_QWORD *)this = &CDrawingContext::`vftable'{for `IDrawingContext'};
  v2 = (CDrawingContext *)((char *)this + 8);
  *((_QWORD *)this + 1) = &CDrawingContext::`vftable'{for `CResource'};
  *((_QWORD *)this + 6) = &CDrawingContext::`vftable'{for `IGraphIteratorSink'};
  *((_QWORD *)this + 7) = &CDrawingContext::`vftable'{for `ID2DContextOwner'};
  CDrawingContext::Uninitialize((CMILRefCountBase **)this);
  for ( i = (_QWORD *)((char *)this + 5680);
        (_QWORD *)*i != i;
        CVisual::ReleaseMoveRenderPassInfoForContext(v3, this, (struct CMoveRenderPassInfo *)(*i - 104LL)) )
  {
    ;
  }
  v5 = *(unsigned int (__fastcall **)(CVisualTree *))(**((_QWORD **)this + 3) + 8LL);
  if ( v5 == CVisualTree::Release )
    CVisualTree::Release(*((CVisualTree **)this + 3));
  else
    v5(*((CVisualTree **)this + 3));
  v6 = *((_QWORD *)this + 419);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 419));
  v7 = (CMILCOMBase *)*((_QWORD *)this + 8);
  if ( v7 )
    CMILCOMBase::InternalRelease(v7);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 5704);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 5648);
  v8 = *((_QWORD *)this + 690);
  if ( v8 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL))(*((_QWORD *)this + 690));
    *((_QWORD *)this + 690) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 5424);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 3472);
  Mesh::~Mesh((Mesh::MeshGraph **)this + 420);
  v9 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v9 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)this + 340));
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, _QWORD))v9)(WPF::g_pProcessHeap, *((_QWORD *)this + 340));
  v10 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v10 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)this + 325));
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, _QWORD))v10)(WPF::g_pProcessHeap, *((_QWORD *)this + 325));
  CScopedClipStack::Clear((CDrawingContext *)((char *)this + 680));
  CBaseClipStack::~CBaseClipStack((CDrawingContext *)((char *)this + 2544));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 1472);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 680);
  v11 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v11 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)this + 83));
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, _QWORD))v11)(WPF::g_pProcessHeap, *((_QWORD *)this + 83));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 584);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 520);
  v12 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v12 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)this + 63));
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, _QWORD))v12)(WPF::g_pProcessHeap, *((_QWORD *)this + 63));
  v13 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v13 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)this + 59));
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, _QWORD))v13)(WPF::g_pProcessHeap, *((_QWORD *)this + 59));
  v14 = (void *)*((_QWORD *)this + 55);
  v15 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v15 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v14);
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v15)(WPF::g_pProcessHeap, v14);
  CResource::~CResource(v2);
}
