/*
 * XREFs of ?Render@CAnalogTextureTarget@@UEAAJ_NPEA_N@Z @ 0x180166630
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z @ 0x180166898 (-RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z.c)
 */

__int64 __fastcall CAnalogTextureTarget::Render(CAnalogTextureTarget *this, __int64 a2, bool *a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  *a3 = 0;
  v3 = CAnalogTextureTarget::RenderSlate((CAnalogTextureTarget *)((char *)this - 112), a3);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xA5u);
  return v4;
}
