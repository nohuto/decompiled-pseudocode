/*
 * XREFs of ?WaitForVBlank@CAnalogSwapChain@@MEAAJPEAX@Z @ 0x18013EA10
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CAnalogSwapChain::WaitForVBlank(CAnalogSwapChain *this, void *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 36) + 64LL))(*((_QWORD *)this + 36), a2);
}
