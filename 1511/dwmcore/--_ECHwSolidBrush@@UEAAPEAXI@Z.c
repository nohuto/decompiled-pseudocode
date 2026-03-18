/*
 * XREFs of ??_ECHwSolidBrush@@UEAAPEAXI@Z @ 0x1800273EC
 * Callers:
 *     ??1CHwBrushPool@@QEAA@XZ @ 0x18002BC30 (--1CHwBrushPool@@QEAA@XZ.c)
 *     ??_ECHwSolidBrush@@WBA@EAAPEAXI@Z @ 0x1800BE370 (--_ECHwSolidBrush@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CHwConstantColorSource@@MEAA@XZ @ 0x1800B3FD4 (--1CHwConstantColorSource@@MEAA@XZ.c)
 */

CHwSolidBrush *__fastcall CHwSolidBrush::`vector deleting destructor'(CHwSolidBrush *this, char a2)
{
  __int64 v2; // rdi

  v2 = *((_QWORD *)this + 8);
  *(_QWORD *)this = &CHwSolidBrush::`vftable'{for `CHwBrush'};
  *((_QWORD *)this + 2) = &CHwSolidBrush::`vftable'{for `CHwConstantMilColorFColorSource'};
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CHwConstantColorSource::~CHwConstantColorSource((CHwSolidBrush *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwSolidBrush *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
