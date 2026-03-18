/*
 * XREFs of ?CheckDirectFlipSupport@CHwFullScreenRenderTarget@@UEAAJPEAUIDXGIResource@@PEA_N@Z @ 0x180006090
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CheckDirectFlipSupport(
        CHwFullScreenRenderTarget *this,
        struct IDXGIResource *a2,
        bool *a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  *a3 = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD, struct IDXGIResource *, bool *))(**((_QWORD **)this + 4) + 96LL))(
         *((_QWORD *)this + 4),
         a2,
         a3);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x1FAu);
  return v4;
}
