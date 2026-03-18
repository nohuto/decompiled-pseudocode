/*
 * XREFs of ??_G?$LocalMILObject@VCImmediateBrushRealizer@@@@UEAAPEAXI@Z @ 0x18010AF50
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18008A57C (--1CLegacyMilBrushRealizer@@MEAA@XZ.c)
 */

CLegacyMilBrushRealizer *__fastcall LocalMILObject<CImmediateBrushRealizer>::`scalar deleting destructor'(
        CLegacyMilBrushRealizer *a1,
        char a2)
{
  *(_QWORD *)a1 = &CImmediateBrushRealizer::`vftable';
  CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CLegacyMilBrushRealizer *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
