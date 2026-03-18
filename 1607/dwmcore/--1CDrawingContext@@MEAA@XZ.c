/*
 * XREFs of ??1CDrawingContext@@MEAA@XZ @ 0x18006BF80
 * Callers:
 *     ??_ECDrawingContext@@MEAAPEAXI@Z @ 0x18006C1D0 (--_ECDrawingContext@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CVisualTree@@UEAAKXZ @ 0x180038B80 (-Release@CVisualTree@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Uninitialize@CDrawingContext@@IEAAXXZ @ 0x18006BD90 (-Uninitialize@CDrawingContext@@IEAAXXZ.c)
 *     ??1CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x1800975DC (--1CDrawListPrimitiveBuilder@@QEAA@XZ.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x18009845C (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x18009BC48 (--1CLightStack@@QEAA@XZ.c)
 *     ??1CBaseClipStack@@UEAA@XZ @ 0x1800A3818 (--1CBaseClipStack@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@@@Z @ 0x180138BAC (-ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@.c)
 */

void __fastcall CDrawingContext::~CDrawingContext(CDrawingContext *this)
{
  CVisual *v2; // rcx
  _QWORD *i; // rbx
  CVisualTree *v4; // rcx
  void (*v5)(void); // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  CMILCOMBase *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  void *v12; // rdx
  void (__fastcall *v13)(WPF::ProcessHeapImpl *, void *); // rax
  void *v14; // rdx
  void (__fastcall *v15)(WPF::ProcessHeapImpl *, void *); // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  void *v20; // rdx
  void (__fastcall *v21)(WPF::ProcessHeapImpl *, void *); // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r8
  void *v26; // rdx
  void (__fastcall *v27)(WPF::ProcessHeapImpl *, void *); // rax
  void *v28; // rdx
  void (__fastcall *v29)(WPF::ProcessHeapImpl *, void *); // rax
  void *v30; // rdx
  void (__fastcall *v31)(WPF::ProcessHeapImpl *, void *); // rax

  *(_QWORD *)this = &CDrawingContext::`vftable'{for `IDrawingContext'};
  *((_QWORD *)this + 1) = &CDrawingContext::`vftable'{for `CResource'};
  *((_QWORD *)this + 15) = &CDrawingContext::`vftable'{for `IGraphIteratorSink'};
  *((_QWORD *)this + 16) = &CDrawingContext::`vftable'{for `ID2DContextOwner'};
  CDrawingContext::Uninitialize((CMILRefCountBase **)this);
  for ( i = (_QWORD *)((char *)this + 6368);
        (_QWORD *)*i != i;
        CVisual::ReleaseMoveRenderPassInfoForContext(v2, this, (struct CMoveRenderPassInfo *)(*i - 104LL)) )
  {
    ;
  }
  v4 = (CVisualTree *)*((_QWORD *)this + 3);
  v5 = *(void (**)(void))(*(_QWORD *)v4 + 8LL);
  if ( (char *)v5 == (char *)CVisualTree::Release )
    CVisualTree::Release(v4);
  else
    v5();
  v8 = *((_QWORD *)this + 477);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = (CMILCOMBase *)*((_QWORD *)this + 17);
  if ( v9 )
    CMILCOMBase::InternalRelease(v9);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 6392, v6, v7);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 6336, v10, v11);
  CDrawListPrimitiveBuilder::~CDrawListPrimitiveBuilder((CDrawingContext *)((char *)this + 3824));
  v12 = (void *)*((_QWORD *)this + 395);
  v13 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v13 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v12);
  else
    v13(WPF::g_pProcessHeap, v12);
  v14 = (void *)*((_QWORD *)this + 379);
  v15 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v15 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v14);
  else
    v15(WPF::g_pProcessHeap, v14);
  CScopedClipStack::Clear((CDrawingContext *)((char *)this + 912));
  CBaseClipStack::~CBaseClipStack((CDrawingContext *)((char *)this + 2976));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 1744, v16, v17);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 912, v18, v19);
  v20 = (void *)*((_QWORD *)this + 112);
  v21 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v21 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v20);
  else
    v21(WPF::g_pProcessHeap, v20);
  CLightStack::~CLightStack((CDrawingContext *)((char *)this + 728));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 664, v22, v23);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 600, v24, v25);
  v26 = (void *)*((_QWORD *)this + 73);
  v27 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v27 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v26);
  else
    v27(WPF::g_pProcessHeap, v26);
  v28 = (void *)*((_QWORD *)this + 69);
  v29 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v29 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v28);
  else
    v29(WPF::g_pProcessHeap, v28);
  v30 = (void *)*((_QWORD *)this + 65);
  v31 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v31 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v30);
  else
    v31(WPF::g_pProcessHeap, v30);
  CResource::~CResource((CDrawingContext *)((char *)this + 8));
}
