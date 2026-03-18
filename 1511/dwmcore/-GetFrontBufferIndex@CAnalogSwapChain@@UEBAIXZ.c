/*
 * XREFs of ?GetFrontBufferIndex@CAnalogSwapChain@@UEBAIXZ @ 0x18013E7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CAnalogSwapChain::GetFrontBufferIndex(CAnalogSwapChain *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 72LL))(*((_QWORD *)this + 36));
}
