/*
 * XREFs of ?Release@Interpolation@Animations@Components@@QEAAXXZ @ 0x18015556C
 * Callers:
 *     ?Release@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180097930 (-Release@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x180154880 (-Assign@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpola.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall Components::Animations::Interpolation::Release(Components::Animations::Interpolation *this)
{
  if ( (*((_DWORD *)this + 2))-- == 1 )
    (**(void (__fastcall ***)(Components::Animations::Interpolation *, __int64))this)(this, 1LL);
}
