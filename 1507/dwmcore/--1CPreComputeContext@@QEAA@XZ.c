/*
 * XREFs of ??1CPreComputeContext@@QEAA@XZ @ 0x18003BFA0
 * Callers:
 *     ??1CVisualTree@@UEAA@XZ @ 0x1800403BC (--1CVisualTree@@UEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x18005050C (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ??1CBaseClipStack@@UEAA@XZ @ 0x180058F20 (--1CBaseClipStack@@UEAA@XZ.c)
 *     ??1CBspPreComputeHelper@@QEAA@XZ @ 0x18005E40C (--1CBspPreComputeHelper@@QEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CPreComputeContext::~CPreComputeContext(CPreComputeContext *this, unsigned int a2)
{
  CContentBounder *v3; // rcx

  *(_QWORD *)this = &CPreComputeContext::`vftable';
  v3 = (CContentBounder *)*((_QWORD *)this + 34);
  if ( v3 )
    CContentBounder::`scalar deleting destructor'(v3, a2);
  CBspPreComputeHelper::~CBspPreComputeHelper((CPreComputeContext *)((char *)this + 352));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 312);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 280);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 30));
  CBaseClipStack::~CBaseClipStack((CPreComputeContext *)((char *)this + 144));
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 16));
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 12));
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 8));
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 4));
}
