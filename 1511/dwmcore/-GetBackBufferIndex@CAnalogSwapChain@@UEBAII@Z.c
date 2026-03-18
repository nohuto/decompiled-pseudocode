/*
 * XREFs of ?GetBackBufferIndex@CAnalogSwapChain@@UEBAII@Z @ 0x18013E5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CAnalogSwapChain::GetBackBufferIndex(CAnalogSwapChain *this, unsigned int a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 36) + 80LL))(*((_QWORD *)this + 36), a2);
}
