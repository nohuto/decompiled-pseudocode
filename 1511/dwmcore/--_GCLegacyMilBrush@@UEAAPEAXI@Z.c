/*
 * XREFs of ??_GCLegacyMilBrush@@UEAAPEAXI@Z @ 0x18010B200
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CLegacyMilBrush@@UEAA@XZ @ 0x18005D6F0 (--1CLegacyMilBrush@@UEAA@XZ.c)
 */

CLegacyMilBrush *__fastcall CLegacyMilBrush::`scalar deleting destructor'(CLegacyMilBrush *this, char a2)
{
  CLegacyMilBrush::~CLegacyMilBrush(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CLegacyMilBrush *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
