/*
 * XREFs of ??1COcclusionContext@@QEAA@XZ @ 0x18001F17C
 * Callers:
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x18001F840 (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCGraphIterator@@QEAAPEAXI@Z @ 0x180031464 (--_GCGraphIterator@@QEAAPEAXI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x18005050C (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ??1CBaseClipStack@@UEAA@XZ @ 0x180058F20 (--1CBaseClipStack@@UEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall COcclusionContext::~COcclusionContext(COcclusionContext *this, unsigned int a2)
{
  CGraphIterator *v3; // rcx
  CContentBounder *v4; // rcx
  __int64 v5; // rdi

  *(_QWORD *)this = &COcclusionContext::`vftable'{for `IGraphIteratorSink'};
  *((_QWORD *)this + 1) = &COcclusionContext::`vftable'{for `IDrawingContext'};
  v3 = (CGraphIterator *)*((_QWORD *)this + 6);
  if ( v3 )
    CGraphIterator::`scalar deleting destructor'(v3, a2);
  v4 = (CContentBounder *)*((_QWORD *)this + 91);
  if ( v4 )
    CContentBounder::`scalar deleting destructor'(v4, a2);
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 12));
    *((_QWORD *)this + 12) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 736);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 89));
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 85));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 104);
  CBaseClipStack::~CBaseClipStack((COcclusionContext *)((char *)this + 56));
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 4));
}
