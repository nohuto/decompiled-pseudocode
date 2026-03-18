/*
 * XREFs of ?UpdateAlphaMode@CD2DBitmap@@UEAAJW4D2D1_ALPHA_MODE@@@Z @ 0x18014DE90
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?InitializeBitmaps@CD2DBitmap@@IEAAJXZ @ 0x180030BE4 (-InitializeBitmaps@CD2DBitmap@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DBitmap::UpdateAlphaMode(CD2DBitmap *this, enum D2D1_ALPHA_MODE a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  __int64 v5; // rsi
  int v6; // eax

  v2 = 0;
  if ( *((_DWORD *)this + 29) != a2 )
  {
    v4 = *((_QWORD *)this + 6);
    *((_DWORD *)this + 29) = a2;
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      *((_QWORD *)this + 6) = 0LL;
    }
    v5 = *((_QWORD *)this + 7);
    if ( v5 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 7));
      *((_QWORD *)this + 7) = 0LL;
    }
    v6 = CD2DBitmap::InitializeBitmaps((CD2DBitmap *)((char *)this - 104));
    v2 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1DDu);
  }
  return v2;
}
