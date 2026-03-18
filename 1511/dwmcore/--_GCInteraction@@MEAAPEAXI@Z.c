/*
 * XREFs of ??_GCInteraction@@MEAAPEAXI@Z @ 0x1800A7C14
 * Callers:
 *     ??_ECInteraction@@O7EAAPEAXI@Z @ 0x1800BD640 (--_ECInteraction@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CInteraction@@MEAA@XZ @ 0x1800A7B5C (--1CInteraction@@MEAA@XZ.c)
 */

CInteraction *__fastcall CInteraction::`scalar deleting destructor'(CInteraction *this, char a2)
{
  CInteraction::~CInteraction(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CInteraction *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
