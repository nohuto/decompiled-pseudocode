/*
 * XREFs of ?GetLastPresentCountInternal@CAnalogSwapChain@@MEAAJPEAI@Z @ 0x180128720
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CAnalogSwapChain::GetLastPresentCountInternal(CAnalogSwapChain *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 36) + 40LL))(
           *((_QWORD *)this + 36),
           a2);
}
