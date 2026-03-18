/*
 * XREFs of ??1CBaseClipStack@@UEAA@XZ @ 0x1800A3818
 * Callers:
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18005BD40 (--1COcclusionContext@@QEAA@XZ.c)
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x18006185C (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18006BF80 (--1CDrawingContext@@MEAA@XZ.c)
 *     ??_GCBaseClipStack@@UEAAPEAXI@Z @ 0x18018CBA0 (--_GCBaseClipStack@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBaseClipStack::~CBaseClipStack(CBaseClipStack *this)
{
  WPF::ProcessHeapImpl *v1; // r8
  void *v2; // rdx
  void (__fastcall *v3)(WPF::ProcessHeapImpl *, void *); // rax

  v1 = WPF::g_pProcessHeap;
  v2 = (void *)*((_QWORD *)this + 3);
  *(_QWORD *)this = &CBaseClipStack::`vftable';
  v3 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)v1 + 32LL);
  if ( v3 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(v1, v2);
  else
    v3(v1, v2);
}
