/*
 * XREFs of ??_GCPrimitiveColor@@MEAAPEAXI@Z @ 0x18000F95C
 * Callers:
 *     ??_ECPrimitiveColor@@O7EAAPEAXI@Z @ 0x1800BCD60 (--_ECPrimitiveColor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CPrimitiveColor@@MEAA@XZ @ 0x18000F910 (--1CPrimitiveColor@@MEAA@XZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

CPrimitiveColor *__fastcall CPrimitiveColor::`scalar deleting destructor'(CPrimitiveColor *this, char a2)
{
  CPrimitiveColor::~CPrimitiveColor(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CPrimitiveColor *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
