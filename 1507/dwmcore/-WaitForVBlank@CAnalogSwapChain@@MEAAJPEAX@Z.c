/*
 * XREFs of ?WaitForVBlank@CAnalogSwapChain@@MEAAJPEAX@Z @ 0x180128900
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CAnalogSwapChain::WaitForVBlank(CAnalogSwapChain *this, void *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 36) + 64LL))(*((_QWORD *)this + 36), a2);
}
