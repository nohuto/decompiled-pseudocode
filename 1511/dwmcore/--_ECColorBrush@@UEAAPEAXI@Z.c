/*
 * XREFs of ??_ECColorBrush@@UEAAPEAXI@Z @ 0x180113200
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CColorBrush@@UEAA@XZ @ 0x180112CE0 (--1CColorBrush@@UEAA@XZ.c)
 */

CColorBrush *__fastcall CColorBrush::`vector deleting destructor'(CColorBrush *this, char a2)
{
  CColorBrush::~CColorBrush(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CColorBrush *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
