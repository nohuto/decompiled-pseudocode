/*
 * XREFs of ?GetLastPresentCountInternal@CDWMOffScreenSwapChain@@UEAAJPEAI@Z @ 0x18008C210
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::GetLastPresentCountInternal(CDWMOffScreenSwapChain *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 59) + 32LL))(
           *((_QWORD *)this + 59),
           a2);
}
