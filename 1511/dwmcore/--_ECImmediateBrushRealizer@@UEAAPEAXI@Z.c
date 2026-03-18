/*
 * XREFs of ??_ECImmediateBrushRealizer@@UEAAPEAXI@Z @ 0x1800AC440
 * Callers:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18008A57C (--1CLegacyMilBrushRealizer@@MEAA@XZ.c)
 */

CImmediateBrushRealizer *__fastcall CImmediateBrushRealizer::`vector deleting destructor'(
        CImmediateBrushRealizer *this,
        char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *, void *); // rsi

  *(_QWORD *)this = &CImmediateBrushRealizer::`vftable';
  CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v4(WPF::g_pProcessHeap, this);
  }
  return this;
}
