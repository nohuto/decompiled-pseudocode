/*
 * XREFs of ??_GCTileLegacyMilBrush@@MEAAPEAXI@Z @ 0x180113520
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CTileLegacyMilBrush@@MEAA@XZ @ 0x18005CE6C (--1CTileLegacyMilBrush@@MEAA@XZ.c)
 */

CTileLegacyMilBrush *__fastcall CTileLegacyMilBrush::`scalar deleting destructor'(CTileLegacyMilBrush *this, char a2)
{
  CTileLegacyMilBrush::~CTileLegacyMilBrush(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CTileLegacyMilBrush *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
