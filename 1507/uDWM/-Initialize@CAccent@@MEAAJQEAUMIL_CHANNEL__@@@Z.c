/*
 * XREFs of ?Initialize@CAccent@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180036B70
 * Callers:
 *     ?Create@CAccent@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180039FA0 (-Create@CAccent@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CCanvas@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180019970 (-Initialize@CCanvas@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?_AddOcclusionInstruction@CAccent@@IEAAJXZ @ 0x180036778 (-_AddOcclusionInstruction@CAccent@@IEAAJXZ.c)
 */

__int64 __fastcall CAccent::Initialize(CAccent *this, struct MIL_CHANNEL__ *const a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax

  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 70) = 4;
  *((_BYTE *)this + 296) = 0;
  v3 = CCanvas::Initialize(this, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0xF2u);
  }
  else
  {
    v5 = CAccent::_AddOcclusionInstruction(this);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0xF3u);
  }
  return v4;
}
