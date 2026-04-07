/*
 * XREFs of ??_ECCachedVisualImageBrushResource@@MEAAPEAXI@Z @ 0x180009CC0
 * Callers:
 *     ??_ECDrawGeometryInstruction@@EEAAPEAXI@Z @ 0x180017C40 (--_ECDrawGeometryInstruction@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1CCachedVisualImageBrushResource@@MEAA@XZ @ 0x180009D18 (--1CCachedVisualImageBrushResource@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002ADD0 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CCachedVisualImageBrushResource *__fastcall CCachedVisualImageBrushResource::`vector deleting destructor'(
        CCachedVisualImageBrushResource *this,
        char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  CCachedVisualImageBrushResource::~CCachedVisualImageBrushResource(this);
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
