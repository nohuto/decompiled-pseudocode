/*
 * XREFs of ?SetDirectFlipOverride@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@@Z @ 0x1800097F0
 * Callers:
 *     ?SetDirectFlipOverride@CHwFullScreenRenderTarget@@UEAAJPEAUIDXGIResource@@@Z @ 0x18000A760 (-SetDirectFlipOverride@CHwFullScreenRenderTarget@@UEAAJPEAUIDXGIResource@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CDWMSwapChain::SetDirectFlipOverride(CDWMSwapChain *this, struct IDXGIResource *a2)
{
  __int64 v2; // r14

  v2 = *((_QWORD *)this + 44);
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 44));
    *((_QWORD *)this + 44) = 0LL;
  }
  *((_QWORD *)this + 44) = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IDXGIResource *))a2->lpVtbl->AddRef)(a2);
  return 0LL;
}
