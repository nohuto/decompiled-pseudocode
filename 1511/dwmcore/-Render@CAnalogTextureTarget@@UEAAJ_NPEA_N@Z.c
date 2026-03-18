/*
 * XREFs of ?Render@CAnalogTextureTarget@@UEAAJ_NPEA_N@Z @ 0x18013C5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z @ 0x18013C844 (-RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z.c)
 */

__int64 __fastcall CAnalogTextureTarget::Render(CAnalogTextureTarget *this, __int64 a2, bool *a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  *a3 = 0;
  v3 = CAnalogTextureTarget::RenderSlate((CAnalogTextureTarget *)((char *)this - 40), a3);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xA6u);
  return v4;
}
