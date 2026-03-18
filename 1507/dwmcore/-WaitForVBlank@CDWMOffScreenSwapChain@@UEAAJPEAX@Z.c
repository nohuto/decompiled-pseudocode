/*
 * XREFs of ?WaitForVBlank@CDWMOffScreenSwapChain@@UEAAJPEAX@Z @ 0x18008C1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::WaitForVBlank(CDWMOffScreenSwapChain *this, void *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 59) + 48LL))(*((_QWORD *)this + 59), a2);
}
