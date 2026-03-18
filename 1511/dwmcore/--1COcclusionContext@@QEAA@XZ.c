/*
 * XREFs of ??1COcclusionContext@@QEAA@XZ @ 0x180054ED0
 * Callers:
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x1800556AC (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CConnection@@UEAAKXZ @ 0x180036370 (-Release@CConnection@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??_GCVisualTreeIterator@@QEAAPEAXI@Z @ 0x1800520F4 (--_GCVisualTreeIterator@@QEAAPEAXI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x1800A0BEC (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ??1CBaseClipStack@@UEAA@XZ @ 0x1800A2600 (--1CBaseClipStack@@UEAA@XZ.c)
 */

void __fastcall COcclusionContext::~COcclusionContext(COcclusionContext *this, unsigned int a2)
{
  void **v3; // rcx
  CContentBounder *v4; // rcx
  __int64 v5; // rdi
  unsigned int (__fastcall *v6)(CConnection *); // rsi
  void (__fastcall *v7)(WPF::ProcessHeapImpl *, void *); // rsi
  void (__fastcall *v8)(WPF::ProcessHeapImpl *, void *); // rsi
  void *v9; // rsi
  void (__fastcall *v10)(WPF::ProcessHeapImpl *, void *); // rbx

  *(_QWORD *)this = &COcclusionContext::`vftable'{for `IGraphIteratorSink'};
  *((_QWORD *)this + 1) = &COcclusionContext::`vftable'{for `IDrawingContext'};
  v3 = (void **)*((_QWORD *)this + 6);
  if ( v3 )
    CVisualTreeIterator::`scalar deleting destructor'(v3);
  v4 = (CContentBounder *)*((_QWORD *)this + 91);
  if ( v4 )
    CContentBounder::`scalar deleting destructor'(v4, a2);
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
  {
    v6 = *(unsigned int (__fastcall **)(CConnection *))(*(_QWORD *)v5 + 16LL);
    if ( v6 == CConnection::Release )
      CConnection::Release(*((CConnection **)this + 12));
    else
      v6(*((CConnection **)this + 12));
    *((_QWORD *)this + 12) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 736);
  v7 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v7 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)this + 89));
  else
    v7(WPF::g_pProcessHeap, *((void **)this + 89));
  v8 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v8 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)this + 85));
  else
    v8(WPF::g_pProcessHeap, *((void **)this + 85));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 104);
  CBaseClipStack::~CBaseClipStack((COcclusionContext *)((char *)this + 56));
  v9 = (void *)*((_QWORD *)this + 4);
  v10 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v10 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v9);
  else
    v10(WPF::g_pProcessHeap, v9);
}
