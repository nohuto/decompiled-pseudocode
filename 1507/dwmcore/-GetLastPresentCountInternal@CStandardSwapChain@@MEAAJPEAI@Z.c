/*
 * XREFs of ?GetLastPresentCountInternal@CStandardSwapChain@@MEAAJPEAI@Z @ 0x18013CEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CStandardSwapChain::GetLastPresentCountInternal(CStandardSwapChain *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 36) + 136LL))(
           *((_QWORD *)this + 36),
           a2);
}
