/*
 * XREFs of ?WaitForVBlank@CDWMOffScreenSwapChain@@UEAAJPEAX@Z @ 0x1800B54C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::WaitForVBlank(CDWMOffScreenSwapChain *this, void *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 59) + 48LL))(*((_QWORD *)this + 59), a2);
}
