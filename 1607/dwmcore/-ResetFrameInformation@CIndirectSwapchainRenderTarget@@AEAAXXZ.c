/*
 * XREFs of ?ResetFrameInformation@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180107E94
 * Callers:
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800A8C5C (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180107EE4 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CIndirectSwapchainRenderTarget::ResetFrameInformation(CIndirectSwapchainRenderTarget *this)
{
  char *v1; // rcx

  *((_BYTE *)this + 512) &= 0xF8u;
  v1 = (char *)this + 480;
  *((_DWORD *)v1 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v1, 1u);
}
