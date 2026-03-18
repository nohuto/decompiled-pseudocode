/*
 * XREFs of ?Render@CAnalogRenderTarget@@UEAAJ_NPEA_N@Z @ 0x180126F00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RenderComposition@CAnalogRenderTarget@@AEAAJPEA_N@Z @ 0x180126FA0 (-RenderComposition@CAnalogRenderTarget@@AEAAJPEA_N@Z.c)
 *     ?RenderExclusive@CAnalogRenderTarget@@AEAAJPEA_N@Z @ 0x18012727C (-RenderExclusive@CAnalogRenderTarget@@AEAAJPEA_N@Z.c)
 *     ?RenderSlate@CAnalogRenderTarget@@AEAAJPEA_N@Z @ 0x1801272F4 (-RenderSlate@CAnalogRenderTarget@@AEAAJPEA_N@Z.c)
 */

__int64 __fastcall CAnalogRenderTarget::Render(CAnalogRenderTarget *this, __int64 a2, bool *a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  unsigned int v6; // [rsp+20h] [rbp-18h]

  *a3 = 0;
  switch ( *((_DWORD *)this + 12) )
  {
    case 1:
      v4 = CAnalogRenderTarget::RenderComposition((CAnalogRenderTarget *)((char *)this - 40), a3);
      v3 = v4;
      if ( v4 >= 0 )
        return v3;
      v6 = 317;
      goto LABEL_11;
    case 2:
      v4 = CAnalogRenderTarget::RenderExclusive((CAnalogRenderTarget *)((char *)this - 40), a3);
      v3 = v4;
      if ( v4 >= 0 )
        return v3;
      v6 = 309;
      goto LABEL_11;
    case 3:
      v4 = CAnalogRenderTarget::RenderSlate((CAnalogRenderTarget *)((char *)this - 40), a3);
      v3 = v4;
      if ( v4 >= 0 )
        return v3;
      v6 = 313;
LABEL_11:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v6);
      return v3;
  }
  v3 = -2147418113;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x141u);
  return v3;
}
