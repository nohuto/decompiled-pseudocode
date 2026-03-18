/*
 * XREFs of ?GetLastPresentCountInternal@CStandardSwapChain@@MEAAJPEAI@Z @ 0x18014CE60
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CStandardSwapChain::GetLastPresentCountInternal(CStandardSwapChain *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 36) + 136LL))(
           *((_QWORD *)this + 36),
           a2);
}
