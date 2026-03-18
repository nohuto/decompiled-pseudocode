/*
 * XREFs of ?GetFrontBufferIndex@CAnalogSwapChain@@UEBAIXZ @ 0x1801286E0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CAnalogSwapChain::GetFrontBufferIndex(CAnalogSwapChain *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 72LL))(*((_QWORD *)this + 36));
}
