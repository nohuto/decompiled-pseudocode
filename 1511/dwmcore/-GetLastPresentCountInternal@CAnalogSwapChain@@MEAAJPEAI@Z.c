/*
 * XREFs of ?GetLastPresentCountInternal@CAnalogSwapChain@@MEAAJPEAI@Z @ 0x18013E830
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CAnalogSwapChain::GetLastPresentCountInternal(CAnalogSwapChain *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 36) + 40LL))(
           *((_QWORD *)this + 36),
           a2);
}
