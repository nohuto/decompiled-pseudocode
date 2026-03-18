/*
 * XREFs of ?SetDirectFlipOverride@CHwFullScreenRenderTarget@@UEAAJPEAUIDXGIResource@@@Z @ 0x180180300
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::SetDirectFlipOverride(
        CHwFullScreenRenderTarget *this,
        struct IDXGIResource *a2)
{
  __int64 v4; // rcx
  int v6; // eax
  unsigned int v7; // esi
  __int64 v8; // rcx

  v4 = *((_QWORD *)this + 5);
  if ( !v4 )
    return 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 104LL))(v4);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x217u);
  }
  else
  {
    v8 = *((_QWORD *)this + 24);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *((_QWORD *)this + 24) = a2;
    if ( a2 )
      ((void (__fastcall *)(struct IDXGIResource *))a2->lpVtbl->AddRef)(a2);
  }
  return v7;
}
