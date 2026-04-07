/*
 * XREFs of ??_ECDrawNineGridInstruction@@MEAAPEAXI@Z @ 0x18000A670
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18001F3D0 (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ??1CDrawNineGridInstruction@@MEAA@XZ @ 0x18000AA98 (--1CDrawNineGridInstruction@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002ADD0 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CDrawNineGridInstruction *__fastcall CDrawNineGridInstruction::`vector deleting destructor'(
        CDrawNineGridInstruction *this,
        char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  CDrawNineGridInstruction::~CDrawNineGridInstruction(this);
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
