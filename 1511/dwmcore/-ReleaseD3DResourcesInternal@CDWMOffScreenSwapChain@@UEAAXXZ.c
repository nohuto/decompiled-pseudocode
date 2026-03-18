/*
 * XREFs of ?ReleaseD3DResourcesInternal@CDWMOffScreenSwapChain@@UEAAXXZ @ 0x180073420
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CDWMOffScreenSwapChain::ReleaseD3DResourcesInternal(CDWMOffScreenSwapChain *this)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)this + 36);
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *((_QWORD *)this + 36) = 0LL;
  }
}
