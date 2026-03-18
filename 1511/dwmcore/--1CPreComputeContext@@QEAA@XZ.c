/*
 * XREFs of ??1CPreComputeContext@@QEAA@XZ @ 0x18004EB84
 * Callers:
 *     ??1CVisualTree@@UEAA@XZ @ 0x1800766F0 (--1CVisualTree@@UEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x1800A0BEC (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ??1CBaseClipStack@@UEAA@XZ @ 0x1800A2600 (--1CBaseClipStack@@UEAA@XZ.c)
 *     ??1CBspPreComputeHelper@@QEAA@XZ @ 0x1800ADABC (--1CBspPreComputeHelper@@QEAA@XZ.c)
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
