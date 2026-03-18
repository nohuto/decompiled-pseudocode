/*
 * XREFs of ?CheckDirectFlipSupport@CHwFullScreenRenderTarget@@UEAAJPEAUIDXGIResource@@PEA_N@Z @ 0x18000A820
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
