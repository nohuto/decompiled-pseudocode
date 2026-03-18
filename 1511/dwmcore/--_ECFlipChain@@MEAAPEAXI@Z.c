/*
 * XREFs of ??_ECFlipChain@@MEAAPEAXI@Z @ 0x180125588
 * Callers:
 *     ??_ECFlipChain@@OBA@EAAPEAXI@Z @ 0x1800BD4A0 (--_ECFlipChain@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CFlipChain@@MEAA@XZ @ 0x18012539C (--1CFlipChain@@MEAA@XZ.c)
 */

CFlipChain *__fastcall CFlipChain::`vector deleting destructor'(CFlipChain *this, char a2)
{
  CFlipChain::~CFlipChain(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CFlipChain *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
