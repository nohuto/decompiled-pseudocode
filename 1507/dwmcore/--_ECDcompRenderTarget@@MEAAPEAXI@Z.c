/*
 * XREFs of ??_ECDcompRenderTarget@@MEAAPEAXI@Z @ 0x180060BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDcompRenderTarget@@MEAA@XZ @ 0x180060C40 (--1CDcompRenderTarget@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
