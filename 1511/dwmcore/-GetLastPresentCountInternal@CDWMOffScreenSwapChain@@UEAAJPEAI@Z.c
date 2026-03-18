/*
 * XREFs of ?GetLastPresentCountInternal@CDWMOffScreenSwapChain@@UEAAJPEAI@Z @ 0x1800B5500
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::GetLastPresentCountInternal(CDWMOffScreenSwapChain *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 59) + 32LL))(
           *((_QWORD *)this + 59),
           a2);
}
