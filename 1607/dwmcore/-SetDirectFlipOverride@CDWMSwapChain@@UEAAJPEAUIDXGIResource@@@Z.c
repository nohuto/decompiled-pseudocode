/*
 * XREFs of ?SetDirectFlipOverride@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@@Z @ 0x18017CC30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::SetDirectFlipOverride(CDWMSwapChain *this, struct IDXGIResource *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 44);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 44) = 0LL;
  }
  *((_QWORD *)this + 44) = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IDXGIResource *))a2->lpVtbl->AddRef)(a2);
  return 0LL;
}
