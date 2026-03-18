/*
 * XREFs of ??_GCLegacyMilBrushRealizer@@MEAAPEAXI@Z @ 0x180130ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18008A57C (--1CLegacyMilBrushRealizer@@MEAA@XZ.c)
 */

CLegacyMilBrushRealizer *__fastcall CLegacyMilBrushRealizer::`scalar deleting destructor'(
        CLegacyMilBrushRealizer *this,
        char a2)
{
  CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CLegacyMilBrushRealizer *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
