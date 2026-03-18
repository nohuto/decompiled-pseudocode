/*
 * XREFs of ?Release@Interpolation@Animations@Components@@QEAAXXZ @ 0x18016322C
 * Callers:
 *     ?Release@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800BA634 (-Release@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x180161C18 (-Assign@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpola.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall Components::Animations::Interpolation::Release(Components::Animations::Interpolation *this)
{
  if ( (*((_DWORD *)this + 2))-- == 1 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, Components::Animations::Interpolation *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                            + 32LL))(
      WPF::g_pProcessHeap,
      this);
}
