/*
 * XREFs of ??_ECMILFactory@@MEAAPEAXI@Z @ 0x18015A1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CMILFactory@@MEAA@XZ @ 0x18015A144 (--1CMILFactory@@MEAA@XZ.c)
 */

CMILFactory *__fastcall CMILFactory::`vector deleting destructor'(CMILFactory *this, char a2)
{
  CMILFactory::~CMILFactory(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CMILFactory *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
