/*
 * XREFs of ?SetDirectFlipOverride@CHwFullScreenRenderTarget@@UEAAJPEAUIDXGIResource@@@Z @ 0x180005FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::SetDirectFlipOverride(
        CHwFullScreenRenderTarget *this,
        struct IDXGIResource *a2)
{
  __int64 v2; // r14
  int v5; // eax
  unsigned int v6; // ebp
  __int64 v7; // r14

  v2 = *((_QWORD *)this + 4);
  if ( !v2 )
    return 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, struct IDXGIResource *))(*(_QWORD *)v2 + 104LL))(*((_QWORD *)this + 4), a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x212u);
  }
  else
  {
    v7 = *((_QWORD *)this + 22);
    if ( v7 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*((_QWORD *)this + 22));
    *((_QWORD *)this + 22) = a2;
    if ( a2 )
      ((void (__fastcall *)(struct IDXGIResource *))a2->lpVtbl->AddRef)(a2);
  }
  return v6;
}
