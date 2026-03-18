/*
 * XREFs of ??1CPreComputeContext@@QEAA@XZ @ 0x18006185C
 * Callers:
 *     ??_ECVisualTree@@UEAAPEAXI@Z @ 0x1800B85E0 (--_ECVisualTree@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x18004AED0 (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1CBaseClipStack@@UEAA@XZ @ 0x1800A3818 (--1CBaseClipStack@@UEAA@XZ.c)
 *     ??1CBspPreComputeHelper@@QEAA@XZ @ 0x1800B1ED8 (--1CBspPreComputeHelper@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPreComputeContext::~CPreComputeContext(CPreComputeContext *this)
{
  CContentBounder *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8

  *(_QWORD *)this = &CPreComputeContext::`vftable';
  v2 = (CContentBounder *)*((_QWORD *)this + 34);
  if ( v2 )
    CContentBounder::`scalar deleting destructor'(v2);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 96));
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 91));
  CBspPreComputeHelper::~CBspPreComputeHelper((CPreComputeContext *)((char *)this + 384));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 352, v3, v4);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 312, v5, v6);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 280, v7, v8);
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
