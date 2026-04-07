/*
 * XREFs of ?Initialize@CAtlasedRectsVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001DC00
 * Callers:
 *     ?Initialize@CButton@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001C310 (-Initialize@CButton@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180038330 (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x1800837E0 (-Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 * Callees:
 *     ?Initialize@CCanvas@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001C6D0 (-Initialize@CCanvas@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAtlasedRectsVisual::Initialize(CAtlasedRectsVisual *this, struct IDwmChannel *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CCanvas::Initialize(this, a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x37u);
  return v3;
}
