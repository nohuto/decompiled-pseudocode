/*
 * XREFs of ??_GCD2DFactory@@EEAAPEAXI@Z @ 0x18013A8F0
 * Callers:
 *     ??_ECD2DFactory@@G7EAAPEAXI@Z @ 0x1800BD7D0 (--_ECD2DFactory@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CD2DFactory@@EEAA@XZ @ 0x18013A86C (--1CD2DFactory@@EEAA@XZ.c)
 */

CD2DFactory *__fastcall CD2DFactory::`scalar deleting destructor'(CD2DFactory *this, char a2)
{
  CD2DFactory::~CD2DFactory(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD2DFactory *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
