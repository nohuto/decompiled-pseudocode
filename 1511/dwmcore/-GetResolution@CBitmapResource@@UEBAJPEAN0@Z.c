/*
 * XREFs of ?GetResolution@CBitmapResource@@UEBAJPEAN0@Z @ 0x18005C500
 * Callers:
 *     ?GetResolution@CGdiSpriteBitmap@@UEBAJPEAN0@Z @ 0x180124F20 (-GetResolution@CGdiSpriteBitmap@@UEBAJPEAN0@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBitmapResource::GetResolution(CBitmapResource *this, double *a2, double *a3)
{
  __int64 v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx

  v3 = *((_QWORD *)this + 7);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, double *, double *))(*(_QWORD *)v3 + 64LL))(*((_QWORD *)this + 7), a2, a3);
    v5 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x9Bu);
  }
  else
  {
    v5 = -2003292404;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292404, 0x9Fu);
  }
  return v5;
}
