/*
 * XREFs of ?SetMultiplaneOverlayPresentInfo@CHwFullScreenRenderTarget@@UEAAJ_NIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1800BA180
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::SetMultiplaneOverlayPresentInfo(
        CHwFullScreenRenderTarget *this,
        char a2,
        unsigned int a3,
        struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a4)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  __int64 v10; // rdx
  int v11; // eax

  v4 = *((_QWORD *)this + 4);
  v5 = 0;
  if ( v4 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 24LL))(*((_QWORD *)this + 4)) )
    {
      LOBYTE(v10) = a2;
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *))(**((_QWORD **)this + 4) + 184LL))(
              *((_QWORD *)this + 4),
              v10,
              a3,
              a4);
      v5 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x2DDu);
    }
  }
  return v5;
}
