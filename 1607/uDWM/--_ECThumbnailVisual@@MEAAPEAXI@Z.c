/*
 * XREFs of ??_ECThumbnailVisual@@MEAAPEAXI@Z @ 0x180017650
 * Callers:
 *     <none>
 * Callees:
 *     ??1CThumbnailVisual@@MEAA@XZ @ 0x180017504 (--1CThumbnailVisual@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002ADD0 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CThumbnailVisual *__fastcall CThumbnailVisual::`vector deleting destructor'(CThumbnailVisual *this, char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  CThumbnailVisual::~CThumbnailVisual(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v4(WPF::g_pProcessHeap, this);
  }
  return this;
}
