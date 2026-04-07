/*
 * XREFs of ?Initialize@CAccent@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180015800
 * Callers:
 *     ?Create@CAccent@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003EFD8 (-Create@CAccent@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_AddOcclusionInstruction@CAccent@@IEAAJXZ @ 0x180015410 (-_AddOcclusionInstruction@CAccent@@IEAAJXZ.c)
 *     ?Initialize@CCanvas@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001F8D0 (-Initialize@CCanvas@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
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
