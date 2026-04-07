/*
 * XREFs of ?Initialize@CAtlasedRectsVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180020DF0
 * Callers:
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180013848 (-Create@CTopLevelAtlasedRectsVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Initialize@CButton@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001F510 (-Initialize@CButton@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJQEAUMIL_CHANNEL__@@_N@Z @ 0x180083050 (-Initialize@CAnimatedGlassSheet@@MEAAJQEAUMIL_CHANNEL__@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CCanvas@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001F8D0 (-Initialize@CCanvas@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 */

__int64 __fastcall CAtlasedRectsVisual::Initialize(CAtlasedRectsVisual *this, struct MIL_CHANNEL__ *const a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CCanvas::Initialize(this, a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x37u);
  return v3;
}
