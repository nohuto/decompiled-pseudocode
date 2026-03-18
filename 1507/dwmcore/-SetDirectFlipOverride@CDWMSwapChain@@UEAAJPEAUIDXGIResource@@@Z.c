/*
 * XREFs of ?SetDirectFlipOverride@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@@Z @ 0x180006100
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDWMSwapChain::SetDirectFlipOverride(CDWMSwapChain *this, struct IDXGIResource *a2)
{
  __int64 v2; // r14

  v2 = *((_QWORD *)this + 46);
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 46));
    *((_QWORD *)this + 46) = 0LL;
  }
  *((_QWORD *)this + 46) = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IDXGIResource *))a2->lpVtbl->AddRef)(a2);
  return 0LL;
}
