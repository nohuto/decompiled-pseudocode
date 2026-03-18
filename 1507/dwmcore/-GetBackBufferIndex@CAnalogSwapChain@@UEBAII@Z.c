/*
 * XREFs of ?GetBackBufferIndex@CAnalogSwapChain@@UEBAII@Z @ 0x1801284A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CAnalogSwapChain::GetBackBufferIndex(CAnalogSwapChain *this, unsigned int a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 36) + 80LL))(*((_QWORD *)this + 36), a2);
}
