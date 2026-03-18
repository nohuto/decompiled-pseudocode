/*
 * XREFs of ??1CDrawingContext@@MEAA@XZ @ 0x18002E3D4
 * Callers:
 *     ??_ECDrawingContext@@MEAAPEAXI@Z @ 0x18002E5A4 (--_ECDrawingContext@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize@CDrawingContext@@IEAAXXZ @ 0x18002E1F4 (-Uninitialize@CDrawingContext@@IEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1CBaseClipStack@@UEAA@XZ @ 0x180058F20 (--1CBaseClipStack@@UEAA@XZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x18007375C (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ??1CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x180076E20 (--1CDrawListPrimitiveBuilder@@QEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@@@Z @ 0x1801048CC (-ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@.c)
 */

void __fastcall CDrawingContext::~CDrawingContext(CDrawingContext *this)
{
  CVisual *v2; // rcx
  _QWORD *i; // rbx
  __int64 v4; // rdi
  CMILCOMBase *v5; // rcx

  *(_QWORD *)this = &CDrawingContext::`vftable'{for `IDrawingContext'};
  *((_QWORD *)this + 1) = &CDrawingContext::`vftable'{for `CResource'};
  *((_QWORD *)this + 6) = &CDrawingContext::`vftable'{for `IGraphIteratorSink'};
  *((_QWORD *)this + 7) = &CDrawingContext::`vftable'{for `ID2DContextOwner'};
  CDrawingContext::Uninitialize((CGraphIterator **)this);
  for ( i = (_QWORD *)((char *)this + 5648);
        (_QWORD *)*i != i;
        CVisual::ReleaseMoveRenderPassInfoForContext(v2, this, (struct CMoveRenderPassInfo *)(*i - 104LL)) )
  {
    ;
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 8LL))(*((_QWORD *)this + 3));
  v4 = *((_QWORD *)this + 415);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 415));
  v5 = (CMILCOMBase *)*((_QWORD *)this + 8);
  if ( v5 )
    CMILCOMBase::InternalRelease(v5);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 5672);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 5616);
  CDrawListPrimitiveBuilder::~CDrawListPrimitiveBuilder((CDrawingContext *)((char *)this + 3328));
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 325));
  CScopedClipStack::Clear((CDrawingContext *)((char *)this + 680));
  CBaseClipStack::~CBaseClipStack((CDrawingContext *)((char *)this + 2544));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 1472);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 680);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 83));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 584);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 520);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 63));
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 59));
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 55));
  CResource::~CResource((CDrawingContext *)((char *)this + 8));
}
