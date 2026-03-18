/*
 * XREFs of ?Present@CAnalogTextureTarget@@UEAAJ_NI@Z @ 0x18013C470
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnalogTextureTarget::Present(CAnalogTextureTarget *this)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  int v3; // eax

  v1 = *((_QWORD *)this + 18);
  v2 = 0;
  if ( v1 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v1 + 176) + 176LL))(
           v1 + 176,
           0LL,
           0LL,
           0LL);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x22Eu);
  }
  return v2;
}
