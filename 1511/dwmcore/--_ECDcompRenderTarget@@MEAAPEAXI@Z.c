/*
 * XREFs of ??_ECDcompRenderTarget@@MEAAPEAXI@Z @ 0x1800B2BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CDcompRenderTarget@@MEAA@XZ @ 0x1800B2CE0 (--1CDcompRenderTarget@@MEAA@XZ.c)
 */

CDcompRenderTarget *__fastcall CDcompRenderTarget::`vector deleting destructor'(CDcompRenderTarget *this, char a2)
{
  CDcompRenderTarget::~CDcompRenderTarget(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDcompRenderTarget *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
