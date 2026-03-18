/*
 * XREFs of ?GetLastPresentCount@CAnalogTextureTarget@@UEAAJPEAI@Z @ 0x18013C260
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnalogTextureTarget::GetLastPresentCount(CAnalogTextureTarget *this, unsigned int *a2)
{
  __int64 v2; // rdi
  int v3; // eax
  unsigned int v4; // ebx

  v2 = *((_QWORD *)this + 18);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(v2 + 176) + 224LL))(v2 + 176, a2);
    v4 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x101u);
  }
  else
  {
    v4 = -2003304307;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304307, 0x105u);
  }
  return v4;
}
