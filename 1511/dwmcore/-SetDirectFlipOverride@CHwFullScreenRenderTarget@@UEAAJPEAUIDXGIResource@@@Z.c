/*
 * XREFs of ?SetDirectFlipOverride@CHwFullScreenRenderTarget@@UEAAJPEAUIDXGIResource@@@Z @ 0x18000A760
 * Callers:
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180007060 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 * Callees:
 *     ?SetDirectFlipOverride@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@@Z @ 0x1800097F0 (-SetDirectFlipOverride@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::SetDirectFlipOverride(
        CHwFullScreenRenderTarget *this,
        struct IDXGIResource *a2)
{
  __int64 v2; // rbx
  __int64 (__fastcall *v5)(CDWMSwapChain *, struct IDXGIResource *); // rsi
  int v6; // eax
  unsigned int v7; // esi
  __int64 v8; // r14

  v2 = *((_QWORD *)this + 4);
  if ( !v2 )
    return 0LL;
  v5 = *(__int64 (__fastcall **)(CDWMSwapChain *, struct IDXGIResource *))(*(_QWORD *)v2 + 104LL);
  if ( v5 == CDWMSwapChain::SetDirectFlipOverride )
    v6 = CDWMSwapChain::SetDirectFlipOverride(*((CDWMSwapChain **)this + 4), a2);
  else
    v6 = v5(*((CDWMSwapChain **)this + 4), a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x212u);
  }
  else
  {
    v8 = *((_QWORD *)this + 22);
    if ( v8 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL))(*((_QWORD *)this + 22));
    *((_QWORD *)this + 22) = a2;
    if ( a2 )
      ((void (__fastcall *)(struct IDXGIResource *))a2->lpVtbl->AddRef)(a2);
  }
  return v7;
}
